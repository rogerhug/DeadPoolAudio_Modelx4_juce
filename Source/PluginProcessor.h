/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once
#include <pluginterfaces/vst/ivstcomponent.h>
#include <public.sdk/source/common/memorystream.h>

#include <JuceHeader.h>
#include"timeLines.h"
#include"../binaryFiles/audioUrlFiles.h"
#include"mainfunktions.h"
#include"mainMix.h"
#include"PluginParameters.h"
#include"../binaryFiles/binary.h"
#include"EngineUi.h"
#include"playSampelFile.h"
#include"../DspEqualizer/equ3_c.h"
#include"../Limiter/limiter_c.h"
#include"../Limiter/compressor_c.h"
#include"stepperfunktions.h"
//#include"../bitcrush/bitcrush.h"

#include"UVmeter.h"



#define SP_BUFFERS 2048
//==============================================================================
/**
*/
class NewProjectAudioProcessor  : public juce::AudioProcessor
   
{
public:
    //==============================================================================
    NewProjectAudioProcessor();
    ~NewProjectAudioProcessor() override;

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif
  

    double mainPitchModTemp;

    
    void mainModLfo();
    void loadAudioFile(File fileAudio, int m);

    int wavesize[8] = { 0,0,0,0,0,0,0 };
    void setWSize(int *w,int e) {
        memcpy(wavesize, w, 8 * sizeof(int));
       
       
        if (e == 0) { sp1.resetCounts(bin->setSampelFix(wavesize[0])); }
        if (e == 1) { sp2.resetCounts(bin2->setSampelFix(wavesize[1])); }
        if (e == 2) { sp3.resetCounts(bin3->setSampelFix(wavesize[2])); }
        if (e == 3) { sp4.resetCounts(bin4->setSampelFix(wavesize[3])); }
        
        if (e == 4) { sp5.resetCounts(bin5->setSampelFix(wavesize[4])); }
        if (e == 5) { sp6.resetCounts(bin6->setSampelFix(wavesize[5])); }
        if (e == 6) { sp7.resetCounts(bin7->setSampelFix(wavesize[6])); }
         loadSample(e);
    
    } 
    void loadSample(int e)
    {
        
        if (e == 0) {
           
   
          bin->loadWaveFile(urls.getUrl1V()[sp1.mp.mSampleN].getValue().toString().getCharPointer(), 1);
          memcpy(sp1.mAudioToResample2, bin->getSample(), bin->setSampelFix(wavesize[0]) * sizeof(double));
          sp1.loadfile(bin->setSampelFix(wavesize[0]),bin->getNumberChannel());
         // read1[0] = bin->setSampelFix(wavesize[0]);
          
        }
        
        if(e==1){
        
            bin2->loadWaveFile(urls.getUrl2V()[sp2.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp2.mAudioToResample2, bin2->getSample(), bin2->setSampelFix(wavesize[1]) *sizeof(double));
            sp2.loadfile(bin2->setSampelFix(wavesize[1]),  bin2->getNumberChannel());
             
            
        }
        if(e==2){
        
            bin3->loadWaveFile(urls.getUrl3V()[sp3.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp3.mAudioToResample2, bin3->getSample(), bin3->setSampelFix(wavesize[2]) *sizeof(double));
            sp3.loadfile(bin3->setSampelFix(wavesize[2]), bin3->getNumberChannel());
            
            
        }
        if(e==3){
         
            bin4->loadWaveFile(urls.getUrl4V()[sp4.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp4.mAudioToResample2, bin4->getSample(), bin4->setSampelFix(wavesize[3]) *sizeof(double));
            sp4.loadfile(bin4->setSampelFix(wavesize[3]), bin4->getNumberChannel());
            
            
        }
        
        if (e == 4) {

            bin5->loadWaveFile(urls.getUrl5V()[sp5.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp5.mAudioToResample2, bin5->getSample(), bin5->setSampelFix(wavesize[4]) * sizeof(double));
            sp5.loadfile(bin5->setSampelFix(wavesize[4]), bin5->getNumberChannel());


        }
        if (e == 5) {

            bin6->loadWaveFile(urls.getUrl6V()[sp6.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp6.mAudioToResample2, bin6->getSample(), bin6->setSampelFix(wavesize[5]) * sizeof(double));
            sp6.loadfile(bin6->setSampelFix(wavesize[5]), bin6->getNumberChannel());


        }
        if (e == 6) {

            bin7->loadWaveFile(urls.getUrl7V()[sp7.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp7.mAudioToResample2, bin7->getSample(), bin7->setSampelFix(wavesize[6]) * sizeof(double));
            sp7.loadfile(bin7->setSampelFix(wavesize[6]), bin7->getNumberChannel());
           

        }
         
    }


    void loadSampler1InitSet(int n);//sampelset1
    void loadSampler2InitSet(int n);
    void loadSampler3InitSet(int n);
    void loadSampler4InitSet(int n);
    void loadSampler5InitSet(int n);
    void loadSampler6InitSet(int n);
    void loadSampler7InitSet(int n);



  


    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;





    //==============================================================================
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;

    //==============================================================================
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
 
    void updateCurrentTimeInfoFromHost();
    int setMidiCC(int i) { return i; }
    void midiCC_(juce::MidiBuffer&);
    String ps;
    mainfunktions mainp;
    mainMenuMix stepperWave;


    double meterOut;
    double mPrev;
   // bitcrush_c *btc;
    
    int *read1;
   
    
    timeLines Ptime;


    EngineComponent esp1;
    binaryFiles*bin;
    AudioSample sp1;
    stepperfunktions stepFunkt1;
    double*buff1;

    EngineComponent esp2;
    binaryFiles*bin2;
    AudioSample sp2;
    stepperfunktions stepFunkt2;
    double*buff2;

    
    EngineComponent esp3;
    binaryFiles*bin3;
    AudioSample sp3;
    stepperfunktions stepFunkt3;
    double*buff3;

    
    EngineComponent esp4;
    binaryFiles*bin4;
    AudioSample sp4;
    stepperfunktions stepFunkt4;
    double*buff4;

    EngineComponent esp5;
    binaryFiles* bin5;
    AudioSample sp5;
    stepperfunktions stepFunkt5;
    double* buff5;

    EngineComponent esp6;
    binaryFiles* bin6;
    stepperfunktions stepFunkt6;
    AudioSample sp6;
    double* buff6;

    EngineComponent esp7;
    binaryFiles* bin7;
    AudioSample sp7;
    stepperfunktions stepFunkt7;
    double* buff7;


    bool trupdate;
    int midiCCupdate;

   
    compressor_cModelClass compm;
    equ3_cModelClass*equalizer;
    double *buffFx;
    limiter_cModelClass*limiter;
    

    double phaselfo;

    double** steppers;
    UndoManager undoManager;
    AudioProcessorValueTreeState valueTreeState;
 
    UVmeter meterV;
    Stepmeter stpV;

    int midiNumber;
    PluginParameters parameters;
     PluginWaves urls;
    AudioPlayHead::CurrentPositionInfo lastPosInfo;
   
   
private:
    bool ApVst;
    std::atomic<int> mStepPos;
   
   
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessor)
};
