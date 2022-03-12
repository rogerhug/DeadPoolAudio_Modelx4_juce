/*
  ==============================================================================

    mainMix.cpp
    Created: 1 Nov 2021 8:18:34pm
    Author:  r7

  ==============================================================================
*/

#include <JuceHeader.h>
#include "mainMix.h"

//==============================================================================
mainMenu::mainMenu()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    for (int i = 0; i < 5; ++i) {
        addAndMakeVisible(MainMenuButtons[i]);

        MainMenuButtons[i].setClickingTogglesState(true);
        MainMenuButtons[i].setRadioGroupId(455523);
        MainMenuButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        MainMenuButtons[i].setBounds(210 + i * 80, 2, 80, 20);
        MainMenuButtons[0].setButtonText("Trigger");
        MainMenuButtons[1].setButtonText("Stepper");
        MainMenuButtons[2].setButtonText("Mixer");
        MainMenuButtons[3].setButtonText("Memory");
        MainMenuButtons[4].setButtonText("MidiCc");

        if (i == 0)
            MainMenuButtons[i].setToggleState(true, juce::dontSendNotification);
        MainMenuButtons[i].setColour(juce::TextButton::buttonColourId, juce::Colours::grey);



    }
}

mainMenu::~mainMenu()
{
}

void mainMenu::init()
{
    MainMenuButtons[0].setToggleState(true, juce::dontSendNotification);
}

void mainMenu::paint (juce::Graphics& g)
{
  
}

void mainMenu::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
//****************************************************************************************************








