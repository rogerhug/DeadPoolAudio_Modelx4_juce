/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include"mainMix.h"
#include"sequencer.h"
#include"PluginParameters.h"
#include"EngineUi.h"
#include"Eutils.h"

#include"../binaryFiles/audioUrlFiles.h"


//==============================================================================
/**
*/
class NewProjectAudioProcessorEditor  : public AudioProcessorEditor
                                        ,private FilenameComponentListener
                                        ,private Button::Listener
                                        ,public Label::Listener
                                        ,private Timer

{
public:
    NewProjectAudioProcessorEditor (NewProjectAudioProcessor& p);
    ~NewProjectAudioProcessorEditor()
    {
       // parameters.detachControls();
     
    }
 

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    void filenameComponentChanged (FilenameComponent* fileComponentThatHasChanged) override
    {
        const int p1 =audioProcessor.esp1.SampelN1.getValue();
        const int p2 = audioProcessor.esp2.SampelN1.getValue();
        const int p3 =audioProcessor.esp3.SampelN1.getValue();
        const int p4 =audioProcessor.esp4.SampelN1.getValue();
        const int p5 = audioProcessor.esp5.SampelN1.getValue();
        const int p6 = audioProcessor.esp6.SampelN1.getValue();
        const int p7 = audioProcessor.esp7.SampelN1.getValue();
        
       
        auto*f= fileComp.get();
        strcpy(dbt,f->getRecentlyUsedFilenames()[0].getCharPointer());;
        
        audioProcessor.loadAudioFile(f->getLocationToBrowse(),CurrentEngine);
        if(CurrentEngine==0){
          audioProcessor.urls.serial1(audioProcessor.valueTreeState, f->getLocationToBrowse(), p1);
            audioProcessor.esp1.SampleFileLabel.setText (audioProcessor.urls.getUrl1V()[p1].toString(),juce::dontSendNotification);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 0);
            
        }
        
        if(CurrentEngine==1){
            audioProcessor.urls.serial2(audioProcessor.valueTreeState, f->getLocationToBrowse(), p2);
           audioProcessor.esp2.SampleFileLabel.setText (audioProcessor.urls.getUrl2V()[p2].toString(),juce::dontSendNotification);
           audioProcessor.loadAudioFile(f->getLocationToBrowse(), 1);
        }
        if(CurrentEngine==2){
            audioProcessor.esp3.SampleFileLabel.setText (audioProcessor.urls.getUrl3V()[p3].toString(),juce::dontSendNotification);
            audioProcessor.urls.serial3(audioProcessor.valueTreeState, f->getLocationToBrowse(), p3);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 2);
        }
        if(CurrentEngine==3){
            audioProcessor.urls.serial4(audioProcessor.valueTreeState, f->getLocationToBrowse(), p4);
            audioProcessor.esp4.SampleFileLabel.setText (audioProcessor.urls.getUrl4V()[p4].toString(),juce::dontSendNotification);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 3);
        }
        
        if (CurrentEngine == 4) {
            audioProcessor.urls.serial5(audioProcessor.valueTreeState, f->getLocationToBrowse(), p5);
            audioProcessor.esp5.SampleFileLabel.setText(audioProcessor.urls.getUrl5V()[p5].toString(), juce::dontSendNotification);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 4);
        }
        if (CurrentEngine == 5) {
            audioProcessor.urls.serial6(audioProcessor.valueTreeState, f->getLocationToBrowse(), p6);
            audioProcessor.esp6.SampleFileLabel.setText(audioProcessor.urls.getUrl6V()[p6].toString(), juce::dontSendNotification);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 5);
        }
        if (CurrentEngine == 6) {
            audioProcessor.urls.serial7(audioProcessor.valueTreeState, f->getLocationToBrowse(), p7);
            audioProcessor.esp7.SampleFileLabel.setText(audioProcessor.urls.getUrl7V()[p7].toString(), juce::dontSendNotification);
            audioProcessor.loadAudioFile(f->getLocationToBrowse(), 6);
        }
        
    }
   
    void hideControlMain(int i)
    {
        
      if(i==0){ audioProcessor.esp1.setVisible(true);
               audioProcessor.esp2.setVisible(false);
                audioProcessor.esp3.setVisible(false);
                audioProcessor.esp4.setVisible(false);
                audioProcessor.esp5.setVisible(false);
                audioProcessor.esp6.setVisible(false);
                audioProcessor.esp7.setVisible(false);
                 }
       if(i==1){ audioProcessor.esp1.setVisible(false);
                audioProcessor.esp2.setVisible(true);
                 audioProcessor.esp3.setVisible(false);
                 audioProcessor.esp4.setVisible(false);
                 audioProcessor.esp5.setVisible(false);
                 audioProcessor.esp6.setVisible(false);
                 audioProcessor.esp7.setVisible(false);
                 }
        if(i==2){ audioProcessor.esp1.setVisible(false);
                 audioProcessor.esp2.setVisible(false);
                  audioProcessor.esp3.setVisible(true);
                  audioProcessor.esp4.setVisible(false);
                  audioProcessor.esp5.setVisible(false);
                  audioProcessor.esp6.setVisible(false);
                  audioProcessor.esp7.setVisible(false);
                 }
        if(i==3){ audioProcessor.esp1.setVisible(false);
                 audioProcessor.esp2.setVisible(false);
                  audioProcessor.esp3.setVisible(false);
                  audioProcessor.esp4.setVisible(true);
                  audioProcessor.esp5.setVisible(false);
                  audioProcessor.esp6.setVisible(false);
                  audioProcessor.esp7.setVisible(false);
        }
        if (i == 4) {
            audioProcessor.esp1.setVisible(false);
           audioProcessor.esp2.setVisible(false);
            audioProcessor.esp3.setVisible(false);
            audioProcessor.esp4.setVisible(false);
            audioProcessor.esp5.setVisible(true);
            audioProcessor.esp6.setVisible(false);
            audioProcessor.esp7.setVisible(false);
        }
        if (i == 5) {
            audioProcessor.esp1.setVisible(false);
           audioProcessor.esp2.setVisible(false);
            audioProcessor.esp3.setVisible(false);
            audioProcessor.esp4.setVisible(false);
            audioProcessor.esp5.setVisible(false);
            audioProcessor.esp6.setVisible(true);
            audioProcessor.esp7.setVisible(false);
        }
        if (i == 6) {
            audioProcessor.esp1.setVisible(false);
           audioProcessor.esp2.setVisible(false);
            audioProcessor.esp3.setVisible(false);
            audioProcessor.esp4.setVisible(false);
            audioProcessor.esp5.setVisible(false);
            audioProcessor.esp6.setVisible(false);
            audioProcessor.esp7.setVisible(true);
        }
        
       
    }
    /*
    void initialise (const String& commandLine)
    {
        splash = new SplashScreen ("Welcome to my app!",
                                   ImageFileFormat::loadFrom (File ("/foobar/splash.jpg")),
                                   true);
        
        // now kick off your initialisation work on some kind of thread or task, and
        launchBackgroundInitialisationThread();
    }
     */
    void labelTextChanged (Label *labelThatHasChanged) override;
    void buttonClicked(Button* b) override;
    void updateTriggerParas();
    void updateSampleParas();
    void updateMidiCCParas();
    double meterLevel() { return audioProcessor.meterOut; }
 
 
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NewProjectAudioProcessor& audioProcessor;

    PluginParameters& parameters;
   // PluginWaves& urls;
  
    std::unique_ptr<juce::FilenameComponent> fileComp;

    int triggerpattern;
  
     mainMenu MasterMenu;
   //  mainMenuMix stepperWave;
    int CurrentEngine;
    int bank_T_W;
    int EqMode_T;
    int BitCrMode_T;
    int LimiterMode_T;
    int mainLfoMode_T;
    int espWsize_T[8];
    bool engineSwitch[11];
    bool enginePatternState[11];

    int stateW;

     sequencer sq1;
     sequencer sq2;
     sequencer sq3;
     sequencer sq4;
     sequencer sq5;
     sequencer sq6;
     sequencer sq7;

     int editsq = 0;





    HyperlinkButton dlContent;
    bool link;

 

   Label SampleFileLabel;
   Label SysthemInfoLabel;
   char dbt[200]={"-"};
   char dbtx[200]={"-"};

    void timerCallback() override;
    TextButton undoButton, redoButton;
    TextButton ArButton;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessorEditor)
};
