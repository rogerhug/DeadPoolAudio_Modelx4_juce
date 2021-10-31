/*
  ==============================================================================

    EngineUi.h
    Created: 17 May 2021 4:48:17pm
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

#include"customLook.h"
#include"Eutils.h"

//==============================================================================

class EngineComponent   : public Component,
                          public CustomLookAndFeel
{
    
public:
    
    enum RadioButtonIds
    {
        GenderButtons = 1001
    };
    EngineComponent()

    {
        
        auto* claf = new CustomLookAndFeel();
        addLookAndFeel (claf, "Custom Look And Feel");
        auto* fxlaf = new CustomLookAndFeel();
        addLookAndFeel (fxlaf, "Custom Look And Feel");
        auto* modlaf = new CustomLookAndFeel();
        addLookAndFeel (modlaf, "Custom Look And Feel");
      
        claf->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);
        fxlaf->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blueviolet);
        modlaf->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::goldenrod);

     //    startTimer(1000);
  
        for (int i = 0; i < 3; ++i) {
            addAndMakeVisible(WaveSizes[i]);
            WaveSizes[i].setClickingTogglesState(true);
            WaveSizes[i].setRadioGroupId(4223);
            WaveSizes[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            WaveSizes[i].setBounds(270 + i * 25, 20, 25, 24);
         
            if (i == 0)
                WaveSizes[i].setToggleState(true, juce::dontSendNotification);
            WaveSizes[i].setColour(juce::TextButton::buttonColourId, juce::Colours::green);

        }
        WaveSizes[0].setButtonText("s");
        WaveSizes[1].setButtonText("m");
        WaveSizes[2].setButtonText("x");

        
        addAndMakeVisible(EngineMenuButton);
        EngineMenuButton.setClickingTogglesState(true);
        EngineMenuButton.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        EngineMenuButton.setColour(juce::TextButton::buttonColourId, juce::Colours::silver);
        EngineMenuButton.setButtonText("OSC:WAV");
        EngineMenuButton.setToggleState(false, juce::dontSendNotification);
        EngineMenuButton.setLookAndFeel(claf);
        
        addAndMakeVisible(LfoModulationSampel);
       
        LfoModulationSampel.setClickingTogglesState(true);
        LfoModulationSampel.setColour(juce::TextButton::buttonColourId, juce::Colours::white);
        LfoModulationSampel.setColour(juce::TextButton::buttonOnColourId, juce::Colours::silver);
        LfoModulationSampel.setToggleState(false, juce::dontSendNotification);
        LfoModulationSampel.setButtonText("LFO:MOD->");
        LfoModulationSampel.setLookAndFeel(claf);
       
        SampelGate.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelGate.setPopupDisplayEnabled (true, false, this);
        SampelGate.setNumDecimalPlacesToDisplay(0);
        SampelGate.setTextValueSuffix ("Gate");
        SampelGate.setRange(0, 1, 0.1);
            
        SampelGate.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelGate);
        SampelGate.setLookAndFeel(claf);

        addAndMakeVisible (SampleFileLabel);
        SampleFileLabel.setText("wavefile is not open", juce::dontSendNotification);
        SampleFileLabel.setLookAndFeel(claf);
        
        SampelN1.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelN1.setPopupDisplayEnabled (true, false, this);
        SampelN1.setTextBoxIsEditable(true);
        SampelN1.setNumDecimalPlacesToDisplay(0);
        SampelN1.setTextValueSuffix ("Wav");
        SampelN1.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelN1);
        SampelN1.setLookAndFeel(claf);
        
        PatternState.setClickingTogglesState(true);
        PatternState.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        PatternState.setColour(juce::TextButton::buttonColourId, juce::Colours::silver);
        PatternState.setToggleState(true, juce::dontSendNotification);
        PatternState.setButtonText("patternState");
        addAndMakeVisible (PatternState);
        PatternState.setLookAndFeel(claf);

        PatternStReset.setClickingTogglesState(true);
        PatternStReset.setColour(juce::TextButton::buttonOnColourId, juce::Colours::red);
        PatternStReset.setToggleState(false, juce::dontSendNotification);
        PatternStReset.setButtonText("r");
        addAndMakeVisible(PatternStReset);
        PatternStReset.setLookAndFeel(claf);
        
        
        SampelPitch.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelPitch.setPopupDisplayEnabled (true, false, this);
        SampelPitch.setNumDecimalPlacesToDisplay(1);
     
        SampelPitch.setTextValueSuffix ("Frq");
        SampelPitch.setTextBoxStyle(juce::Slider::TextBoxRight, true, 60, 20);
        addAndMakeVisible (SampelPitch);
        SampelPitch.setLookAndFeel(claf);
        
        SampelPitchMod.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelPitchMod.setPopupDisplayEnabled (true, false, this);
        SampelPitchMod.setTextValueSuffix ("p+");
        SampelPitchMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        
        addAndMakeVisible (SampelPitchMod);
        SampelPitchMod.setLookAndFeel(modlaf);

        
        
        SampelStart.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelStart.setPopupDisplayEnabled (true, false, this);
        SampelStart.setNumDecimalPlacesToDisplay(0);
        SampelStart.setTextValueSuffix ("Sta");
        SampelStart.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelStart);
        SampelStart.setLookAndFeel(claf);
        
        SampelEnd.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelEnd.setPopupDisplayEnabled (true, false, this);
        SampelEnd.setNumDecimalPlacesToDisplay(1);
        SampelEnd.setTextValueSuffix ("End");
        SampelEnd.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelEnd);
        SampelEnd.setLookAndFeel(claf);
        
        SampelVolume.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelVolume.setPopupDisplayEnabled (true, false, this);
        SampelVolume.setNumDecimalPlacesToDisplay(0);
        SampelVolume.setTextValueSuffix ("Vol");
        SampelVolume.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelVolume);
        SampelVolume.setLookAndFeel(claf);
        
        SampelVolumeMod.setSliderStyle(juce::Slider::LinearHorizontal);
        SampelVolumeMod.setPopupDisplayEnabled (true, false, this);
        SampelVolumeMod.setTextValueSuffix ("v+");
        SampelVolumeMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (SampelVolumeMod);
        SampelVolumeMod.setLookAndFeel(modlaf);
        SampelVolumeMod.setVisible(false);
        
        SpAttack.setSliderStyle(juce::Slider::LinearHorizontal);
        SpAttack.setPopupDisplayEnabled (true, false, this);
        SpAttack.setNumDecimalPlacesToDisplay(0);
        SpAttack.setTextValueSuffix ("");
        SpAttack.setTextBoxStyle(juce::Slider::TextBoxRight, false, 40, 20);
        addAndMakeVisible (SpAttack);
        SpAttack.setLookAndFeel(claf);
        

        SpRelease.setSliderStyle(juce::Slider::LinearHorizontal);
        SpRelease.setPopupDisplayEnabled (true, false, this);
        SpRelease.setNumDecimalPlacesToDisplay(0);
        SpRelease.setTextValueSuffix ("");
        SpRelease.setTextBoxStyle(juce::Slider::TextBoxRight, false, 40, 20);
        addAndMakeVisible (SpRelease);
        SpRelease.setLookAndFeel(claf);
       

        
        EnvelopeMode.setButtonText("A       R");
        EnvelopeMode.setClickingTogglesState(true);
        EnvelopeMode.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        EnvelopeMode.setColour(juce::TextButton::buttonColourId, juce::Colours::silver);
        addAndMakeVisible(EnvelopeMode);
        EnvelopeMode.setLookAndFeel(fxlaf);

        addAndMakeVisible(EnvelopeModeLabel);
        EnvelopeModeLabel.setText("EnV-Off_lofi-mode", juce::dontSendNotification);

        Cutoff.setSliderStyle(juce::Slider::LinearHorizontal);
        Cutoff.setPopupDisplayEnabled (true, false, this);
        Cutoff.setTextValueSuffix ("Cut");
        Cutoff.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (Cutoff);
        Cutoff.setLookAndFeel(claf);
        
        CutMod.setSliderStyle(juce::Slider::LinearHorizontal);
        CutMod.setPopupDisplayEnabled (true, false, this);
        CutMod.setTextValueSuffix ("lfo+/-");
        CutMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
   
        addAndMakeVisible (CutMod);
        CutMod.setLookAndFeel(modlaf);
        CutMod.setVisible(false);
        Resonance.setSliderStyle(juce::Slider::LinearHorizontal);
        Resonance.setPopupDisplayEnabled (true, false, this);
        Resonance.setTextValueSuffix ("Res");
        Resonance.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (Resonance);
        Resonance.setLookAndFeel(claf);
        
        DelayTime.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayTime.setPopupDisplayEnabled (true, false, this);
        DelayTime.setTextValueSuffix ("DTm");
        DelayTime.setTextBoxStyle(juce::Slider::TextBoxRight, false,70, 20);
        
        addAndMakeVisible (DelayTime);
        DelayTime.setLookAndFeel(fxlaf);
        
        
        
        DelayTimeMod.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayTimeMod.setPopupDisplayEnabled (true, false, this);
 
        DelayTimeMod.setTextValueSuffix ("T+");
        DelayTimeMod.setTextBoxStyle(juce::Slider::TextBoxRight, false,70, 20);
        
        addAndMakeVisible (DelayTimeMod);
        DelayTimeMod.setLookAndFeel(modlaf);
        
        DelayFeed.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayFeed.setPopupDisplayEnabled (true, false, this);
        DelayFeed.setTextValueSuffix ("DFd");
        DelayFeed.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayFeed);
        DelayFeed.setLookAndFeel(fxlaf);
        
        DelayFeedMod.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayFeedMod.setPopupDisplayEnabled (true, false, this);
        DelayFeedMod.setTextValueSuffix ("F+");
        DelayFeedMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayFeedMod);
       DelayFeedMod.setLookAndFeel(modlaf);
        
        DelayMix.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayMix.setPopupDisplayEnabled (true, false, this);
        DelayMix.setNumDecimalPlacesToDisplay(0);
        DelayMix.setTextValueSuffix ("Mix");
        DelayMix.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayMix);
       DelayMix.setLookAndFeel(fxlaf);
        
        DelayMixMod.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayMixMod.setPopupDisplayEnabled (true, false, this);
        DelayMixMod.setTextValueSuffix ("M+");
        DelayMixMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayMixMod);
        DelayMixMod.setLookAndFeel(modlaf);
        
        DelayLevel.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayLevel.setPopupDisplayEnabled (true, false, this);
        DelayLevel.setNumDecimalPlacesToDisplay(0);
        DelayLevel.setTextValueSuffix ("Vol");
        DelayLevel.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayLevel);
        DelayLevel.setLookAndFeel(fxlaf);
        
        DelayLevelMod.setSliderStyle(juce::Slider::LinearHorizontal);
        DelayLevelMod.setPopupDisplayEnabled (true, false, this);
        DelayLevelMod.setTextValueSuffix ("V+");
        DelayLevelMod.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        
        addAndMakeVisible (DelayLevelMod);
        DelayLevelMod.setLookAndFeel(modlaf);
        
       
        
        LfoTime.setSliderStyle(juce::Slider::LinearHorizontal);
        LfoTime.setPopupDisplayEnabled (true, false, this);
        LfoTime.setNumDecimalPlacesToDisplay(0);
        LfoTime.setTextValueSuffix ("CV");
        LfoTime.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 18);
        
        addAndMakeVisible (LfoTime);
        LfoTime.setLookAndFeel(fxlaf);
        
        
        LfoAmp.setSliderStyle(juce::Slider::LinearHorizontal);
        LfoAmp.setPopupDisplayEnabled (true, false, this);
        LfoAmp.setNumDecimalPlacesToDisplay(0);
        LfoAmp.setTextValueSuffix ("AM");
        LfoAmp.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 18);
        
        addAndMakeVisible (LfoAmp);
        LfoAmp.setLookAndFeel(fxlaf);
        
        auto initCombo = [this](ComboBox& combop)
        {
            addAndMakeVisible(combop);
            combop.setEditableText(false);
            combop.setJustificationType(Justification::centredLeft);
            combop.setTextWhenNothingSelected("");

            combop.setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
        };
        
        initCombo (playTimeModeCombo);
        TimeDivMode::setupComboBox(playTimeModeCombo);

        
        initCombo (playModeCombo);
        SamplePlayMode::setupComboBox(playModeCombo);
       
        
        initCombo (FilterModeCombo);
        FilterMode::setupComboBox(FilterModeCombo);
        
        
        
        initCombo (DelayModeCombo);
        DelayMode::setupComboBox(DelayModeCombo);
       
        
        initCombo (LfoModeCombo);
        LfoMode::setupComboBox(LfoModeCombo);
       
        
        initCombo (LfoRtrModeCombo);
        LfoRtrMode::setupComboBox(LfoRtrModeCombo);
        
        
        
        
      //---------------------------------------------------synth----------


        initCombo(waveformCombo);
        SynthWaveform::setupComboBox(waveformCombo);
        waveformCombo.setVisible(false);
        auto initSlider = [this](Slider& slider)
        {
            addAndMakeVisible(slider);
            slider.setSliderStyle(juce::Slider::LinearHorizontal);
            slider.setTextBoxStyle(Slider::TextBoxRight, false, 60, 20);
            slider.setPopupDisplayEnabled (true, false, this);
   
        };
        
        initSlider(noteNumberSlider); //noteNumberSlider.setRange(0, 127, 1);
        noteNumberSlider.setTextValueSuffix ("note");
        noteNumberSlider.setLookAndFeel(fxlaf);
        noteNumberSlider.setVisible(false);
        initSlider(noteNumberSliderMod);
        noteNumberSliderMod.setTextValueSuffix ("n+");
        noteNumberSliderMod.setLookAndFeel(modlaf);
        noteNumberSliderMod.setVisible(false);
        
        initSlider(synthLevelSlider); //levelSlider.setRange(0, 1, 0);
      
        synthLevelSlider.setTextValueSuffix ("Vol");
        synthLevelSlider.setLookAndFeel(fxlaf);
        synthLevelSlider.setVisible(false);
        initSlider(synthLevelSliderMod);
        
        synthLevelSliderMod.setTextValueSuffix ("v+");
        synthLevelSliderMod.setLookAndFeel(modlaf);
        synthLevelSliderMod.setVisible(false);
        
        
        initSlider(synthAttackSlider); //setRange(0, 1, 0);
        
        synthAttackSlider.setTextValueSuffix ("");
        synthAttackSlider.setTextBoxStyle(Slider::TextBoxRight, false, 40, 20);
        synthAttackSlider.setLookAndFeel(fxlaf);
        synthAttackSlider.setVisible(false);
        
        initSlider(synthReleaseSlider); //setRange(0, 1, 0);
      
        synthReleaseSlider.setTextValueSuffix ("");
        synthReleaseSlider.setTextBoxStyle(Slider::TextBoxRight, false, 40, 20);
        synthReleaseSlider.setLookAndFeel(fxlaf);
        synthReleaseSlider.setVisible(false);
        

       
    }
    bool reEn()
    {
        if (EngineMenuButton.getToggleState() == false) { return true; }
        if (EngineMenuButton.getToggleState() == true) { return false; }
        else
            return 0;
    }
    void EngineHideControl()
    {
        
          LfoModulationSampel.setToggleState(false, juce::dontSendNotification);
         

            SampelN1.setVisible(reEn());
            PatternState.setVisible(reEn());
            PatternStReset.setVisible(reEn());
            SampelPitch.setVisible(reEn());
            SampelVolume.setVisible(reEn());
            SpAttack.setVisible(reEn());
            SpRelease.setVisible(reEn());

            waveformCombo.setVisible(EngineMenuButton.getToggleState());
            noteNumberSlider.setVisible(EngineMenuButton.getToggleState());
            synthLevelSlider.setVisible(EngineMenuButton.getToggleState());
            synthAttackSlider.setVisible(EngineMenuButton.getToggleState());
            synthReleaseSlider.setVisible(EngineMenuButton.getToggleState());
            hidecontrollMod();  

               

           
            //----sampler loop  mode---
            if (EngineMenuButton.getToggleState() == false && playModeCombo.getSelectedItemIndex() < 2) {
                SampelStart.setVisible(false);
                SampelEnd.setVisible(false);
                EnvelopeMode.setVisible(true);
                SpAttack.setVisible(EnvelopeMode.getToggleState());
                SpRelease.setVisible(EnvelopeMode.getToggleState());
            }
            if (EngineMenuButton.getToggleState() == false && playModeCombo.getSelectedItemIndex() == 2) {
                SampelStart.setVisible(true);
                SampelEnd.setVisible(true);
                EnvelopeMode.setVisible(false);
                WaveSizes[0].setVisible(false);
                WaveSizes[1].setVisible(false);
                WaveSizes[2].setVisible(false);
                SpAttack.setVisible(false);
                SpRelease.setVisible(false);
                
            }
            if (EngineMenuButton.getToggleState() == true ) {
                SampelStart.setVisible(false);
                SampelEnd.setVisible(false);
                EnvelopeMode.setVisible(true);
             
               
            }
           
             hidecontrollAr();
        
    }

    bool h1() {

        if (LfoModulationSampel.getToggleState() == true) { return  false; }
        if (LfoModulationSampel.getToggleState() == false) { return  true; }
        else return 0;
            
   }
    void hidecontrollMod()
    {
        if (EngineMenuButton.getToggleState() == false) {

            noteNumberSlider.setVisible(false);
            synthLevelSlider.setVisible(false);
            noteNumberSliderMod.setVisible(false);
            synthLevelSliderMod.setVisible(false);
           
            SampelPitch.setVisible(h1());
            SampelVolume.setVisible(h1());
            SampelPitchMod.setVisible(LfoModulationSampel.getToggleState());
            SampelVolumeMod.setVisible(LfoModulationSampel.getToggleState());

     
           
        }
        if (EngineMenuButton.getToggleState() == true) {
            SampelPitch.setVisible(false);
            SampelVolume.setVisible(false);
            SampelPitchMod.setVisible(false);
            SampelVolumeMod.setVisible(false);

            noteNumberSlider.setVisible(h1());
            synthLevelSlider.setVisible(h1());
            noteNumberSliderMod.setVisible(LfoModulationSampel.getToggleState());
            synthLevelSliderMod.setVisible(LfoModulationSampel.getToggleState());
        }

        Cutoff.setVisible(h1());
        CutMod.setVisible(LfoModulationSampel.getToggleState());
        DelayTime.setVisible(h1());
        DelayMix.setVisible(h1());
        DelayLevel.setVisible(h1());
        DelayFeed.setVisible(h1());
        DelayTimeMod.setVisible(LfoModulationSampel.getToggleState());
        DelayMixMod.setVisible(LfoModulationSampel.getToggleState());
        DelayLevelMod.setVisible(LfoModulationSampel.getToggleState());
        DelayFeedMod.setVisible(LfoModulationSampel.getToggleState());

    }
    bool envre()
    {
        if (EnvelopeMode.getToggleState() == false) { return true; }
        if (EnvelopeMode.getToggleState() == true) { return false; }
        else return 0;
   }
    void hidecontrollAr()
    {
        if (playModeCombo.getSelectedItemIndex() < 2) {
            for(int i=0;i<3;i++)
                WaveSizes[i].setVisible(envre());
        }
        if (playModeCombo.getSelectedItemIndex() == 2) {
            for (int i = 0; i < 3; i++)
                WaveSizes[i].setVisible(false);
        }

        if (EngineMenuButton.getToggleState() == false) {
            SpAttack.setVisible(EnvelopeMode.getToggleState());
            SpRelease.setVisible(EnvelopeMode.getToggleState());
            synthAttackSlider.setVisible(false);
            synthReleaseSlider.setVisible(false);
       
        }
        if (EngineMenuButton.getToggleState() == true) {
            SpAttack.setVisible(false);
            SpRelease.setVisible(false);
            synthAttackSlider.setVisible(EnvelopeMode.getToggleState());
            synthReleaseSlider.setVisible(EnvelopeMode.getToggleState());

        }
   }
    void paint (juce::Graphics& g) override
    {
        juce::Path b;
        b.addRectangle (0,0, 695,150);
        g.setColour (juce::Colours::ghostwhite);
        g.fillPath (b);
        juce::Path w;
        w.addRectangle (3,3, 687,142);
        g.setColour (juce::Colours::black);
        g.fillPath (w);
        
        
        if(EngineColour==0)
        {
        juce::Path e;
        e.addRectangle (5,10, 540,130);
        g.setColour (juce::Colours::dimgrey);
        
        g.fillPath (e);

        
       
        
        juce::Path d;
        d.addRectangle (550,13, 135,110);
            g.setColour (juce::Colours::dimgrey);
        g.fillPath (d);

        }
        
        if(EngineColour==1)
        {
            juce::Path e;
            e.addRectangle (5,10, 540,130);
            g.setColour (juce::Colours::rosybrown);
            g.fillPath (e);
            
            
         
            juce::Path d;
            d.addRectangle (550,13, 135,110);
             g.setColour (juce::Colours::rosybrown);
            g.fillPath (d);
            
        }
        if(EngineColour==2)
        {
            juce::Path e;
            e.addRectangle (5,10, 540,130);
            g.setColour (juce::Colours::crimson);
            g.fillPath (e);
            
            
            
            juce::Path d;
            d.addRectangle (550,13, 135,110);
            g.setColour (juce::Colours::crimson);
            g.fillPath (d);
            
        }
        if(EngineColour==3)
        {
            juce::Path e;
            e.addRectangle (5,10, 540,130);
            g.setColour (juce::Colours::coral);
            g.fillPath (e);
            
            
            
            juce::Path d;
            d.addRectangle (550,13, 135,110);
            g.setColour (juce::Colours::coral);
            g.fillPath (d);
            
        }
        g.setFont (15.0f);
        
    }
    void resized() override
    {
        
        
        
        
       
        playTimeModeCombo.setBounds(10,20,40,20);
        EngineMenuButton.setBounds (10, 45, 100, 20);
        LfoModulationSampel.setBounds(10,70,100,20);
        PatternState.setBounds (10,100, 80, 20);
        PatternStReset.setBounds(92, 100, 18, 20);


         playModeCombo.setBounds(130,100,120,20);
        
        waveformCombo.setBounds(130,20,120,20);
        noteNumberSlider.setBounds(130,60,120,20);
        noteNumberSliderMod.setBounds(130,60,120,20);
        synthLevelSlider.setBounds(130,40,120,20);
        synthLevelSliderMod.setBounds(130,40,120,20);
        synthAttackSlider.setBounds(270,20,80,20);
        synthReleaseSlider.setBounds(270,40,80,20);
        synthReleaseSliderMod.setBounds(270,40,80,20);
        

        
        SampleFileLabel.setBounds (10, 125, 480, 15);
        
        
        
        
        SampelN1.setBounds (50,20, 200, 20);
        
        SampelPitch.setBounds (130,40, 120, 20);
        SampelPitchMod.setBounds (130,40, 120, 20);
        SampelVolume.setBounds (130,60, 120, 20);
        SampelVolumeMod.setBounds (130,60, 120, 20);
        SampelGate.setBounds (130,80, 120, 20);
        
        
        
        SampelStart.setBounds (270,20, 120, 20);
        SampelEnd.setBounds (270,40, 120, 20);
        SpAttack.setBounds(270,20,80,20);
        SpRelease.setBounds(270,40, 80, 20);
     //   SpReleaseMod.setBounds(270,40, 80, 20);
        EnvelopeMode.setBounds(350, 20, 40, 40);
      
        Cutoff.setBounds (270,60, 120, 20);
        CutMod.setBounds (270,60, 120, 20);
        Resonance.setBounds (270 ,80, 120, 20);
        FilterModeCombo.setBounds(270,100,120,20);
       
       
        LfoTime.setBounds(560,50,120,20);
        LfoAmp.setBounds(560,70,120,20);
        LfoModeCombo.setBounds(560,20,120,28);
        LfoRtrModeCombo.setBounds(560,90,120,20);
        
        
        DelayTime.setBounds (410,20,125,20);
        DelayTimeMod.setBounds (410,20,125,20);
        DelayFeed.setBounds (410,40, 125, 20);
        DelayFeedMod.setBounds (410,40,125,20);
        DelayMix.setBounds (410,80, 125, 20);
        DelayMixMod.setBounds (410,80,125,20);
        DelayLevel.setBounds (410,60,125,20);
        DelayLevelMod.setBounds (410,60,125,20);
        DelayModeCombo.setBounds(410,100,125,20);
      
    }


    Slider WaveSizes_t;
    TextButton WaveSizes[3];

    bool IsState;
    int EngineColour;
    ComboBox playModeCombo;
    ComboBox playTimeModeCombo;
    Label SampleFileLabel;
    Slider SampelGate;
    Slider SampelN1;
    TextButton PatternState;
    TextButton PatternStReset;
    Slider SampelPitch;
    Slider SampelPitchMod;
    Slider SampelStart;
    Slider SampelEnd;
    Slider SampelVolume;
    Slider SampelVolumeMod;
    Slider SpAttack;
    Slider SpRelease;
    Slider SpReleaseMod;
    TextButton LfoModulationSampel;
    
    Slider Cutoff;
    Slider Resonance;
    ComboBox FilterModeCombo;
  
    Slider CutMod;
    
    ComboBox DelayModeCombo;
    Slider DelayTime;
    Slider DelayFeed;
    Slider DelayMix;
    Slider DelayLevel;
    Slider DelayTimeMod;
    Slider DelayFeedMod;
    Slider DelayMixMod;
    Slider DelayLevelMod;

    
    Slider LfoTime;
    Slider LfoAmp;
    ComboBox LfoModeCombo;
    ComboBox LfoRtrModeCombo;
   TextButton EngineMenuButton;
//---------------synth-----
    ComboBox waveformCombo;
    Slider noteNumberSlider;
    Slider noteNumberSliderMod;
    Slider synthLevelSlider;
    Slider synthLevelSliderMod;
    TextButton synthModPos;
    
    Slider synthAttackSlider;
    Slider synthReleaseSlider;
    Slider synthReleaseSliderMod;
    TextButton EnvelopeMode;
    Label EnvelopeModeLabel;
    private:
   //



    

    void addLookAndFeel (juce::LookAndFeel* laf, const juce::String& name)  { }
    
   
};
    
    
