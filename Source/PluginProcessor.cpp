/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NewProjectAudioProcessor::NewProjectAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", juce::AudioChannelSet::stereo(), true)
                     #endif
                       )

, valueTreeState(*this,&undoManager)

, parameters(valueTreeState)
,mStepPos(0)
,stepperWave(valueTreeState)

//,urls(valueTreeState)
#endif

{
   
 
      
    
    parameters.createAllParameters();
    stepperWave.init();
   // urls.createAllParameters(); 

   // stepperWave.InitPatternSteps(0,1,3);
    valueTreeState.state = ValueTree(Identifier(JucePlugin_Name));

    ApVst = true;//----->AppMode if true Vst Mode



    meterOut = 0;
    mPrev = 0;
    bin = new binaryFiles();
 
    buff1=new double[SP_BUFFERS];
    
    bin2 = new binaryFiles();

    buff2=new double[SP_BUFFERS];
    
    bin3 = new binaryFiles();

    buff3=new double[SP_BUFFERS];
    
    bin4 = new binaryFiles();

    buff4=new double[SP_BUFFERS];


    bin5 = new binaryFiles();

    buff5 = new double[SP_BUFFERS];

    bin6 = new binaryFiles();

    buff6 = new double[SP_BUFFERS];

    bin7 = new binaryFiles();

    buff7 = new double[SP_BUFFERS];
    
    for(int i=0;i<SP_BUFFERS;i++)
    {
        buff1[i]=0;
        buff2[i]=0;
        buff3[i]=0;
        buff4[i]=0;
        buff5[i] = 0;
        buff6[i] = 0;
        buff7[i] = 0;
        
    }
    


    read1=new int[10];

    for(int i=0;i<10;i++)
    {


        read1[i]=0;
    }
    
    equalizer=new equ3_cModelClass();
    equalizer->initialize();
    limiter=new limiter_cModelClass();
    limiter->initialize();
    buffFx=new double[SP_BUFFERS];
    //btc=new bitcrush_c();
    compm.initialize();
    phaselfo = 0;

    steppers = new double * [16];
    for (int i = 0; i < 10; i++)
    {
        steppers[i] = new double[16];
        for (int n = 0; n < 16; n++)
        {
            steppers[i][n] = 0.5;
        }
    }
    midiCCupdate = 0;
  
}

NewProjectAudioProcessor::~NewProjectAudioProcessor()
{
}

//==============================================================================
const juce::String NewProjectAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool NewProjectAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool NewProjectAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool NewProjectAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double NewProjectAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int NewProjectAudioProcessor::getNumPrograms()
{
    return 10;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int NewProjectAudioProcessor::getCurrentProgram()
{
    return 0;
}

void NewProjectAudioProcessor::setCurrentProgram (int index)
{
   // read1[0] = index;
}

const juce::String NewProjectAudioProcessor::getProgramName (int index)
{
   
    return {};
}

void NewProjectAudioProcessor::changeProgramName (int index, const juce::String& newName)
{
 
}

//==============================================================================
void NewProjectAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..

    Ptime.prepare(getSampleRate(), getBlockSize());
    Ptime.timerChrono(parameters.EngineSelectValue);
    Ptime.tm1.Start();

    meterV.meterIn(0.0);
    sp1.reset();
    sp2.reset();
    sp3.reset();
    sp4.reset();
    sp5.reset();
    sp6.reset();
    sp7.reset();
  
    for(int i=0;i<SP_BUFFERS;i++)
    {
        buff1[i]=0;
        buff2[i]=0;
        buff3[i]=0;
        buff4[i]=0;
        buff5[i] = 0;
        buff6[i] = 0;
        buff7[i] = 0;
        buffFx[i]=0;
        
    }
   
}

void NewProjectAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
    Ptime.tm1.Zero();
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool NewProjectAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    juce::ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    // Some plugin hosts, such as certain GarageBand versions, will only
    // load plugins that support stereo bus layouts.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}

