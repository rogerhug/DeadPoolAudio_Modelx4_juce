/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include"mainfunktions.h"
#include"sequencer.h"
#include"PluginParameters.h"
#include"EngineUi.h"
#include"Eutils.h"
#include"TimerSq.h"


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
        parameters.detachControls();
     
    }
 

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void filenameComponentChanged (FilenameComponent* fileComponentThatHasChanged) override
    {
        const int p1 =esp1.SampelN1.getValue();
        const int p2 =esp2.SampelN1.getValue();
        const int p3 =esp3.SampelN1.getValue();
        const int p4 =esp4.SampelN1.getValue();
        
        auto*f= fileComp.get();
        strcpy(dbt,f->getRecentlyUsedFilenames()[0].getCharPointer());;
        
        audioProcessor.loadAudioFile(f->getLocationToBrowse(),CurrentEngine);
        if(CurrentEngine==0){
            esp1.SampleFileLabel.setText (audioProcessor.urls.getUrl1V()[p1].toString(),juce::dontSendNotification);
        }
        
        if(CurrentEngine==1){
            esp2.SampleFileLabel.setText (audioProcessor.urls.getUrl2V()[p2].toString(),juce::dontSendNotification);
        }
        if(CurrentEngine==2){
            esp3.SampleFileLabel.setText (audioProcessor.urls.getUrl3V()[p3].toString(),juce::dontSendNotification);
        }
        if(CurrentEngine==3){
            esp4.SampleFileLabel.setText (audioProcessor.urls.getUrl4V()[p4].toString(),juce::dontSendNotification);
        }
        
    }
   
    void hideControlMain(int i)
    {
        
      if(i==0){ esp1.setVisible(true);
                esp2.setVisible(false);
                esp3.setVisible(false);
                esp4.setVisible(false);
                 }
       if(i==1){ esp1.setVisible(false);
                 esp2.setVisible(true);
                 esp3.setVisible(false);
                 esp4.setVisible(false);
                 }
        if(i==2){ esp1.setVisible(false);
                  esp2.setVisible(false);
                  esp3.setVisible(true);
                  esp4.setVisible(false);
                 }
        if(i==3){ esp1.setVisible(false);
                  esp2.setVisible(false);
                  esp3.setVisible(false);
                  esp4.setVisible(true);
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

    
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NewProjectAudioProcessor& audioProcessor;

    PluginParameters& parameters;

    std::unique_ptr<juce::FilenameComponent> fileComp;
    TimerSq time;
    int triggerpattern;
     mainfunktions mainp;
    int CurrentEngine;
    int bank_T_W;
    int EqMode_T;
    int BitCrMode_T;
    int LimiterMode_T;
    int mainLfoMode_T;
    int espWsize_T[5];

     sequencer sq1;
     sequencer sq2;
     sequencer sq3;
     sequencer sq4;
     int editsq = 0;
    EngineComponent esp1;
    EngineComponent esp2;
    EngineComponent esp3;
    EngineComponent esp4;

    HyperlinkButton dlContent;


   Label SampleFileLabel;
   Label SysthemInfoLabel;
   char dbt[200]={"-"};
   char dbtx[200]={"-"};

    void timerCallback() override;
    TextButton undoButton, redoButton;
    TextButton ArButton;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessorEditor)
};
