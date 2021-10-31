/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include"../binaryFiles/audioUrlFiles.h"
#include"triggerValues.h"
#include"PluginParameters.h"
#include"../binaryFiles/binary.h"
#include"playSampelFile.h"
#include"TimerSq.h"
#include"../DspEqualizer/equ3_c.h"
#include"../Limiter/limiter_c.h"
#include"../Limiter/compressor_c.h"
#include"../bitcrush/bitcrush.h"


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

    int wavesize[5] = { 0,0,0,0,0 };
    void setWSize(int *w,int e) {
        memcpy(wavesize, w, 5 * sizeof(int));
       
        loadSample(e);
        if (e == 0) { sp1.resetCounts(bin->setSampelFix(wavesize[0])); }
        if (e == 1) { sp2.resetCounts(bin2->setSampelFix(wavesize[1])); }
        if (e == 2) { sp3.resetCounts(bin3->setSampelFix(wavesize[2])); }
        if (e == 3) { sp4.resetCounts(bin4->setSampelFix(wavesize[3])); }
    
    } 
    void loadSample(int e)
    {
        
        if (e == 0) {
           
   
          bin->loadWaveFile(urls.getUrl1V()[sp1.mp.mSampleN].getValue().toString().getCharPointer(), 1);
          memcpy(sp1.mAudioToResample2, bin->getSample(), bin->setSampelFix(wavesize[0]) * sizeof(double));
          sp1.loadfile(bin->setSampelFix(wavesize[0]));
     
          
        }
        
        if(e==1){
        
            bin2->loadWaveFile(urls.getUrl2V()[sp2.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp2.mAudioToResample2, bin2->getSample(), bin2->setSampelFix(wavesize[1]) *sizeof(double));
            sp2.loadfile(bin2->setSampelFix(wavesize[1]));
             
            
        }
        if(e==2){
        
            bin3->loadWaveFile(urls.getUrl3V()[sp3.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp3.mAudioToResample2, bin3->getSample(), bin3->setSampelFix(wavesize[2]) *sizeof(double));
            sp3.loadfile(bin3->setSampelFix(wavesize[2]));
            
            
        }
        if(e==3){
         
            bin4->loadWaveFile(urls.getUrl4V()[sp4.mp.mSampleN].getValue().toString().getCharPointer(), 1);
            memcpy(sp4.mAudioToResample2, bin4->getSample(), bin4->setSampelFix(wavesize[3]) *sizeof(double));
            sp4.loadfile(bin4->setSampelFix(wavesize[3]));
            
            
        }
         
    }


    void loadSampler1InitSet(int n);//sampelset1
    void loadSampler2InitSet(int n);
    void loadSampler3InitSet(int n);
    void loadSampler4InitSet(int n);


    void loadInit1Triggers();// trigger dubset
    void loadInit2Triggers();// trigger tekset
    void loadInit3Triggers();// trigger breaks


    void resetPatternSt(int m) {
        if (m == 0) { trs.resetProgramm(valueTreeState, sp1, 0); }
        if (m == 1) { trs.resetProgramm(valueTreeState, sp2, 1); }
        if (m == 2) { trs.resetProgramm(valueTreeState, sp3, 2); }
        if (m == 3) { trs.resetProgramm(valueTreeState, sp4, 3); }
    }


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
 
    

    void updateCurrentTimeInfoFromHost()
    {
        if (auto* ph = getPlayHead())
        {
            AudioPlayHead::CurrentPositionInfo newTime;
            
            if (ph->getCurrentPosition (newTime))
            {
                lastPosInfo = newTime;  // Successfully got the current time from the host..
                return;
            }
        }
        
        // If the host fails to provide the current time, we'll just reset our copy to a default..
        lastPosInfo.resetToDefault();
      
    }
  
  
    PluginWaves urls;
    PluginTriggers trs;


    bitcrush_c *btc;
    
    int *read1;
    int Rtimebpm;
    

    TimerSq *Rtime;


    binaryFiles*bin;
    AudioSample sp1;
    double*buff1;

    binaryFiles*bin2;
    AudioSample sp2;
    double*buff2;

    

    binaryFiles*bin3;
    AudioSample sp3;
    double*buff3;

    
    
    binaryFiles*bin4;
    AudioSample sp4;
    double*buff4;


    bool trupdate;

   
    compressor_cModelClass compm;
    equ3_cModelClass*equalizer;
    double *buffFx;
    limiter_cModelClass*limiter;
    

    double phaselfo;
    double phaselfoD ;
    double phaselfoC ;
    
    UndoManager undoManager;
    AudioProcessorValueTreeState valueTreeState;
 
    


    PluginParameters parameters;
    AudioPlayHead::CurrentPositionInfo lastPosInfo;
    
   
private:
    bool ApVst;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessor)
};