#endif
inline double fastClip(double x, double low, double high)
{
    double x1 = fabs(x - low);
    double x2 = fabs(x - high);
    x = x1 + low + high - x2;
    
    return x * 0.5;
}


void NewProjectAudioProcessor::mainModLfo() {
    
 
    
    if(parameters.mainLfoPitchAmValue>0.01)
    phaselfo=(Ptime.phaseLfos(sp1.oscillator.getSampleLfo()
                    ,sp2.oscillator.getSampleLfo()
                    ,sp3.oscillator.getSampleLfo()
                    ,sp4.oscillator.getSampleLfo())*parameters.mainLfoPitchAmValue);
    
   
    {
    
        if(sp1.mp.mEngineMode==true){sp1.oscillator.setLfoMainPitchSynth(1-phaselfo);}
        if(sp1.mp.mEngineMode==false){sp1.mp.mMainSamplePitchMod= 1-phaselfo*1;}
        if(sp2.mp.mEngineMode==true){sp2.oscillator.setLfoMainPitchSynth(1-phaselfo);}
        if(sp2.mp.mEngineMode==false){sp2.mp.mMainSamplePitchMod= 1-phaselfo;}
        if(sp3.mp.mEngineMode==true){sp3.oscillator.setLfoMainPitchSynth(1-phaselfo);}
        if(sp3.mp.mEngineMode==false){sp3.mp.mMainSamplePitchMod= 1-phaselfo;}
        if(sp4.mp.mEngineMode==true){sp4.oscillator.setLfoMainPitchSynth(1-phaselfo);}
        if(sp4.mp.mEngineMode==false){sp4.mp.mMainSamplePitchMod= 1-phaselfo;}
        if (sp5.mp.mEngineMode == true) { sp5.oscillator.setLfoMainPitchSynth(1-phaselfo); }
        if (sp5.mp.mEngineMode == false) { sp5.mp.mMainSamplePitchMod = 1 - phaselfo; }
        if (sp6.mp.mEngineMode == true) { sp6.oscillator.setLfoMainPitchSynth(1-phaselfo); }
        if (sp6.mp.mEngineMode == false) { sp6.mp.mMainSamplePitchMod = 1 - phaselfo; }
        if (sp7.mp.mEngineMode == true) { sp7.oscillator.setLfoMainPitchSynth(1-phaselfo); }
        if (sp7.mp.mEngineMode == false) { sp7.mp.mMainSamplePitchMod = 1 - phaselfo; }
        
    
    }
     


    
   
}

void NewProjectAudioProcessor::loadAudioFile(File fileAudio, int m)
{
   
    loadSample(m);
}



void NewProjectAudioProcessor::loadSampler1InitSet(int n)
{
    if(n>0)
    urls.loadInit1(valueTreeState, n);
    loadAudioFile(urls.getUrl1V()[sp1.mp.mSampleN].toString(), 0);

}

void NewProjectAudioProcessor::loadSampler2InitSet(int n)
{
    if (n > 0)
    urls.loadInit2(valueTreeState, n);
    loadAudioFile(urls.getUrl2V()[sp2.mp.mSampleN].toString(), 1);
   
}

void NewProjectAudioProcessor::loadSampler3InitSet(int n)
{
    if (n > 0)
    urls.loadInit3(valueTreeState, n);
    loadAudioFile(urls.getUrl3V()[sp3.mp.mSampleN].toString(), 2);
 
}

void NewProjectAudioProcessor::loadSampler4InitSet(int n)
{
    if (n > 0)
    urls.loadInit4(valueTreeState, n);
    loadAudioFile(urls.getUrl4V()[sp4.mp.mSampleN].toString(), 3);
   
   
}

void NewProjectAudioProcessor::loadSampler5InitSet(int n)
{
    
    if (n > 0)
        urls.loadInit5(valueTreeState, n);
    loadAudioFile(urls.getUrl5V()[sp5.mp.mSampleN].toString(), 4);
    
}

