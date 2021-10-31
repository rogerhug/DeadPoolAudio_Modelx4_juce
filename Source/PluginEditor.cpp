/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

inline int minmaxSP(int a) {
    int result = 0; result = a;
    if (result > 23) { result = 23; }
    if (result < 0) { result = 0; }
    return result;
}

//==============================================================================
NewProjectAudioProcessorEditor::NewProjectAudioProcessorEditor (NewProjectAudioProcessor& p) 
: AudioProcessorEditor (&p)
, audioProcessor (p)
, undoButton(TRANS("Undo"))
, redoButton(TRANS("Redo"))

, parameters(p.parameters)
{
    
    //---------------tempSliders->buttons

    for (int i = 0; i < 5; i++)
    {
        espWsize_T[i] = 0;
    }
    //---------------------------------




    addAndMakeVisible(&mainp);
  
 
    mainp.TimeSlider.onValueChange=[this]{
    audioProcessor.Rtime->setTimerBpm(mainp.TimeSlider.getValue());
    };
    mainp.TimeComboBox.onChange=[this]{
    audioProcessor.Rtime->setTimerMode(mainp.TimeComboBox.getSelectedItemIndex());
    };
    
   
    
    mainp.SeqLenghtSlider.onValueChange=[this]{
        audioProcessor.Rtime->setSqLenght(mainp.SeqLenghtSlider.getValue());

    };
    CurrentEngine = 0;
    mainp.SamplerEngineTemp.onValueChange=[this]{
        CurrentEngine=mainp.SamplerEngineTemp.getValue();
        mainp.SamplerEngine[CurrentEngine].setToggleState(true, juce::dontSendNotification);
        hideControlMain(CurrentEngine);
    };
 for (int i=0;i<4;i++){
     mainp.SamplerEngine[i].onClick = [this] {
      if(mainp.SamplerEngine[0].getToggleStateValue().getValue()){CurrentEngine=0;};
      if(mainp.SamplerEngine[1].getToggleStateValue().getValue()){CurrentEngine=1;};
      if(mainp.SamplerEngine[2].getToggleStateValue().getValue()){CurrentEngine=2;};
      if(mainp.SamplerEngine[3].getToggleStateValue().getValue()){CurrentEngine=3;};
      hideControlMain(CurrentEngine);
      mainp.SamplerEngineTemp.setValue(CurrentEngine);
};
 }
   mainp.mainPlayModeCombo.setSelectedId(1);
   mainp.mainPlayModeCombo.onChange=[this]
    {
        if(mainp.mainPlayModeCombo.getSelectedId()>1)
        {
            
            esp1.playModeCombo.setSelectedItemIndex(mainp.mainPlayModeCombo.getSelectedId()-2);
            esp2.playModeCombo.setSelectedItemIndex(mainp.mainPlayModeCombo.getSelectedId()-2);
            esp3.playModeCombo.setSelectedItemIndex(mainp.mainPlayModeCombo.getSelectedId()-2);
            esp4.playModeCombo.setSelectedItemIndex(mainp.mainPlayModeCombo.getSelectedId()-2);

        }

 
        
    };
    mainp.mainWaveSlider.onValueChange=[this]
    {
        /*
        const int waveshift =-10+mainp.mainWaveSlider.getValue();
        if(mainp.mainWaveSlider.isMouseButtonDown())
     audioProcessor.sp1.mp.mSampleN=minmaxSP(esp1.SampelN1.getValue()+waveshift);
     esp1.SampleFileLabel.setText(audioProcessor.urls.getUrl1V()
     [audioProcessor.sp1.mp.mSampleN].toString(),juce::dontSendNotification);
     audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(),0);
        
    audioProcessor.sp2.mp.mSampleN=minmaxSP(esp2.SampelN1.getValue()+waveshift);
    esp2.SampleFileLabel.setText (audioProcessor.urls.getUrl2V()
    [audioProcessor.sp2.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(),1);
        
    audioProcessor.sp3.mp.mSampleN=minmaxSP(esp3.SampelN1.getValue()+waveshift);
    esp3.SampleFileLabel.setText (audioProcessor.urls.getUrl3V()
    [audioProcessor.sp3.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(),2);
        
        
    audioProcessor.sp4.mp.mSampleN=minmaxSP(esp4.SampelN1.getValue()+waveshift);
    esp4.SampleFileLabel.setText (audioProcessor.urls.getUrl4V()
    [audioProcessor.sp4.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(),3);
      */  
    };
    
    
    
    mainp.mainPitchSlider.onValueChange=[this]
    {
    audioProcessor.mainPitchModTemp=mainp.mainPitchSlider.getValue();
    audioProcessor.sp1.mp.mSamplePitchM=(mainp.mainPitchSlider.getValue());
    audioProcessor.sp2.mp.mSamplePitchM=(mainp.mainPitchSlider.getValue());
    audioProcessor.sp3.mp.mSamplePitchM=(mainp.mainPitchSlider.getValue());
    audioProcessor.sp4.mp.mSamplePitchM=(mainp.mainPitchSlider.getValue());
      
        if(esp1.synthModPos.getToggleState()==false)
        {
    audioProcessor.sp1.oscillator.setFrequency(
    esp1.noteNumberSlider.getValue()*mainp.mainPitchSlider.getValue());
        }
        if(esp1.synthModPos.getToggleState()==true)
        {
    audioProcessor.sp1.oscillator.setFrequency(
    esp1.noteNumberSlider.getValue()*(2-mainp.mainPitchSlider.getValue()));
        }
        if(esp2.synthModPos.getToggleState()==false)
        {
    audioProcessor.sp2.oscillator.setFrequency(
    esp2.noteNumberSlider.getValue()*mainp.mainPitchSlider.getValue());
        }
        if(esp2.synthModPos.getToggleState()==true)
        {
    audioProcessor.sp2.oscillator.setFrequency(
    esp2.noteNumberSlider.getValue()*(2-mainp.mainPitchSlider.getValue()));
        }
        
        if(esp3.synthModPos.getToggleState()==false)
        {
    audioProcessor.sp3.oscillator.setFrequency(
    esp3.noteNumberSlider.getValue()*mainp.mainPitchSlider.getValue());
        }
        if(esp3.synthModPos.getToggleState()==true)
        {
    audioProcessor.sp3.oscillator.setFrequency(
    esp3.noteNumberSlider.getValue()*(2-mainp.mainPitchSlider.getValue()));
        }
        if(esp4.synthModPos.getToggleState()==false)
        {
    audioProcessor.sp4.oscillator.setFrequency(
    esp4.noteNumberSlider.getValue()*(mainp.mainPitchSlider.getValue()));
        }
        if(esp4.synthModPos.getToggleState()==true)
        {
    audioProcessor.sp4.oscillator.setFrequency(
    esp4.noteNumberSlider.getValue()*(2-mainp.mainPitchSlider.getValue()));
        }
    };
    
    mainp.mainDelaySlider.onValueChange=[this]{
        
    audioProcessor.sp1.echo->setDelayMixMain(mainp.mainDelaySlider.getValue());
    audioProcessor.sp2.echo->setDelayMixMain(mainp.mainDelaySlider.getValue());
    audioProcessor.sp3.echo->setDelayMixMain(mainp.mainDelaySlider.getValue());
    audioProcessor.sp4.echo->setDelayMixMain(mainp.mainDelaySlider.getValue());
    };
    
    mainp.mainVolSlider.onValueChange=[this]{
    audioProcessor.sp1.mp.mSynthLevel=(mainp.mainVolSlider.getValue());
    audioProcessor.sp1.mp.mSampelVolumeM=(mainp.mainVolSlider.getValue());
    audioProcessor.sp2.mp.mSynthLevel=(mainp.mainVolSlider.getValue());
    audioProcessor.sp2.mp.mSampelVolumeM=(mainp.mainVolSlider.getValue());
    audioProcessor.sp3.mp.mSynthLevel=(mainp.mainVolSlider.getValue());
    audioProcessor.sp3.mp.mSampelVolumeM=(mainp.mainVolSlider.getValue());
    audioProcessor.sp4.mp.mSynthLevel=(mainp.mainVolSlider.getValue());
    audioProcessor.sp4.mp.mSampelVolumeM=(mainp.mainVolSlider.getValue());
    };
    
    
    mainLfoMode_T=0;
    
    mainp.mainLfoSelectSlider.onValueChange=[this]{
        audioProcessor.Rtime->setLfoSelect(mainp.mainLfoSelectSlider.getValue());
    };
    
    for(int i=0;i<4;i++){
        mainp.mainLfoSelectButtons[i].onClick=[this]{
            if(mainp.mainLfoSelectButtons[0].getToggleState()>0){ mainLfoMode_T=0; }
            if(mainp.mainLfoSelectButtons[1].getToggleState()>0){ mainLfoMode_T=1;}
            if(mainp.mainLfoSelectButtons[2].getToggleState()>0){ mainLfoMode_T=2; }
            if(mainp.mainLfoSelectButtons[3].getToggleState()>0){ mainLfoMode_T=3; }
            audioProcessor.Rtime->setLfoSelect(mainLfoMode_T);
            mainp.mainLfoSelectSlider.setValue(mainLfoMode_T);
            
        };
    }

    
    mainp.mainSHCombo.onChange=[this]{
        audioProcessor.Rtime->setLfoHold(mainp.mainSHCombo.getSelectedId());
     
    };
    


    

    for(int i=0;i<16;i++)
    {
  

         //---------------------------editSq------------------------//
      
        
        sq1.triggermultibutA[i].onClick= [this]{
            audioProcessor.trs.tr1vA[0].setValue(sq1.triggerSerial(0));
            audioProcessor.Rtime->trigger1In(sq1.TriggersK1(triggerpattern));
     
        };
      
        sq1.triggermultibutB[i].onClick= [this]{
            audioProcessor.trs.tr1vA[1].setValue(sq1.triggerSerial(1));
            audioProcessor.Rtime->trigger1In(sq1.TriggersK1(triggerpattern));
        };
        sq1.triggermultibutC[i].onClick= [this]{
            audioProcessor.trs.tr1vA[2].setValue(sq1.triggerSerial(2));
            audioProcessor.Rtime->trigger1In(sq1.TriggersK1(triggerpattern));
        };
        sq1.triggermultibutD[i].onClick= [this]{
            audioProcessor.trs.tr1vA[3].setValue(sq1.triggerSerial(3));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(3));
        };
        sq1.triggermultibutE[i].onClick= [this]{
            audioProcessor.trs.tr1vA[4].setValue(sq1.triggerSerial(4));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(4));
        };
        sq1.triggermultibutF[i].onClick= [this]{
            audioProcessor.trs.tr1vA[5].setValue(sq1.triggerSerial(5));;
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(5));
        };
        sq1.triggermultibutG[i].onClick= [this]{
            audioProcessor.trs.tr1vA[6].setValue(sq1.triggerSerial(6));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(6));
        };
        sq1.triggermultibutH[i].onClick= [this]{
            audioProcessor.trs.tr1vA[7].setValue(sq1.triggerSerial(7));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(7));
        };
        sq1.triggermultibutI[i].onClick= [this]{
            audioProcessor.trs.tr1vA[8].setValue(sq1.triggerSerial(8));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(8));
        };

        sq1.triggermultibutJ[i].onClick = [this] {
            audioProcessor.trs.tr1vA[9].setValue(sq1.triggerSerial(9));
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(9));
        };

        
        addAndMakeVisible(&sq1);
  
        sq2.triggermultibutA[i].onClick= [this]{
            audioProcessor.trs.tr2vA[0].setValue(sq2.triggerSerial(0));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(0));
        };
        
        sq2.triggermultibutB[i].onClick= [this]{
            audioProcessor.trs.tr2vA[1].setValue(sq2.triggerSerial(1));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(1));
        };
        sq2.triggermultibutC[i].onClick= [this]{
            audioProcessor.trs.tr2vA[2].setValue(sq2.triggerSerial(2));
             audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(2));
        };
        sq2.triggermultibutD[i].onClick= [this]{
            audioProcessor.trs.tr2vA[3].setValue(sq2.triggerSerial(3));
             audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(3));
        };
        
        sq2.triggermultibutE[i].onClick= [this]{
            audioProcessor.trs.tr2vA[4].setValue(sq2.triggerSerial(4));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(4));
        };
        sq2.triggermultibutF[i].onClick= [this]{
            audioProcessor.trs.tr2vA[5].setValue(sq2.triggerSerial(5));;
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(5));
        };
        sq2.triggermultibutG[i].onClick= [this]{
            audioProcessor.trs.tr2vA[6].setValue(sq2.triggerSerial(6));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(6));
        };
        sq2.triggermultibutH[i].onClick= [this]{
            audioProcessor.trs.tr2vA[7].setValue(sq2.triggerSerial(7));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(7));
        };
        sq2.triggermultibutI[i].onClick= [this]{
            audioProcessor.trs.tr2vA[8].setValue(sq2.triggerSerial(8));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(8));
        };

        sq2.triggermultibutJ[i].onClick = [this] {
            audioProcessor.trs.tr2vA[9].setValue(sq2.triggerSerial(9));;
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(9));
        };
        
        
        
        
        
        
        
        addAndMakeVisible(&sq2);
       
        
        
        sq3.triggermultibutA[i].onClick= [this]{
            audioProcessor.trs.tr3vA[0].setValue(sq3.triggerSerial(0));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(0));
        };
        
        sq3.triggermultibutB[i].onClick= [this]{
            audioProcessor.trs.tr3vA[1].setValue(sq3.triggerSerial(1));;
             audioProcessor.Rtime->trigger3In(sq3.TriggersK1(1));
        };
        sq3.triggermultibutC[i].onClick= [this]{
            audioProcessor.trs.tr3vA[2].setValue(sq3.triggerSerial(2));
             audioProcessor.Rtime->trigger3In(sq3.TriggersK1(2));
        };
        sq3.triggermultibutD[i].onClick= [this]{
            audioProcessor.trs.tr3vA[3].setValue(sq3.triggerSerial(3));
             audioProcessor.Rtime->trigger3In(sq3.TriggersK1(3));
        };
        sq3.triggermultibutE[i].onClick= [this]{
            audioProcessor.trs.tr3vA[4].setValue(sq3.triggerSerial(4));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(4));
        };
        sq3.triggermultibutF[i].onClick= [this]{
            audioProcessor.trs.tr3vA[5].setValue(sq3.triggerSerial(5));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(5));
        };
        sq3.triggermultibutG[i].onClick= [this]{
            audioProcessor.trs.tr3vA[6].setValue(sq3.triggerSerial(6));;
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(6));
        };
        sq3.triggermultibutH[i].onClick= [this]{
            audioProcessor.trs.tr3vA[7].setValue(sq3.triggerSerial(7));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(7));
        };
        sq3.triggermultibutI[i].onClick= [this]{
            audioProcessor.trs.tr3vA[8].setValue(sq3.triggerSerial(8));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(8));
        };
        sq3.triggermultibutJ[i].onClick = [this] {
            audioProcessor.trs.tr3vA[9].setValue(sq3.triggerSerial(9));
            audioProcessor.Rtime->trigger3In(sq3.TriggersK1(9));
        };
        addAndMakeVisible(&sq3);
       
        
        
        sq4.triggermultibutA[i].onClick= [this]{
            audioProcessor.trs.tr4vA[0].setValue(sq4.triggerSerial(0));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(0));
        };
        
        sq4.triggermultibutB[i].onClick= [this]{
            audioProcessor.trs.tr4vA[1].setValue(sq4.triggerSerial(1));
             audioProcessor.Rtime->trigger4In(sq4.TriggersK1(1));
        };
        sq4.triggermultibutC[i].onClick= [this]{
            audioProcessor.trs.tr4vA[2].setValue(sq4.triggerSerial(2));
             audioProcessor.Rtime->trigger4In(sq4.TriggersK1(2));
        };
        sq4.triggermultibutD[i].onClick= [this]{
            audioProcessor.trs.tr4vA[3].setValue(sq4.triggerSerial(3));
             audioProcessor.Rtime->trigger4In(sq4.TriggersK1(3));
        };
        sq4.triggermultibutE[i].onClick= [this]{
            audioProcessor.trs.tr4vA[4].setValue(sq4.triggerSerial(4));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(4));
        };
        sq4.triggermultibutF[i].onClick= [this]{
            audioProcessor.trs.tr4vA[5].setValue(sq4.triggerSerial(5));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(5));
        };
        sq4.triggermultibutG[i].onClick= [this]{
            audioProcessor.trs.tr4vA[6].setValue(sq4.triggerSerial(6));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(6));
        };
        sq4.triggermultibutH[i].onClick= [this]{
            audioProcessor.trs.tr4vA[7].setValue(sq4.triggerSerial(7));;
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(7));
        };
        sq4.triggermultibutI[i].onClick= [this]{
            audioProcessor.trs.tr4vA[8].setValue(sq4.triggerSerial(8));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(8));
        };
        sq4.triggermultibutJ[i].onClick = [this] {
            audioProcessor.trs.tr4vA[9].setValue(sq4.triggerSerial(9));
            audioProcessor.Rtime->trigger4In(sq4.TriggersK1(9));
        };
    }
  
        addAndMakeVisible(&sq4);
  
    bank_T_W=0;
    mainp.BankStart[0].onClick=[this]{
        bank_T_W=0;
    };
    mainp.BankStart[1].onClick=[this]{
        bank_T_W=1;
    };
     
    mainp.TriggerSetInit1.onClick = [this] {
        if(mainp.TriggerSetInit1.getToggleState()>0)
            audioProcessor.loadInit1Triggers();
        updateTriggerParas();
        mainp.TriggerSetInit1.setToggleState(false, juce::dontSendNotification);
    }; 
    mainp.TriggerSetInit2.onClick = [this] {
        if (mainp.TriggerSetInit2.getToggleState() > 0)
            audioProcessor.loadInit2Triggers();
        updateTriggerParas();
        mainp.TriggerSetInit2.setToggleState(false, juce::dontSendNotification);
    };

    mainp.TriggerSetInit3.onClick = [this] {
        if (mainp.TriggerSetInit3.getToggleState() > 0)
            audioProcessor.loadInit3Triggers();
        updateTriggerParas();
        mainp.TriggerSetInit3.setToggleState(false, juce::dontSendNotification);
    };

    mainp.Spset1.onChange=[this]{
          if(mainp.Spset1.getSelectedItemIndex()>0)
          audioProcessor.loadSampler1InitSet(mainp.Spset1.getSelectedItemIndex());
          updateSampleParas();
         audioProcessor.loadSample(0);
        };
  
    mainp.Spset2.onChange=[this]{
        if (mainp.Spset2.getSelectedItemIndex() > 0)
            audioProcessor.loadSampler2InitSet(mainp.Spset2.getSelectedItemIndex());
        updateSampleParas();
       audioProcessor.loadSample(1);
    };
    mainp.Spset3.onChange=[this]{
        if (mainp.Spset3.getSelectedItemIndex() > 0)
            audioProcessor.loadSampler3InitSet(mainp.Spset3.getSelectedItemIndex());
           updateSampleParas();
        audioProcessor.loadSample(2);
    };
        mainp.Spset4.onChange=[this]{
            if (mainp.Spset4.getSelectedItemIndex() > 0)
                audioProcessor.loadSampler4InitSet(mainp.Spset4.getSelectedItemIndex());
                updateSampleParas();
             audioProcessor.loadSample(3);
    };
    

    //init patterns
    triggerpattern=0;
    
    mainp.TriggerProgramm10.onValueChange=[this]{
        triggerpattern=mainp.TriggerProgramm10.getValue();
        mainp.TriggerProgrammM[triggerpattern].setToggleState(true, juce::dontSendNotification);
     //   for(int i=0;i<10;i++)
      
        sq1.Triggerpatterns(triggerpattern);
        sq2.Triggerpatterns(triggerpattern);
        sq3.Triggerpatterns(triggerpattern);
        sq4.Triggerpatterns(triggerpattern);
        
    };
    

    
    //edit patterns

    
    for (int i=0;i<10;i++){
        
        
        mainp.TriggerProgrammM[i].onClick=[this]{
            
            
            if(mainp.TriggerProgrammM[0].getToggleStateValue().getValue()){triggerpattern=0;};
            if(mainp.TriggerProgrammM[1].getToggleStateValue().getValue()){triggerpattern=1;};
            if(mainp.TriggerProgrammM[2].getToggleStateValue().getValue()){triggerpattern=2;};
            if(mainp.TriggerProgrammM[3].getToggleStateValue().getValue()){triggerpattern=3;};
            if(mainp.TriggerProgrammM[4].getToggleStateValue().getValue()){triggerpattern=4;};
            if(mainp.TriggerProgrammM[5].getToggleStateValue().getValue()){triggerpattern=5;};
            if(mainp.TriggerProgrammM[6].getToggleStateValue().getValue()){triggerpattern=6;};
            if(mainp.TriggerProgrammM[7].getToggleStateValue().getValue()){triggerpattern=7;};
            if(mainp.TriggerProgrammM[8].getToggleStateValue().getValue()){triggerpattern=8;};
            if(mainp.TriggerProgrammM[9].getToggleStateValue().getValue()){triggerpattern=9;};
            
            
            
        
            audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(triggerpattern));
            audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(triggerpattern));
            audioProcessor.Rtime->trigger3In(audioProcessor.trs.tr3IntOut(triggerpattern));
            audioProcessor.Rtime->trigger4In(audioProcessor.trs.tr4IntOut(triggerpattern));
            sq1.Triggerpatterns(triggerpattern);
            sq2.Triggerpatterns(triggerpattern);
            sq3.Triggerpatterns(triggerpattern);
            sq4.Triggerpatterns(triggerpattern);
            
            const int wpn = audioProcessor.trs.unserialTSPW1(audioProcessor.valueTreeState)[triggerpattern];
            const int wpn2 = audioProcessor.trs.unserialTSPW2(audioProcessor.valueTreeState)[triggerpattern];
            const int wpn3 = audioProcessor.trs.unserialTSPW3(audioProcessor.valueTreeState)[triggerpattern];
            const int wpn4 = audioProcessor.trs.unserialTSPW4(audioProcessor.valueTreeState)[triggerpattern];
            editsq = wpn;
            mainp.TriggerProgramm10.setValue(triggerpattern);
      
               

                    if (esp1.PatternState.getToggleState()==false) {

                        esp1.playTimeModeCombo.setSelectedId(audioProcessor.trs.unserialTSPT1(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        audioProcessor.Rtime->Setdivide1(audioProcessor.trs.unserialTSPT1(audioProcessor.valueTreeState)[triggerpattern]);
                        esp1.SampelN1.setValue(wpn);
                        esp1.SampleFileLabel.setText(
                        audioProcessor.urls.getUrl1V()[wpn].toString(), juce::dontSendNotification);
                        audioProcessor.bin->loadWaveFile(audioProcessor.urls.getUrl1V()[wpn].getValue().toString().getCharPointer(), 1);
                          
                        
                        esp1.SampelVolume.setValue(audioProcessor.trs.unserialTSPV1(audioProcessor.valueTreeState)[triggerpattern]);
                        esp1.SampelPitch.setValue(audioProcessor.trs.unserialTSPP1(audioProcessor.valueTreeState)[triggerpattern]);
                    
                        esp1.DelayModeCombo.setSelectedId(audioProcessor.trs.unserialTSPD1m(audioProcessor.valueTreeState)[triggerpattern]+1, juce::dontSendNotification);
                        esp1.DelayTime.setValue(audioProcessor.trs.unserialTSPD1t(audioProcessor.valueTreeState)[triggerpattern]);
                        esp1.DelayFeed.setValue(audioProcessor.trs.unserialTSPD1f(audioProcessor.valueTreeState)[triggerpattern]);
                        esp1.DelayLevel.setValue(audioProcessor.trs.unserialTSPD1v(audioProcessor.valueTreeState)[triggerpattern]);
                    }



                    if (esp2.PatternState.getToggleState() == false) {
                        esp2.playTimeModeCombo.setSelectedId(audioProcessor.trs.unserialTSPT2(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        audioProcessor.Rtime->Setdivide2(audioProcessor.trs.unserialTSPT2(audioProcessor.valueTreeState)[triggerpattern]);
                        esp2.SampelN1.setValue(wpn2);
                        esp2.SampleFileLabel.setText(
                        audioProcessor.urls.getUrl2V()[wpn2].toString(), juce::dontSendNotification);
                        audioProcessor.bin2->loadWaveFile(audioProcessor.urls.getUrl2V()[wpn2].getValue().toString().getCharPointer(), 1);
                        
                        esp2.SampelVolume.setValue(audioProcessor.trs.unserialTSPV2(audioProcessor.valueTreeState)[triggerpattern]);
                        esp2.SampelPitch.setValue(audioProcessor.trs.unserialTSPP2(audioProcessor.valueTreeState)[triggerpattern]);

                        esp2.DelayModeCombo.setSelectedId(audioProcessor.trs.unserialTSPD2m(audioProcessor.valueTreeState)[triggerpattern] , juce::dontSendNotification);
                        esp2.DelayTime.setValue(audioProcessor.trs.unserialTSPD2t(audioProcessor.valueTreeState)[triggerpattern]);
                        esp2.DelayFeed.setValue(audioProcessor.trs.unserialTSPD2f(audioProcessor.valueTreeState)[triggerpattern]);
                        esp2.DelayLevel.setValue(audioProcessor.trs.unserialTSPD2v(audioProcessor.valueTreeState)[triggerpattern]);
                    }

                    if (esp3.PatternState.getToggleState() == false) {
                        esp3.playTimeModeCombo.setSelectedId(audioProcessor.trs.unserialTSPT3(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        audioProcessor.Rtime->Setdivide3(audioProcessor.trs.unserialTSPT3(audioProcessor.valueTreeState)[triggerpattern]);
                        esp3.SampelN1.setValue(wpn3);
                        esp3.SampleFileLabel.setText(
                        audioProcessor.urls.getUrl3V()[wpn3].toString(), juce::dontSendNotification);
                        audioProcessor.bin3->loadWaveFile(audioProcessor.urls.getUrl3V()[wpn3].getValue().toString().getCharPointer(), 1);
                        
                        esp3.SampelVolume.setValue(audioProcessor.trs.unserialTSPV3(audioProcessor.valueTreeState)[triggerpattern]);
                        esp3.SampelPitch.setValue(audioProcessor.trs.unserialTSPP3(audioProcessor.valueTreeState)[triggerpattern]);
                        esp3.DelayModeCombo.setSelectedId(audioProcessor.trs.unserialTSPD3m(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        esp3.DelayTime.setValue(audioProcessor.trs.unserialTSPD3t(audioProcessor.valueTreeState)[triggerpattern]);
                        esp3.DelayFeed.setValue(audioProcessor.trs.unserialTSPD3f(audioProcessor.valueTreeState)[triggerpattern]);
                        esp3.DelayLevel.setValue(audioProcessor.trs.unserialTSPD3v(audioProcessor.valueTreeState)[triggerpattern]);
                    }
                    if (esp4.PatternState.getToggleState() == false) {

                        esp4.playTimeModeCombo.setSelectedId(audioProcessor.trs.unserialTSPT4(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        audioProcessor.Rtime->Setdivide4(audioProcessor.trs.unserialTSPT4(audioProcessor.valueTreeState)[triggerpattern]);
                         esp4.SampelN1.setValue(wpn4);
                        esp4.SampleFileLabel.setText(
                        audioProcessor.urls.getUrl4V()[wpn4].toString(), juce::dontSendNotification);
                        audioProcessor.bin4->loadWaveFile(audioProcessor.urls.getUrl4V()[wpn4].getValue().toString().getCharPointer(), 1);
                        
                        esp4.SampelVolume.setValue(audioProcessor.trs.unserialTSPV4(audioProcessor.valueTreeState)[triggerpattern]);
                        esp4.SampelPitch.setValue(audioProcessor.trs.unserialTSPP4(audioProcessor.valueTreeState)[triggerpattern]);
                        esp4.DelayModeCombo.setSelectedId(audioProcessor.trs.unserialTSPD4m(audioProcessor.valueTreeState)[triggerpattern] + 1, juce::dontSendNotification);
                        esp4.DelayTime.setValue(audioProcessor.trs.unserialTSPD4t(audioProcessor.valueTreeState)[triggerpattern]);
                        esp4.DelayFeed.setValue(audioProcessor.trs.unserialTSPD4f(audioProcessor.valueTreeState)[triggerpattern]);
                        esp4.DelayLevel.setValue(audioProcessor.trs.unserialTSPD4v(audioProcessor.valueTreeState)[triggerpattern]);
                    
                }
        };
        
        
        audioProcessor.Rtime->trigger1In(sq1.TriggersK1(0));
        audioProcessor.Rtime->trigger1In(sq2.TriggersK1(0));
        audioProcessor.Rtime->trigger1In(sq3.TriggersK1(0));
        audioProcessor.Rtime->trigger1In(sq4.TriggersK1(0));
    }

    
    
    
    
    
    
 //-------------------Sampler1------------------------------------
    

    
    addAndMakeVisible(&esp1);
    esp1.EngineColour=0;
   
    esp1.playTimeModeCombo.onChange=[this]{
    audioProcessor.Rtime->Setdivide1(esp1.playTimeModeCombo.getSelectedItemIndex());
    audioProcessor.sp1.mp.mTimeMode = esp1.playTimeModeCombo.getSelectedItemIndex();
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.playTimeModeCombo.getSelectedItemIndex(), triggerpattern, 7);
    };
    
    
    esp1.EngineMenuButton.onClick=[this]{
        audioProcessor.sp1.mp.mEngineMode = esp1.EngineMenuButton.getToggleState();
        esp1.EngineHideControl();
    };
    
    esp1.waveformCombo.onChange=[this]{
        audioProcessor.sp1.oscillator.waveform.setIndex(esp1.waveformCombo.getSelectedItemIndex());
    };
    esp1.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthLevel=esp1.synthLevelSlider.getValue();
    };
    esp1.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthLevelMod=esp1.synthLevelSliderMod.getValue();
    };
    esp1.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp1.oscillator.setFrequency( esp1.noteNumberSlider.getValue());
    };
    esp1.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp1.oscillator.setFrequencyMod(esp1.noteNumberSliderMod.getValue());
    };
    esp1.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthAttack= esp1.synthAttackSlider.getValue();
    };
    esp1.synthReleaseSlider.onValueChange=[this]{
          audioProcessor.sp1.mp.mSynthRelease= esp1.synthReleaseSlider.getValue();
    };
    
    
    esp1.SampelN1.onValueChange=[this]{
        
    audioProcessor.sp1.mp.mSampleN=esp1.SampelN1.getValue();
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.SampelN1.getValue(), triggerpattern,0);
    esp1.SampleFileLabel.setText (
    audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(),juce::dontSendNotification);
    if(esp1.SampelN1.isMouseButtonDown())

    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), 0);

        
    };
    
    esp1.PatternState.onClick=[this]{
     esp1.PatternState.getToggleState();
    };
    esp1.PatternStReset.onClick = [this] {
        if (esp1.PatternStReset.getToggleState() > 0)
            audioProcessor.resetPatternSt(0);

           esp1.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };
        esp1.SampelGate.onValueChange=[this]{
        audioProcessor.sp1.mp.mSqGate =esp1.SampelGate.getValue();
        audioProcessor.Rtime->setGateR(esp1.SampelGate.getValue());
        
    };
    
    esp1.SampelPitch.onValueChange=[this]{
    audioProcessor.sp1.mp.mSamplePitch=esp1.SampelPitch.getValue();
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.SampelPitch.getValue(), triggerpattern, 1);
        
    };
    esp1.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp1.mp.mSamplePitchMod=esp1.SampelPitchMod.getValue();
        
    };
    esp1.SampelStart.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampleStart=esp1.SampelStart.getValue();
        
    };
    esp1.SampelEnd.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampleEnd=esp1.SampelEnd.getValue();

    };
    esp1.SampelVolume.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampelVolume=esp1.SampelVolume.getValue();
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.SampelVolume.getValue(), triggerpattern, 2);
    };
    esp1.SampelVolumeMod.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampelVolumeMod=esp1.SampelVolumeMod.getValue();
    };
    esp1.SpAttack.setVisible(false);
    esp1.SpAttack.onValueChange=[this]{
        audioProcessor.sp1.mp.mSpAttack=esp1.SpAttack.getValue();
        
    };
    esp1.SpRelease.setVisible(false);
    esp1.SpRelease.onValueChange=[this]{
        audioProcessor.sp1.mp.mSpRelease=esp1.SpRelease.getValue();
        
    };
    esp1.EnvelopeMode.setToggleState(false, juce::dontSendNotification);
    esp1.EnvelopeMode.onClick = [this] {
        audioProcessor.sp1.setAr(esp1.EnvelopeMode.getToggleState());
        esp1.hidecontrollAr();
    };

    
    esp1.WaveSizes_t.onValueChange = [this] {
        espWsize_T[0] = esp1.WaveSizes_t.getValue();
        audioProcessor.setWSize(espWsize_T,0);
        esp1.WaveSizes[espWsize_T[0]].setToggleState(true, juce::dontSendNotification);
      
    };
    for (int i = 0; i < 3; i++) {
        esp1.WaveSizes[i].onClick = [this] {
            if (esp1.WaveSizes[0].getToggleState() == true) { espWsize_T[0] = 0; }
            if (esp1.WaveSizes[1].getToggleState() == true) { espWsize_T[0] = 1; }
            if (esp1.WaveSizes[2].getToggleState() == true) { espWsize_T[0] = 2;  }
             esp1.WaveSizes_t.setValue(espWsize_T[0]);
             audioProcessor.setWSize(espWsize_T,0);
             
        
         
        };
    }

   
    esp1.Cutoff.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setcutoff(esp1.Cutoff.getValue());
     
    };
    
    esp1.CutMod.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setCutoffMod(esp1.CutMod.getValue());

    };
    
    esp1.Resonance.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setResonance(esp1.Resonance.getValue());
    };
    
    esp1.LfoModulationSampel.onClick=[this]{
 
        esp1.hidecontrollMod();
    };
    
    esp1.playModeCombo.onChange=[this]{
       audioProcessor.sp1.mp.mSamplePlayMode = esp1.playModeCombo.getSelectedItemIndex();
       esp1.EngineHideControl();
    };
   
    esp1.FilterModeCombo.onChange=[this]{
    audioProcessor.sp1.filterDsLp->fmode.setIndex(esp1.FilterModeCombo.getSelectedItemIndex());
     

    };
   
    esp1.DelayModeCombo.onChange=[this]{
    audioProcessor.sp1.echo->dMode.setIndex(esp1.DelayModeCombo.getSelectedItemIndex());
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.DelayModeCombo.getSelectedItemIndex(), triggerpattern, 6);
    };
    esp1.DelayTime.onValueChange=[this]{
    audioProcessor.sp1.echo->setDelayTime(esp1.DelayTime.getValue());
    audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.DelayTime.getValue(), triggerpattern, 3);
    };
    esp1.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayTimeMod(esp1.DelayTimeMod.getValue());
    };
    esp1.DelayLevel.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayLevel(esp1.DelayLevel.getValue());
        audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.DelayLevel.getValue(), triggerpattern, 5);
    };
    esp1.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayLevelMod(esp1.DelayLevelMod.getValue());
    };
    esp1.DelayFeed.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayFeed(esp1.DelayFeed.getValue());
        audioProcessor.trs.serialTSPW1(audioProcessor.valueTreeState, esp1.DelayFeed.getValue(), triggerpattern, 4);
    };
    esp1.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayFeedMod(esp1.DelayFeedMod.getValue());
    };
    esp1.DelayMix.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayMix(esp1.DelayMix.getValue());
    };
    esp1.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayMixMod(esp1.DelayMixMod.getValue());
    };
    
    esp1.LfoModeCombo.onChange=[this]{
    audioProcessor.sp1.oscillator.WaveformLfo.setIndex(esp1.LfoModeCombo.getSelectedItemIndex());
      
    };
    esp1.LfoRtrModeCombo.onChange=[this]{
    audioProcessor.sp1.mp.mSpLfoRtrMode=esp1.LfoRtrModeCombo.getSelectedItemIndex();
    audioProcessor.Rtime->SetRetrigger1(esp1.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    esp1.LfoTime.onValueChange=[this]{
    audioProcessor.sp1.oscillator.setFrequencyLfo(esp1.LfoTime.getValue());
    };
    
    esp1.LfoAmp.onValueChange=[this]{
    audioProcessor.sp1.oscillator.setLfoAmp(esp1.LfoAmp.getValue());
    };
    

    
    
    //-------------------Sampler2------------------------------------
    
    
    
    addAndMakeVisible(&esp2);
    esp2.EngineColour=1;
    
    esp2.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide2(esp2.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp2.mp.mTimeMode = esp2.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.playTimeModeCombo.getSelectedItemIndex(), triggerpattern, 7);
    };
    esp2.EngineMenuButton.onClick=[this]{
        audioProcessor.sp2.mp.mEngineMode = esp2.EngineMenuButton.getToggleState();
        esp2.EngineHideControl();
    };
    
    esp2.waveformCombo.onChange=[this]{
        audioProcessor.sp2.oscillator.waveform.setIndex(esp2.waveformCombo.getSelectedItemIndex());
    };
    esp2.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthLevel=esp2.synthLevelSlider.getValue();
    };
    esp2.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthLevelMod=esp2.synthLevelSliderMod.getValue();
    };
    esp2.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequency( esp2.noteNumberSlider.getValue());
    };
    esp2.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequencyMod(esp2.noteNumberSliderMod.getValue());
    };
    esp2.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthAttack= esp2.synthAttackSlider.getValue();
    };
    esp2.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthRelease= esp2.synthReleaseSlider.getValue();
    };
 
    esp2.SampelN1.onValueChange=[this]{
        
    audioProcessor.sp2.mp.mSampleN=esp2.SampelN1.getValue();
    audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.SampelN1.getValue(), triggerpattern,0);
    esp2.SampleFileLabel.setText (
    audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), juce::dontSendNotification);
    if (esp2.SampelN1.isMouseButtonDown())
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), 1);
        
    };
    
    esp2.PatternState.onClick=[this]{
    esp2.PatternState.getToggleState();
    };
    esp2.PatternStReset.onClick = [this] {
        if (esp2.PatternStReset.getToggleState() > 0)
            audioProcessor.resetPatternSt(1);
        esp2.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

    esp2.SampelGate.onValueChange=[this]{
        audioProcessor.sp2.mp.mSqGate =esp2.SampelGate.getValue();
        audioProcessor.Rtime->setGateR2(esp2.SampelGate.getValue());
        
    };
    
    esp2.SampelPitch.onValueChange=[this]{
        audioProcessor.sp2.mp.mSamplePitch=esp2.SampelPitch.getValue();
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.SampelPitch.getValue(), triggerpattern, 1);
        
    };
    esp2.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSamplePitchMod=esp2.SampelPitchMod.getValue();
        
    };
    esp2.SampelStart.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampleStart=esp2.SampelStart.getValue();
        
    };
    esp2.SampelEnd.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampleEnd=esp2.SampelEnd.getValue();
        
    };
    esp2.SampelVolume.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampelVolume=esp2.SampelVolume.getValue();
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.SampelVolume.getValue(), triggerpattern, 2);
    };
    esp2.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampelVolumeMod=esp2.SampelVolumeMod.getValue();
    };
    
    esp2.SpAttack.onValueChange=[this]{
        audioProcessor.sp2.mp.mSpAttack=esp2.SpAttack.getValue();
        
    };
    esp2.SpRelease.onValueChange=[this]{
        audioProcessor.sp2.mp.mSpRelease=esp2.SpRelease.getValue();
        
    };
      esp2.EnvelopeMode.onClick = [this] {
        audioProcessor.sp2.setAr(esp2.EnvelopeMode.getToggleState());
        esp2.hidecontrollAr();
    };
      esp2.WaveSizes_t.onValueChange = [this] {
          espWsize_T[1] = esp2.WaveSizes_t.getValue();
         esp2.WaveSizes[espWsize_T[1]].setToggleState(true, juce::dontSendNotification);
         audioProcessor.setWSize(espWsize_T, 1);
                      };
      for (int i = 0; i < 3; i++) {
          esp2.WaveSizes[i].onClick = [this] {

              if (esp2.WaveSizes[0].getToggleState() == true) { espWsize_T[1] = 0; }
              if (esp2.WaveSizes[1].getToggleState() == true) { espWsize_T[1] = 1; }
              if (esp2.WaveSizes[2].getToggleState() == true) { espWsize_T[1] = 2; }
              esp2.WaveSizes_t.setValue(espWsize_T[1]);
              audioProcessor.setWSize(espWsize_T, 1);
          };
      }
    esp2.Cutoff.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setcutoff(esp2.Cutoff.getValue());
        
    };
    
    esp2.CutMod.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setCutoffMod(esp2.CutMod.getValue());
        
    };
    
    esp2.Resonance.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setResonance(esp2.Resonance.getValue());
    };
    
    esp2.LfoModulationSampel.onClick=[this]{
        
        esp2.hidecontrollMod();
    };
    
    esp2.playModeCombo.onChange=[this]{
        if(esp2.LfoModulationSampel.getToggleState()==false)
        { esp2.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp2.mp.mSamplePlayMode = esp2.playModeCombo.getSelectedItemIndex();
        esp2.EngineHideControl();
    };
    
    esp2.FilterModeCombo.onChange=[this]{
        audioProcessor.sp2.filterDsLp->fmode.setIndex(esp2.FilterModeCombo.getSelectedItemIndex());
        
        
    };
   
    esp2.DelayModeCombo.onChange=[this]{
        audioProcessor.sp2.echo->dMode.setIndex(esp2.DelayModeCombo.getSelectedItemIndex());
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.DelayModeCombo.getSelectedItemIndex(), triggerpattern, 6);
    };
    esp2.DelayTime.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayTime(esp2.DelayTime.getValue());
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.DelayTime.getValue(), triggerpattern, 3);
    };
    esp2.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayTimeMod(esp2.DelayTimeMod.getValue());
    };
    esp2.DelayLevel.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayLevel(esp2.DelayLevel.getValue());
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.DelayLevel.getValue(), triggerpattern, 5);
    };
    esp2.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayLevelMod(esp2.DelayLevelMod.getValue());
    };
    esp2.DelayFeed.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayFeed(esp2.DelayFeed.getValue());
        audioProcessor.trs.serialTSPW2(audioProcessor.valueTreeState, esp2.DelayFeed.getValue(), triggerpattern, 4);
    };
    esp2.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayFeedMod(esp2.DelayFeedMod.getValue());
    };
    esp2.DelayMix.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayMix(esp2.DelayMix.getValue());
    };
    esp2.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayMixMod(esp2.DelayMixMod.getValue());
    };
    
    esp2.LfoModeCombo.onChange=[this]{
        audioProcessor.sp2.oscillator.WaveformLfo.setIndex(esp2.LfoModeCombo.getSelectedItemIndex());
        
    };
    esp2.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp2.mp.mSpLfoRtrMode=esp2.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger2(esp2.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    esp2.LfoTime.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequencyLfo(esp2.LfoTime.getValue());
    };
    
    esp2.LfoAmp.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setLfoAmp(esp2.LfoAmp.getValue());
    };
    

    
    
    //-------------------Sampler3------------------------------------
    
    
    
    addAndMakeVisible(&esp3);
    esp3.EngineColour=2;
    
    esp3.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide3(esp3.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp3.mp.mTimeMode = esp3.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.playTimeModeCombo.getSelectedItemIndex(), triggerpattern, 7);
    };
    
    esp3.EngineMenuButton.onClick=[this]{
        audioProcessor.sp3.mp.mEngineMode = esp3.EngineMenuButton.getToggleState();
        esp3.EngineHideControl();
    };
    
    esp3.waveformCombo.onChange=[this]{
        audioProcessor.sp3.oscillator.waveform.setIndex(esp3.waveformCombo.getSelectedItemIndex());
    };
    esp3.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthLevel=esp3.synthLevelSlider.getValue();
    };
    esp3.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthLevelMod=esp3.synthLevelSliderMod.getValue();
    };
    esp3.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequency( esp3.noteNumberSlider.getValue());
    };
    esp3.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequencyMod(esp3.noteNumberSliderMod.getValue());
    };
    esp3.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthAttack= esp3.synthAttackSlider.getValue();
    };
    esp3.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthRelease= esp3.synthReleaseSlider.getValue();
    };
    
    
    esp3.SampelN1.onValueChange=[this]{
        
        audioProcessor.sp3.mp.mSampleN=esp3.SampelN1.getValue();
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.SampelN1.getValue(), triggerpattern,0);
        esp3.SampleFileLabel.setText (
        audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), juce::dontSendNotification);
        if (esp3.SampelN1.isMouseButtonDown()) 
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), 2);
    };
    esp3.PatternState.onClick=[this]{
       esp3.PatternState.getToggleState();
    };
    esp3.PatternStReset.onClick = [this] {
        if (esp3.PatternStReset.getToggleState() > 0)
            audioProcessor.resetPatternSt(2);
        esp3.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

    esp3.SampelGate.onValueChange=[this]{
        audioProcessor.sp3.mp.mSqGate =esp3.SampelGate.getValue();
        audioProcessor.Rtime->setGateR3(esp3.SampelGate.getValue());
        
    };
    
    esp3.SampelPitch.onValueChange=[this]{
        audioProcessor.sp3.mp.mSamplePitch=esp3.SampelPitch.getValue();
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.SampelPitch.getValue(), triggerpattern, 1);
        
    };
    esp3.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSamplePitchMod=esp3.SampelPitchMod.getValue();
       
    };
    esp3.SampelStart.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampleStart=esp3.SampelStart.getValue();
        
    };
    esp3.SampelEnd.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampleEnd=esp3.SampelEnd.getValue();
        
    };
    esp3.SampelVolume.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampelVolume=esp3.SampelVolume.getValue();
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.SampelVolume.getValue(), triggerpattern, 2);
    };
    esp3.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampelVolumeMod=esp3.SampelVolumeMod.getValue();
    };
    
    esp3.SpAttack.onValueChange=[this]{
        audioProcessor.sp3.mp.mSpAttack=esp3.SpAttack.getValue();
        
    };
    esp3.SpRelease.onValueChange=[this]{
        audioProcessor.sp3.mp.mSpRelease=esp3.SpRelease.getValue();
        
    };
    esp3.EnvelopeMode.onClick = [this] {
        audioProcessor.sp3.setAr(esp3.EnvelopeMode.getToggleState());
        esp3.hidecontrollAr();
    };
    esp3.WaveSizes_t.onValueChange = [this] {
        espWsize_T[2] = esp3.WaveSizes_t.getValue();
       esp3.WaveSizes[espWsize_T[2]].setToggleState(true, juce::dontSendNotification);
       audioProcessor.setWSize(espWsize_T, 2);
                    };
    for (int i = 0; i < 3; i++) {
        esp3.WaveSizes[i].onClick = [this] {

            if (esp3.WaveSizes[0].getToggleState() == true) { espWsize_T[2] = 0; }
            if (esp3.WaveSizes[1].getToggleState() == true) { espWsize_T[2] = 1; }
            if (esp3.WaveSizes[2].getToggleState() == true) { espWsize_T[2] = 2; }
            esp3.WaveSizes_t.setValue(espWsize_T[2]);
            audioProcessor.setWSize(espWsize_T, 2);
        };
    }
    esp3.Cutoff.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setcutoff(esp3.Cutoff.getValue());
        
    };
    
    esp3.CutMod.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setCutoffMod(esp3.CutMod.getValue());
        
    };
    
    esp3.Resonance.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setResonance(esp3.Resonance.getValue());
    };
    
    esp3.LfoModulationSampel.onClick=[this]{
        esp3.hidecontrollMod();
    };
    
    esp3.playModeCombo.onChange=[this]{
        if(esp3.LfoModulationSampel.getToggleState()==false)
        { esp3.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp3.mp.mSamplePlayMode = esp3.playModeCombo.getSelectedItemIndex();
        esp3.EngineHideControl();
    };
    
    esp3.FilterModeCombo.onChange=[this]{
        audioProcessor.sp3.filterDsLp->fmode.setIndex(esp3.FilterModeCombo.getSelectedItemIndex());
        
        
    };
   
    
    esp3.DelayModeCombo.onChange=[this]{
        audioProcessor.sp3.echo->dMode.setIndex(esp3.DelayModeCombo.getSelectedItemIndex());
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.DelayModeCombo.getSelectedItemIndex(), triggerpattern, 6);
    };
    esp3.DelayTime.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayTime(esp3.DelayTime.getValue());
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.DelayTime.getValue(), triggerpattern, 3);
    };
    esp3.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayTimeMod(esp3.DelayTimeMod.getValue());
    };
    esp3.DelayLevel.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayLevel(esp3.DelayLevel.getValue());
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.DelayLevel.getValue(), triggerpattern, 5);
    };
    esp3.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayLevelMod(esp3.DelayLevelMod.getValue());
    };
    esp3.DelayFeed.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayFeed(esp3.DelayFeed.getValue());
        audioProcessor.trs.serialTSPW3(audioProcessor.valueTreeState, esp3.DelayFeed.getValue(), triggerpattern, 4);
    };
    esp3.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayFeedMod(esp3.DelayFeedMod.getValue());
    };
    esp3.DelayMix.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayMix(esp3.DelayMix.getValue());
    };
    esp3.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayMixMod(esp3.DelayMixMod.getValue());
    };
    
    esp3.LfoModeCombo.onChange=[this]{
        audioProcessor.sp3.oscillator.WaveformLfo.setIndex(esp3.LfoModeCombo.getSelectedItemIndex());
        
    };
    esp3.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp3.mp.mSpLfoRtrMode=esp3.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger3(esp3.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    esp3.LfoTime.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequencyLfo(esp3.LfoTime.getValue());
    };
    
    esp3.LfoAmp.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setLfoAmp(esp3.LfoAmp.getValue());
    };
    


     //-------------------Sampler4------------------------------------
    
    
    
    addAndMakeVisible(&esp4);
    esp4.EngineColour=3;
    
    
    esp4.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide4(esp4.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp4.mp.mTimeMode = esp4.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.playTimeModeCombo.getSelectedItemIndex(), triggerpattern, 7);
    };
    
    esp4.EngineMenuButton.onClick=[this]{
        audioProcessor.sp4.mp.mEngineMode = esp4.EngineMenuButton.getToggleState();
        esp4.EngineHideControl();
    };
    
    esp4.waveformCombo.onChange=[this]{
        audioProcessor.sp4.oscillator.waveform.setIndex(esp4.waveformCombo.getSelectedItemIndex());
    };
    esp4.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthLevel=esp4.synthLevelSlider.getValue();
    };
    esp4.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthLevelMod=esp4.synthLevelSliderMod.getValue();
    };
    esp4.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequency( esp4.noteNumberSlider.getValue());
    };
    esp4.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequencyMod(esp4.noteNumberSliderMod.getValue());
    };
    esp4.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthAttack= esp4.synthAttackSlider.getValue();
    };
    esp4.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthRelease= esp4.synthReleaseSlider.getValue();
    };
    
    
    esp4.SampelN1.onValueChange=[this]{
        
        audioProcessor.sp4.mp.mSampleN=esp4.SampelN1.getValue();
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.SampelN1.getValue(), triggerpattern,0);
        esp4.SampleFileLabel.setText (
        audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), juce::dontSendNotification);
        if (esp4.SampelN1.isMouseButtonDown())
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), 3);
    };
    esp4.PatternState.onClick=[this]{
      esp4.PatternState.getToggleState();
    };
    esp4.PatternStReset.onClick = [this] {
        if (esp4.PatternStReset.getToggleState() > 0)
            audioProcessor.resetPatternSt(3);
        esp4.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

    esp4.SampelGate.onValueChange=[this]{
        audioProcessor.sp4.mp.mSqGate =esp4.SampelGate.getValue();
        audioProcessor.Rtime->setGateR4(esp4.SampelGate.getValue());
        
    };
    
    esp4.SampelPitch.onValueChange=[this]{
        audioProcessor.sp4.mp.mSamplePitch=esp4.SampelPitch.getValue();
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.SampelPitch.getValue(), triggerpattern, 1);
        
    };
    esp4.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSamplePitchMod=esp4.SampelPitchMod.getValue();
        
    };
    esp4.SampelStart.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampleStart=esp4.SampelStart.getValue();
        
    };
    esp4.SampelEnd.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampleEnd=esp4.SampelEnd.getValue();
        
    };
    esp4.SampelVolume.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampelVolume=esp4.SampelVolume.getValue();
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.SampelVolume.getValue(), triggerpattern, 2);
    };
    esp4.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampelVolumeMod=esp4.SampelVolumeMod.getValue();
    };
    
    esp4.SpAttack.onValueChange=[this]{
        audioProcessor.sp4.mp.mSpAttack=esp4.SpAttack.getValue();
        
    };
    esp4.SpRelease.onValueChange=[this]{
        audioProcessor.sp4.mp.mSpRelease=esp4.SpRelease.getValue();
        
    };
    esp4.EnvelopeMode.onClick = [this] {
        audioProcessor.sp4.setAr(esp4.EnvelopeMode.getToggleState());
        esp4.hidecontrollAr();
    };
    esp4.WaveSizes_t.onValueChange = [this] {
        espWsize_T[3] = esp4.WaveSizes_t.getValue();
             esp4.WaveSizes[espWsize_T[3]].setToggleState(true, juce::dontSendNotification);
             audioProcessor.setWSize(espWsize_T, 3);
                    };
    for (int i = 0; i < 3; i++) {
        esp4.WaveSizes[i].onClick = [this] {

            if (esp4.WaveSizes[0].getToggleState() == true) { espWsize_T[3] = 0; }
            if (esp4.WaveSizes[1].getToggleState() == true) { espWsize_T[3] = 1; }
            if (esp4.WaveSizes[2].getToggleState() == true) { espWsize_T[3] = 2; }
            esp4.WaveSizes_t.setValue(espWsize_T[3]);
            audioProcessor.setWSize(espWsize_T, 3);
        };
    }
    esp4.Cutoff.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setcutoff(esp4.Cutoff.getValue());
        
    };
    
    esp4.CutMod.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setCutoffMod(esp4.CutMod.getValue());
        
    };
    
    esp4.Resonance.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setResonance(esp4.Resonance.getValue());
    };
    
    esp4.LfoModulationSampel.onClick=[this]{
        esp4.hidecontrollMod();
    };
    
    esp4.playModeCombo.onChange=[this]{
        if(esp4.LfoModulationSampel.getToggleState()==false)
        { esp4.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp4.mp.mSamplePlayMode = esp4.playModeCombo.getSelectedItemIndex();
        esp4.EngineHideControl();
    };
    
    esp4.FilterModeCombo.onChange=[this]{
        audioProcessor.sp4.filterDsLp->fmode.setIndex(esp4.FilterModeCombo.getSelectedItemIndex());
        
        
    };
    
    esp4.DelayModeCombo.onChange=[this]{
        audioProcessor.sp4.echo->dMode.setIndex(esp4.DelayModeCombo.getSelectedItemIndex());
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.DelayModeCombo.getSelectedItemIndex(), triggerpattern, 6);
    };
    esp4.DelayTime.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayTime(esp4.DelayTime.getValue());
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.DelayTime.getValue(), triggerpattern, 3);
    };
    esp4.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayTimeMod(esp4.DelayTimeMod.getValue());
    };
    esp4.DelayLevel.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayLevel(esp4.DelayLevel.getValue());
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.DelayLevel.getValue(), triggerpattern, 5);
    };
    esp4.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayLevelMod(esp4.DelayLevelMod.getValue());
    };
    esp4.DelayFeed.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayFeed(esp4.DelayFeed.getValue());
        audioProcessor.trs.serialTSPW4(audioProcessor.valueTreeState, esp4.DelayFeed.getValue(), triggerpattern, 4);
    };
    esp4.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayFeedMod(esp4.DelayFeedMod.getValue());
    };
    esp4.DelayMix.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayMix(esp4.DelayMix.getValue());
    };
    esp4.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayMixMod(esp4.DelayMixMod.getValue());
    };
    
    esp4.LfoModeCombo.onChange=[this]{
        audioProcessor.sp4.oscillator.WaveformLfo.setIndex(esp4.LfoModeCombo.getSelectedItemIndex());
        
    };
    esp4.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp4.mp.mSpLfoRtrMode=esp4.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger4(esp4.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    esp4.LfoTime.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequencyLfo(esp4.LfoTime.getValue());
    };
    
    esp4.LfoAmp.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setLfoAmp(esp4.LfoAmp.getValue());
    };
    
   
    
    
    
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    fileComp.reset (new juce::FilenameComponent ("fileComp",
                                                 {},                       // current file
                                                 false,                    // can edit file name,
                                                 false,                    // is directory,
                                                 false,                    // is for saving,
                                                 {},                       // browser wildcard suffix,
                                                 {},                       // enforced suffix,
                                                 "Select file to open"));  // text when nothing selected
    addAndMakeVisible (fileComp.get());
    fileComp->addListener (this);
    fileComp.get()->setVisible(true);


    addAndMakeVisible (SampleFileLabel);
    SampleFileLabel.setText("DeadPoolAudioStation_V2", juce::dontSendNotification);

    addAndMakeVisible (SysthemInfoLabel);
    


    
   //---------------eq limit--------------------
 
    EqMode_T=0;
    
    mainp.MainEqModeTemp.onValueChange=[this]{
        EqMode_T = mainp.MainEqModeTemp.getValue();
        mainp.mainEqOnOff[EqMode_T].setToggleState(true,juce::NotificationType::sendNotification);
        
    };
    for(int i=0;i<4;i++){
        mainp.mainEqOnOff[i].onClick=[this]{
        if(mainp.mainEqOnOff[0].getToggleState()>0){ EqMode_T=0; }
        if(mainp.mainEqOnOff[1].getToggleState()>0){ EqMode_T=1;}
        if(mainp.mainEqOnOff[2].getToggleState()>0){ EqMode_T=2; }
        if(mainp.mainEqOnOff[3].getToggleState()>0){ EqMode_T=3; }
            audioProcessor.equalizer->setEqMode(EqMode_T);
            mainp.MainEqModeTemp.setValue(EqMode_T);
            
        };
    }

    mainp.mainEqBassV.onValueChange=[this]{
        audioProcessor.equalizer->setBassV(mainp.mainEqBassV.getValue());
    };

    mainp.mainEqMidV.onValueChange=[this]{
        audioProcessor.equalizer->setMidV(mainp.mainEqMidV.getValue());
    };

    mainp.mainEqHighV.onValueChange=[this]{
        audioProcessor.equalizer->setHighV(mainp.mainEqHighV.getValue());
    };
    BitCrMode_T=1;
    
    mainp.MainBitCrushModusTemp.onValueChange=[this]{
        BitCrMode_T = mainp.MainBitCrushModusTemp.getValue();
        mainp.mainBitCrushModus[BitCrMode_T].setToggleState(true,juce::NotificationType::sendNotification);
    };
    for(int i=0;i<4;i++){
        mainp.mainBitCrushModus[i].onClick=[this]{
            if(mainp.mainBitCrushModus[0].getToggleState()>0){BitCrMode_T=0;}
            if(mainp.mainBitCrushModus[1].getToggleState()>0){BitCrMode_T=1;}
            if(mainp.mainBitCrushModus[2].getToggleState()>0){BitCrMode_T=2;}
            if(mainp.mainBitCrushModus[3].getToggleState()>0){BitCrMode_T=3;}
            audioProcessor.btc->SetModus(BitCrMode_T);
            mainp.MainBitCrushModusTemp.setValue(BitCrMode_T);
            
        };
    }
    
    
    mainp.mainBitCrushBits.onValueChange=[this]{
        audioProcessor.btc->setBitNum(mainp.mainBitCrushBits.getValue());
    };
    mainp.mainBitCrushMix.onValueChange=[this]{
        audioProcessor.btc->setMix(mainp.mainBitCrushMix.getValue());
    };
    
    mainp.mainBitCrushWed_Dry.onValueChange=[this]{
        audioProcessor.btc->setDry(mainp.mainBitCrushWed_Dry.getValue());
        
    };
    LimiterMode_T=1;
    
    mainp.mainLimiterModeTemp.onValueChange=[this]{
        LimiterMode_T = mainp.mainLimiterModeTemp.getValue();
        mainp.mainLimiterMode[LimiterMode_T].setToggleState(true,juce::NotificationType::sendNotification);
    };
    for(int i=0;i<4;i++){
        mainp.mainLimiterMode[i].onClick=[this]{
            if(mainp.mainLimiterMode[0].getToggleState()>0){LimiterMode_T=0;}
            if(mainp.mainLimiterMode[1].getToggleState()>0){LimiterMode_T=1;}
            if(mainp.mainLimiterMode[2].getToggleState()>0){LimiterMode_T=2;}
            if(mainp.mainLimiterMode[3].getToggleState()>0){LimiterMode_T=3;}
            audioProcessor.limiter->setLimiterMode(LimiterMode_T);
            mainp.mainLimiterModeTemp.setValue(LimiterMode_T);
            
        };
    }
    
    mainp.mainLimiterThresh.onValueChange=[this]{
        audioProcessor.limiter->setLimiterThrsh(mainp.mainLimiterThresh.getValue());
    };
    mainp.mainLimiterGain.onValueChange=[this]{
        audioProcessor.limiter->setLimiterGain(mainp.mainLimiterGain.getValue());
    };
    
      parameters.attachControls(
                                mainp.TimeComboBox
                                
                                ,mainp.TimeSlider
                                ,mainp.SeqLenghtSlider
                                ,mainp.mainWaveSlider
                                ,mainp.mainPitchSlider
                                ,mainp.mainDelaySlider
                                ,mainp.mainVolSlider
                                ,mainp.mainLfoSelectSlider
                                ,mainp.mainLfoPitchAmpSlider
                                ,mainp.mainLfoDelayAmpSlider
                                ,mainp.mainSHCombo
                                ,mainp.SamplerEngineTemp
                                ,mainp.TriggerProgramm10
                                ,mainp.MainEqModeTemp
                                ,mainp.mainEqBassV
                                ,mainp.mainEqMidV
                                 ,mainp.mainEqHighV
                                ,mainp.MainBitCrushModusTemp
                                ,mainp.mainBitCrushBits
                                ,mainp.mainBitCrushMix
                                ,mainp.mainBitCrushWed_Dry
                                 ,mainp.mainLimiterModeTemp
                                 ,mainp.mainLimiterThresh
                                 ,mainp.mainLimiterGain
                      
      //--------------------------sp1------------------------//
                                ,esp1.waveformCombo
                                ,esp1.noteNumberSlider
                                ,esp1.noteNumberSliderMod
                                ,esp1.synthLevelSlider
                                ,esp1.synthLevelSliderMod
                                ,esp1.synthAttackSlider
                                ,esp1.synthReleaseSlider
                                ,esp1.synthReleaseSliderMod
                                ,esp1.synthModPos
                                ,esp1.EngineMenuButton
                           
                                ,esp1.playModeCombo
                                ,esp1.playTimeModeCombo
                   
                                ,esp1.SampelGate
                                ,esp1.SampelN1
                                ,esp1.PatternState
                                ,esp1.SampelPitch
                                ,esp1.SampelPitchMod
                                ,esp1.SampelStart
                                ,esp1.SampelEnd
                                ,esp1.SampelVolume
                                ,esp1.SampelVolumeMod
                                ,esp1.SpAttack
                                ,esp1.SpRelease
                                ,esp1.SpReleaseMod
                                ,esp1.EnvelopeMode
                                ,esp1.WaveSizes_t
                                ,esp1.LfoModulationSampel
                                
                                
                                      
                                ,esp1.Cutoff
                                ,esp1.CutMod
                                ,esp1.Resonance
                                ,esp1.FilterModeCombo
                                
                                
                                ,esp1.DelayModeCombo
                                ,esp1.DelayTime
                                ,esp1.DelayFeed
                                ,esp1.DelayMix
                                ,esp1.DelayLevel
                                ,esp1.DelayTimeMod
                                ,esp1.DelayFeedMod
                                ,esp1.DelayMixMod
                                ,esp1.DelayLevelMod
                                
                                
                                ,esp1.LfoModeCombo
                                ,esp1.LfoRtrModeCombo
                                ,esp1.LfoTime
                                ,esp1.LfoAmp
                                //--------------------------sp2------------------------//
                                ,esp2.waveformCombo
                                ,esp2.noteNumberSlider
                                ,esp2.noteNumberSliderMod
                                ,esp2.synthLevelSlider
                                ,esp2.synthLevelSliderMod
                                ,esp2.synthAttackSlider
                                ,esp2.synthReleaseSlider
                                ,esp2.synthReleaseSliderMod
                                ,esp2.synthModPos
                                ,esp2.EngineMenuButton
                                
                                ,esp2.playModeCombo
                                ,esp2.playTimeModeCombo
                                
                                ,esp2.SampelGate
                                ,esp2.SampelN1
                                ,esp2.PatternState
                                ,esp2.SampelPitch
                                ,esp2.SampelPitchMod
                                ,esp2.SampelStart
                                ,esp2.SampelEnd
                                ,esp2.SampelVolume
                                ,esp2.SampelVolumeMod
                                ,esp2.SpAttack
                                ,esp2.SpRelease
                               ,esp2.SpReleaseMod
                               ,esp2.EnvelopeMode
                                ,esp2.WaveSizes_t
                                ,esp2.LfoModulationSampel
                                
                                
                                
                                ,esp2.Cutoff
                                ,esp2.CutMod
                                ,esp2.Resonance
                                ,esp2.FilterModeCombo
                                
                                
                                ,esp2.DelayModeCombo
                                ,esp2.DelayTime
                                ,esp2.DelayFeed
                                ,esp2.DelayMix
                                ,esp2.DelayLevel
                                ,esp2.DelayTimeMod
                                ,esp2.DelayFeedMod
                                ,esp2.DelayMixMod
                                ,esp2.DelayLevelMod
                               
                                
                                ,esp2.LfoModeCombo
                                ,esp2.LfoRtrModeCombo
                                ,esp2.LfoTime
                                ,esp2.LfoAmp
                                //--------------------------sp3------------------------//
                                ,esp3.waveformCombo
                                ,esp3.noteNumberSlider
                                ,esp3.noteNumberSliderMod
                                ,esp3.synthLevelSlider
                                ,esp3.synthLevelSliderMod
                                ,esp3.synthAttackSlider
                                ,esp3.synthReleaseSlider
                                ,esp3.synthReleaseSliderMod
                                ,esp3.synthModPos
                                ,esp3.EngineMenuButton
                                
                                ,esp3.playModeCombo
                                ,esp3.playTimeModeCombo
                                
                                ,esp3.SampelGate
                                ,esp3.SampelN1
                                ,esp3.PatternState
                                ,esp3.SampelPitch
                                ,esp3.SampelPitchMod
                                ,esp3.SampelStart
                                ,esp3.SampelEnd
                                ,esp3.SampelVolume
                                ,esp3.SampelVolumeMod
                                ,esp3.SpAttack
                                ,esp3.SpRelease
                                ,esp3.SpReleaseMod
                                ,esp3.EnvelopeMode
                                , esp3.WaveSizes_t
                                ,esp3.LfoModulationSampel
                                
                                
                                
                                ,esp3.Cutoff
                                ,esp3.CutMod
                                ,esp3.Resonance
                                ,esp3.FilterModeCombo
                                
                                
                                ,esp3.DelayModeCombo
                                ,esp3.DelayTime
                                ,esp3.DelayFeed
                                ,esp3.DelayMix
                                ,esp3.DelayLevel
                                ,esp3.DelayTimeMod
                                ,esp3.DelayFeedMod
                                ,esp3.DelayMixMod
                                ,esp3.DelayLevelMod
                               
                                
                                ,esp3.LfoModeCombo
                                ,esp3.LfoRtrModeCombo
                                ,esp3.LfoTime
                                ,esp3.LfoAmp

                                 //--------------------------sp4------------------------//
                                ,esp4.waveformCombo
                                ,esp4.noteNumberSlider
                                ,esp4.noteNumberSliderMod
                                ,esp4.synthLevelSlider
                                ,esp4.synthLevelSliderMod
                                ,esp4.synthAttackSlider
                                ,esp4.synthReleaseSlider
                                ,esp4.synthReleaseSliderMod
                                ,esp4.synthModPos
                                ,esp4.EngineMenuButton
                                
                                ,esp4.playModeCombo
                                ,esp4.playTimeModeCombo
                                
                                ,esp4.SampelGate
                                ,esp4.SampelN1
                                ,esp4.PatternState
                                ,esp4.SampelPitch
                                ,esp4.SampelPitchMod
                                ,esp4.SampelStart
                                ,esp4.SampelEnd
                                ,esp4.SampelVolume
                                ,esp4.SampelVolumeMod
                                ,esp4.SpAttack
                                ,esp4.SpRelease
                                ,esp4.SpReleaseMod
                                ,esp4.EnvelopeMode
                                ,esp4.WaveSizes_t
                                ,esp4.LfoModulationSampel
                                
                                
                                
                                ,esp4.Cutoff
                                ,esp4.CutMod
                                ,esp4.Resonance
                                ,esp4.FilterModeCombo
                                
                                
                                ,esp4.DelayModeCombo
                                ,esp4.DelayTime
                                ,esp4.DelayFeed
                                ,esp4.DelayMix
                                ,esp4.DelayLevel
                                ,esp4.DelayTimeMod
                                ,esp4.DelayFeedMod
                                ,esp4.DelayMixMod
                                ,esp4.DelayLevelMod
                               
                                
                                ,esp4.LfoModeCombo
                                ,esp4.LfoRtrModeCombo
                                ,esp4.LfoTime
                                ,esp4.LfoAmp
         
                                );
     

    timerCallback();
   startTimer(10);
    
    mainp.timeLabel.setText("Bank Content  is in ->"
     + audioProcessor.urls.getSystemNameInfo()
     + "..right? else Download & copy ----->", juce::dontSendNotification);
    
    auto* hyperlink = (new HyperlinkButton("Download Content",
        { "https://github.com/rogerhug/DeadPool-V02_juce" }));
        
    addAndMakeVisible(hyperlink);
   
   
    hyperlink->setBounds(480,10, 200, 22);
   
    
    //--------------init-------
    audioProcessor.sp1.echo->setDelayMix(esp1.DelayMix.getValue()*(mainp.mainDelaySlider.getValue()));
    audioProcessor.sp2.echo->setDelayMix(esp2.DelayMix.getValue()*(mainp.mainDelaySlider.getValue()));
    audioProcessor.sp3.echo->setDelayMix(esp3.DelayMix.getValue()*(mainp.mainDelaySlider.getValue()));
    audioProcessor.sp4.echo->setDelayMix(esp4.DelayMix.getValue()*(mainp.mainDelaySlider.getValue()));
   
   //  mainp.timeLabel.setText(dbt, juce::dontSendNotification);


    addAndMakeVisible(undoButton);
    addAndMakeVisible(redoButton);
    undoButton.addListener(this);
    redoButton.addListener(this);



    


    // clear the undo manager now, because this is our starting point
    // (Setting up the ValueTree will have added many actions to the history, which 
    // aren't actually supposed to be undoable.)
    audioProcessor.undoManager.clearUndoHistory();


    setSize (720, 625);
}


