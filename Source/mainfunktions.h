/*
  ==============================================================================

    mainfunktions.h
    Created: 29 Jun 2021 7:45:29pm
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include"Eutils.h"
#include"customLook.h"
//==============================================================================
/*
*/
class mainfunktions  : public juce::Component
                      ,public CustomLookAndFeel

{
   
public:
    mainfunktions()
    {
    
        auto* mlaf = new CustomLookAndFeel();
        addLookAndFeel (mlaf, "Custom Look And Feel");
        mlaf->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::mediumseagreen);
        
        auto* mlaflfo = new CustomLookAndFeel();
        addLookAndFeel (mlaflfo, "Custom Look And Feel");
        mlaflfo->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);
        
        auto initCombo = [this](ComboBox& combop)
        {
            addAndMakeVisible(combop);
            combop.setEditableText(false);
            combop.setJustificationType(Justification::centredLeft);
            combop.setTextWhenNothingSelected("");
            combop.setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
        };
        
        initCombo (TimeComboBox);
        TimeMode::setupComboBox(TimeComboBox);

        
        
        initCombo(mainSHCombo);
        SampelHoldMode::setupComboBox(mainSHCombo);
        
        initCombo (Spset1);
        SampelSetMode::setupComboBox(Spset1);
        Spset1.setSelectedItemIndex(0);
        
        initCombo (Spset2);
        SampelSetMode::setupComboBox(Spset2);
        Spset2.setSelectedItemIndex(0);
        
        initCombo (Spset3);
        SampelSetMode::setupComboBox(Spset3);
        Spset3.setSelectedItemIndex(0);
        
        initCombo (Spset4);
        SampelSetMode::setupComboBox(Spset4);
        Spset4.setSelectedItemIndex(0);
        
        
    
        
        
        
        
        addAndMakeVisible(mainPlayModeCombo);

        mainPlayModeCombo.addItem ("null",  1);
        mainPlayModeCombo.addItem ("off",   2);
        mainPlayModeCombo.addItem ("oneshoot", 3);
        mainPlayModeCombo.addItem ("loop", 4);

       
  
      //  SamplePlayMode::setupComboBox(mainPlayModeCombo);


        TimeSlider.setSliderStyle(juce::Slider::LinearHorizontal);
        TimeSlider.setNumDecimalPlacesToDisplay(0);
        TimeSlider.setPopupDisplayEnabled (true, false, this);
        TimeSlider.setTextValueSuffix ("Bpm");
        TimeSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
        addAndMakeVisible (TimeSlider);
      
        
        SeqLenghtSlider.setSliderStyle(juce::Slider::LinearHorizontal);
        SeqLenghtSlider.setNumDecimalPlacesToDisplay(0);
        SeqLenghtSlider.setPopupDisplayEnabled (true, true, this);
        SeqLenghtSlider.setTextValueSuffix ("Lenght");
        SeqLenghtSlider.setTextBoxStyle(juce::Slider::TextBoxRight, true, 60, 20);
        addAndMakeVisible (SeqLenghtSlider);
       
        addAndMakeVisible(BankStart);
 
        int buttonsizeTrig=43;
        for (int i = 0; i < 2; ++i) {
         //   addAndMakeVisible(BankStart[i]);
            BankStart[i].setClickingTogglesState(true);
            BankStart[i].setRadioGroupId(459523);
            BankStart[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
          //  BankStart[i].setBounds (600+i * buttonsizeTrig, 65, buttonsizeTrig, 24);
            BankStart[0].setButtonText("trg");
            BankStart[1].setButtonText("wav");
            if(i==0)
                BankStart[i].setToggleState(true, juce::dontSendNotification);
            BankStart[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
            
        }
        
        addAndMakeVisible(TriggerProgramm10);
  
        addAndMakeVisible(TriggerSetInit1);
        TriggerSetInit1.setClickingTogglesState(true);
        TriggerSetInit1.setToggleState(false, juce::dontSendNotification);
        TriggerSetInit1.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        TriggerSetInit1.setButtonText("Dub");

        addAndMakeVisible(TriggerSetInit2);
        TriggerSetInit2.setClickingTogglesState(true);
        TriggerSetInit2.setToggleState(false, juce::dontSendNotification);
        TriggerSetInit2.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        TriggerSetInit2.setButtonText("Tek");

        addAndMakeVisible(TriggerSetInit3);
        TriggerSetInit3.setClickingTogglesState(true);
        TriggerSetInit3.setToggleState(false, juce::dontSendNotification);
        TriggerSetInit3.setColour(juce::TextButton::buttonOnColourId, juce::Colours::white);
        TriggerSetInit3.setButtonText("Brk");
    
        for (int i = 0; i < 10; ++i) {
            addAndMakeVisible(TriggerProgrammM[i]);
            TriggerProgrammM[i].setClickingTogglesState(true);
            TriggerProgrammM[i].setRadioGroupId(45983);
            TriggerProgrammM[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            TriggerProgrammM[i].setBounds (110+i * buttonsizeTrig, 65, buttonsizeTrig, 24);
            TriggerProgrammM[i].setButtonText("t");
            if(i==0)
            TriggerProgrammM[i].setToggleState(true, juce::dontSendNotification);
            TriggerProgrammM[i].setColour(juce::TextButton::buttonColourId, juce::Colours::green);

              }
        TriggerProgrammM[0].setButtonText("1");
        TriggerProgrammM[1].setButtonText("2");
        TriggerProgrammM[2].setButtonText("3");
        TriggerProgrammM[3].setButtonText("4");
        TriggerProgrammM[4].setButtonText("5");
        TriggerProgrammM[5].setButtonText("6");
        TriggerProgrammM[6].setButtonText("7");
        TriggerProgrammM[7].setButtonText("8");
        TriggerProgrammM[8].setButtonText("9");
        TriggerProgrammM[9].setButtonText("10");
    

        addAndMakeVisible(SamplerEngineTemp);
        
        for (int i = 0; i < 4; ++i) {
            addAndMakeVisible(SamplerEngine[i]);
            SamplerEngine[i].setClickingTogglesState(true);
            SamplerEngine[i].setRadioGroupId(40523);
            SamplerEngine[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            SamplerEngine[i].setBounds (1, 100+i * 29, 50, 29);
            SamplerEngine[0].setButtonText("Kicks");
            SamplerEngine[1].setButtonText("Snare");
            SamplerEngine[2].setButtonText("Hihat");
            SamplerEngine[3].setButtonText("Percs");
            if(i==0)
                SamplerEngine[i].setToggleState(true, juce::dontSendNotification);
            SamplerEngine[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
            
        }
        
        


        
        
       
        
        
        
        
        mainWaveSlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
        mainWaveSlider.setNumDecimalPlacesToDisplay(0);
        mainWaveSlider.setPopupDisplayEnabled (true, false, this);
        mainWaveSlider.setTextValueSuffix ("Wave +/-");
        mainWaveSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 60, 20);
        addAndMakeVisible (mainWaveSlider);
       
        mainWaveSlider.setLookAndFeel(mlaf);
        
        mainPitchSlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
        mainPitchSlider.setNumDecimalPlacesToDisplay(0);
        mainPitchSlider.setPopupDisplayEnabled (true, false, this);
        mainPitchSlider.setTextValueSuffix ("Pitch +/-");
        mainPitchSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
        addAndMakeVisible (mainPitchSlider);
       
        mainPitchSlider.setLookAndFeel(mlaf);
        
        mainDelaySlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
        mainDelaySlider.setNumDecimalPlacesToDisplay(0);
        mainDelaySlider.setPopupDisplayEnabled (true, false, this);
        mainDelaySlider.setTextValueSuffix ("Delay +/-");
        mainDelaySlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
        addAndMakeVisible (mainDelaySlider);
   
        mainDelaySlider.setLookAndFeel(mlaf);
        
        mainVolSlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
        mainVolSlider.setNumDecimalPlacesToDisplay(0);
        mainVolSlider.setPopupDisplayEnabled (true, false, this);
        mainVolSlider.setTextValueSuffix ("Volume +/-");
        mainVolSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
        addAndMakeVisible (mainVolSlider);
        mainVolSlider.setLookAndFeel(mlaf);
        
        
      
        addAndMakeVisible (mainLfoSelectSlider);

        for (int i = 0; i < 4; ++i) {
            addAndMakeVisible(mainLfoSelectButtons[i]);
            mainLfoSelectButtons[i].setClickingTogglesState(true);
            mainLfoSelectButtons[i].setRadioGroupId(45483);
            mainLfoSelectButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
           mainLfoSelectButtons[i].setBounds (510, 250+i * 22, 35, 22);
            mainLfoSelectButtons[0].setButtonText("lfo1");
           mainLfoSelectButtons[1].setButtonText("lfo2");
            mainLfoSelectButtons[2].setButtonText("lfo3");
            mainLfoSelectButtons[3].setButtonText("lfo4");
            if(i==0)
                mainLfoSelectButtons[i].setToggleState(true, juce::dontSendNotification);
            mainLfoSelectButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
            
            
            
        }
        
        mainLfoPitchAmpSlider.setSliderStyle(juce::Slider::LinearHorizontal);
        mainLfoPitchAmpSlider.setNumDecimalPlacesToDisplay(0);
        mainLfoPitchAmpSlider.setPopupDisplayEnabled (true, false, this);
        mainLfoPitchAmpSlider.setTextValueSuffix ("PitchAm");
        mainLfoPitchAmpSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
        addAndMakeVisible (mainLfoPitchAmpSlider);
        mainLfoPitchAmpSlider.setLookAndFeel(mlaflfo);
        
        mainLfoDelayAmpSlider.setSliderStyle(juce::Slider::LinearHorizontal);
        mainLfoDelayAmpSlider.setNumDecimalPlacesToDisplay(0);
        mainLfoDelayAmpSlider.setPopupDisplayEnabled (true, false, this);
        mainLfoDelayAmpSlider.setTextValueSuffix ("DelayAm");
        mainLfoDelayAmpSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
        addAndMakeVisible (mainLfoDelayAmpSlider);
        mainLfoDelayAmpSlider.setLookAndFeel(mlaflfo);
        
        mainLfoCrusherAmpSlider.setSliderStyle(juce::Slider::LinearHorizontal);
        mainLfoCrusherAmpSlider.setNumDecimalPlacesToDisplay(0);
        mainLfoCrusherAmpSlider.setPopupDisplayEnabled (true, false, this);
        mainLfoCrusherAmpSlider.setTextValueSuffix ("CrusherAm");
        mainLfoCrusherAmpSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
        addAndMakeVisible (mainLfoCrusherAmpSlider);
        mainLfoCrusherAmpSlider.setLookAndFeel(mlaflfo);
        
        
        
        //---------------eq-------
        addAndMakeVisible(MainEqModeTemp);
        addAndMakeVisible(mainEqOnOff);
        

        for (int i = 0; i < 4; ++i) {
            addAndMakeVisible(mainEqOnOff[i]);
            mainEqOnOff[i].setClickingTogglesState(true);
            mainEqOnOff[i].setRadioGroupId(419523);
            mainEqOnOff[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            mainEqOnOff[i].setBounds (10, 520+i * 20, 70, 20);
            mainEqOnOff[0].setButtonText("EqmodeOff");
            mainEqOnOff[1].setButtonText("Eqmode_1");
            mainEqOnOff[2].setButtonText("Eqmode_2");
            mainEqOnOff[3].setButtonText("Eqmode_3");
            if(i==0)
                mainEqOnOff[i].setToggleState(true, juce::dontSendNotification);
            mainEqOnOff[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
            
        }

        mainEqBassV.setSliderStyle(juce::Slider::LinearHorizontal);
        mainEqBassV.setNumDecimalPlacesToDisplay(0);
        mainEqBassV.setPopupDisplayEnabled (true, false, this);
        mainEqBassV.setTextValueSuffix ("EQBV");
        mainEqBassV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainEqBassV);
        mainEqBassV.setLookAndFeel(mlaflfo);

        mainEqMidV.setSliderStyle(juce::Slider::LinearHorizontal);
        mainEqMidV.setNumDecimalPlacesToDisplay(0);
        mainEqMidV.setPopupDisplayEnabled (true, false, this);
        mainEqMidV.setTextValueSuffix ("EQMV");
        mainEqMidV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainEqMidV);
        mainEqMidV.setLookAndFeel(mlaflfo);

        mainEqHighV.setSliderStyle(juce::Slider::LinearHorizontal);
        mainEqHighV.setNumDecimalPlacesToDisplay(0);
        mainEqHighV.setPopupDisplayEnabled (true, false, this);
        mainEqHighV.setTextValueSuffix ("EQHV");
        mainEqHighV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainEqHighV);
        mainEqHighV.setLookAndFeel(mlaflfo);
        
        addAndMakeVisible(MainBitCrushModusTemp);
        addAndMakeVisible(mainBitCrushModus);

        for (int i = 0; i < 4; ++i) {
            addAndMakeVisible(mainBitCrushModus[i]);
            mainBitCrushModus[i].setClickingTogglesState(true);
            mainBitCrushModus[i].setRadioGroupId(4123);
            mainBitCrushModus[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            mainBitCrushModus[i].setBounds (250, 520+i * 20, 80, 20);
            mainBitCrushModus[0].setButtonText("BitCrushoff");
            mainBitCrushModus[1].setButtonText("BitCrush1");
            mainBitCrushModus[2].setButtonText("BitCrush2");
            mainBitCrushModus[3].setButtonText("BitCrush3");
            if(i==0)
                mainBitCrushModus[i].setToggleState(true, juce::dontSendNotification);
            mainBitCrushModus[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
            
            
            
        }
        mainBitCrushBits.setSliderStyle(juce::Slider::LinearHorizontal);
        mainBitCrushBits.setNumDecimalPlacesToDisplay(0);
        mainBitCrushBits.setPopupDisplayEnabled (true, false, this);
        mainBitCrushBits.setTextValueSuffix ("BV");
        mainBitCrushBits.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainBitCrushBits);
        mainBitCrushBits.setLookAndFeel(mlaflfo);
        
        mainBitCrushMix.setSliderStyle(juce::Slider::LinearHorizontal);
        mainBitCrushMix.setNumDecimalPlacesToDisplay(0);
        mainBitCrushMix.setPopupDisplayEnabled (true, false, this);
        mainBitCrushMix.setTextValueSuffix ("FV");
        mainBitCrushMix.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainBitCrushMix);
        mainBitCrushMix.setLookAndFeel(mlaflfo);
        
        mainBitCrushWed_Dry.setSliderStyle(juce::Slider::LinearHorizontal);
        mainBitCrushWed_Dry.setNumDecimalPlacesToDisplay(0);
        mainBitCrushWed_Dry.setPopupDisplayEnabled (true, false, this);
        mainBitCrushWed_Dry.setTextValueSuffix ("MX");
        mainBitCrushWed_Dry.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
        addAndMakeVisible (mainBitCrushWed_Dry);
        mainBitCrushWed_Dry.setLookAndFeel(mlaflfo);
    
        for (int i = 0; i < 4; ++i) {
            addAndMakeVisible(mainLimiterMode[i]);
            mainLimiterMode[i].setClickingTogglesState(true);
            mainLimiterMode[i].setRadioGroupId(4339523);
            mainLimiterMode[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            mainLimiterMode[i].setBounds (490, 520+i * 20, 70, 20);
            mainLimiterMode[0].setButtonText("offLimit");
            mainLimiterMode[1].setButtonText("ManGainS");
            mainLimiterMode[2].setButtonText("ManGainL");
            mainLimiterMode[3].setButtonText("AutoGain");
            if(i==0)
                mainLimiterMode[i].setToggleState(true, juce::dontSendNotification);
            mainLimiterMode[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
 
          
            
        }
        
        mainLimiterThresh.setSliderStyle(juce::Slider::LinearHorizontal);
        mainLimiterThresh.setNumDecimalPlacesToDisplay(0);
        mainLimiterThresh.setPopupDisplayEnabled (true, false, this);
        mainLimiterThresh.setTextValueSuffix ("Thrsh");
        mainLimiterThresh.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
        addAndMakeVisible (mainLimiterThresh);
         mainLimiterThresh.setLookAndFeel(mlaflfo);
        
        mainLimiterGain.setSliderStyle(juce::Slider::LinearHorizontal);
        mainLimiterGain.setNumDecimalPlacesToDisplay(0);
        mainLimiterGain.setPopupDisplayEnabled (true, false, this);
        mainLimiterGain.setTextValueSuffix ("Gain");
        mainLimiterGain.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
        addAndMakeVisible (mainLimiterGain);
        mainLimiterGain.setLookAndFeel(mlaflfo);
        
        addAndMakeVisible(mainLimiterMode);
        
        addAndMakeVisible(timeLabel);
        addAndMakeVisible(timeLabel2);
        timeLabel2.setText("ab", juce::dontSendNotification);
        addAndMakeVisible(BankLabel);
        BankLabel.setText("Bank/Change", juce::dontSendNotification);
        addAndMakeVisible(MainParaLabel);
        MainParaLabel.setText("----MainParas----", juce::dontSendNotification);
        
        
        
    }

    ~mainfunktions() override
    {

    }
    

    void paint (juce::Graphics& g) override
    {
        g.setColour (juce::Colours::white);
        g.drawRect(240,515,230,95);
        g.drawRect(0,0, 695,20);
        g.drawRect(155,245, 330,110);
        g.drawRect(500,240,195,110);
        g.drawRect(0,515,230,95);
        g.drawRect (480,515,215,95);
        g.drawRect(595, 40, 100, 190);
 
    }

    void resized() override
    {
       timeLabel.setBounds (10,0, 500, 20);
      //  timeLabel2.setBounds (200,0, 400, 20);
        BankLabel.setBounds(600, 45, 100, 20);
        MainParaLabel.setBounds(255, 330, 330, 20);
        TriggerSetInit1.setBounds(600, 70, 30, 20);
        TriggerSetInit2.setBounds(630, 70, 30, 20);
        TriggerSetInit3.setBounds(660, 70, 30, 20);
        TimeComboBox.setBounds(0,30,110,20);
       
        TimeSlider.setBounds(120,30,200,20);
        SeqLenghtSlider.setBounds(330,30,200,20);
      //  mainWaveSlider.setBounds(160,250,80,80);
        mainPitchSlider.setBounds(160,250,100,80);
        mainDelaySlider.setBounds(260,250,100,80);
        mainVolSlider.setBounds(360,250,100,80);
        
        mainSHCombo.setBounds(560,315,120,26);
       // mainLfoSelectSlider.setBounds(500,270,50,80);
     //   mainLfoCrusherAmpSlider.setBounds(560,290,120,20);
        mainLfoPitchAmpSlider.setBounds(560,260,120,20);
        mainLfoDelayAmpSlider.setBounds(560,290,120,20);
    
        
       // mainPlayModeCombo.setBounds(10,240,90,20);
       


     
          Spset1.setBounds(600,100,90, 28);
          Spset2.setBounds(600,130,90, 28);
          Spset3.setBounds(600,160,90, 28);
          Spset4.setBounds(600,190,90, 28);
        

        mainEqBassV.setBounds(100,515,120,30);
        mainEqMidV.setBounds(100,545,120,30);
        mainEqHighV.setBounds(100,575,120,30);
        
        
        mainBitCrushBits.setBounds(340, 515,110,30);
        mainBitCrushMix.setBounds(340, 545,110,30);
        mainBitCrushWed_Dry.setBounds(340,575,110,30);

        mainLimiterThresh.setBounds(570,530,110,30);
         mainLimiterGain.setBounds(570,570,110,30);
        
        // This method is where you should set the bounds of any child
        // components that your component contains..

    }
    

    int mainTriggerPattern;
    ComboBox TimeComboBox;
    

    ComboBox mainPlayModeCombo;
    TextButton BankStart[2];
    TextButton TriggerSetInit1;
    TextButton TriggerSetInit2;
    TextButton TriggerSetInit3;
    ComboBox Spset1;
    ComboBox Spset2;
    ComboBox Spset3;
    ComboBox Spset4;

    
    Slider TimeSlider;
    Slider SeqLenghtSlider;
    int mainshow;
    Slider mainWaveSlider;
    Slider mainPitchSlider;
    Slider mainVolSlider;
    Slider mainDelaySlider;
    Slider mainLfoSelectSlider;
    TextButton mainLfoSelectButtons[4];
    Slider mainLfoPitchAmpSlider;
    Slider mainLfoDelayAmpSlider;
    Slider mainLfoCrusherAmpSlider;
    
    ComboBox mainSHCombo;
    

    Slider TriggerProgramm10;
    TextButton TriggerProgrammM[10];
    
    Slider SamplerEngineTemp;
    TextButton SamplerEngine[4];

    

    
    
    Label timeLabel;
    Label timeLabel2;
    Label BankLabel;
    Label MainParaLabel;
    
    Slider MainEqModeTemp;
    TextButton mainEqOnOff[4];
    Slider mainEqBassV;
    Slider mainEqMidV;
    Slider mainEqHighV;
    
    Slider MainBitCrushModusTemp;
    TextButton mainBitCrushModus[4];
    Slider mainBitCrushBits;
    Slider mainBitCrushMix;
    Slider mainBitCrushWed_Dry;
    
    Slider mainLimiterThresh;
    Slider mainLimiterGain;
    TextButton mainLimiterMode[4];
    Slider mainLimiterModeTemp;
    
private:
    
  void addLookAndFeel (juce::LookAndFeel* laf, const juce::String& name)  { }
    int hideGainValue;

 
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (mainfunktions)
};