void NewProjectAudioProcessor::loadSampler6InitSet(int n)
{
    
    if (n > 0)
        urls.loadInit6(valueTreeState, n);
    loadAudioFile(urls.getUrl6V()[sp6.mp.mSampleN].toString(), 5);
    
}

void NewProjectAudioProcessor::loadSampler7InitSet(int n)
{
    
    if (n > 0)
        urls.loadInit7(valueTreeState, n);
    loadAudioFile(urls.getUrl7V()[sp7.mp.mSampleN].toString(), 6);
    
}




void NewProjectAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    double peakL = 0;
    double peakR = 0;

    juce::ScopedNoDenormals noDenormals;
    
    if (setMidiCC(parameters.midiCCmodus.getIndex() ==1)) {
        midiCC_(midiMessages);
    }
   
  
     ignoreUnused(midiMessages);
     updateCurrentTimeInfoFromHost();

     auto totalNumInputChannels  = getTotalNumInputChannels();
     auto totalNumOutputChannels = getTotalNumOutputChannels();
     int nFrames=buffer.getNumSamples();
    
      Ptime.processTimeHost(getPlayHead(), buffer.getNumSamples(), parameters.EngineSelectValue);
   
      Ptime.timerChrono(parameters.EngineSelectValue);
      Ptime.prosessTimeSampels(lastPosInfo.timeInSamples, nFrames);
      
if(parameters.TimerModeV.getIndex()>0 && lastPosInfo.isPlaying==ApVst)
    
{
    
  
     mainModLfo();
    stepFunkt1.mStepper(sp1,Ptime.getHtime1());
    sp1.processOut(Ptime.getHtime1(),buff1,nFrames);
    stepFunkt2.mStepper(sp2, Ptime.getHtime2());
    sp2.processOut(Ptime.getHtime2(),buff2,nFrames);
    sp3.processOut(Ptime.getHtime3(),buff3,nFrames);
    stepFunkt3.mStepper(sp3, Ptime.getHtime3());
    sp4.processOut(Ptime.getHtime4(),buff4,nFrames);
    stepFunkt4.mStepper(sp4, Ptime.getHtime4());
    sp5.processOut(Ptime.getHtime5(), buff5, nFrames);
    stepFunkt5.mStepper(sp5, Ptime.getHtime5());
    sp6.processOut(Ptime.getHtime6(), buff6, nFrames);
    stepFunkt6.mStepper(sp6, Ptime.getHtime6());
    sp7.processOut(Ptime.getHtime7(), buff7, nFrames);
    stepFunkt7.mStepper(sp7, Ptime.getHtime7());
    
    for (int so = 0; so < nFrames; so++)
    {
       // compm.step(buff1[so] + buff2[so] + buff3[so] + buff4[so] + buff5[so] + buff6[so] + buff7[so], 0, 1, 4, 0.05, 0.25, 0.0, buffFx[so]);
      buffFx[so] = (buff1[so] + buff2[so] + buff3[so] + buff4[so]+ buff5[so] +buff6[so] +buff7[so] /**/);


    //  buffFx[so] = buff1[so];
      //read1[0]= buff2[so]*100;
        equalizer->step(buffFx[so], buffFx[so], read1);
       //btc->bitcrush(buffFx[so], buffFx[so], read1[8]);
        limiter->step(buffFx[so], buffFx[so]);

    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // This is here to avoid people getting screaming feedback
    // when they first compile a plugin, but obviously you don't need to keep
    // this code if your algorithm always overwrites all the output channels.
    
        
        for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
            //  buffer.clear (i, 0, buffer.getNumSamples());
           
            buffer.setSample(i, so, fastClip(buffFx[so], -1, 1));


        
       
    }
    peakL = fabs(*buffFx);
    const double METER_ATTACK = 0.6, METER_DECAY = 0.05;
    double xL = (peakL < mPrev ? METER_DECAY : METER_ATTACK);
    peakL = peakL * xL + mPrev * (1.0 - xL);
    mPrev = peakL;

    meterV.meterIn(mPrev);
    const int stpU = Ptime.getHtime1()[0];
    stpV.stepIn(stpU);

            
    
     }
        