//==============================================================================
void NewProjectAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
  //  g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void NewProjectAudioProcessorEditor::resized()
{
     mainp.setBounds(10,10,700,610);
     sq1.setBounds(70,110,600,30);
     sq2.setBounds(70,140,600,30);
     sq3.setBounds(70,170,600,30);
     sq4.setBounds(70,200,600,30);
     esp1.setBounds(10,370,700,150);
     esp2.setBounds(10,370,700,150);
     esp3.setBounds(10,370,700,150);
     esp4.setBounds(10,370,700,150);
     fileComp.get()->setBounds(0,250,150,100);
  //  SysthemInfoLabel.setBounds (0, 20, 70, 10);
  //  SampleFileLabel.setBounds (250, 220, 180, 40);
   
    undoButton.setBounds(10, 70,50,30);
    redoButton.setBounds(60, 70, 50, 30);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void NewProjectAudioProcessorEditor::timerCallback() {
 /*
    
 // sprintf(dbtx,"%i" , esp1.SampelN1.isMouseButtonDown());
  //  const int wpn = audioProcessor.trs.unserialTSPW1(audioProcessor.valueTreeState)[triggerpattern];
      const int x = 1 + audioProcessor.sp1.mp.mSampleN;
    sprintf(dbt, "|para1| %f ||  para1| %i",
        audioProcessor.sp1.getDataD()
        , espWsize_T[0]
    );
  
  
    mainp.timeLabel.setText(dbt, juce::dontSendNotification);
   
    */
    if(audioProcessor.trupdate== true){
        updateTriggerParas();
        updateSampleParas();
        
    
    
    }
    
    audioProcessor.undoManager.beginNewTransaction();

    undoButton.setEnabled(audioProcessor.undoManager.canUndo());
    redoButton.setEnabled(audioProcessor.undoManager.canRedo());
}

void NewProjectAudioProcessorEditor::labelTextChanged(juce::Label *labelThatHasChanged) { 

}

void NewProjectAudioProcessorEditor::buttonClicked(juce::Button *b) { 
    if (b == &undoButton)
    {
        audioProcessor.undoManager.undo();
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), 0);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), 1);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), 2);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), 3);
    }
    else if (b == &redoButton)
    {
        audioProcessor.undoManager.redo();
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), 0);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), 1);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), 2);
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), 3);
    }
}

