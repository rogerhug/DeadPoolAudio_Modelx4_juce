/*
  ==============================================================================

    mainMix.h
    Created: 1 Nov 2021 8:18:34pm
    Author:  r7

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include"Eutils.h"
#include"../synth/SynthWaveform.h"
//==============================================================================
/*
*/
#include"customLook.h"


class mainMenu  : public juce::Component
                , public CustomLookAndFeel
             
{ 
public:
    mainMenu();
    ~mainMenu() override;
    void init();
   
    void paint (juce::Graphics&) override;
    void resized() override;
    TextButton MainMenuButtons[5];
 
private:
    //NewProjectAudioProcessor& audioProcessor;
    void addLookAndFeel(juce::LookAndFeel* laf, const juce::String& name) { }
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (mainMenu)
};


class mainMenuMix : public juce::Component
                 , public CustomLookAndFeel
{
public:
    mainMenuMix();
    ~mainMenuMix() override;

    ComboBox MidiCCcombo;
    Label MidiCCLabel;
    Label MidiCCLabel1;
    Label MidiCCLabel2;
    Label MidiCCLabel3;
    Label MidiCCLabel4;
    Label MidiCCLabel5;
    Label MidiCCLabel6;
    Label MidiCCLabel7;

    Label MidiCCLabelM1;
    Label MidiCCLabelM2;
    Label MidiCCLabelM3;
    Label ut1;
    Label ut2;
    void setEngine(int e) { changeSampler = e; changeMode(e); }

    Label Stepper1Label;
    void init(AudioProcessorValueTreeState& valueTreeState);
   
    int colorsOn[16] = { 0,0,1,0,0,1,0,1,1,0,0,0,0,1,0 };
    void setPatternState(bool* s);
    bool* getPatternState() { return patternstate; }
    //*********************************************triggers colors********************************
    void setHideColors1(int* c, int s, int p);
    void setHideColors2(int* c, int s, int p);
    void setHideColors3(int* c, int s, int p);
    void setHideColors4(int*c,int s,int p);
    void setHideColors5(int* c, int s, int p);
    void setHideColors6(int* c, int s, int p);
    void setHideColors7(int* c, int s, int p);
    
    void changeStepperColor(int s,int p);

    //**********************************mode stepper***************************
     TextButton  StepperOut[5];
     char ecm[15] = { "" };
     const char* StepModeNames(int n, int e) { sprintf(ecm, "stepperMode%.1i%.1i", n, e);  return ecm; }
     const int *stepModeValue();
     void serialModeStepps(AudioProcessorValueTreeState& valueTreeState,int v,  int n);
     void unSerialModeStepps(AudioProcessorValueTreeState& valueTreeState, int s, int n);

     void changeMode(int s);

    //*******************************values stepper*****************************
    Slider StepperValueSliders[16];
    char ecv[15] = { "" };
    void InitPatternSteps(int e,int s,int m,bool*st,int p);
    void resetPatternSteps(int s);
    const char* StepValuesNames(int n,int e) { sprintf(ecv, "steppervalue%.2i%.1i", n,e);  return ecv; }
    double* stepValues(int e);
    void serialStepps(AudioProcessorValueTreeState& valueTreeState,double*v,int n,int p);
    void unSerialStepps(AudioProcessorValueTreeState& valueTreeState,int s,int n);
    double* steppVunSerial(int e);



    TextButton stepini1;
    TextButton stepini2;
    TextButton stepini3;
    TextButton stepini4;
    //************************************Mixer***********************************
     void hideMix(int n,bool* e);
     char* getCIn() { return crdIn; }
     char *getCOut() { return crd; }
    Slider MainMixVolumeSliders[8];
    Label MainMixerLabel;
    Slider MainMixPitchSynthSliders[8];
    Slider MainMixGateSliders[8];
    Slider MainMixDelayTimeSliders[8];
    Slider MainMixDelayFeedSliders[8];
    Slider MainMixVolumeAudioSliders[8];
    Slider MainMixWaveSliders[8];
    Slider MainMixPitchAudioSliders[8];
    ComboBox MainMixSynt1hWaveCombo;
    ComboBox MainMixSynt2hWaveCombo;
    ComboBox MainMixSynt3hWaveCombo;
    ComboBox MainMixSynt4hWaveCombo;
    ComboBox MainMixSynt5hWaveCombo;
    ComboBox MainMixSynt6hWaveCombo;
    ComboBox MainMixSynt7hWaveCombo;

    inline bool trueFalse(bool in)
    {
        if (in == true) { return false; }
        if (in == false) { return true; }
        else return false;
    }

    void MainMixerEngineHideControl(int s,bool *n)
    {
        if (n[10] == true) {
            MainMixVolumeAudioSliders[s].setVisible(trueFalse(n[s]));

            MainMixWaveSliders[s].setVisible(trueFalse(n[s]));
            MainMixPitchAudioSliders[s].setVisible(trueFalse(n[s]));
            MainMixPitchSynthSliders[s].setVisible((n[s]));
            
            MainMixSynt1hWaveCombo.setVisible((n[0]));
            MainMixSynt2hWaveCombo.setVisible((n[1]));
            MainMixSynt3hWaveCombo.setVisible((n[2]));
            MainMixSynt4hWaveCombo.setVisible((n[3]));
            MainMixSynt5hWaveCombo.setVisible((n[4]));
            MainMixSynt6hWaveCombo.setVisible((n[5]));
            MainMixSynt7hWaveCombo.setVisible((n[6]));
        }
  
    }

    
   //******************************************************************************
    //******************************init-> AudioFiles***********************************


    TextButton SpAudioSet1[5];
    int SpAudioSetValue();

    TextButton SpAudioSet2[5];
    int SpAudioSet2Value();

    TextButton SpAudioSet3[5];
    int SpAudioSet3Value();

    TextButton SpAudioSet4[5];
    int SpAudioSet4Value();

    TextButton SpAudioSet5[5];
    int SpAudioSet5Value();

    TextButton SpAudioSet6[5];
    int SpAudioSet6Value();

    TextButton SpAudioSet7[5];
    int SpAudioSet7Value();
    //----------------------------------------timers--------------------------------------
    ComboBox Sp1MixTime;
    void setSp1TimeCombo(int s) { Sp1MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp2MixTime;
    void setSp2TimeCombo(int s) { Sp2MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp3MixTime;
    void setSp3TimeCombo(int s) { Sp3MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp4MixTime;
    void setSp4TimeCombo(int s) { Sp4MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp5MixTime;
    void setSp5TimeCombo(int s) { Sp5MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp6MixTime;
    void setSp6TimeCombo(int s) { Sp6MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }
    ComboBox Sp7MixTime;
    void setSp7TimeCombo(int s) { Sp7MixTime.setSelectedItemIndex(s, juce::dontSendNotification); }


    //***************************************intit Triggers***********************************
    TextButton Highlight[3];
    Label hgl;
    int getHighlightValue();

    //****************************************************************************

    //********************************************************************************
private:
  
    int hideAudioSynth;
    int stepmod;
    bool patternstate[8];
    Value SteppValues[8][16];
    Value SteppModeValues[8];
    void addLookAndFeel(juce::LookAndFeel* laf, const juce::String& name) { }
    char*** initsteps;
    double* stepupini;
    double* stepDnini;
    double* stepsinini;
    int changepattern;
    int changeSampler;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(mainMenuMix)

     char crd[30];
    char crdIn[30];

   
};
