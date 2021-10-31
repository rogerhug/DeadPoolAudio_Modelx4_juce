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


#endif

{

    parameters.createAllParameters();

  //  urls.createAllParameters(valueTreeState); // works with Vst3 reaper
  //  trs.createAllParameters(valueTreeState);
  //  trs.createAllParametersTSP(valueTreeState);
  //  loadInit1Triggers();
    valueTreeState.state = ValueTree(Identifier(JucePlugin_Name));

    ApVst = false;//----->AppMode if true Vst Mode

    Rtime=new TimerSq();

  
   
    bin = new binaryFiles();
 
    buff1=new double[SP_BUFFERS];
    
    bin2 = new binaryFiles();

    buff2=new double[SP_BUFFERS];
    
    bin3 = new binaryFiles();

    buff3=new double[SP_BUFFERS];
    
    bin4 = new binaryFiles();

    buff4=new double[SP_BUFFERS];

    
    for(int i=0;i<SP_BUFFERS;i++)
    {
        buff1[i]=0;
        buff2[i]=0;
        buff3[i]=0;
        buff4[i]=0;
        
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
    btc=new bitcrush_c();
    compm.initialize();
    phaselfo = 0;
    phaselfoD = 0;
    phaselfoC = 0;
 
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
  
    sp1.reset();
    sp2.reset();
    sp3.reset();
    sp4.reset();
  
    for(int i=0;i<SP_BUFFERS;i++)
    {
        buff1[i]=0;
        buff2[i]=0;
        buff3[i]=0;
        buff4[i]=0;
        buffFx[i]=0;
        
    }
   
}

void NewProjectAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
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
inline int minmaxSPP(int a) {
    int result = 0; result = a;
    if (result > 23) { result = 23; }
    if (result < 0) { result = 0; }
    return result;
}

void NewProjectAudioProcessor::mainModLfo() {
    

    
    if(parameters.mainLfoPitchAmValue>0.01)
    phaselfo=(Rtime->mainLfoValue(sp1.oscillator.getSampleLfo()
                    ,sp2.oscillator.getSampleLfo()
                    ,sp3.oscillator.getSampleLfo()
                    ,sp4.oscillator.getSampleLfo())*parameters.mainLfoPitchAmValue);
    
   
    {
    
        if(sp1.mp.mEngineMode==true){sp1.oscillator.setLfoPitchSynth(phaselfo);}
        if(sp1.mp.mEngineMode==false){sp1.mp.mMainSamplePitchMod= 1-phaselfo;}
        if(sp2.mp.mEngineMode==true){sp2.oscillator.setLfoPitchSynth(phaselfo);}
        if(sp2.mp.mEngineMode==false){sp2.mp.mMainSamplePitchMod= 1-phaselfo;}
        if(sp3.mp.mEngineMode==true){sp3.oscillator.setLfoPitchSynth(phaselfo);}
        if(sp3.mp.mEngineMode==false){sp3.mp.mMainSamplePitchMod= 1-phaselfo;}
        if(sp4.mp.mEngineMode==true){sp4.oscillator.setLfoPitchSynth(phaselfo);}
        if(sp4.mp.mEngineMode==false){sp4.mp.mMainSamplePitchMod= 1-phaselfo;}

    
    }
     if(parameters.mainLfoDelayAmValue>0.01)
     { phaselfoD=(Rtime->mainLfoValue(sp1.oscillator.getSampleLfo()
                                     ,sp2.oscillator.getSampleLfo()
                                     ,sp3.oscillator.getSampleLfo()
                                     ,sp4.oscillator.getSampleLfo())*(parameters.mainLfoDelayAmValue));
         sp1.echo->setmainMixMod(phaselfoD,parameters.mainLfoDelayAmValue);
         sp2.echo->setmainMixMod(phaselfoD,parameters.mainLfoDelayAmValue);
         sp3.echo->setmainMixMod(phaselfoD,parameters.mainLfoDelayAmValue);
         sp4.echo->setmainMixMod(phaselfoD,parameters.mainLfoDelayAmValue);
 
     }


    
   
}

void NewProjectAudioProcessor::loadAudioFile(File fileAudio, int m)
{
    if (m == 0) { urls.serial1(valueTreeState, fileAudio, sp1.mp.mSampleN); }
    if (m == 1) { urls.serial2(valueTreeState, fileAudio, sp2.mp.mSampleN); }
    if (m == 2) { urls.serial3(valueTreeState, fileAudio, sp3.mp.mSampleN); }
    if (m == 3) { urls.serial4(valueTreeState, fileAudio, sp4.mp.mSampleN); }
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

void NewProjectAudioProcessor::loadInit1Triggers()
{
    trs.loadInit1(valueTreeState, 1);
    trs.unserial(valueTreeState);
   
}

void NewProjectAudioProcessor::loadInit2Triggers()
{
    trs.loadInit2(valueTreeState, 1);
    trs.unserial(valueTreeState);
   
}

void NewProjectAudioProcessor::loadInit3Triggers()
{
    trs.loadInit3(valueTreeState, 1);
    trs.unserial(valueTreeState);
    
}

void NewProjectAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    
    
    juce::ScopedNoDenormals noDenormals;

    ignoreUnused(midiMessages);
    updateCurrentTimeInfoFromHost();
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    int nFrames=buffer.getNumSamples();



 
if(parameters.TimerModeV.getIndex()>0 && lastPosInfo.isPlaying==ApVst)
    
{
       Rtime->timerHost(lastPosInfo.ppqPosition,lastPosInfo.timeInSeconds);
   
        mainModLfo();

    sp1.processOut(Rtime->timeSw1(parameters.TimerModeV.getIndex()),buff1,nFrames,read1);
    sp2.processOut(Rtime->timeSw2(parameters.TimerModeV.getIndex()),buff2,nFrames,read1);
    sp3.processOut(Rtime->timeSw3(parameters.TimerModeV.getIndex()),buff3,nFrames,read1);
    sp4.processOut(Rtime->timeSw4(parameters.TimerModeV.getIndex()),buff4,nFrames,read1);

    for (int so = 0; so < nFrames; so++)
    {
      //  compm.step(buff1[so] + buff2[so] + buff3[so] + buff4[so], 0, 1, 4, 0.05, 0.25, 0.0, buffFx[so]);
        buffFx[so] =fastClip(buff1[so] + buff2[so] + buff3[so] + buff4[so],-1,1);
        equalizer->step(buffFx[so], buffFx[so], read1);
        btc->bitcrush(buffFx[so], buffFx[so], read1[8]);
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
     }
        
else
    {
        memset(buff1,0,nFrames*sizeof(double));
        memset(buff2,0,nFrames*sizeof(double));
        memset(buff3,0,nFrames*sizeof(double));
        memset(buff4,0,nFrames*sizeof(double));
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
            urls.unserial(valueTreeState);
            trs.unserial(valueTreeState);
  
              trupdate=true;


        }
    
    loadAudioFile(urls.getUrl1V()[sp1.mp.mSampleN].toString(), 0);
    loadAudioFile(urls.getUrl2V()[sp2.mp.mSampleN].toString(), 1);
    loadAudioFile(urls.getUrl3V()[sp3.mp.mSampleN].toString(), 2);
    loadAudioFile(urls.getUrl4V()[sp4.mp.mSampleN].toString(), 3);

    Rtime->trigger1In(trs.tr1IntOut(parameters.TriggerSelectNumber10));
    Rtime->trigger2In(trs.tr2IntOut(parameters.TriggerSelectNumber10));
    Rtime->trigger3In(trs.tr3IntOut(parameters.TriggerSelectNumber10));
    Rtime->trigger4In(trs.tr4IntOut(parameters.TriggerSelectNumber10));
   


}



//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new NewProjectAudioProcessor();
}