mainMenuMix::mainMenuMix()
{


    initsteps = new char** [80];
    for (int s = 0; s < 8; s++) {
        initsteps[s] = new char* [80];
        for (int i = 0; i < 16; i++) {
            initsteps[s][i] = new char[80];
            strcpy(initsteps[s][i], "0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50");
        }
    }

    
    stepupini = new double[16];
    stepDnini = new double[16];
    stepsinini = new double[16];
    for (int i = 0; i < 16; i++)
    {
        stepupini[i] = (i / (double)16);
        stepDnini[i] = 1 - (i / (double)16);
        stepsinini[i] = sin(i / (double)16*3.174)*0.7;
    }

    auto initCombo = [this](ComboBox& combop)
    {
        addAndMakeVisible(combop);
        combop.setEditableText(false);
        combop.setJustificationType(Justification::centredLeft);
        combop.setTextWhenNothingSelected("");
        combop.setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
    };

        const int buttonSetsize = 50;
        const int buttonSethigh = 25;
        const int comboWidth = 70;


    hideAudioSynth = 0;
    changepattern = 0;
    changeSampler = 0;

    auto* mlaf = new CustomLookAndFeel();
    addLookAndFeel(mlaf, "Custom Look And Feel");
    //********************************************************stepper********************************
    for (int i = 0; i < 5; ++i) {
        addAndMakeVisible(StepperOut[i]);
        StepperOut[i].setClickingTogglesState(true);
        StepperOut[i].setRadioGroupId(46543);
        StepperOut[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        StepperOut[i].setBounds(240 + i * 80, 120, 80, 20);

        if (i == 0)
        

        StepperOut[i].setToggleState(true, juce::dontSendNotification);
        StepperOut[i].setColour(juce::TextButton::buttonColourId, juce::Colours::green);

    }
    StepperOut[0].setButtonText("Off");//<----wave chance else
    StepperOut[1].setButtonText("Pitch");
    StepperOut[2].setButtonText("Cutoff");
    StepperOut[3].setButtonText("DelayMix");
    StepperOut[4].setButtonText("Volume");


    for (int i = 0; i < 16; ++i) {
        addAndMakeVisible(StepperValueSliders[i]);
        StepperValueSliders[i].setSliderStyle(juce::Slider::LinearVertical);
        StepperValueSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
        StepperValueSliders[i].setTextBoxStyle(juce::Slider::TextBoxBelow, false, 35, 20);
        StepperValueSliders[i].setBounds(1 + i * 38, 20, 38, 80);
        StepperValueSliders[i].setRange(0.0, 1.0, 0.01);


        StepperValueSliders[i], setVisible(false);
        StepperValueSliders[i].setLookAndFeel(mlaf);
        if (i == 0)
        

        StepperValueSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::orange);
    }
    addAndMakeVisible(Stepper1Label);
    Stepper1Label.setText("Stepper_Mod---Output->", juce::dontSendNotification);
    Stepper1Label.setBounds(10, 120, 200, 24);


    stepmod = 0;

    //*******************************************Mixer************************************************
    addAndMakeVisible(MainMixerLabel);
    MainMixerLabel.setBounds(0, 0, 650, 20);
    MainMixerLabel.setText("Wave________Volume__________Pitch_________Gate_________DelayTime_______DelayFeed", juce::dontSendNotification);
    for (int i = 0; i < 7; i++) {

        addAndMakeVisible(MainMixVolumeSliders[i]);
        MainMixVolumeSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixVolumeSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
        MainMixVolumeSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixVolumeSliders[i].setBounds(100, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixVolumeSliders[i].setRange(0.0, 1.0, 0.01);
        MainMixVolumeSliders[i], setVisible(false);
        MainMixVolumeSliders[i].setLookAndFeel(mlaf);


        addAndMakeVisible(MainMixVolumeAudioSliders[i]);
        MainMixVolumeAudioSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixVolumeAudioSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
        MainMixVolumeAudioSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixVolumeAudioSliders[i].setBounds(100, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixVolumeAudioSliders[i].setRange(0.0, 1.0, 0.01);
        MainMixVolumeAudioSliders[i], setVisible(false);
        MainMixVolumeAudioSliders[i].setLookAndFeel(mlaf);

      

        addAndMakeVisible(MainMixWaveSliders[i]);
        MainMixWaveSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixWaveSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
        MainMixWaveSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixWaveSliders[i].setBounds(0, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixWaveSliders[i].setRange(0, 72, 1);
        MainMixWaveSliders[i].setVisible(false);
        MainMixWaveSliders[i].setLookAndFeel(mlaf);


        addAndMakeVisible(MainMixPitchSynthSliders[i]);
        MainMixPitchSynthSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixPitchSynthSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::green);
        //MainMixPitchSynthSliders[i].setTxtValue_ON(true);
        MainMixPitchSynthSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixPitchSynthSliders[i].setBounds(210, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixPitchSynthSliders[i].setRange(0, 127.0, 1);
        MainMixPitchSynthSliders[i].setVisible(false);
        MainMixPitchSynthSliders[i].setLookAndFeel(mlaf);


        addAndMakeVisible(MainMixPitchAudioSliders[i]);
        MainMixPitchAudioSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixPitchAudioSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::green);
       // MainMixPitchAudioSliders[i].setTxtValue_ON(false);
        MainMixPitchAudioSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixPitchAudioSliders[i].setBounds(210, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixPitchAudioSliders[i].setRange(0.0, 1.0, 0.001);
        MainMixPitchAudioSliders[i].setVisible(false);
        MainMixPitchAudioSliders[i].setLookAndFeel(mlaf);


        addAndMakeVisible(MainMixGateSliders[i]);
        MainMixGateSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixGateSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::red);
        MainMixGateSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixGateSliders[i].setBounds(320, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixGateSliders[i].setRange(0.0, 1.0, 0.01);
        MainMixGateSliders[i].setVisible(false);
        MainMixGateSliders[i].setLookAndFeel(mlaf);

        addAndMakeVisible(MainMixDelayTimeSliders[i]);
        MainMixDelayTimeSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixDelayTimeSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::silver);
        MainMixDelayTimeSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixDelayTimeSliders[i].setBounds(430, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixDelayTimeSliders[i].setRange(0.0, 1.0, 0.01);
        MainMixDelayTimeSliders[i].setVisible(false);
        MainMixDelayTimeSliders[i].setLookAndFeel(mlaf);

        addAndMakeVisible(MainMixDelayFeedSliders[i]);
        MainMixDelayFeedSliders[i].setSliderStyle(juce::Slider::LinearHorizontal);
        MainMixDelayFeedSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::silver);
        MainMixDelayFeedSliders[i].setTextBoxStyle(juce::Slider::TextBoxRight, false, 35, 20);
        MainMixDelayFeedSliders[i].setBounds(540, 20 + i * buttonSethigh, 100, buttonSethigh);
        MainMixDelayFeedSliders[i].setRange(0.0, 1.0, 0.01);
        MainMixDelayFeedSliders[i].setVisible(false);
        MainMixDelayFeedSliders[i].setLookAndFeel(mlaf);


    }
    initCombo(MainMixSynt1hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt1hWaveCombo);
        MainMixSynt1hWaveCombo.setBounds(0, 20, comboWidth+30, buttonSethigh);
      
        initCombo(MainMixSynt2hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt2hWaveCombo);
        MainMixSynt2hWaveCombo.setBounds(0, 45, comboWidth + 30, buttonSethigh);

        initCombo(MainMixSynt3hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt3hWaveCombo);
        MainMixSynt3hWaveCombo.setBounds(0, 70, comboWidth + 30, buttonSethigh);

        initCombo(MainMixSynt4hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt4hWaveCombo);
        MainMixSynt4hWaveCombo.setBounds(0, 95, comboWidth + 30, buttonSethigh);

        initCombo(MainMixSynt5hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt5hWaveCombo);
        MainMixSynt5hWaveCombo.setBounds(0, 120, comboWidth + 30, buttonSethigh);

        initCombo(MainMixSynt6hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt6hWaveCombo);
        MainMixSynt6hWaveCombo.setBounds(0, 145, comboWidth + 30, buttonSethigh);

        initCombo(MainMixSynt7hWaveCombo);
        SynthWaveform::setupComboBox(MainMixSynt7hWaveCombo);
        MainMixSynt7hWaveCombo.setBounds(0, 170, comboWidth + 30, buttonSethigh);


        initCombo(MidiCCcombo);
        MidiCCMode::setupComboBox(MidiCCcombo);
        MidiCCcombo.setBounds(320, 30, 200, 20);

        addAndMakeVisible(MidiCCLabel);
        MidiCCLabel.setText("Midi-In-Conntroller List (unused midiCCs)", juce::dontSendNotification);
        MidiCCLabel.setBounds(320, 0, 200, 20);

        addAndMakeVisible(MidiCCLabelM1);
        MidiCCLabelM1.setText("MainPitch:cc119", juce::dontSendNotification);
        MidiCCLabelM1.setBounds(320, 60, 200, 20);

        addAndMakeVisible(MidiCCLabelM2);
        MidiCCLabelM2.setText("MainDelay:cc103", juce::dontSendNotification);
        MidiCCLabelM2.setBounds(320, 80, 200, 20);

        addAndMakeVisible(MidiCCLabelM3);
        MidiCCLabelM3.setText("MainVolume:cc30", juce::dontSendNotification);
        MidiCCLabelM3.setBounds(320, 100, 200, 20);



        addAndMakeVisible(MidiCCLabel1);
    //    MidiCCLabel1.setText("v1:cc2,v2:cc5,v3:cc9,v4:cc14,v5:cc15,v6:cc20,v7:cc21------------SampelVolume", juce::dontSendNotification);
        MidiCCLabel1.setText("vol:cc2---wav:cc85---FrQ:cc104-->DTm:cc23", juce::dontSendNotification);
        MidiCCLabel1.setBounds(0, 0, 400, 20);

        addAndMakeVisible(MidiCCLabel2);
    //    MidiCCLabel2.setText("w1:cc85,w2:cc86,w3:cc87,w4:cc88,w5:89,w6:90,w7:102---------------SampelWaveSelect", juce::dontSendNotification);
        MidiCCLabel2.setText("vol:cc5---wav:cc86---FrQ:cc105-->DTm:cc24", juce::dontSendNotification);
        MidiCCLabel2.setBounds(0, 30, 400, 20);

        addAndMakeVisible(MidiCCLabel3);
    //    MidiCCLabel3.setText("p1:cc104,p2:cc105,p3:cc106,p4:cc107,p5:cc108,p6:cc118,p7:cc121---SampelPitch", juce::dontSendNotification);
        MidiCCLabel3.setText("vol:cc9---wav:cc87---FrQ:cc106-->DTm:cc25", juce::dontSendNotification);
        MidiCCLabel3.setBounds(0, 60, 400, 20);

        addAndMakeVisible(MidiCCLabel4);
        MidiCCLabel4.setText("vol:cc14--wav:cc88---FrQ:cc107-->DTm:cc26", juce::dontSendNotification);
        MidiCCLabel4.setBounds(0, 90, 400, 20);

        addAndMakeVisible(MidiCCLabel5);
        MidiCCLabel5.setText("vol:cc15--wav:cc89---FrQ:cc108-->DTm:cc27", juce::dontSendNotification);
        MidiCCLabel5.setBounds(0, 120, 400, 20);

        addAndMakeVisible(MidiCCLabel6);
        MidiCCLabel6.setText("vol:cc20--wav:cc90---FrQ:cc118-->DTm:cc28", juce::dontSendNotification);
        MidiCCLabel6.setBounds(0, 150, 400, 20);

        addAndMakeVisible(MidiCCLabel7);
        MidiCCLabel7.setText("vol:cc21--wav:cc102--FrQ:cc121-->DTm:cc29", juce::dontSendNotification);
        MidiCCLabel7.setBounds(0, 180, 400, 20);


      
    //*****************************Init audio****************************************
   
    for (int aS = 0; aS < 5; aS++)
    {
     
        addAndMakeVisible(SpAudioSet1[aS]);
        SpAudioSet1[aS].setClickingTogglesState(true);
        SpAudioSet1[aS].setRadioGroupId(403443);
        SpAudioSet1[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        SpAudioSet1[aS].setBounds(0 + aS * buttonSetsize, 0, buttonSetsize, buttonSethigh);

      
        

        SpAudioSet1[0].setButtonText("Preset");
        SpAudioSet1[1].setButtonText("Kicks1");
        SpAudioSet1[2].setButtonText("Kicks2");
        SpAudioSet1[3].setButtonText("Kicks3");
        SpAudioSet1[4].setButtonText("Synth2");


        addAndMakeVisible(SpAudioSet2[aS]);
        SpAudioSet2[aS].setClickingTogglesState(true);
        SpAudioSet2[aS].setRadioGroupId(40023);
        SpAudioSet2[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        SpAudioSet2[aS].setBounds(0 + aS * buttonSetsize, 30, buttonSetsize, buttonSethigh);

       
    SpAudioSet2[0].setButtonText("Preset");
    SpAudioSet2[1].setButtonText("Snare1");
    SpAudioSet2[2].setButtonText("Snare2");
    SpAudioSet2[3].setButtonText("Synth1");
    SpAudioSet2[4].setButtonText("Synth2");



    addAndMakeVisible(SpAudioSet3[aS]);
    SpAudioSet3[aS].setClickingTogglesState(true);
    SpAudioSet3[aS].setRadioGroupId(43023);
    SpAudioSet3[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
    SpAudioSet3[aS].setBounds(0 + aS * buttonSetsize, 60, buttonSetsize, buttonSethigh);


    SpAudioSet3[0].setButtonText("Preset");
    SpAudioSet3[1].setButtonText("HiHat1");
    SpAudioSet3[2].setButtonText("HiHat2");
    SpAudioSet3[3].setButtonText("Synth1");
    SpAudioSet3[4].setButtonText("Synth2");

    addAndMakeVisible(SpAudioSet4[aS]);
    SpAudioSet4[aS].setClickingTogglesState(true);
    SpAudioSet4[aS].setRadioGroupId(45560);
    SpAudioSet4[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
    SpAudioSet4[aS].setBounds(0 + aS * buttonSetsize, 90, buttonSetsize, buttonSethigh);


    SpAudioSet4[0].setButtonText("Preset");
    SpAudioSet4[1].setButtonText("Percs1");
    SpAudioSet4[2].setButtonText("Percs2");
    SpAudioSet4[3].setButtonText("Synth1");
    SpAudioSet4[4].setButtonText("Synth2");



    addAndMakeVisible(SpAudioSet5[aS]);
    SpAudioSet5[aS].setClickingTogglesState(true);
    SpAudioSet5[aS].setRadioGroupId(31160);
    SpAudioSet5[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
    SpAudioSet5[aS].setBounds(0 + aS * buttonSetsize, 120, buttonSetsize, buttonSethigh);


    SpAudioSet5[0].setButtonText("Preset");
    SpAudioSet5[1].setButtonText("Percs3");
    SpAudioSet5[2].setButtonText("Percs4");
    SpAudioSet5[3].setButtonText("Synth1");
    SpAudioSet5[4].setButtonText("Synth2");


    addAndMakeVisible(SpAudioSet6[aS]);
    SpAudioSet6[aS].setClickingTogglesState(true);
    SpAudioSet6[aS].setRadioGroupId(21160);
    SpAudioSet6[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
    SpAudioSet6[aS].setBounds(0 + aS * buttonSetsize, 150, buttonSetsize, buttonSethigh);


    SpAudioSet6[0].setButtonText("Preset");
    SpAudioSet6[1].setButtonText("Percs5");
    SpAudioSet6[2].setButtonText("Percs6");
    SpAudioSet6[3].setButtonText("Synth1");
    SpAudioSet6[4].setButtonText("Synth2");


    addAndMakeVisible(SpAudioSet7[aS]);
    SpAudioSet7[aS].setClickingTogglesState(true);
    SpAudioSet7[aS].setRadioGroupId(11160);
    SpAudioSet7[aS].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
    SpAudioSet7[aS].setBounds(0 + aS * buttonSetsize, 180, buttonSetsize, buttonSethigh);


    SpAudioSet7[0].setButtonText("Preset");
    SpAudioSet7[1].setButtonText("Percs7");
    SpAudioSet7[2].setButtonText("Percs8");
    SpAudioSet7[3].setButtonText("Synth1");
    SpAudioSet7[4].setButtonText("Voices");

    //*****************************************intit Triggers********************************
    

}
    
    for (int b = 0; b < 3; b++) {
        addAndMakeVisible(Highlight[b]);

        Highlight[b].setClickingTogglesState(true);

        Highlight[b].setRadioGroupId(145160);
        Highlight[b].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        Highlight[b].setBounds(500, 20 + b * buttonSethigh, buttonSetsize + 50, buttonSethigh);

        Highlight[0].setButtonText("Highlight-Off");
        Highlight[1].setButtonText("Highlight-limit ");
        Highlight[2].setButtonText("Highlight-stp/lim");
       

    }
    addAndMakeVisible(hgl);
    hgl.setText("show steps cpu 1%up", juce::dontSendNotification);
    hgl.setBounds(480, 0, 150, 20);

    initCombo(Sp1MixTime);
    TimeDivMode::setupComboBox(Sp1MixTime);
    Sp1MixTime.setBounds(250, 0, comboWidth, buttonSethigh);
  
    initCombo(Sp2MixTime);
    TimeDivMode::setupComboBox(Sp2MixTime);
    Sp2MixTime.setBounds(250, 30, comboWidth, buttonSethigh);

    initCombo(Sp3MixTime);
    TimeDivMode::setupComboBox(Sp3MixTime);
    Sp3MixTime.setBounds(250, 60, comboWidth, buttonSethigh);

    initCombo(Sp4MixTime);
    TimeDivMode::setupComboBox(Sp4MixTime);
    
    Sp4MixTime.setBounds(250, 90, comboWidth, buttonSethigh);

    initCombo(Sp5MixTime);
    TimeDivMode::setupComboBox(Sp5MixTime);
    Sp5MixTime.setBounds(250, 120, comboWidth, buttonSethigh);

    initCombo(Sp6MixTime);
    TimeDivMode::setupComboBox(Sp6MixTime);
    Sp6MixTime.setBounds(250, 150, comboWidth, buttonSethigh);

    initCombo(Sp7MixTime);
    TimeDivMode::setupComboBox(Sp7MixTime);
    Sp7MixTime.setBounds(250, 180, comboWidth, buttonSethigh);

    addAndMakeVisible(stepini1);
    stepini1.setBounds(610, 20, 35, 20);
    stepini1.setButtonText("0.5");
    addAndMakeVisible(stepini2);
    stepini2.setBounds(610, 40, 35, 20);
    stepini2.setButtonText("Dn");
    addAndMakeVisible(stepini3);
    stepini3.setBounds(610, 60, 35, 20);
    stepini3.setButtonText("Up");
    addAndMakeVisible(stepini4);
    stepini4.setBounds(610, 80, 35, 20);
    stepini4.setButtonText("s1");
    
    

}
int modeb[7][5] = { 0 };
double stepsOut[8][10][16];
double stepsValueIn[8][10][16];
mainMenuMix::~mainMenuMix()
{
   


}




void mainMenuMix::init(AudioProcessorValueTreeState& valueTreeState)
{
    for (int i = 0; i < 7; i++)
    {
        for (int b = 0; b < 4; b++)
        {
            
            valueTreeState.state.setProperty(StepModeNames(b, i), var("1,0,0,0"), nullptr);
            modeb[i][b] = 0;
           // StepperOut[0].setToggleState(true, juce::dontSendNotification);
            for (int p = 0; p < 10; p++)
            {
            
           
            for (int s = 0; s < 16; s++)
            {    stepsOut[i][p][s] = 0.5;
                StepperValueSliders[s].setValue(0.5, juce::dontSendNotification);
                
                valueTreeState.state.setProperty(StepValuesNames(s, i),
                var("0.5,0.5,0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 "), nullptr);
            }
            }
        }
    }
}


//*****************************************steppMode******************************
int modebI[8] = { 0,0,0,0,0,0,0 };
int stepperm[10] = { 0,0,0,0,0,0,0,0,0,0 };
int rtio[7][2];
const int *mainMenuMix::stepModeValue()
{
    const int engine = changeSampler;
 
        if (StepperOut[0].getToggleState() > 0 ) { stepperm[engine] = 0;  }
        if (StepperOut[1].getToggleState() > 0 ) { stepperm[engine] = 1; }
        if (StepperOut[2].getToggleState() > 0) { stepperm[engine] = 2; }
        if (StepperOut[3].getToggleState() > 0 ) { stepperm[engine] = 3; }
        if (StepperOut[4].getToggleState() > 0 ) { stepperm[engine] = 4; }
         return stepperm;

    }

char modebC[17] = { "-" };
int stepModeIn[16] = { 00,00,00,00,00,00 };
void mainMenuMix::serialModeStepps(AudioProcessorValueTreeState& valueTreeState,int v,  int sp)
{
    stepModeIn[sp] = v;
 for (int s = 0; s < 8; s++) { 
    sprintf(modebC," %d %d %d %d %d %d %d ", stepperm[0], stepperm[1], stepperm[2], stepperm[3], stepperm[4], stepperm[5], stepperm[6]);
    valueTreeState.state.setProperty(StepModeNames(1, 1), var(modebC), nullptr);
   // strcpy(crdIn, modebC);
}
 // stepperm[sp] = stepModeIn[sp];

}

void mainMenuMix::unSerialModeStepps(AudioProcessorValueTreeState& valueTreeState, int s, int nt)
{
    for (int n = 0; n <= 7; n++) {

       SteppModeValues[0].referTo(valueTreeState.state.getPropertyAsValue(StepModeNames(1, 1), nullptr, true));
      
        for (int i = 1; i <= 20; i += 1) {


            stepperm[i/2] = SteppModeValues[0].getValue().toString().substring(i, i + 2).getIntValue();
        
           // strcpy(crd, SteppModeValues[0].getValue().toString().toRawUTF8());
        }

       
        StepperOut[stepperm[0]].setToggleState(true, juce::dontSendNotification);


        

       
 }
 
}
void mainMenuMix::changeMode(int s)
{
   
    StepperOut[stepperm[s]].setToggleState(true, juce::dontSendNotification);
    for (int v = 0; v < 16; v++)
    {
        StepperValueSliders[v].setValue(stepsOut[s][0][v], juce::dontSendNotification);
    }
}

inline bool RetrueFalse(bool in)
{
    if (in == true) { return false; }
    if (in == false) { return true; }
    else return false;
}


//*****************************************steppvalues***************************



double spv[8][16] = { 0 };
int on[8] = { 0,0,0,0,0,0,0 };
void mainMenuMix::InitPatternSteps(int e,int s,int m,bool*st,int p)
{
    if (s >0) {
        if (st[s] == false) { on[s] = 0; }

        if (st[s] == true) { on[s] = p; }
              for (int v = 0; v < 16; v++)
                {
                    if (m == 0) {
                        StepperValueSliders[v].setValue(0.5, juce::dontSendNotification);
                        stepsOut[s][on[s]][v] = 0.5;// StepperValueSliders[v].getValue();
                  
                    }
                    
                    if (m == 1) {
                        StepperValueSliders[v].setValue(stepDnini[v], juce::dontSendNotification);
                        stepsOut[s][on[s]][v] = stepDnini[v];// StepperValueSliders[v].getValue();
                       
                    }
                    if (m == 2) {
                        StepperValueSliders[v].setValue(stepupini[v], juce::dontSendNotification);
                        stepsOut[s][on[s]][v] = stepupini[v];// StepperValueSliders[v].getValue();
                       
                    }
                    if (m == 3) {
                        StepperValueSliders[v].setValue(stepsinini[v], juce::dontSendNotification);
                        stepsOut[s][on[s]][v] = stepsinini[v];// StepperValueSliders[v].getValue();
                     
                    }
                    
                
            } 
              
    }
    s = 0;
   
}
void mainMenuMix::resetPatternSteps(int s)
{
    for (int e = 0; e < 8; e++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int v = 0; v < 16; v++)
            {
                stepsOut[s][i][v]= StepperValueSliders[v].getValue();

    }
}
    }
    //memcpy(stepsOut[s][pattern[s]], stepsOut[s][pattern[s]], 8 * sizeof(double));
}
double* mainMenuMix::stepValues(int e)
{
    for (int i = 0; i < 16; i++)
    {
        spv[e][i] = StepperValueSliders[i].getValue();
    }
    return  spv[e];
}


char serialStepValues[8][10][16] = { 0 };

void mainMenuMix::serialStepps(AudioProcessorValueTreeState& valueTreeState ,double*v,int n,int p)
{
    for (int i = 0; i < 16; i++) {

      
        stepsValueIn[n][0][i] = v[i];
        sprintf(serialStepValues[n][0], "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f"
            , v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9],v[10],v[11],v[12],v[13],v[14],v[15]);

       
            valueTreeState.state.setProperty(StepValuesNames(i,n), var(serialStepValues[n][i]), nullptr);

          
        }
 
   
}
double stUs[8][16] = {0,0,0,0,0,0,0,0};
void mainMenuMix::unSerialStepps(AudioProcessorValueTreeState& valueTreeState,int s,int p)
{
    
for (int n = 0; n <= 7; n++) {

    for (int i = 0; i < 16; i++)
    {
        SteppValues[n][i].referTo(valueTreeState.state.getPropertyAsValue(StepValuesNames(i,n), nullptr, true));

       for (int pr = 0; pr <= 10; pr++) {
           for (int y = 0; y <= 80; y += 5) {


               stepsOut[n][0][y / 5] = SteppValues[n][0].getValue().toString().substring(y, y + 4).getDoubleValue();
          
               stUs[n][y / 5] = SteppValues[n][0].getValue().toString().substring(y, y + 4).getDoubleValue();
           }
       }
  
      // strcpy(crd, SteppValues[0][0].getValue().toString().toRawUTF8());
     //  memcpy(stUs[0], SteppValues[0], 16 * sizeof(double));
   
       StepperValueSliders[i].setValue(stUs[s][i],juce::dontSendNotification);
       steppVunSerial(n);
 }
 }
 
}
double* mainMenuMix::steppVunSerial(int e)
{
    return stUs[e];
}

//***********************************************step colors & hide control**************
bool statepatterns[11];
int changeSt[11][11][17];
void mainMenuMix::setHideColors1( int *c,int s,int p)
{
   
    for (int i = 0; i < 16; i++)
        changeSt[0][p][i] = c[i];
    changeStepperColor(s,p);
 
}

void mainMenuMix::setHideColors2(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[1][p][i] = c[i];
    changeStepperColor(s,p);
}

void mainMenuMix::setHideColors3(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[2][p][i] = c[i];
    changeStepperColor(s,p);
}

void mainMenuMix::setHideColors4(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[s][p][i] = c[i];
    changeStepperColor(s,p);
}

void mainMenuMix::setHideColors5(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[s][p][i] = c[i];
    changeStepperColor(s, p);
}

void mainMenuMix::setHideColors6(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[s][p][i] = c[i];
    changeStepperColor(s, p);
    }

void mainMenuMix::setHideColors7(int* c, int s, int p)
{
    for (int i = 0; i < 16; i++)
        changeSt[s][p][i] = c[i];
    changeStepperColor(s, p);
}

void mainMenuMix::setPatternState(bool* s)
{
 
    memcpy(patternstate, s, 8 * sizeof(bool));
}
int pattern[8];
void mainMenuMix::changeStepperColor(int s,int p)
{
    

   

     for (int i = 0; i < 16; ++i) {
            if (changeSt[s][p][i] > 0) {
                StepperValueSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::grey);
               
            }
            if (changeSt[s][p][i] == 0) {
                StepperValueSliders[i].setColour(juce::Slider::rotarySliderFillColourId, juce::Colours::blue);
               
            }
          // StepperValueSliders[i].setValue(stepsOut[s][p][i], juce::dontSendNotification);
        
    }
   
    
}


void mainMenuMix::hideMix(int n,bool *e)
{  
    hideAudioSynth = n;
    for (int i = 0; i < 16; ++i) {



        for (int m = 0; m < 8; ++m) {

 

            for(int b = 0; b < 5; ++b) {


                for (int c = 0; c < 3; ++c) {
            if (n == 0) {
                MidiCCcombo.setVisible(false);
                MidiCCLabel.setVisible(false);
                MidiCCLabel1.setVisible(false);
                MidiCCLabel2.setVisible(false);
                MidiCCLabel3.setVisible(false);
                MidiCCLabel4.setVisible(false);
                MidiCCLabel5.setVisible(false);
                MidiCCLabel6.setVisible(false);
                MidiCCLabel7.setVisible(false);
                MidiCCLabelM1.setVisible(false);
                MidiCCLabelM2.setVisible(false);
                MidiCCLabelM3.setVisible(false);
                StepperValueSliders[i].setVisible(false);
                MainMixVolumeSliders[m].setVisible(false);
                MainMixVolumeAudioSliders[m].setVisible(false);
              
                MainMixPitchSynthSliders[m].setVisible(false);
                MainMixPitchAudioSliders[m].setVisible(false);
                MainMixGateSliders[m].setVisible(false);
                MainMixDelayTimeSliders[m].setVisible(false);
                MainMixDelayFeedSliders[m].setVisible(false);
                MainMixerLabel.setVisible(false);
                StepperOut[b].setVisible(false);
                Stepper1Label.setVisible(false);
                
                
               MainMixWaveSliders[m].setVisible(false);
               stepini1.setVisible(false);
               stepini2.setVisible(false);
               stepini3.setVisible(false);
               stepini4.setVisible(false);

               SpAudioSet1[b].setVisible(false);
               SpAudioSet2[b].setVisible(false);
               SpAudioSet3[b].setVisible(false);
               SpAudioSet4[b].setVisible(false);
               SpAudioSet5[b].setVisible(false);
               SpAudioSet6[b].setVisible(false);
               SpAudioSet7[b].setVisible(false);

               Sp1MixTime.setVisible(false);
               Sp2MixTime.setVisible(false);
               Sp3MixTime.setVisible(false);
               Sp4MixTime.setVisible(false);
               Sp5MixTime.setVisible(false);
               Sp6MixTime.setVisible(false);
               Sp7MixTime.setVisible(false);

               MainMixSynt1hWaveCombo.setVisible(false);
               MainMixSynt2hWaveCombo.setVisible(false);
               MainMixSynt3hWaveCombo.setVisible(false);
               MainMixSynt4hWaveCombo.setVisible(false);
               MainMixSynt5hWaveCombo.setVisible(false);
               MainMixSynt6hWaveCombo.setVisible(false);
               MainMixSynt7hWaveCombo.setVisible(false);

               Highlight[c].setVisible(false);
               hgl.setVisible(false);
            }
            if (n == 1) {
                MidiCCcombo.setVisible(false);
                MidiCCLabel.setVisible(false);
                MidiCCLabel1.setVisible(false);
                MidiCCLabel2.setVisible(false);
                MidiCCLabel3.setVisible(false);
                MidiCCLabel4.setVisible(false);
                MidiCCLabel5.setVisible(false);
                MidiCCLabel6.setVisible(false);
                MidiCCLabel7.setVisible(false);
                MidiCCLabelM1.setVisible(false);
                MidiCCLabelM2.setVisible(false);
                MidiCCLabelM3.setVisible(false);
                StepperValueSliders[i].setVisible(true);
                StepperOut[b].setVisible(true);
                Stepper1Label.setVisible(true);
                stepini1.setVisible(true);
                stepini2.setVisible(true);
                stepini3.setVisible(true);
                stepini4.setVisible(true);
                MainMixVolumeSliders[m].setVisible(false);
                MainMixVolumeAudioSliders[m].setVisible(false);
                MainMixWaveSliders[m].setVisible(false);
                MainMixPitchAudioSliders[m].setVisible(false);
                MainMixPitchSynthSliders[m].setVisible(false);
                MainMixGateSliders[m].setVisible(false);
                MainMixDelayTimeSliders[m].setVisible(false);
                MainMixDelayFeedSliders[m].setVisible(false);
                MainMixerLabel.setVisible(false);
                SpAudioSet1[b].setVisible(false);
                SpAudioSet2[b].setVisible(false);
                SpAudioSet3[b].setVisible(false);
                SpAudioSet4[b].setVisible(false);
                SpAudioSet5[b].setVisible(false);
                SpAudioSet6[b].setVisible(false);
                SpAudioSet7[b].setVisible(false);
                Sp1MixTime.setVisible(false);
                Sp2MixTime.setVisible(false);
                Sp3MixTime.setVisible(false);
                Sp4MixTime.setVisible(false);
                Sp5MixTime.setVisible(false);
                Sp6MixTime.setVisible(false);
                Sp7MixTime.setVisible(false);

                MainMixSynt1hWaveCombo.setVisible(false);
                MainMixSynt2hWaveCombo.setVisible(false);
                MainMixSynt3hWaveCombo.setVisible(false);
                MainMixSynt4hWaveCombo.setVisible(false);
                MainMixSynt5hWaveCombo.setVisible(false);
                MainMixSynt6hWaveCombo.setVisible(false);
                MainMixSynt7hWaveCombo.setVisible(false);
                Highlight[c].setVisible(false);
                hgl.setVisible(false);
            }
            if (n == 2) {
                MidiCCcombo.setVisible(false);
                MidiCCLabel.setVisible(false);
                MidiCCLabel1.setVisible(false);
                MidiCCLabel2.setVisible(false);
                MidiCCLabel3.setVisible(false);
                MidiCCLabel4.setVisible(false);
                MidiCCLabel5.setVisible(false);
                MidiCCLabel6.setVisible(false);
                MidiCCLabel7.setVisible(false);
                MidiCCLabelM1.setVisible(false);
                MidiCCLabelM2.setVisible(false);
                MidiCCLabelM3.setVisible(false);
                StepperValueSliders[i].setVisible(false);
                StepperOut[b].setVisible(false);
                Stepper1Label.setVisible(false);
                MainMixVolumeSliders[m].setVisible(true);
                stepini1.setVisible(false);
                stepini2.setVisible(false);
                stepini3.setVisible(false);
                stepini4.setVisible(false);
                MainMixPitchSynthSliders[m].setVisible(true);
                MainMixGateSliders[m].setVisible(true);
                MainMixDelayTimeSliders[m].setVisible(true);
                MainMixDelayFeedSliders[m].setVisible(true);
                MainMixerLabel.setVisible(true);
               
               MainMixPitchAudioSliders[m].setVisible(trueFalse(e[m]));
               MainMixWaveSliders[m].setVisible(trueFalse(e[m]));
               MainMixVolumeAudioSliders[m].setVisible(trueFalse(e[m]));
               SpAudioSet1[b].setVisible(false);
               SpAudioSet2[b].setVisible(false);
               SpAudioSet3[b].setVisible(false);
               SpAudioSet4[b].setVisible(false);
               SpAudioSet5[b].setVisible(false);
               SpAudioSet6[b].setVisible(false);
               SpAudioSet7[b].setVisible(false);
               Sp1MixTime.setVisible(false);
               Sp2MixTime.setVisible(false);
               Sp3MixTime.setVisible(false);
               Sp4MixTime.setVisible(false);
               Sp5MixTime.setVisible(false);
               Sp6MixTime.setVisible(false);
               Sp7MixTime.setVisible(false);

               MainMixSynt1hWaveCombo.setVisible(e[0]);
               MainMixSynt2hWaveCombo.setVisible(e[1]);
               MainMixSynt3hWaveCombo.setVisible(e[2]);
               MainMixSynt4hWaveCombo.setVisible(e[3]);
               MainMixSynt5hWaveCombo.setVisible(e[4]);
               MainMixSynt6hWaveCombo.setVisible(e[5]);
               MainMixSynt7hWaveCombo.setVisible(e[6]);

               Highlight[c].setVisible(false);
               hgl.setVisible(false);
            }

            if (n == 3) {
                MidiCCcombo.setVisible(false);
                MidiCCLabel.setVisible(false);
                MidiCCLabel1.setVisible(false);
                MidiCCLabel2.setVisible(false);
                MidiCCLabel3.setVisible(false);
                MidiCCLabel4.setVisible(false);
                MidiCCLabel5.setVisible(false);
                MidiCCLabel6.setVisible(false);
                MidiCCLabel7.setVisible(false);
                MidiCCLabelM1.setVisible(false);
                MidiCCLabelM2.setVisible(false);
                MidiCCLabelM3.setVisible(false);
                StepperValueSliders[i].setVisible(false);
                MainMixVolumeSliders[m].setVisible(false);
                MainMixVolumeAudioSliders[m].setVisible(false);

                MainMixPitchSynthSliders[m].setVisible(false);
                MainMixPitchAudioSliders[m].setVisible(false);
                MainMixGateSliders[m].setVisible(false);
                MainMixDelayTimeSliders[m].setVisible(false);
                MainMixDelayFeedSliders[m].setVisible(false);
                MainMixerLabel.setVisible(false);
                StepperOut[b].setVisible(false);
                Stepper1Label.setVisible(false);
                stepini1.setVisible(false);
                stepini2.setVisible(false);
                stepini3.setVisible(false);
                stepini4.setVisible(false);
                MainMixWaveSliders[m].setVisible(false);


                SpAudioSet1[b].setVisible(true);
                SpAudioSet2[b].setVisible(true);
                SpAudioSet3[b].setVisible(true);
                SpAudioSet4[b].setVisible(true);
                SpAudioSet5[b].setVisible(true);
                SpAudioSet6[b].setVisible(true);
                SpAudioSet7[b].setVisible(true);

                Sp1MixTime.setVisible(true);
                Sp2MixTime.setVisible(true);
                Sp3MixTime.setVisible(true);
                Sp4MixTime.setVisible(true);
                Sp5MixTime.setVisible(true);
                Sp6MixTime.setVisible(true);
                Sp7MixTime.setVisible(true);

                MainMixSynt1hWaveCombo.setVisible(false);
                MainMixSynt2hWaveCombo.setVisible(false);
                MainMixSynt3hWaveCombo.setVisible(false);
                MainMixSynt4hWaveCombo.setVisible(false);
                MainMixSynt5hWaveCombo.setVisible(false);
                MainMixSynt6hWaveCombo.setVisible(false);
                MainMixSynt7hWaveCombo.setVisible(false);

                Highlight[c].setVisible(true);
                hgl.setVisible(true);
            }
            if (n == 4) {

                StepperValueSliders[i].setVisible(false);
                MainMixVolumeSliders[m].setVisible(false);
                MainMixVolumeAudioSliders[m].setVisible(false);

                MainMixPitchSynthSliders[m].setVisible(false);
                MainMixPitchAudioSliders[m].setVisible(false);
                MainMixGateSliders[m].setVisible(false);
                MainMixDelayTimeSliders[m].setVisible(false);
                MainMixDelayFeedSliders[m].setVisible(false);
                MainMixerLabel.setVisible(false);
                StepperOut[b].setVisible(false);
                Stepper1Label.setVisible(false);
                stepini1.setVisible(false);
                stepini2.setVisible(false);
                stepini3.setVisible(false);
                stepini4.setVisible(false);
                MainMixWaveSliders[m].setVisible(false);


                SpAudioSet1[b].setVisible(false);
                SpAudioSet2[b].setVisible(false);
                SpAudioSet3[b].setVisible(false);
                SpAudioSet4[b].setVisible(false);
                SpAudioSet5[b].setVisible(false);
                SpAudioSet6[b].setVisible(false);
                SpAudioSet7[b].setVisible(false);
                Sp1MixTime.setVisible(false);
                Sp2MixTime.setVisible(false);
                Sp3MixTime.setVisible(false);
                Sp4MixTime.setVisible(false);
                Sp5MixTime.setVisible(false);
                Sp6MixTime.setVisible(false);
                Sp7MixTime.setVisible(false);

                MainMixSynt1hWaveCombo.setVisible(false);
                MainMixSynt2hWaveCombo.setVisible(false);
                MainMixSynt3hWaveCombo.setVisible(false);
                MainMixSynt4hWaveCombo.setVisible(false);
                MainMixSynt5hWaveCombo.setVisible(false);
                MainMixSynt6hWaveCombo.setVisible(false);
                MainMixSynt7hWaveCombo.setVisible(false);

                Highlight[c].setVisible(false);
                hgl.setVisible(false);
                MidiCCcombo.setVisible(true);
                MidiCCLabel.setVisible(true);
                MidiCCLabel1.setVisible(true);
                MidiCCLabel2.setVisible(true);
                MidiCCLabel3.setVisible(true);
                MidiCCLabel4.setVisible(true);
                MidiCCLabel5.setVisible(true);
                MidiCCLabel6.setVisible(true);
                MidiCCLabel7.setVisible(true);
                MidiCCLabelM1.setVisible(true);
                MidiCCLabelM2.setVisible(true);
                MidiCCLabelM3.setVisible(true);
            }
            }
            }
        }
    }
}int mainMenuMix::SpAudioSetValue()
{
    int v = 0;
    if (SpAudioSet1[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet1[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet1[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet1[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet1[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet2Value()
{
    int v = 0;
    if (SpAudioSet2[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet2[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet2[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet2[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet2[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet3Value()
{
    int v = 0;
    if (SpAudioSet3[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet3[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet3[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet3[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet3[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet4Value()
{
    int v = 0;
    if (SpAudioSet4[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet4[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet4[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet4[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet4[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet5Value()
{
    int v = 0;
    if (SpAudioSet5[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet5[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet5[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet5[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet5[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet6Value()
{
    int v = 0;
    if (SpAudioSet6[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet6[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet6[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet6[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet6[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::SpAudioSet7Value()
{
    int v = 0;
    if (SpAudioSet7[0].getToggleState() > 0) { v = 0; }
    if (SpAudioSet7[1].getToggleState() > 0) { v = 1; }
    if (SpAudioSet7[2].getToggleState() > 0) { v = 2; }
    if (SpAudioSet7[3].getToggleState() > 0) { v = 3; }
    if (SpAudioSet7[4].getToggleState() > 0) { v = 4; }

    return v;
}

int mainMenuMix::getHighlightValue()
{
    int v = 0;
    if (Highlight[0].getToggleState() == true) { v= 0; }
    if (Highlight[1].getToggleState() == true) { v = 1; }
    if (Highlight[2].getToggleState() == true) { v = 2; }
   


    return v;
}