else
    {
        memset(buff1,0,nFrames*sizeof(double));
        memset(buff2,0,nFrames*sizeof(double));
        memset(buff3,0,nFrames*sizeof(double));
        memset(buff4,0,nFrames*sizeof(double));
        memset(buff5, 0, nFrames * sizeof(double));
        memset(buff6, 0, nFrames * sizeof(double));
        memset(buff7, 0, nFrames * sizeof(double));
        memset(buffFx, 0, nFrames * sizeof(double));

        for(int c=0;c< totalNumOutputChannels;++c)
        buffer.clear (c, 0, buffer.getNumSamples());
      
    }
  



    
}
//==============================================================================
bool NewProjectAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

juce::AudioProcessorEditor* NewProjectAudioProcessor::createEditor()
{
   // return new NewProjectAudioProcessorEditor (*this, valueTreeState);
return new NewProjectAudioProcessorEditor (*this);
}

//==============================================================================
void NewProjectAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.

    auto state = valueTreeState.copyState();
    std::unique_ptr<XmlElement> xml (state.createXml());
    copyXmlToBinary (*xml, destData);
   // fPath.loadFileAsData(destData);

}

void NewProjectAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
   
    std::unique_ptr<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));

    if (xmlState.get() != nullptr)
        if (xmlState->hasTagName(valueTreeState.state.getType()))
           
        {
            valueTreeState.replaceState(ValueTree::fromXml(*xmlState));
            
       
          
              trupdate=true;

 

}
   

            // +xmlState.get()->getNumChildElements();
    
   
 
        
    const int uur1 = parameters.Sp1Wnr;
    const int uur2 = parameters.Sp2Wnr;
    const int uur3 = parameters.Sp3Wnr;
    const int uur4 = parameters.Sp4Wnr;
    const int uur5 = parameters.Sp5Wnr;
    const int uur6 = parameters.Sp6Wnr;
    const int uur7 = parameters.Sp7Wnr;
     

     urls.unserial(valueTreeState,0);





    loadAudioFile(urls.getUrl1V()[uur1].toString(), 0);
    loadAudioFile(urls.getUrl2V()[uur2].toString(), 1);
    loadAudioFile(urls.getUrl3V()[uur3].toString(), 2);
    loadAudioFile(urls.getUrl4V()[uur4].toString(), 3);
    loadAudioFile(urls.getUrl5V()[uur5].toString(), 4);
    loadAudioFile(urls.getUrl6V()[uur6].toString(), 5);
    loadAudioFile(urls.getUrl7V()[uur7].toString(), 6);
   
    loadSample(0);
    loadSample(1);
    loadSample(2);
    loadSample(3);
    loadSample(4);
    loadSample(5);
    loadSample(6);


}

