/*
  ==============================================================================

    mainfunktions.cpp
    Created: 3 Nov 2021 5:38:35pm
    Author:  r7

  ==============================================================================
*/

#include "mainfunktions.h"

mainfunktions::mainfunktions()
{
    auto* mlaf = new CustomLookAndFeel();
    addLookAndFeel(mlaf, "Custom Look And Feel");
    mlaf->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::mediumseagreen);

    auto* mlaflfo = new CustomLookAndFeel();
    addLookAndFeel(mlaflfo, "Custom Look And Feel");
    mlaflfo->setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);

    auto initCombo = [this](ComboBox& combop)
    {
        addAndMakeVisible(combop);
        combop.setEditableText(false);
        combop.setJustificationType(Justification::centredLeft);
        combop.setTextWhenNothingSelected("");
        combop.setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
    };

    initCombo(TimeComboBox);
    TimeMode::setupComboBox(TimeComboBox);



    initCombo(mainSHCombo);
    SampelHoldMode::setupComboBox(mainSHCombo);









    addAndMakeVisible(mainPlayModeCombo);

    mainPlayModeCombo.addItem("null", 1);
    mainPlayModeCombo.addItem("off", 2);
    mainPlayModeCombo.addItem("oneshoot", 3);
    mainPlayModeCombo.addItem("loop", 4);



    //  SamplePlayMode::setupComboBox(mainPlayModeCombo);


    TimeSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    TimeSlider.setNumDecimalPlacesToDisplay(0);
    TimeSlider.setPopupDisplayEnabled(true, false, this);
    TimeSlider.setTextValueSuffix("Bpm");
    TimeSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 60, 20);
   // addAndMakeVisible(TimeSlider);
    TimeSlider.setLookAndFeel(mlaf);

    SeqLenghtSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    SeqLenghtSlider.setNumDecimalPlacesToDisplay(0);
    SeqLenghtSlider.setPopupDisplayEnabled(true, true, this);
    SeqLenghtSlider.setTextValueSuffix("Lenght");
    SeqLenghtSlider.setTextBoxStyle(juce::Slider::TextBoxLeft, true, 55, 20);
    addAndMakeVisible(SeqLenghtSlider);
    SeqLenghtSlider.setLookAndFeel(mlaf);


    latenceSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    latenceSlider.setNumDecimalPlacesToDisplay(0);
    latenceSlider.setPopupDisplayEnabled(true, false, this);
    latenceSlider.setTextValueSuffix("<-pos->");
    latenceSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 80, 20);
    // addAndMakeVisible(latenceSlider);
     latenceSlider.setLookAndFeel(mlaf);





    addAndMakeVisible(TriggerProgramm10);

    for (int i = 0; i < 10; ++i) {
        addAndMakeVisible(TriggerProgrammM[i]);
        TriggerProgrammM[i].setClickingTogglesState(true);
        TriggerProgrammM[i].setRadioGroupId(45983);
        TriggerProgrammM[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        TriggerProgrammM[i].setBounds(300 + i * 40, 0, 40, 24);
        TriggerProgrammM[i].setButtonText("t");
        if (i == 0)
            TriggerProgrammM[i].setToggleState(true, juce::dontSendNotification);
        TriggerProgrammM[i].setColour(juce::TextButton::buttonColourId, juce::Colours::green);
      //  MainTriggerPrNr();
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

    mMainSpnr = 0;
    addAndMakeVisible(SamplerEngineTemp);

    for (int i = 0; i < 7; ++i) {
        addAndMakeVisible(SamplerEngine[i]);
        SamplerEngine[i].setClickingTogglesState(true);
        SamplerEngine[i].setRadioGroupId(40523);
        SamplerEngine[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        SamplerEngine[i].setBounds(1, 30 + i * 29, 50, 29);
        SamplerEngine[0].setButtonText("Kicks");
        SamplerEngine[1].setButtonText("Snare");
        SamplerEngine[2].setButtonText("Hihat");
        SamplerEngine[3].setButtonText("Percs");
        SamplerEngine[4].setButtonText("Perc2");
        SamplerEngine[5].setButtonText("Perc3");
        SamplerEngine[6].setButtonText("Perc4");
        if (i == 0)
            SamplerEngine[i].setToggleState(true, juce::dontSendNotification);
        SamplerEngine[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);
      //  MainSamplerNr();

    }











    mainWaveSlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    mainWaveSlider.setNumDecimalPlacesToDisplay(0);
    mainWaveSlider.setPopupDisplayEnabled(true, false, this);
    mainWaveSlider.setTextValueSuffix("Wave +/-");
    mainWaveSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 60, 20);
    addAndMakeVisible(mainWaveSlider);

    mainWaveSlider.setLookAndFeel(mlaf);

    mainPitchSlider.setSliderStyle(juce::Slider::RotaryVerticalDrag);
    mainPitchSlider.setNumDecimalPlacesToDisplay(0);
    mainPitchSlider.setPopupDisplayEnabled(true, false, this);
    mainPitchSlider.setTextValueSuffix("Pitch +/-");
    mainPitchSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
    addAndMakeVisible(mainPitchSlider);

    mainPitchSlider.setLookAndFeel(mlaf);

    mainDelaySlider.setSliderStyle(juce::Slider::LinearHorizontal);
    mainDelaySlider.setNumDecimalPlacesToDisplay(0);
    mainDelaySlider.setPopupDisplayEnabled(true, false, this);
    mainDelaySlider.setTextValueSuffix("Delay +/-");
    mainDelaySlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
    addAndMakeVisible(mainDelaySlider);

    mainDelaySlider.setLookAndFeel(mlaf);

    mainVolSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    mainVolSlider.setNumDecimalPlacesToDisplay(0);
    mainVolSlider.setPopupDisplayEnabled(true, false, this);
    mainVolSlider.setTextValueSuffix("Volume +/-");
    mainVolSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 20);
    addAndMakeVisible(mainVolSlider);
    mainVolSlider.setLookAndFeel(mlaf);


     mMainLfoNr = 0;
    addAndMakeVisible(mainLfoSelectSlider);
 
    for (int i = 0; i < 4; ++i) {
        addAndMakeVisible(mainLfoSelectButtons[i]);
        mainLfoSelectButtons[i].setClickingTogglesState(true);
        mainLfoSelectButtons[i].setRadioGroupId(45483);
        mainLfoSelectButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        mainLfoSelectButtons[i].setBounds(120, 275 + i * 20, 35, 20);
        mainLfoSelectButtons[0].setButtonText("lfo1");
        mainLfoSelectButtons[1].setButtonText("lfo2");
        mainLfoSelectButtons[2].setButtonText("lfo3");
        mainLfoSelectButtons[3].setButtonText("lfo4");
        if (i == 0)
            mainLfoSelectButtons[i].setToggleState(true, juce::dontSendNotification);
            mainLfoSelectButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);

           
   // MainLfoNr();
    }
 
    mainLfoPitchAmpSlider.setSliderStyle(juce::Slider::LinearVertical);
    mainLfoPitchAmpSlider.setTextValueSuffix("Am");
    mainLfoPitchAmpSlider.setTextBoxStyle(juce::Slider::TextBoxLeft, false, 60, 20);
    addAndMakeVisible(mainLfoPitchAmpSlider);
    mainLfoPitchAmpSlider.setLookAndFeel(mlaflfo);
    addAndMakeVisible(MainLfoPitchAmLabel);
    MainLfoPitchAmLabel.setText("+", juce::dontSendNotification);
    

    mainLfoCrusherAmpSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    mainLfoCrusherAmpSlider.setNumDecimalPlacesToDisplay(0);
    mainLfoCrusherAmpSlider.setPopupDisplayEnabled(true, false, this);
    mainLfoCrusherAmpSlider.setTextValueSuffix("CrusherAm");
    mainLfoCrusherAmpSlider.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
    addAndMakeVisible(mainLfoCrusherAmpSlider);
    mainLfoCrusherAmpSlider.setLookAndFeel(mlaflfo);



    //---------------eq-------
    addAndMakeVisible(MainEqModeTemp);
    addAndMakeVisible(mainEqOnOff);


    for (int i = 0; i < 4; ++i) {
        addAndMakeVisible(mainEqOnOff[i]);
        mainEqOnOff[i].setClickingTogglesState(true);
        mainEqOnOff[i].setRadioGroupId(419523);
        mainEqOnOff[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        mainEqOnOff[i].setBounds(380, 275 + i * 20, 70, 20);
        mainEqOnOff[0].setButtonText("EqmodeOff");
        mainEqOnOff[1].setButtonText("Eqmode_1");
        mainEqOnOff[2].setButtonText("Eqmode_2");
        mainEqOnOff[3].setButtonText("Eqmode_3");
        if (i == 0)
            mainEqOnOff[i].setToggleState(true, juce::dontSendNotification);
        mainEqOnOff[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);

    }

    mainEqBassV.setSliderStyle(juce::Slider::LinearVertical);
    mainEqBassV.setNumDecimalPlacesToDisplay(0);
    mainEqBassV.setPopupDisplayEnabled(true, false, this);
    mainEqBassV.setTextValueSuffix("EQBV");
    mainEqBassV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainEqBassV);
    mainEqBassV.setLookAndFeel(mlaflfo);

    mainEqMidV.setSliderStyle(juce::Slider::LinearVertical);
    mainEqMidV.setNumDecimalPlacesToDisplay(0);
    mainEqMidV.setPopupDisplayEnabled(true, false, this);
    mainEqMidV.setTextValueSuffix("EQMV");
    mainEqMidV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainEqMidV);
    mainEqMidV.setLookAndFeel(mlaflfo);

    mainEqHighV.setSliderStyle(juce::Slider::LinearVertical);
    mainEqHighV.setNumDecimalPlacesToDisplay(0);
    mainEqHighV.setPopupDisplayEnabled(true, false, this);
    mainEqHighV.setTextValueSuffix("EQHV");
    mainEqHighV.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainEqHighV);
    mainEqHighV.setLookAndFeel(mlaflfo);

    addAndMakeVisible(EqLabel);
    EqLabel.setText("B___M___H", juce::dontSendNotification);

    /*
    addAndMakeVisible(MainBitCrushModusTemp);
    addAndMakeVisible(mainBitCrushModus);

    for (int i = 0; i < 4; ++i) {
        addAndMakeVisible(mainBitCrushModus[i]);
        mainBitCrushModus[i].setClickingTogglesState(true);
        mainBitCrushModus[i].setRadioGroupId(4123);
        mainBitCrushModus[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        mainBitCrushModus[i].setBounds(250, 520 + i * 20, 80, 20);
        mainBitCrushModus[0].setButtonText("BitCrushoff");
        mainBitCrushModus[1].setButtonText("BitCrush1");
        mainBitCrushModus[2].setButtonText("BitCrush2");
        mainBitCrushModus[3].setButtonText("BitCrush3");
        if (i == 0)
            mainBitCrushModus[i].setToggleState(true, juce::dontSendNotification);
        mainBitCrushModus[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);



    }
    mainBitCrushBits.setSliderStyle(juce::Slider::LinearHorizontal);
    mainBitCrushBits.setNumDecimalPlacesToDisplay(0);
    mainBitCrushBits.setPopupDisplayEnabled(true, false, this);
    mainBitCrushBits.setTextValueSuffix("BV");
    mainBitCrushBits.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainBitCrushBits);
    mainBitCrushBits.setLookAndFeel(mlaflfo);

    mainBitCrushMix.setSliderStyle(juce::Slider::LinearHorizontal);
    mainBitCrushMix.setNumDecimalPlacesToDisplay(0);
    mainBitCrushMix.setPopupDisplayEnabled(true, false, this);
    mainBitCrushMix.setTextValueSuffix("FV");
    mainBitCrushMix.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainBitCrushMix);
    mainBitCrushMix.setLookAndFeel(mlaflfo);

    mainBitCrushWed_Dry.setSliderStyle(juce::Slider::LinearHorizontal);
    mainBitCrushWed_Dry.setNumDecimalPlacesToDisplay(0);
    mainBitCrushWed_Dry.setPopupDisplayEnabled(true, false, this);
    mainBitCrushWed_Dry.setTextValueSuffix("MX");
    mainBitCrushWed_Dry.setTextBoxStyle(juce::Slider::TextBoxRight, false, 70, 20);
    addAndMakeVisible(mainBitCrushWed_Dry);
    mainBitCrushWed_Dry.setLookAndFeel(mlaflfo);
    */
    for (int i = 0; i < 4; ++i) {
        addAndMakeVisible(mainLimiterMode[i]);
        mainLimiterMode[i].setClickingTogglesState(true);
        mainLimiterMode[i].setRadioGroupId(4339523);
        mainLimiterMode[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        mainLimiterMode[i].setBounds(560, 275 + i * 20, 35, 20);
        mainLimiterMode[0].setButtonText("off");
        mainLimiterMode[1].setButtonText("short");
        mainLimiterMode[2].setButtonText("long");
        mainLimiterMode[3].setButtonText("Auto");
        if (i == 0)
            mainLimiterMode[i].setToggleState(true, juce::dontSendNotification);
        mainLimiterMode[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);



    }
    addAndMakeVisible(limiterLabel1);
    addAndMakeVisible(limiterLabel);
    limiterLabel1.setText("Limiter", juce::dontSendNotification);
    limiterLabel.setText("Th____v____G", juce::dontSendNotification);
    mainLimiterThresh.setSliderStyle(juce::Slider::LinearVertical);
    mainLimiterThresh.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
    addAndMakeVisible(mainLimiterThresh);
    mainLimiterThresh.setLookAndFeel(mlaflfo);

    mainLimiterGain.setSliderStyle(juce::Slider::LinearVertical);
    mainLimiterGain.setNumDecimalPlacesToDisplay(0);
    mainLimiterGain.setPopupDisplayEnabled(true, false, this);
    mainLimiterGain.setTextValueSuffix("Gain");
    mainLimiterGain.setTextBoxStyle(juce::Slider::TextBoxRight, false, 50, 20);
    addAndMakeVisible(mainLimiterGain);
    mainLimiterGain.setLookAndFeel(mlaflfo);

    addAndMakeVisible(mainLimiterMode);

    addAndMakeVisible(timeLabel);
    addAndMakeVisible(timeLabel2);
    timeLabel2.setText("ab", juce::dontSendNotification);
    addAndMakeVisible(BankLabel);
    BankLabel.setText("Bank/Change", juce::dontSendNotification);
    addAndMakeVisible(MainParaLabel);
    MainParaLabel.setText("----MainParas----", juce::dontSendNotification);

    addAndMakeVisible(chronofunkt);
    chronofunkt.setText("the rec button must be on in your host", juce::dontSendNotification);
    chronofunkt.setVisible(true);
}
inline int minmaxMeter(int a) {
    int result = 0; result = a;
    if (result > 360) { result = 360; }
    if (result < 290) { result = 290; }
    return result;
}