void NewProjectAudioProcessorEditor::updateTriggerParas() { 
    
     
    
    
       


     for(int i=0;i<16;i++)
     {
     
     
     
    
     
     sq1.triggermultibutA[i].setToggleState(audioProcessor.trs.tr1IntOut(0)[i], juce::dontSendNotification);
     sq1.triggermultibutB[i].setToggleState(audioProcessor.trs.tr1IntOut(1)[i], juce::dontSendNotification);
     sq1.triggermultibutC[i].setToggleState(audioProcessor.trs.tr1IntOut(2)[i], juce::dontSendNotification);
     sq1.triggermultibutD[i].setToggleState(audioProcessor.trs.tr1IntOut(3)[i], juce::dontSendNotification);
     sq1.triggermultibutE[i].setToggleState(audioProcessor.trs.tr1IntOut(4)[i], juce::dontSendNotification);
     sq1.triggermultibutF[i].setToggleState(audioProcessor.trs.tr1IntOut(5)[i], juce::dontSendNotification);
     sq1.triggermultibutG[i].setToggleState(audioProcessor.trs.tr1IntOut(6)[i], juce::dontSendNotification);
     sq1.triggermultibutH[i].setToggleState(audioProcessor.trs.tr1IntOut(7)[i], juce::dontSendNotification);
     sq1.triggermultibutI[i].setToggleState(audioProcessor.trs.tr1IntOut(8)[i], juce::dontSendNotification);
     sq1.triggermultibutJ[i].setToggleState(audioProcessor.trs.tr1IntOut(9)[i], juce::dontSendNotification);

    
  
     
     sq2.triggermultibutA[i].setToggleState(audioProcessor.trs.tr2IntOut(0)[i], juce::dontSendNotification);
     sq2.triggermultibutB[i].setToggleState(audioProcessor.trs.tr2IntOut(1)[i], juce::dontSendNotification);
     sq2.triggermultibutC[i].setToggleState(audioProcessor.trs.tr2IntOut(2)[i], juce::dontSendNotification);
     sq2.triggermultibutD[i].setToggleState(audioProcessor.trs.tr2IntOut(3)[i], juce::dontSendNotification);
     sq2.triggermultibutE[i].setToggleState(audioProcessor.trs.tr2IntOut(4)[i], juce::dontSendNotification);
     sq2.triggermultibutF[i].setToggleState(audioProcessor.trs.tr2IntOut(5)[i], juce::dontSendNotification);
     sq2.triggermultibutG[i].setToggleState(audioProcessor.trs.tr2IntOut(6)[i], juce::dontSendNotification);
     sq2.triggermultibutH[i].setToggleState(audioProcessor.trs.tr2IntOut(7)[i], juce::dontSendNotification);
     sq2.triggermultibutI[i].setToggleState(audioProcessor.trs.tr2IntOut(8)[i], juce::dontSendNotification);
     sq2.triggermultibutJ[i].setToggleState(audioProcessor.trs.tr2IntOut(9)[i], juce::dontSendNotification);
     
     sq3.triggermultibutA[i].setToggleState(audioProcessor.trs.tr3IntOut(0)[i], juce::dontSendNotification);
     sq3.triggermultibutB[i].setToggleState(audioProcessor.trs.tr3IntOut(1)[i], juce::dontSendNotification);
     sq3.triggermultibutC[i].setToggleState(audioProcessor.trs.tr3IntOut(2)[i], juce::dontSendNotification);
     sq3.triggermultibutD[i].setToggleState(audioProcessor.trs.tr3IntOut(3)[i], juce::dontSendNotification);
     sq3.triggermultibutE[i].setToggleState(audioProcessor.trs.tr3IntOut(4)[i], juce::dontSendNotification);
     sq3.triggermultibutF[i].setToggleState(audioProcessor.trs.tr3IntOut(5)[i], juce::dontSendNotification);
     sq3.triggermultibutG[i].setToggleState(audioProcessor.trs.tr3IntOut(6)[i], juce::dontSendNotification);
     sq3.triggermultibutH[i].setToggleState(audioProcessor.trs.tr3IntOut(7)[i], juce::dontSendNotification);
     sq3.triggermultibutI[i].setToggleState(audioProcessor.trs.tr3IntOut(8)[i], juce::dontSendNotification);
     sq3.triggermultibutJ[i].setToggleState(audioProcessor.trs.tr3IntOut(9)[i], juce::dontSendNotification);
         
     sq4.triggermultibutA[i].setToggleState(audioProcessor.trs.tr4IntOut(0)[i], juce::dontSendNotification);
     sq4.triggermultibutB[i].setToggleState(audioProcessor.trs.tr4IntOut(1)[i], juce::dontSendNotification);
     sq4.triggermultibutC[i].setToggleState(audioProcessor.trs.tr4IntOut(2)[i], juce::dontSendNotification);
     sq4.triggermultibutD[i].setToggleState(audioProcessor.trs.tr4IntOut(3)[i], juce::dontSendNotification);
     sq4.triggermultibutE[i].setToggleState(audioProcessor.trs.tr4IntOut(4)[i], juce::dontSendNotification);
     sq4.triggermultibutF[i].setToggleState(audioProcessor.trs.tr4IntOut(5)[i], juce::dontSendNotification);
     sq4.triggermultibutG[i].setToggleState(audioProcessor.trs.tr4IntOut(6)[i], juce::dontSendNotification);
     sq4.triggermultibutH[i].setToggleState(audioProcessor.trs.tr4IntOut(7)[i], juce::dontSendNotification);
     sq4.triggermultibutI[i].setToggleState(audioProcessor.trs.tr4IntOut(8)[i], juce::dontSendNotification);
     sq4.triggermultibutJ[i].setToggleState(audioProcessor.trs.tr4IntOut(9)[i], juce::dontSendNotification);
     }
 
     audioProcessor.Rtime->trigger1In(audioProcessor.trs.tr1IntOut(triggerpattern));
     audioProcessor.Rtime->trigger2In(audioProcessor.trs.tr2IntOut(triggerpattern));
     audioProcessor.Rtime->trigger3In(audioProcessor.trs.tr3IntOut(triggerpattern));
     audioProcessor.Rtime->trigger4In(audioProcessor.trs.tr4IntOut(triggerpattern));
     

     audioProcessor.trupdate=false;
}

void NewProjectAudioProcessorEditor::updateSampleParas()
{
    
    esp1.SampleFileLabel.setText(
        audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), juce::dontSendNotification);
    esp2.SampleFileLabel.setText(
        audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), juce::dontSendNotification);
    esp3.SampleFileLabel.setText(
        audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), juce::dontSendNotification);
    esp4.SampleFileLabel.setText(
        audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), juce::dontSendNotification);
    audioProcessor.loadSample(0);
    audioProcessor.loadSample(1);
    audioProcessor.loadSample(2);
    audioProcessor.loadSample(3);
}