void NewProjectAudioProcessor::updateCurrentTimeInfoFromHost()
{
    if (auto* ph = getPlayHead())
    {
        AudioPlayHead::CurrentPositionInfo newTime;

        if (ph->getCurrentPosition(newTime))
        {
            lastPosInfo = newTime;  // Successfully got the current time from the host..
            return;
        }
    }

    // If the host fails to provide the current time, we'll just reset our copy to a default..
    lastPosInfo.resetToDefault();
}
double midiDataOut[60];
void NewProjectAudioProcessor::midiCC_(juce::MidiBuffer& midiMessages)
{
    MidiBuffer::Iterator MidiItr(midiMessages);

    MidiMessage MidiMsg; int smpPos;
    
    if (MidiItr.getNextEvent(MidiMsg, smpPos))
    {

        if (MidiMsg.isController()) {//---------------------------------------------------------------------check it is a controller change

         //---------------------------------Unused_midiparas::5-119: 
            if (MidiMsg.getControllerNumber() == 3)
            {   esp1.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
             
            midiCCupdate = 3;
            }

            if (MidiMsg.getControllerNumber() == 5)
            {  esp2.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
            midiCCupdate = 5;
            }

            if (MidiMsg.getControllerNumber() == 9)
            {
                esp3.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 9;
            }
            if (MidiMsg.getControllerNumber() == 14)
            {
                esp4.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 14;
            }
            if (MidiMsg.getControllerNumber() == 15)
            {
                esp5.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 15;
            }
            if (MidiMsg.getControllerNumber() == 20)
            {
                esp6.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 20;
            }
            if (MidiMsg.getControllerNumber() == 21)
            {
                esp7.SampelVolume.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 21;
            }
            //------------------------------------------wavenRS-------------
            if (MidiMsg.getControllerNumber() == 85)
            {
                esp1.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71);
                midiCCupdate = 85;
              
            }
            if (MidiMsg.getControllerNumber() == 86)
            {
                esp2.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71);
                midiCCupdate = 86;
            }
            if (MidiMsg.getControllerNumber() == 87)
            {
                esp3.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71);
                midiCCupdate = 87;
            }
            if (MidiMsg.getControllerNumber() == 88)
            {
                esp4.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71);
                midiCCupdate = 88;
            }

            if (MidiMsg.getControllerNumber() == 89)
            {
                esp5.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71);
                midiCCupdate = 89;
            }
            if (MidiMsg.getControllerNumber() == 90)
            {
                esp6.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71.0);
                midiCCupdate = 90;
            }
            if (MidiMsg.getControllerNumber() == 102)
            {
                esp7.SampelN1.setValue((((int)MidiMsg.getControllerValue()) / 127.0f)*71.0);
                midiCCupdate = 102;
            }
            //------------------------------------------wavepITCH-------------

        
            if (MidiMsg.getControllerNumber() == 104)
            {
                esp1.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 104;
            }
            if (MidiMsg.getControllerNumber() == 105)
            {
                esp2.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 105;
            }
            if (MidiMsg.getControllerNumber() == 106)
            {
                esp3.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 106;
            }
            if (MidiMsg.getControllerNumber() == 107)
            {
                esp4.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 107;
            }
            if (MidiMsg.getControllerNumber() == 108)
            {
                esp5.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 108;

            }
            if (MidiMsg.getControllerNumber() == 118)
            {
                esp6.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 118;
            }
            if (MidiMsg.getControllerNumber() == 121)
            {
                esp7.SampelPitch.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 121;
            }
            if (MidiMsg.getControllerNumber() == 23)
            {
                esp1.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 23;
            }
            if (MidiMsg.getControllerNumber() == 24)
            {
                esp2.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 24;
            }
            if (MidiMsg.getControllerNumber() == 25)
            {
                esp3.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 25;
            }
            if (MidiMsg.getControllerNumber() == 26)
            {
                esp4.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 26;
            }
            if (MidiMsg.getControllerNumber() == 27)
            {
                esp5.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 27;
            }
            if (MidiMsg.getControllerNumber() == 28)
            {
                esp6.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 28;
            }
            if (MidiMsg.getControllerNumber() == 29)
            {
                esp7.DelayTime.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 29;
            }
            if (MidiMsg.getControllerNumber() == 119)
            {
          
              mainp.mainPitchSlider.setValue((((float)MidiMsg.getControllerValue()) / 127.0f)+0.6);
              midiCCupdate = 119;
            }
            if (MidiMsg.getControllerNumber() == 103)
            {

                mainp.mainDelaySlider.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 103;
            }
            if (MidiMsg.getControllerNumber() == 30)
            {

                mainp.mainVolSlider.setValue((((float)MidiMsg.getControllerValue()) / 127.0f));
                midiCCupdate = 30;
            }
        }
        else
        midiCCupdate = 0;
       
       
    
    }
  
       
    
       

}



//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new NewProjectAudioProcessor();
}