void mainfunktions::paint(juce::Graphics& g)
{
    g.drawRect(115, 259, 150, 105, 3);
    g.drawRect(370, 259, 180, 105, 3);
    g.drawRect(555, 259, 145, 105, 3);
  //  g.drawRect(640, 290, 20, 70,2);
   // g.setColour(juce::Colours::orange);

   // g.fillRect(645, minmaxMeter(350-(meterLevel*60)), 10, 5+ (meterLevel * 60));
}

void mainfunktions::resized()
{
    chronofunkt.setBounds(100, 0, 200, 20);
    timeLabel.setBounds(10, 610, 600, 20);
    //  timeLabel2.setBounds (200,0, 400, 20);
    //  BankLabel.setBounds(600, 45, 100, 20);
    //  MainParaLabel.setBounds(255, 330, 330, 20);
    //  TriggerSetInit1.setBounds(600, 70, 30, 20);
    //  TriggerSetInit2.setBounds(630, 70, 30, 20);
    //  TriggerSetInit3.setBounds(660, 70, 30, 20);
    TimeComboBox.setBounds(0, 0, 100, 20);

   // TimeSlider.setBounds(70, 0, 140, 20);
    latenceSlider.setBounds(100, 0, 160, 20);
    SeqLenghtSlider.setBounds(0, 235, 710, 20);
    //  mainWaveSlider.setBounds(160,250,80,80);
    mainPitchSlider.setBounds(185, 295, 60, 60);
    mainDelaySlider.setBounds(270, 270, 90, 40);
    mainVolSlider.setBounds(270, 315, 90, 40);

    mainSHCombo.setBounds(160, 265, 100, 20);
    // mainLfoSelectSlider.setBounds(500,270,50,80);
  //   mainLfoCrusherAmpSlider.setBounds(560,290,120,20);
    mainLfoPitchAmpSlider.setBounds(160, 300, 20, 60);
    MainLfoPitchAmLabel.setBounds(160, 285, 20, 20);


    // mainPlayModeCombo.setBounds(10,240,90,20);


   
    EqLabel.setBounds(455, 270, 100, 20);
    mainEqBassV.setBounds(460, 290, 20, 70);
    mainEqMidV.setBounds(490, 290, 20, 70);
    mainEqHighV.setBounds(520, 290, 20, 70);

    /*
    mainBitCrushBits.setBounds(340, 515, 110, 30);
    mainBitCrushMix.setBounds(340, 545, 110, 30);
    mainBitCrushWed_Dry.setBounds(340, 575, 110, 30);
    */
    limiterLabel1.setBounds(620, 265, 100, 10);
    limiterLabel.setBounds(607, 270, 80, 20);
    mainLimiterThresh.setBounds(610, 290, 20, 70);
    mainLimiterGain.setBounds(670, 290, 20, 70);

    // This method is where you should set the bounds of any child
    // components that your component contains..
}

