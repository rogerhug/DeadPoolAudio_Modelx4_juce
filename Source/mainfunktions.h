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
    mainfunktions();


    ~mainfunktions() override  { }
    void meterIn(double v) { meterLevel = v; repaint();
    }
    void paint(juce::Graphics& g) override;
    void resized() override;

    const int MainSamplerNr(); 
    const int MainTriggerPrNr();
    const int MainLfoNr();

    int mainTriggerPattern;
    ComboBox TimeComboBox;
    ComboBox mainPlayModeCombo;


   
    
    Slider TimeSlider;
    Slider latenceSlider;
    Label chronofunkt;
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
    Label MainLfoPitchAmLabel;
    Slider mainLfoCrusherAmpSlider;
    
    ComboBox mainSHCombo;
    

    Slider TriggerProgramm10;
    TextButton TriggerProgrammM[10];
    
    Slider SamplerEngineTemp;
    TextButton SamplerEngine[7];

    

    
    
    Label timeLabel;
    Label timeLabel2;
    Label BankLabel;
    Label MainParaLabel;
    
    Label EqLabel;
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
    
    Label limiterLabel;
    Label limiterLabel1;
    Slider mainLimiterThresh;
    Slider mainLimiterGain;
    TextButton mainLimiterMode[4];
    Slider mainLimiterModeTemp;
    
private:
    
  void addLookAndFeel (juce::LookAndFeel* laf, const juce::String& name)  { }
    int hideGainValue;
    int mMainSpnr =0;
    int mMainTrPrNr=0;
    int mMainLfoNr =0;
    double meterLevel;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (mainfunktions)
};