const int mainfunktions::MainSamplerNr()
{
    if (SamplerEngine[0].getToggleState() == true) { mMainSpnr = 0; }
    if (SamplerEngine[1].getToggleState() == true) { mMainSpnr = 1; }
    if (SamplerEngine[2].getToggleState() == true) { mMainSpnr = 2; }
    if (SamplerEngine[3].getToggleState() == true) { mMainSpnr = 3; }
    if (SamplerEngine[4].getToggleState() == true) { mMainSpnr = 4; }
    if (SamplerEngine[5].getToggleState() == true) { mMainSpnr = 5; }
    if (SamplerEngine[6].getToggleState() == true) { mMainSpnr = 6; }
    return mMainSpnr;
}

const int mainfunktions::MainTriggerPrNr()
{
    if (TriggerProgrammM[0].getToggleState() == true) { mMainTrPrNr = 0; }
    if (TriggerProgrammM[1].getToggleState() == true) { mMainTrPrNr = 1; }
    if (TriggerProgrammM[2].getToggleState() == true) { mMainTrPrNr = 2; }
    if (TriggerProgrammM[3].getToggleState() == true) { mMainTrPrNr = 3; }
    if (TriggerProgrammM[4].getToggleState() == true) { mMainTrPrNr = 4; }
    if (TriggerProgrammM[5].getToggleState() == true) { mMainTrPrNr = 5; }
    if (TriggerProgrammM[6].getToggleState() == true) { mMainTrPrNr = 6; }
    if (TriggerProgrammM[7].getToggleState() == true) { mMainTrPrNr = 7; }
    if (TriggerProgrammM[8].getToggleState() == true) { mMainTrPrNr = 8; }
    if (TriggerProgrammM[9].getToggleState() == true) { mMainTrPrNr = 9; }

    return mMainTrPrNr;
}

const int mainfunktions::MainLfoNr()
{
    if (mainLfoSelectButtons[0].getToggleState() == true) { mMainLfoNr = 0; }
    if (mainLfoSelectButtons[1].getToggleState() == true) { mMainLfoNr = 1; }
    if (mainLfoSelectButtons[2].getToggleState() == true) { mMainLfoNr = 2; }
    if (mainLfoSelectButtons[3].getToggleState() == true) { mMainLfoNr = 3; }


    return  mMainLfoNr;
}
