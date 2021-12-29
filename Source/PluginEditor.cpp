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
NewProjectAudioProcessorEditor::NewProjectAudioProcessorEditor(NewProjectAudioProcessor& p)
    : AudioProcessorEditor(&p)
    , audioProcessor(p)
    , undoButton(TRANS("Undo"))
    , redoButton(TRANS("Redo"))

    , parameters(p.parameters)
    //,urls(p.urls)
{

    //---------------tempSliders->buttons

    for (int i = 0; i < 8; i++)
    {
        espWsize_T[i] = 0;
    }
    //*********************************************************mastermenu****************************************
 
   
   engineSwitch[10] = false;
   
  
   audioProcessor.stepperWave.MidiCCcombo.onChange = [this] {
       audioProcessor.setMidiCC(audioProcessor.stepperWave.MidiCCcombo.getSelectedId());
   };
  
    addAndMakeVisible(&MasterMenu);


    for (int i = 0; i < 5; i++) {
        MasterMenu.MainMenuButtons[i].onClick = [this] {
            if (MasterMenu.MainMenuButtons[0].getToggleState() == true) {//---------------triggers----------

      
                link = false;
          
                engineSwitch[10] = false;
                    
                

                audioProcessor.stepperWave.hideMix(0, engineSwitch);

                sq1.setVisible(true);
                sq2.setVisible(true);
                sq3.setVisible(true);
                sq4.setVisible(true);
                sq5.setVisible(true);
                sq6.setVisible(true);
                sq7.setVisible(true);
      
               
            }
            if (MasterMenu.MainMenuButtons[1].getToggleState() == true) {//---------------steppper-----------
              
                link = false;
                engineSwitch[10] = false;
                sq1.setVisible(false);
                sq2.setVisible(false);
                sq3.setVisible(false);
                sq4.setVisible(false);
                sq5.setVisible(false);
                sq6.setVisible(false);
                sq7.setVisible(false);
                audioProcessor.stepperWave.hideMix(1, engineSwitch);
        
             
            }
            if (MasterMenu.MainMenuButtons[2].getToggleState() == true) {//---------------mixer-------------

                link = false;
                engineSwitch[10] = true;
                sq1.setVisible(false);
                sq2.setVisible(false);
                sq3.setVisible(false);
                sq4.setVisible(false);
                sq5.setVisible(false);
                sq6.setVisible(false);
                sq7.setVisible(false);
                audioProcessor.stepperWave.hideMix(2, engineSwitch);
       
            }
            if (MasterMenu.MainMenuButtons[3].getToggleState() == true) {//----------------loader-----------

                link = false;
                engineSwitch[10] = false;
                sq1.setVisible(false);
                sq2.setVisible(false);
                sq3.setVisible(false);
                sq4.setVisible(false);
                sq5.setVisible(false);
                sq6.setVisible(false);
                sq7.setVisible(false);
               audioProcessor.stepperWave.hideMix(3, engineSwitch);
         
            }
            if (MasterMenu.MainMenuButtons[4].getToggleState() == true) {//----------------util-----------

                link = true;
                engineSwitch[10] = false;
                sq1.setVisible(false);
                sq2.setVisible(false);
                sq3.setVisible(false);
                sq4.setVisible(false);
                sq5.setVisible(false);
                sq6.setVisible(false);
                sq7.setVisible(false);
                audioProcessor.stepperWave.hideMix(4, engineSwitch);
         
            }


        };


    }


    //************************************************************************************
    //----------------------------------------------main paras-------------------------
    //************************************************************************************
    addAndMakeVisible(audioProcessor.mainp);

   
    addAndMakeVisible(audioProcessor.stepperWave);
   
    //************************************************************************************
    ///************************************************mixer****************************
    //************************************************************************************

    for (int sp = 0; sp< 8; sp++) {
        audioProcessor.stepperWave.MainMixVolumeSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixVolumeSliders[s].isMouseButtonDown() == true) {

                   audioProcessor.esp1.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[0].getValue());
                    audioProcessor.esp2.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[1].getValue());
                    audioProcessor.esp3.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[2].getValue());
                    audioProcessor.esp4.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[3].getValue());
                    audioProcessor.esp5.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[4].getValue());
                    audioProcessor.esp6.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[5].getValue());
                    audioProcessor.esp7.synthLevelSlider.setValue(audioProcessor.stepperWave.MainMixVolumeSliders[6].getValue());

                }

        };

        audioProcessor.stepperWave.MainMixVolumeAudioSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixVolumeAudioSliders[s].isMouseButtonDown() == true) {

                   audioProcessor.esp1.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[0].getValue());
                    sq1.setWaveVolumeSt(audioProcessor.esp1.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
                    sq1.serialWaveVolumeParas(audioProcessor.valueTreeState, 0);
                
                    audioProcessor.esp2.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[1].getValue());
                    sq2.setWaveVolumeSt(audioProcessor.esp2.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
                    sq2.serialWaveVolumeParas(audioProcessor.valueTreeState, 1);
                
                    audioProcessor.esp3.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[2].getValue());
                    sq3.setWaveVolumeSt(audioProcessor.esp3.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
                    sq3.serialWaveVolumeParas(audioProcessor.valueTreeState, 2);
                
                    audioProcessor.esp4.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[3].getValue());
                    sq4.setWaveVolumeSt(audioProcessor.esp4.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
                    sq4.serialWaveVolumeParas(audioProcessor.valueTreeState, 3);
                
                    audioProcessor.esp5.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[4].getValue());
                    sq5.setWaveVolumeSt(audioProcessor.esp5.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
                    sq5.serialWaveVolumeParas(audioProcessor.valueTreeState, 4);
                
                    audioProcessor.esp6.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[5].getValue());
                    sq6.setWaveVolumeSt(audioProcessor.esp6.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
                    sq6.serialWaveVolumeParas(audioProcessor.valueTreeState, 5);
                
                    audioProcessor.esp7.SampelVolume.setValue(audioProcessor.stepperWave.MainMixVolumeAudioSliders[6].getValue());
                    sq7.setWaveVolumeSt(audioProcessor.esp7.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
                    sq7.serialWaveVolumeParas(audioProcessor.valueTreeState, 6);
                
                }

        };
    
        audioProcessor.stepperWave.MainMixWaveSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++){}
                
                if (audioProcessor.stepperWave.MainMixWaveSliders[0].isMouseButtonDown() == true) {
              audioProcessor.esp1.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[0].getValue());
             //  audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), 0);
               sq1.setWaveNr(audioProcessor.esp1.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
               sq1.serialWaveParas(audioProcessor.valueTreeState, 0);
         
                }
            if (audioProcessor.stepperWave.MainMixWaveSliders[1].isMouseButtonDown() == true) {
                audioProcessor.esp2.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[1].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), 1);
                sq2.setWaveNr(audioProcessor.esp2.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
                sq2.serialWaveParas(audioProcessor.valueTreeState, 1);
            }
            if (audioProcessor.stepperWave.MainMixWaveSliders[2].isMouseButtonDown() == true) {
                audioProcessor.esp3.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[2].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), 2);
                sq3.setWaveNr(audioProcessor.esp3.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
                sq3.serialWaveParas(audioProcessor.valueTreeState, 2);
            }
            if (audioProcessor.stepperWave.MainMixWaveSliders[3].isMouseButtonDown() == true) {
                audioProcessor.esp4.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[3].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), 3);
                sq4.setWaveNr(audioProcessor.esp4.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
                sq4.serialWaveParas(audioProcessor.valueTreeState, 3);
            }
            if (audioProcessor.stepperWave.MainMixWaveSliders[4].isMouseButtonDown() == true) {
                audioProcessor.esp5.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[4].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl5V()[audioProcessor.sp5.mp.mSampleN].toString(), 4);
                sq5.setWaveNr(audioProcessor.esp5.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
                sq5.serialWaveParas(audioProcessor.valueTreeState, 4);
            }
            if (audioProcessor.stepperWave.MainMixWaveSliders[5].isMouseButtonDown() == true) {
              
                audioProcessor.esp6.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[5].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl6V()[audioProcessor.sp6.mp.mSampleN].toString(), 5);
                sq6.setWaveNr(audioProcessor.esp6.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
                sq6.serialWaveParas(audioProcessor.valueTreeState, 5);
            }
            if (audioProcessor.stepperWave.MainMixWaveSliders[6].isMouseButtonDown() == true) {
                audioProcessor.esp7.SampelN1.setValue(audioProcessor.stepperWave.MainMixWaveSliders[6].getValue());
            //    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl7V()[audioProcessor.sp7.mp.mSampleN].toString(), 6);
                sq7.setWaveNr(audioProcessor.esp7.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
                sq7.serialWaveParas(audioProcessor.valueTreeState, 6);
            }
     
        };
 
        audioProcessor.stepperWave.MainMixPitchSynthSliders[sp].onValueChange = [this] {
         
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixPitchSynthSliders[s].isMouseButtonDown() == true) {
                   audioProcessor.esp1.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[0].getValue());
                     audioProcessor.esp2.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[1].getValue());
                    audioProcessor.esp3.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[2].getValue());
                    audioProcessor.esp4.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[3].getValue());
                    audioProcessor.esp5.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[4].getValue());
                    audioProcessor.esp6.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[5].getValue());
                    audioProcessor.esp7.noteNumberSlider.setValue(audioProcessor.stepperWave.MainMixPitchSynthSliders[6].getValue());
                }


        };
        audioProcessor.stepperWave.MainMixPitchAudioSliders[sp].onValueChange = [this] {
            
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixPitchAudioSliders[s].isMouseButtonDown() == true) {
                   audioProcessor.esp1.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[0].getValue());
                    sq1.setPitchSt(audioProcessor.esp1.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
                    sq1.serialPitchParas(audioProcessor.valueTreeState, 0);

                    audioProcessor.esp2.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[1].getValue());
                    sq2.setPitchSt(audioProcessor.esp2.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
                    sq2.serialPitchParas(audioProcessor.valueTreeState, 1);

                    audioProcessor.esp3.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[2].getValue());
                    sq3.setPitchSt(audioProcessor.esp3.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
                    sq3.serialPitchParas(audioProcessor.valueTreeState, 2);

                    audioProcessor.esp4.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[3].getValue());
                    sq4.setPitchSt(audioProcessor.esp4.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
                    sq4.serialPitchParas(audioProcessor.valueTreeState, 3);

                    audioProcessor.esp5.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[4].getValue());
                    sq5.setPitchSt(audioProcessor.esp5.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
                    sq5.serialPitchParas(audioProcessor.valueTreeState, 4);

                    audioProcessor.esp6.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[5].getValue());
                    sq6.setPitchSt(audioProcessor.esp6.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
                    sq6.serialPitchParas(audioProcessor.valueTreeState, 5);

                    audioProcessor.esp7.SampelPitch.setValue(audioProcessor.stepperWave.MainMixPitchAudioSliders[6].getValue());
                    sq7.setPitchSt(audioProcessor.esp7.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
                    sq7.serialPitchParas(audioProcessor.valueTreeState, 6);

                }

        };
        audioProcessor.stepperWave.MainMixGateSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixGateSliders[s].isMouseButtonDown() == true)
           audioProcessor.esp1.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[0].getValue());
            audioProcessor.esp2.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[1].getValue());
            audioProcessor.esp3.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[2].getValue());
            audioProcessor.esp4.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[3].getValue());
            audioProcessor.esp5.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[4].getValue());
            audioProcessor.esp6.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[5].getValue());
            audioProcessor.esp7.SampelGate.setValue(audioProcessor.stepperWave.MainMixGateSliders[6].getValue());
          



        };

        audioProcessor.stepperWave.MainMixDelayTimeSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixDelayTimeSliders[s].isMouseButtonDown() == true) {
                    
                   audioProcessor.esp1.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[0].getValue());
                    sq1.setDelayTSt(audioProcessor.esp1.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
                    sq1.serialDelayTParas(audioProcessor.valueTreeState, 0);
                    audioProcessor.esp2.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[1].getValue());
                    sq2.setDelayTSt(audioProcessor.esp2.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
                    sq2.serialDelayTParas(audioProcessor.valueTreeState, 1);
                    audioProcessor.esp3.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[2].getValue());
                    sq3.setDelayTSt(audioProcessor.esp3.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
                    sq3.serialDelayTParas(audioProcessor.valueTreeState, 2);
                    audioProcessor.esp4.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[3].getValue());
                    sq4.setDelayTSt(audioProcessor.esp4.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
                    sq4.serialDelayTParas(audioProcessor.valueTreeState, 3);
                    audioProcessor.esp5.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[4].getValue());
                    sq5.setDelayTSt(audioProcessor.esp6.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
                    sq5.serialDelayTParas(audioProcessor.valueTreeState, 4);
                    audioProcessor.esp6.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[5].getValue());
                    sq6.setDelayTSt(audioProcessor.esp6.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
                    sq6.serialDelayTParas(audioProcessor.valueTreeState, 5);
                    audioProcessor.esp7.DelayTime.setValue(audioProcessor.stepperWave.MainMixDelayTimeSliders[6].getValue());
                    sq7.setDelayTSt(audioProcessor.esp7.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
                    sq7.serialDelayTParas(audioProcessor.valueTreeState, 6);
                }



        };

        audioProcessor.stepperWave.MainMixDelayFeedSliders[sp].onValueChange = [this] {
            for (int s = 0; s < 8; s++)
                if (audioProcessor.stepperWave.MainMixDelayFeedSliders[s].isMouseButtonDown() == true) {
                   audioProcessor.esp1.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[0].getValue());
                    sq1.setDelayFSt(audioProcessor.esp1.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
                    sq1.serialDelayFParas(audioProcessor.valueTreeState, 0);
                    audioProcessor.esp2.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[1].getValue());
                    sq2.setDelayFSt(audioProcessor.esp2.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
                    sq2.serialDelayFParas(audioProcessor.valueTreeState, 1);
                    audioProcessor.esp3.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[2].getValue());
                    sq3.setDelayFSt(audioProcessor.esp3.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
                    sq3.serialDelayFParas(audioProcessor.valueTreeState, 2);
                    audioProcessor.esp4.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[3].getValue());
                    sq4.setDelayFSt(audioProcessor.esp4.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
                    sq4.serialDelayFParas(audioProcessor.valueTreeState, 3);
                    audioProcessor.esp5.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[4].getValue());
                    sq5.setDelayFSt(audioProcessor.esp5.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
                    sq5.serialDelayFParas(audioProcessor.valueTreeState, 4);
                    audioProcessor.esp6.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[5].getValue());
                    sq6.setDelayFSt(audioProcessor.esp6.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
                    sq6.serialDelayFParas(audioProcessor.valueTreeState, 5);
                    audioProcessor.esp7.DelayFeed.setValue(audioProcessor.stepperWave.MainMixDelayFeedSliders[6].getValue());
                    sq7.setDelayFSt(audioProcessor.esp7.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
                    sq7.serialDelayFParas(audioProcessor.valueTreeState, 6);

                }




        };

    }
    audioProcessor.stepperWave.MainMixSynt1hWaveCombo.onChange = [this] {
       audioProcessor.esp1.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt1hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt2hWaveCombo.onChange = [this] {
        audioProcessor.esp2.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt2hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt3hWaveCombo.onChange = [this] {
        audioProcessor.esp3.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt3hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt4hWaveCombo.onChange = [this] {
        audioProcessor.esp4.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt4hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt5hWaveCombo.onChange = [this] {
        audioProcessor.esp5.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt5hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt6hWaveCombo.onChange = [this] {
        audioProcessor.esp6.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt6hWaveCombo.getSelectedId());
    };
    audioProcessor.stepperWave.MainMixSynt7hWaveCombo.onChange = [this] {
        audioProcessor.esp7.waveformCombo.setSelectedId(audioProcessor.stepperWave.MainMixSynt7hWaveCombo.getSelectedId());
    };
   

   
    //*******************************************************************************
   //*****************************************************EngineSelect*/********************
    //************************************************************************************
    for (int i = 0; i < 7; i++) {
        audioProcessor.mainp.SamplerEngine[i].onClick = [this] {
            audioProcessor.mainp.SamplerEngineTemp.setValue(audioProcessor.mainp.MainSamplerNr());
            
        };
    
        audioProcessor.mainp.SamplerEngineTemp.onValueChange = [this] {
        hideControlMain(audioProcessor.mainp.SamplerEngineTemp.getValue());
        audioProcessor.stepperWave.setStepper(audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.TriggerProgramm10.getValue());
        audioProcessor.stepperWave.changeMode(audioProcessor.mainp.SamplerEngineTemp.getValue());
   

       
    };
}   
    //********************************************************************************************
    //******************************************************Main_Paras*****************************
    //********************************************************************************************
   // audioProcessor.mainp.mainPlayModeCombo.setSelectedId(1);
    audioProcessor.mainp.mainPlayModeCombo.onChange = [this]
    {
        if (audioProcessor.mainp.mainPlayModeCombo.getSelectedId() > 1)
        {

           audioProcessor.esp1.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp2.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp3.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp4.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp5.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp6.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);
            audioProcessor.esp7.playModeCombo.setSelectedItemIndex(audioProcessor.mainp.mainPlayModeCombo.getSelectedId() - 2);

        }



    };
    audioProcessor.mainp.mainWaveSlider.onValueChange = [this]
    {
        /*
        const int waveshift =-10+audioProcessor.mainp.mainWaveSlider.getValue();
        if(audioProcessor.mainp.mainWaveSlider.isMouseButtonDown())
     audioProcessor.sp1.mp.mSampleN=minmaxSP(esp1.SampelN1.getValue()+waveshift);
    audioProcessor.esp1.SampleFileLabel.setText(audioProcessor.urls.getUrl1V()
     [audioProcessor.sp1.mp.mSampleN].toString(),juce::dontSendNotification);
     audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(),0);

    audioProcessor.sp2.mp.mSampleN=minmaxSP(audioProcessor.esp2.SampelN1.getValue()+waveshift);
    audioProcessor.esp2.SampleFileLabel.setText (audioProcessor.urls.getUrl2V()
    [audioProcessor.sp2.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(),1);

    audioProcessor.sp3.mp.mSampleN=minmaxSP(audioProcessor.esp3.SampelN1.getValue()+waveshift);
    audioProcessor.esp3.SampleFileLabel.setText (audioProcessor.urls.getUrl3V()
    [audioProcessor.sp3.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(),2);


    audioProcessor.sp4.mp.mSampleN=minmaxSP(audioProcessor.esp4.SampelN1.getValue()+waveshift);
    audioProcessor.esp4.SampleFileLabel.setText (audioProcessor.urls.getUrl4V()
    [audioProcessor.sp4.mp.mSampleN].toString(),juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(),3);
      */
    };



    audioProcessor.mainp.mainPitchSlider.onValueChange = [this]
    {
        audioProcessor.mainPitchModTemp = audioProcessor.mainp.mainPitchSlider.getValue();
        audioProcessor.sp1.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp2.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp3.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp4.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp5.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp6.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp7.mp.mSamplePitchMain = (audioProcessor.mainp.mainPitchSlider.getValue());

        audioProcessor.sp1.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp2.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp3.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp4.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp5.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp6.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());
        audioProcessor.sp7.oscillator.setMainPitch(audioProcessor.mainp.mainPitchSlider.getValue());

      
    };

    audioProcessor.mainp.mainDelaySlider.onValueChange = [this] {

        audioProcessor.sp1.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp2.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp3.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp4.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp5.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp6.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());
        audioProcessor.sp7.echo->setDelayMixMain(audioProcessor.mainp.mainDelaySlider.getValue());

       
    };

    audioProcessor.mainp.mainVolSlider.onValueChange = [this] {
        audioProcessor.sp1.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp1.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp2.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp2.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp3.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp3.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp4.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp4.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp5.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp5.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp6.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp6.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp7.mp.mSynthLevel = (audioProcessor.mainp.mainVolSlider.getValue());
        audioProcessor.sp7.mp.mSampelVolumeM = (audioProcessor.mainp.mainVolSlider.getValue());
    };
    //****************************************************************************
   //--------------------------- audioProcessor.mainp.MainLfoNr();-------------------------------
    //*******************************************************************************
    for (int i = 0; i < 4; i++) {
          audioProcessor.mainp.mainLfoSelectButtons[i].onClick = [this] {
          audioProcessor.mainp.mainLfoSelectSlider.setValue(audioProcessor.mainp.MainLfoNr());

        };
       }
       audioProcessor.mainp.mainLfoSelectSlider.onValueChange = [this] {
       const int sl = audioProcessor.mainp.mainLfoSelectSlider.getValue();
       audioProcessor.Rtime->setLfoSelect(sl);

    };
//---------------------------------------------------------------------

        audioProcessor.mainp.mainSHCombo.onChange = [this] {
            audioProcessor.Rtime->setMainLfoHold(audioProcessor.mainp.mainSHCombo.getSelectedItemIndex());
        audioProcessor.Rtime->SetdivideMainSHLFO(audioProcessor.mainp.mainSHCombo.getSelectedItemIndex());
    };
        //***************************************************************************
        //*****************************************SequencerTime*********************
        //*************************************************************************

        audioProcessor.mainp.TimeSlider.onValueChange = [this] {
            audioProcessor.Rtime->setTimerBpm(audioProcessor.mainp.TimeSlider.getValue());

        };
        audioProcessor.mainp.TimeComboBox.onChange = [this] {
            audioProcessor.Rtime->setTimerMode(audioProcessor.mainp.TimeComboBox.getSelectedItemIndex());
            audioProcessor.Rtime->timerX.setPhaseReset(0);
            audioProcessor.Rtime->timerX.setPhaseReset(1);
            audioProcessor.Rtime->timerX.setPhaseReset(2);

        };



        audioProcessor.mainp.SeqLenghtSlider.onValueChange = [this] {
            audioProcessor.Rtime->setSqLenght(audioProcessor.mainp.SeqLenghtSlider.getValue());

        };

    //*********************************************************************************
   //--------------------------------------------Sequencer-Triggers------------------------//
  //***********************************************************************************

    for (int i = 0; i < 16; i++)
    {


      

        addAndMakeVisible(sq1);
       // sq1.init(audioProcessor.valueTreeState,0);
        sq1.triggermultibutA[i].onClick = [this] {
            sq1.setTriggers(0);
            sq1.serialTriggers(audioProcessor.valueTreeState,0);
            audioProcessor.Rtime->trigger1In(sq1.getTriggers(0));
            audioProcessor.stepperWave.setHideColors1(sq1.getTriggers(0),0, audioProcessor.mainp.MainTriggerPrNr());
        };
      
        addAndMakeVisible(sq2);
     //   sq2.init(audioProcessor.valueTreeState,1);
        sq2.triggermultibutA[i].onClick = [this] {
            sq2.setTriggers(1);
            sq2.serialTriggers(audioProcessor.valueTreeState,  1);
            audioProcessor.Rtime->trigger2In(sq2.getTriggers(1));
          audioProcessor.stepperWave.setHideColors2(sq2.getTriggers(1), 1, audioProcessor.mainp.MainTriggerPrNr());
        };

        addAndMakeVisible(sq3);
     //   sq3.init(audioProcessor.valueTreeState,2);
        sq3.triggermultibutA[i].onClick = [this] {
            sq3.setTriggers(2);
            sq3.serialTriggers(audioProcessor.valueTreeState, 2);
            audioProcessor.Rtime->trigger3In(sq3.getTriggers(2));
            audioProcessor.stepperWave.setHideColors3(sq3.getTriggers(2), 2, audioProcessor.mainp.MainTriggerPrNr());
        };
        addAndMakeVisible(sq4);
   //     sq4.init(audioProcessor.valueTreeState,3);
        sq4.triggermultibutA[i].onClick = [this] {
            sq4.setTriggers(3);
            sq4.serialTriggers(audioProcessor.valueTreeState, 3);
            audioProcessor.Rtime->trigger4In(sq4.getTriggers(3));
            audioProcessor.stepperWave.setHideColors4(sq4.getTriggers(3), 3, audioProcessor.mainp.MainTriggerPrNr());
        };

        addAndMakeVisible(sq5);
    //    sq5.init(audioProcessor.valueTreeState,4);
        sq5.triggermultibutA[i].onClick = [this] {
            sq5.setTriggers(4);
            sq5.serialTriggers(audioProcessor.valueTreeState,  4);
            audioProcessor.Rtime->trigger5In(sq5.getTriggers(4));
            audioProcessor.stepperWave.setHideColors5(sq5.getTriggers(4), 4, audioProcessor.mainp.MainTriggerPrNr());
        };
          addAndMakeVisible(sq6);
 
     //   sq6.init(audioProcessor.valueTreeState,5);
          sq6.triggermultibutA[i].onClick = [this] {
              sq6.setTriggers(5);
           sq6.serialTriggers(audioProcessor.valueTreeState, 5);
            audioProcessor.Rtime->trigger6In(sq6.getTriggers(5));
            audioProcessor.stepperWave.setHideColors6(sq6.getTriggers(5), 5, audioProcessor.mainp.MainTriggerPrNr());
        };
     
        addAndMakeVisible(sq7);
  
    //    sq7.init(audioProcessor.valueTreeState,6);
        sq7.triggermultibutA[i].onClick = [this] {
            sq7.setTriggers(6);
            sq7.serialTriggers(audioProcessor.valueTreeState,  6);
            audioProcessor.Rtime->trigger7In(sq7.getTriggers(6));
           audioProcessor.stepperWave.setHideColors7(sq7.getTriggers(6), 6, audioProcessor.mainp.MainTriggerPrNr());
        };
    

    }
    //***************************************************************************************
    //-------------------------------------------Trigger steppers----------------------------
    //***************************************************************************************



  for (int i = 0; i < 5; i++) {                //------------------------------mode----------


        audioProcessor.stepperWave.StepperOut[i].onClick = [this] {
            const int sp = audioProcessor.mainp.SamplerEngineTemp.getValue();
            audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(),sp, audioProcessor.stepperWave.stepModeValue());
            audioProcessor.stepperWave.stepModeValue();
            audioProcessor.stepperWave.serialModeStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepModeValue(), sp);

            if (sp == 0) { audioProcessor.sp1.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 1) { audioProcessor.sp2.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 2) { audioProcessor.sp3.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 3) { audioProcessor.sp4.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 4) { audioProcessor.sp5.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 5) { audioProcessor.sp6.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
            if (sp == 6) { audioProcessor.sp7.mp.mSampleStepperMode = audioProcessor.stepperWave.stepModeValue(); }
      




        };
    }

  audioProcessor.stepperWave.stepini1.onClick = [this] {
   audioProcessor.stepperWave.InitPatternSteps(audioProcessor.mainp.SamplerEngineTemp.getValue(), 1,0, enginePatternState, audioProcessor.mainp.TriggerProgramm10.getValue());
      
  audioProcessor.stepperWave.serialStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepValues(), audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.TriggerProgramm10.getValue());
  const int spp = audioProcessor.mainp.SamplerEngineTemp.getValue();
  audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(), spp, audioProcessor.stepperWave.stepModeValue());
  };
  
  audioProcessor.stepperWave.stepini2.onClick = [this] {
 
      audioProcessor.stepperWave.InitPatternSteps(audioProcessor.mainp.SamplerEngineTemp.getValue(), 1, 1, enginePatternState, audioProcessor.mainp.TriggerProgramm10.getValue());
      audioProcessor.stepperWave.serialStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepValues(), audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.TriggerProgramm10.getValue());
      const int spp = audioProcessor.mainp.SamplerEngineTemp.getValue();
      audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(), spp, audioProcessor.stepperWave.stepModeValue());
  };
  audioProcessor.stepperWave.stepini3.onClick = [this] {

      audioProcessor.stepperWave.InitPatternSteps(audioProcessor.mainp.SamplerEngineTemp.getValue(), 1, 2, enginePatternState, audioProcessor.mainp.TriggerProgramm10.getValue());
      audioProcessor.stepperWave.serialStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepValues(), audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.TriggerProgramm10.getValue());
      const int spp = audioProcessor.mainp.SamplerEngineTemp.getValue();
      audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(), spp, audioProcessor.stepperWave.stepModeValue());
  };
      audioProcessor.stepperWave.stepini4.onClick = [this] {

          audioProcessor.stepperWave.InitPatternSteps(audioProcessor.mainp.SamplerEngineTemp.getValue(), 1, 3, enginePatternState, audioProcessor.mainp.TriggerProgramm10.getValue());
 
          audioProcessor.stepperWave.serialStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepValues(), audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.TriggerProgramm10.getValue());
          const int spp = audioProcessor.mainp.SamplerEngineTemp.getValue();
          audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(), spp, audioProcessor.stepperWave.stepModeValue());
      
  };
   
    for (int i = 0; i < 16; i++) {             //-----------------------------value----------
   
        audioProcessor.stepperWave.MainMenuModSlider[i].onValueChange = [this] {
         const int spp = audioProcessor.mainp.SamplerEngineTemp.getValue();
        audioProcessor.setMainStepper(audioProcessor.stepperWave.stepValues(),spp,audioProcessor.stepperWave.stepModeValue());
        
        audioProcessor.stepperWave.serialStepps(audioProcessor.valueTreeState, audioProcessor.stepperWave.stepValues(), audioProcessor.mainp.SamplerEngineTemp.getValue(), audioProcessor.mainp.MainTriggerPrNr());
      
        };
    }
  
     //************************************************************************************************
    //---------------------------------------Wave sets init-------------------------------------------
    //************************************************************************************************
  //  audioProcessor.stepperWave.SpAudioSet1[0].setToggleState(true,juce::dontSendNotification);
  
    for (int b = 0; b < 5; b++) {
          audioProcessor.stepperWave.SpAudioSet1[b].onClick = [this] {
           audioProcessor.loadSampler1InitSet(audioProcessor.stepperWave.SpAudioSetValue());
            updateSampleParas();
            audioProcessor.loadSample(0);
        
        };
        audioProcessor.stepperWave.SpAudioSet2[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet2[b].onClick = [this] {

                audioProcessor.loadSampler2InitSet(audioProcessor.stepperWave.SpAudioSet2Value());
            updateSampleParas();
            audioProcessor.loadSample(1);
        };
        audioProcessor.stepperWave.SpAudioSet3[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet3[b].onClick = [this] {

             audioProcessor.loadSampler3InitSet(audioProcessor.stepperWave.SpAudioSet3Value());
            updateSampleParas();
            audioProcessor.loadSample(2);
        };
        audioProcessor.stepperWave.SpAudioSet4[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet4[b].onClick = [this] {

             audioProcessor.loadSampler4InitSet(audioProcessor.stepperWave.SpAudioSet4Value());
            updateSampleParas();
            audioProcessor.loadSample(3);
        };
        audioProcessor.stepperWave.SpAudioSet5[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet5[b].onClick = [this] {

            audioProcessor.loadSampler5InitSet(audioProcessor.stepperWave.SpAudioSet5Value());
            updateSampleParas();
            audioProcessor.loadSample(4);
        };
        audioProcessor.stepperWave.SpAudioSet6[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet6[b].onClick = [this] {

            audioProcessor.loadSampler6InitSet(audioProcessor.stepperWave.SpAudioSet6Value());
            updateSampleParas();
            audioProcessor.loadSample(5);
        };
        audioProcessor.stepperWave.SpAudioSet7[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet7[b].onClick = [this] {

           audioProcessor.loadSampler7InitSet(audioProcessor.stepperWave.SpAudioSet7Value());
            updateSampleParas();
            audioProcessor.loadSample(6);
        };
        
  //**********************************************************************************/
    //***************************************Triggersets-init********************
    //*****************************************************************************
        audioProcessor.stepperWave.triggersets[b].onClick = [this] {


                sq1.initTrSet_1(audioProcessor.valueTreeState, 0, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq2.initTrSet_1(audioProcessor.valueTreeState, 1, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq3.initTrSet_1(audioProcessor.valueTreeState, 2, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq4.initTrSet_1(audioProcessor.valueTreeState, 3, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq5.initTrSet_1(audioProcessor.valueTreeState, 4, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq6.initTrSet_1(audioProcessor.valueTreeState, 5, audioProcessor.stepperWave.getTriggerInitSetsValue());
                sq7.initTrSet_1(audioProcessor.valueTreeState, 6, audioProcessor.stepperWave.getTriggerInitSetsValue());
      

                audioProcessor.Rtime->trigger1In(sq1.getTriggers(0));
                audioProcessor.Rtime->trigger2In(sq2.getTriggers(1));
                audioProcessor.Rtime->trigger3In(sq3.getTriggers(2));
                audioProcessor.Rtime->trigger4In(sq4.getTriggers(3));
                audioProcessor.Rtime->trigger5In(sq5.getTriggers(4));
                audioProcessor.Rtime->trigger6In(sq6.getTriggers(5));
                audioProcessor.Rtime->trigger7In(sq7.getTriggers(6));

                audioProcessor.stepperWave.setHideColors1(sq1.getTriggers(0), 0, audioProcessor.mainp.MainTriggerPrNr());
                audioProcessor.stepperWave.setHideColors2(sq2.getTriggers(1), 1, audioProcessor.mainp.MainTriggerPrNr());
                audioProcessor.stepperWave.setHideColors3(sq3.getTriggers(2), 2, audioProcessor.mainp.MainTriggerPrNr());
                audioProcessor.stepperWave.setHideColors4(sq4.getTriggers(3), 3, audioProcessor.mainp.MainTriggerPrNr());
               

        };



  }


    //***************************************timers*****************************

    audioProcessor.stepperWave.Sp1MixTime.onChange = [this] {
    audioProcessor.esp1.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp1MixTime.getSelectedItemIndex()+1);
     };

    audioProcessor.stepperWave.Sp2MixTime.onChange = [this] {
        audioProcessor.esp2.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp2MixTime.getSelectedItemIndex() + 1);
    };
    audioProcessor.stepperWave.Sp3MixTime.onChange = [this] {
        audioProcessor.esp3.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp3MixTime.getSelectedItemIndex() + 1);
    };
    audioProcessor.stepperWave.Sp4MixTime.onChange = [this] {
        audioProcessor.esp4.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp4MixTime.getSelectedItemIndex() + 1);
    };
    audioProcessor.stepperWave.Sp5MixTime.onChange = [this] {
        audioProcessor.esp5.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp5MixTime.getSelectedItemIndex() + 1);
    };
    audioProcessor.stepperWave.Sp6MixTime.onChange = [this] {
        audioProcessor.esp6.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp6MixTime.getSelectedItemIndex() + 1);
    };
    audioProcessor.stepperWave.Sp7MixTime.onChange = [this] {
        audioProcessor.esp7.playTimeModeCombo.setSelectedId(audioProcessor.stepperWave.Sp7MixTime.getSelectedItemIndex() + 1);
    };




//*************************************************************************************************
//----------------------------------Patterns-------------------------------------------------
//********************************************************************************************

        stateW = 0;
    
        for (int i = 0; i < 10; i++) {
            audioProcessor.mainp.TriggerProgrammM[i].onClick = [this] {
                audioProcessor.mainp.TriggerProgramm10.setValue(audioProcessor.mainp.MainTriggerPrNr());



            };
        }

    
         audioProcessor.mainp.TriggerProgramm10.onValueChange = [this] {
        const int pattern = audioProcessor.mainp.TriggerProgramm10.getValue();
        audioProcessor.mainp.TriggerProgrammM[pattern].setToggleState(true, juce::dontSendNotification);
        
    
          
            sq1.setPattern(pattern,0);
            sq2.setPattern(pattern,1);
            sq3.setPattern(pattern,2);
            sq4.setPattern(pattern,3);
            sq5.setPattern(pattern,4);
            sq6.setPattern(pattern,5);
            sq7.setPattern(pattern,6);
            

          

            audioProcessor.Rtime->trigger1In(sq1.getTriggers(0));
            audioProcessor.Rtime->trigger2In(sq2.getTriggers(1));
            audioProcessor.Rtime->trigger3In(sq3.getTriggers(2));
            audioProcessor.Rtime->trigger4In(sq4.getTriggers(3));
            audioProcessor.Rtime->trigger5In(sq5.getTriggers(4));
            audioProcessor.Rtime->trigger6In(sq6.getTriggers(5));
            audioProcessor.Rtime->trigger7In(sq7.getTriggers(6));

    
            //--------------------------------change steps--------------------------
            audioProcessor.stepperWave.changeStepperColor(audioProcessor.mainp.SamplerEngineTemp.getValue(),pattern);
          

             
        
        if (audioProcessor.esp1.PatternState.getToggleState() == true) {

     
      //  audioProcessor.Rtime->Setdivide1(audioProcessor.trs.unserialTSPT1(audioProcessor.valueTreeState)[audioProcessor.mainp.MainTriggerPrNr()]);
          audioProcessor.sp1.mp.mSampleN = sq1.getStateWave(0);
         audioProcessor.esp1.SampelVolume.setValue(sq1.getStateWaveVolume(0));
         audioProcessor.esp1.SampelPitch.setValue(sq1.getStatePitch(0));
         audioProcessor.esp1.DelayTime.setValue(sq1.getStateDelayT(0));
         audioProcessor.esp1.DelayFeed.setValue(sq1.getStateDelayF(0));
        audioProcessor.esp1.SampleFileLabel.setText(
         audioProcessor.urls.getUrl1V()[sq1.getStateWave(0)].toString(), juce::dontSendNotification);
         audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[sq1.getStateWave(0)].toString(), 0);
         audioProcessor.esp1.SampelN1.setValue(sq1.getStateWave(0));

     
          sq1.setWaveNr(sq1.getStateWave(0), audioProcessor.mainp.MainTriggerPrNr(), 0);
 
        }

   
        if (audioProcessor.esp2.PatternState.getToggleState() == true) {
          audioProcessor.sp2.mp.mSampleN = sq2.getStateWave(1);
          audioProcessor.esp2.SampelVolume.setValue(sq2.getStateWaveVolume(1));
          audioProcessor.esp2.SampelPitch.setValue(sq2.getStatePitch(1));
          audioProcessor.esp2.DelayTime.setValue(sq2.getStateDelayT(1));
          audioProcessor.esp2.DelayFeed.setValue(sq2.getStateDelayF(1));
          audioProcessor.esp2.SampleFileLabel.setText(
           audioProcessor.urls.getUrl2V()[sq2.getStateWave(1)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[sq2.getStateWave(1)].toString(), 1);
          audioProcessor.esp2.SampelN1.setValue(sq2.getStateWave(1));

        }

        if (audioProcessor.esp3.PatternState.getToggleState() == true) {
          audioProcessor.sp3.mp.mSampleN = sq3.getStateWave(2);
          audioProcessor.esp3.SampelVolume.setValue(sq3.getStateWaveVolume(2));
          audioProcessor.esp3.SampelPitch.setValue(sq3.getStatePitch(2));
          audioProcessor.esp3.DelayTime.setValue(sq3.getStateDelayT(2));
          audioProcessor.esp3.DelayFeed.setValue(sq3.getStateDelayF(2));
          audioProcessor.esp3.SampleFileLabel.setText(
          audioProcessor.urls.getUrl3V()[sq3.getStateWave(2)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[sq3.getStateWave(2)].toString(), 2);
           audioProcessor.esp3.SampelN1.setValue(sq3.getStateWave(2));
        }
        if (audioProcessor.esp4.PatternState.getToggleState() == true) {
          audioProcessor.sp4.mp.mSampleN = sq4.getStateWave(3);
          audioProcessor.esp4.SampelVolume.setValue(sq4.getStateWaveVolume(3));
          audioProcessor.esp4.SampelPitch.setValue(sq4.getStatePitch(3));
          audioProcessor.esp4.DelayTime.setValue(sq4.getStateDelayT(3));
          audioProcessor.esp4.DelayFeed.setValue(sq4.getStateDelayF(3));
         audioProcessor.esp4.SampleFileLabel.setText(
          audioProcessor.urls.getUrl4V()[sq4.getStateWave(3)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[sq4.getStateWave(3)].toString(), 3);
         audioProcessor.esp4.SampelN1.setValue(sq4.getStateWave(3));
           

        }
        if (audioProcessor.esp5.PatternState.getToggleState() == true) {
            audioProcessor.sp5.mp.mSampleN = sq5.getStateWave(4);
          audioProcessor.esp5.SampelVolume.setValue(sq5.getStateWaveVolume(4));
          audioProcessor.esp5.SampelPitch.setValue(sq5.getStatePitch(4));
          audioProcessor.esp5.DelayTime.setValue(sq5.getStateDelayT(4));
          audioProcessor.esp5.DelayFeed.setValue(sq5.getStateDelayF(4));
          audioProcessor.esp5.SampleFileLabel.setText(
          audioProcessor.urls.getUrl5V()[sq5.getStateWave(4)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl5V()[sq5.getStateWave(4)].toString(), 4);
          audioProcessor.esp5.SampelN1.setValue(sq5.getStateWave(4));
        }
        if (audioProcessor.esp6.PatternState.getToggleState() == true) { 
          audioProcessor.sp6.mp.mSampleN = sq6.getStateWave(5);
          audioProcessor.esp6.SampelVolume.setValue(sq6.getStateWaveVolume(5));
          audioProcessor.esp6.SampelPitch.setValue(sq6.getStatePitch(5));
          audioProcessor.esp6.DelayTime.setValue(sq6.getStateDelayT(5));
          audioProcessor.esp6.DelayFeed.setValue(sq6.getStateDelayF(5));
          audioProcessor.esp6.SampleFileLabel.setText(
          audioProcessor.urls.getUrl6V()[sq6.getStateWave(5)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl6V()[sq6.getStateWave(5)].toString(), 5);
          audioProcessor.esp6.SampelN1.setValue(sq6.getStateWave(5));
        }
        if (audioProcessor.esp7.PatternState.getToggleState() == true) {
          audioProcessor.sp7.mp.mSampleN = sq7.getStateWave(6);
          audioProcessor.esp7.SampelVolume.setValue(sq7.getStateWaveVolume(6));
          audioProcessor.esp7.SampelPitch.setValue(sq7.getStatePitch(6));
          audioProcessor.esp7.DelayTime.setValue(sq7.getStateDelayT(6));
          audioProcessor.esp7.DelayFeed.setValue(sq7.getStateDelayF(6));
          audioProcessor.esp7.SampleFileLabel.setText(
          audioProcessor.urls.getUrl7V()[sq7.getStateWave(6)].toString(), juce::dontSendNotification);
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl7V()[sq7.getStateWave(6)].toString(), 6);
          audioProcessor.esp7.SampelN1.setValue(sq7.getStateWave(6));
        }
    
    
    

    };
    

  //************************************************************* *************** 
 //-------------------Sampler1 Paras ------------------------------------
 //*****************************************************************   *********************

    addAndMakeVisible(audioProcessor.esp1);
   audioProcessor.esp1.EngineColour=0;
   
   audioProcessor.esp1.playTimeModeCombo.onChange=[this]{
    audioProcessor.Rtime->Setdivide1(audioProcessor.esp1.playTimeModeCombo.getSelectedItemIndex());
    audioProcessor.sp1.mp.mTimeMode =audioProcessor.esp1.playTimeModeCombo.getSelectedItemIndex();
    audioProcessor.stepperWave.setSp1TimeCombo(audioProcessor.sp1.mp.mTimeMode);
      };
    
     audioProcessor.esp1.StepperOnOff.onClick = [this] {
      audioProcessor.sp1.mp.mSampleStepperOn =audioProcessor.esp1.StepperOnOff.getToggleState();
     
    };
 
    
   audioProcessor.esp1.EngineMenuButton.onClick=[this]{
        audioProcessor.sp1.mp.mEngineMode =audioProcessor.esp1.EngineMenuButton.getToggleState();
        engineSwitch[0] =audioProcessor.esp1.EngineMenuButton.getToggleState();
         audioProcessor.esp1.EngineHideControl();
          audioProcessor.stepperWave.MainMixerEngineHideControl(0, engineSwitch); 

    };
     audioProcessor.esp1.SampelGate.onValueChange=[this]{
        audioProcessor.sp1.mp.mSqGate = audioProcessor.esp1.SampelGate.getValue();
        audioProcessor.Rtime->setGateR(audioProcessor.esp1.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[0].setValue(audioProcessor.esp1.SampelGate.getValue());
    };
   audioProcessor.esp1.waveformCombo.onChange=[this]{
        audioProcessor.sp1.oscillator.waveform.setIndex(audioProcessor.esp1.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt1hWaveCombo.setSelectedId(audioProcessor.esp1.waveformCombo.getSelectedId());
    };
   audioProcessor.esp1.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthLevel= audioProcessor.esp1.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[0].setValue(audioProcessor.esp1.synthLevelSlider.getValue());
    };
   audioProcessor.esp1.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthLevelMod= audioProcessor.esp1.synthLevelSliderMod.getValue();
    };
   audioProcessor.esp1.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp1.oscillator.setFrequency(audioProcessor.esp1.noteNumberSlider.getValue());
      audioProcessor.stepperWave.MainMixPitchSynthSliders[0].setValue(audioProcessor.esp1.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[0].setTextValueSuffix(MidiMessage::getMidiNoteName(
        (int)audioProcessor.esp1.noteNumberSlider.getValue(), true, true, 4));

    };
  



   audioProcessor.esp1.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp1.oscillator.setFrequencyMod(audioProcessor.esp1.noteNumberSliderMod.getValue());
    };
   audioProcessor.esp1.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp1.mp.mSynthAttack=audioProcessor.esp1.synthAttackSlider.getValue();
    };
   audioProcessor.esp1.synthReleaseSlider.onValueChange=[this]{
          audioProcessor.sp1.mp.mSynthRelease=audioProcessor.esp1.synthReleaseSlider.getValue();
    };
    
   
   audioProcessor.esp1.SampelN1.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampleN= audioProcessor.esp1.SampelN1.getValue();
    audioProcessor.stepperWave.MainMixWaveSliders[0].setValue(audioProcessor.esp1.SampelN1.getValue());
   // 
    
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(), 0);
    audioProcessor.esp1.SampleFileLabel.setText (
    audioProcessor.urls.getUrl1V()[audioProcessor.sp1.mp.mSampleN].toString(),juce::dontSendNotification);
   
        sq1.setWaveNr(audioProcessor.esp1.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
        sq1.serialWaveParas(audioProcessor.valueTreeState, 0);
       

    
    };
    
  audioProcessor.esp1.PatternState.onClick=[this]{
   enginePatternState[0]= audioProcessor.esp1.PatternState.getToggleState();
   audioProcessor.stepperWave.setPatternState(enginePatternState);
     
    };
   audioProcessor.esp1.PatternStReset.onClick = [this] {
        if (audioProcessor.esp1.PatternStReset.getToggleState() > 0)
            sq1.resetParaState(audioProcessor.valueTreeState,0);
           audioProcessor.esp1.PatternStReset.setToggleState(false, juce::dontSendNotification);
            audioProcessor.stepperWave.resetPatternSteps(0);
           
    };
      
    
   audioProcessor.esp1.SampelPitch.onValueChange=[this]{
    audioProcessor.sp1.mp.mSamplePitch= audioProcessor.esp1.SampelPitch.getValue();
   
    if (audioProcessor.esp1.SampelPitch.isMouseButtonDown()) {
         sq1.setPitchSt(audioProcessor.esp1.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
         sq1.serialPitchParas(audioProcessor.valueTreeState, 0);
    }
    audioProcessor.stepperWave.MainMixPitchAudioSliders[0].setValue(audioProcessor.esp1.SampelPitch.getValue());
    };
   audioProcessor.esp1.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp1.mp.mSamplePitchLfoMod= audioProcessor.esp1.SampelPitchMod.getValue();
        
    };
   audioProcessor.esp1.SampelStart.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampleStart= audioProcessor.esp1.SampelStart.getValue();
        
    };
   audioProcessor.esp1.SampelEnd.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampleEnd= audioProcessor.esp1.SampelEnd.getValue();

    };
   audioProcessor.esp1.SampelVolume.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampelVolume= audioProcessor.esp1.SampelVolume.getValue();
    audioProcessor.stepperWave.MainMixVolumeAudioSliders[0].setValue(audioProcessor.esp1.SampelVolume.getValue());
  
    if (audioProcessor.esp1.SampelVolume.isMouseButtonDown()) {
       sq1.setWaveVolumeSt(audioProcessor.esp1.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
       sq1.serialWaveVolumeParas(audioProcessor.valueTreeState, 0); }
    };
   audioProcessor.esp1.SampelVolumeMod.onValueChange=[this]{
    audioProcessor.sp1.mp.mSampelVolumeMod= audioProcessor.esp1.SampelVolumeMod.getValue();
    };
   audioProcessor.esp1.SpAttack.setVisible(false);
   audioProcessor.esp1.SpAttack.onValueChange=[this]{
        audioProcessor.sp1.mp.mSpAttack= audioProcessor.esp1.SpAttack.getValue();
        
    };
   audioProcessor.esp1.SpRelease.setVisible(false);
   audioProcessor.esp1.SpRelease.onValueChange=[this]{
        audioProcessor.sp1.mp.mSpRelease= audioProcessor.esp1.SpRelease.getValue();
        
    };
   audioProcessor.esp1.EnvelopeMode.setToggleState(false, juce::dontSendNotification);
   audioProcessor.esp1.EnvelopeMode.onClick = [this] {
        audioProcessor.sp1.setAr(audioProcessor.esp1.EnvelopeMode.getToggleState());
       audioProcessor.esp1.hidecontrollAr();
    };

    
   audioProcessor.esp1.WaveSizes_t.onValueChange = [this] {
        espWsize_T[0] =audioProcessor.esp1.WaveSizes_t.getValue();
        audioProcessor.setWSize(espWsize_T,0);
       audioProcessor.esp1.WaveSizes[espWsize_T[0]].setToggleState(true, juce::dontSendNotification);
      
    };
    for (int i = 0; i < 3; i++) {
       audioProcessor.esp1.WaveSizes[i].onClick = [this] {
            if (audioProcessor.esp1.WaveSizes[0].getToggleState() == true) { espWsize_T[0] = 0; }
            if (audioProcessor.esp1.WaveSizes[1].getToggleState() == true) { espWsize_T[0] = 1; }
            if (audioProcessor.esp1.WaveSizes[2].getToggleState() == true) { espWsize_T[0] = 2;  }
            audioProcessor.esp1.WaveSizes_t.setValue(espWsize_T[0]);
             audioProcessor.setWSize(espWsize_T,0);
             
        
         
        };
    }

   
   audioProcessor.esp1.Cutoff.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setcutoff(audioProcessor.esp1.Cutoff.getValue());
     
    };
    
   audioProcessor.esp1.CutMod.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setCutoffMod(audioProcessor.esp1.CutMod.getValue());

    };
    
   audioProcessor.esp1.Resonance.onValueChange=[this]{
    audioProcessor.sp1.filterDsLp->setResonance(audioProcessor.esp1.Resonance.getValue());
    };
    
   audioProcessor.esp1.LfoModulationSampel.onClick=[this]{
 
       audioProcessor.esp1.hidecontrollMod();
    };
    
   audioProcessor.esp1.playModeCombo.onChange=[this]{
       audioProcessor.sp1.mp.mSamplePlayMode =audioProcessor.esp1.playModeCombo.getSelectedItemIndex();
      audioProcessor.esp1.EngineHideControl();
    };
   
   audioProcessor.esp1.FilterModeCombo.onChange=[this]{
    audioProcessor.sp1.filterDsLp->fmode.setIndex(audioProcessor.esp1.FilterModeCombo.getSelectedItemIndex());
     

    };
   
   audioProcessor.esp1.DelayModeCombo.onChange=[this]{
    audioProcessor.sp1.echo->dMode.setIndex(audioProcessor.esp1.DelayModeCombo.getSelectedItemIndex());
   
    };
   audioProcessor.esp1.DelayTime.onValueChange=[this]{
    audioProcessor.sp1.echo->setDelayTime(audioProcessor.esp1.DelayTime.getValue());
    audioProcessor.stepperWave.MainMixDelayTimeSliders[0].setValue(audioProcessor.esp1.DelayTime.getValue());
   
    if (audioProcessor.esp1.DelayTime.isMouseButtonDown()) {
        sq1.setDelayTSt(audioProcessor.esp1.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
        sq1.serialDelayTParas(audioProcessor.valueTreeState, 0);
    }
       };
   audioProcessor.esp1.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayTimeMod(audioProcessor.esp1.DelayTimeMod.getValue());
    };
   audioProcessor.esp1.DelayLevel.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayLevel(audioProcessor.esp1.DelayLevel.getValue());
       
    };
   audioProcessor.esp1.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayLevelMod(audioProcessor.esp1.DelayLevelMod.getValue());
    };
   audioProcessor.esp1.DelayFeed.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayFeed(audioProcessor.esp1.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[0].setValue(audioProcessor.esp1.DelayFeed.getValue());
        
        if (audioProcessor.esp1.DelayFeed.isMouseButtonDown()) {
            sq1.setDelayFSt(audioProcessor.esp1.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 0);
            sq1.serialDelayFParas(audioProcessor.valueTreeState, 0);

        }
    };
   audioProcessor.esp1.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayFeedMod(audioProcessor.esp1.DelayFeedMod.getValue());
    };
   audioProcessor.esp1.DelayMix.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayMix(audioProcessor.esp1.DelayMix.getValue());
    };
   audioProcessor.esp1.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp1.echo->setDelayMixMod(audioProcessor.esp1.DelayMixMod.getValue());
    };
    
   audioProcessor.esp1.LfoModeCombo.onChange=[this]{
    audioProcessor.sp1.oscillator.WaveformLfo.setIndex(audioProcessor.esp1.LfoModeCombo.getSelectedItemIndex());
      
    };
   audioProcessor.esp1.LfoRtrModeCombo.onChange=[this]{
    audioProcessor.sp1.mp.mSpLfoRtrMode= audioProcessor.esp1.LfoRtrModeCombo.getSelectedItemIndex();
    audioProcessor.Rtime->SetRetrigger1(audioProcessor.esp1.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
   audioProcessor.esp1.LfoTime.onValueChange=[this]{
    audioProcessor.sp1.oscillator.setFrequencyLfo(audioProcessor.esp1.LfoTime.getValue());
    };
    
   audioProcessor.esp1.LfoAmp.onValueChange=[this]{
    audioProcessor.sp1.oscillator.setLfoAmp(audioProcessor.esp1.LfoAmp.getValue());
    };
    

    
    
    //-------------------Sampler2------------------------------------
    
    
    
    addAndMakeVisible(audioProcessor.esp2);
    audioProcessor.esp2.EngineColour=1;
    
    audioProcessor.esp2.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide2(audioProcessor.esp2.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp2.mp.mTimeMode = audioProcessor.esp2.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp2TimeCombo(audioProcessor.sp2.mp.mTimeMode);
    };
    audioProcessor.esp2.EngineMenuButton.onClick=[this]{
        audioProcessor.sp2.mp.mEngineMode = audioProcessor.esp2.EngineMenuButton.getToggleState();
        engineSwitch[1] = audioProcessor.esp2.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(1, engineSwitch);
        audioProcessor.esp2.EngineHideControl();
    };
    audioProcessor.esp2.StepperOnOff.onClick = [this] {
        audioProcessor.sp2.mp.mSampleStepperOn = audioProcessor.esp2.StepperOnOff.getToggleState();
    };

    audioProcessor.esp2.SampelGate.onValueChange=[this]{
        audioProcessor.sp2.mp.mSqGate = audioProcessor.esp2.SampelGate.getValue();
        audioProcessor.Rtime->setGateR2(audioProcessor.esp2.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[1].setValue(audioProcessor.esp2.SampelGate.getValue());
    };
    
    audioProcessor.esp2.waveformCombo.onChange=[this]{
        audioProcessor.sp2.oscillator.waveform.setIndex(audioProcessor.esp2.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt2hWaveCombo.setSelectedId(audioProcessor.esp2.waveformCombo.getSelectedId());
    };
    audioProcessor.esp2.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthLevel=audioProcessor.esp2.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[1].setValue(audioProcessor.esp2.synthLevelSlider.getValue());
    };
    audioProcessor.esp2.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthLevelMod=audioProcessor.esp2.synthLevelSliderMod.getValue();
       
    };
    audioProcessor.esp2.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequency( audioProcessor.esp2.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[1].setValue(audioProcessor.esp2.noteNumberSlider.getValue());
           audioProcessor.stepperWave.MainMixPitchSynthSliders[1].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp2.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp2.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequencyMod(audioProcessor.esp2.noteNumberSliderMod.getValue());
    };
    audioProcessor.esp2.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthAttack= audioProcessor.esp2.synthAttackSlider.getValue();
    };
    audioProcessor.esp2.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp2.mp.mSynthRelease= audioProcessor.esp2.synthReleaseSlider.getValue();
    };
 
    audioProcessor.esp2.SampelN1.onValueChange=[this]{
    audioProcessor.sp2.mp.mSampleN=audioProcessor.esp2.SampelN1.getValue();
    audioProcessor.stepperWave.MainMixWaveSliders[1].setValue(audioProcessor.esp2.SampelN1.getValue());
    
    audioProcessor.esp2.SampleFileLabel.setText (
    audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), juce::dontSendNotification);
    audioProcessor.loadAudioFile(audioProcessor.urls.getUrl2V()[audioProcessor.sp2.mp.mSampleN].toString(), 1);

        sq2.setWaveNr(audioProcessor.esp2.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
       sq2.serialWaveParas(audioProcessor.valueTreeState, 1);
     
    
    };
    
    audioProcessor.esp2.PatternState.onClick=[this]{
        enginePatternState[1]=audioProcessor.esp2.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp2.PatternStReset.onClick = [this] {
        if (audioProcessor.esp2.PatternStReset.getToggleState() > 0)
            sq2.resetParaState(audioProcessor.valueTreeState,1);
        audioProcessor.stepperWave.resetPatternSteps(1);
        audioProcessor.esp2.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

 
    audioProcessor.esp2.SampelPitch.onValueChange=[this]{
        audioProcessor.sp2.mp.mSamplePitch=audioProcessor.esp2.SampelPitch.getValue();
       
        if (audioProcessor.esp2.SampelPitch.isMouseButtonDown()) {
            sq2.setPitchSt(audioProcessor.esp2.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
            sq2.serialPitchParas(audioProcessor.valueTreeState, 1); 
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[1].setValue(audioProcessor.esp2.SampelPitch.getValue());
    };
    audioProcessor.esp2.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSamplePitchLfoMod=audioProcessor.esp2.SampelPitchMod.getValue();
        
    };
    audioProcessor.esp2.SampelStart.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampleStart=audioProcessor.esp2.SampelStart.getValue();
        
    };
    audioProcessor.esp2.SampelEnd.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampleEnd=audioProcessor.esp2.SampelEnd.getValue();
        
    };
    audioProcessor.esp2.SampelVolume.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampelVolume=audioProcessor.esp2.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[1].setValue(audioProcessor.esp2.SampelVolume.getValue());
       
        if (audioProcessor.esp2.SampelVolume.isMouseButtonDown()) {
            sq2.setWaveVolumeSt(audioProcessor.esp2.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
           sq2.serialWaveVolumeParas(audioProcessor.valueTreeState, 1);  
        }
    };
    audioProcessor.esp2.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp2.mp.mSampelVolumeMod=audioProcessor.esp2.SampelVolumeMod.getValue();
    };
    
    audioProcessor.esp2.SpAttack.onValueChange=[this]{
        audioProcessor.sp2.mp.mSpAttack=audioProcessor.esp2.SpAttack.getValue();
        
    };
    audioProcessor.esp2.SpRelease.onValueChange=[this]{
        audioProcessor.sp2.mp.mSpRelease=audioProcessor.esp2.SpRelease.getValue();
        
    };
      audioProcessor.esp2.EnvelopeMode.onClick = [this] {
        audioProcessor.sp2.setAr(audioProcessor.esp2.EnvelopeMode.getToggleState());
        audioProcessor.esp2.hidecontrollAr();
    };
      audioProcessor.esp2.WaveSizes_t.onValueChange = [this] {
          espWsize_T[1] = audioProcessor.esp2.WaveSizes_t.getValue();
         audioProcessor.esp2.WaveSizes[espWsize_T[1]].setToggleState(true, juce::dontSendNotification);
         audioProcessor.setWSize(espWsize_T, 1);
                      };
      for (int i = 0; i < 3; i++) {
          audioProcessor.esp2.WaveSizes[i].onClick = [this] {

              if (audioProcessor.esp2.WaveSizes[0].getToggleState() == true) { espWsize_T[1] = 0; }
              if (audioProcessor.esp2.WaveSizes[1].getToggleState() == true) { espWsize_T[1] = 1; }
              if (audioProcessor.esp2.WaveSizes[2].getToggleState() == true) { espWsize_T[1] = 2; }
              audioProcessor.esp2.WaveSizes_t.setValue(espWsize_T[1]);
              audioProcessor.setWSize(espWsize_T, 1);
          };
      }
    audioProcessor.esp2.Cutoff.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setcutoff(audioProcessor.esp2.Cutoff.getValue());
        
    };
    
    audioProcessor.esp2.CutMod.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setCutoffMod(audioProcessor.esp2.CutMod.getValue());
        
    };
    
    audioProcessor.esp2.Resonance.onValueChange=[this]{
        audioProcessor.sp2.filterDsLp->setResonance(audioProcessor.esp2.Resonance.getValue());
    };
    
    audioProcessor.esp2.LfoModulationSampel.onClick=[this]{
        
        audioProcessor.esp2.hidecontrollMod();
    };
    
    audioProcessor.esp2.playModeCombo.onChange=[this]{
        if(audioProcessor.esp2.LfoModulationSampel.getToggleState()==false)
        { audioProcessor.esp2.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp2.mp.mSamplePlayMode = audioProcessor.esp2.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp2.EngineHideControl();
    };
    
    audioProcessor.esp2.FilterModeCombo.onChange=[this]{
        audioProcessor.sp2.filterDsLp->fmode.setIndex(audioProcessor.esp2.FilterModeCombo.getSelectedItemIndex());
        
        
    };
   
    audioProcessor.esp2.DelayModeCombo.onChange=[this]{
        audioProcessor.sp2.echo->dMode.setIndex(audioProcessor.esp2.DelayModeCombo.getSelectedItemIndex());
      
    };
    audioProcessor.esp2.DelayTime.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayTime(audioProcessor.esp2.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[1].setValue(audioProcessor.esp2.DelayTime.getValue());
        
        if (audioProcessor.esp2.DelayTime.isMouseButtonDown()) {
            sq2.setDelayTSt(audioProcessor.esp2.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
            sq2.serialDelayTParas(audioProcessor.valueTreeState, 1);
        }
    };
    audioProcessor.esp2.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayTimeMod(audioProcessor.esp2.DelayTimeMod.getValue());
    };
    audioProcessor.esp2.DelayLevel.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayLevel(audioProcessor.esp2.DelayLevel.getValue());
        
    };
    audioProcessor.esp2.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayLevelMod(audioProcessor.esp2.DelayLevelMod.getValue());
    };
    audioProcessor.esp2.DelayFeed.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayFeed(audioProcessor.esp2.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[1].setValue(audioProcessor.esp2.DelayFeed.getValue());
       
        if (audioProcessor.esp2.DelayFeed.isMouseButtonDown()) {
            sq2.setDelayFSt(audioProcessor.esp2.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 1);
            sq2.serialDelayFParas(audioProcessor.valueTreeState, 1);

        }
       
    };
    audioProcessor.esp2.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayFeedMod(audioProcessor.esp2.DelayFeedMod.getValue());
    };
    audioProcessor.esp2.DelayMix.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayMix(audioProcessor.esp2.DelayMix.getValue());
    };
    audioProcessor.esp2.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp2.echo->setDelayMixMod(audioProcessor.esp2.DelayMixMod.getValue());
    };
    
    audioProcessor.esp2.LfoModeCombo.onChange=[this]{
        audioProcessor.sp2.oscillator.WaveformLfo.setIndex(audioProcessor.esp2.LfoModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp2.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp2.mp.mSpLfoRtrMode=audioProcessor.esp2.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger2(audioProcessor.esp2.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp2.LfoTime.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setFrequencyLfo(audioProcessor.esp2.LfoTime.getValue());
    };
    
    audioProcessor.esp2.LfoAmp.onValueChange=[this]{
        audioProcessor.sp2.oscillator.setLfoAmp(audioProcessor.esp2.LfoAmp.getValue());
    };
    

    
    
    //-------------------Sampler3------------------------------------
    
    
    
    addAndMakeVisible(audioProcessor.esp3);
    audioProcessor.esp3.EngineColour=2;
    
    audioProcessor.esp3.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide3(audioProcessor.esp3.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp3.mp.mTimeMode = audioProcessor.esp3.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp3TimeCombo(audioProcessor.sp3.mp.mTimeMode);
    };
    
    audioProcessor.esp3.EngineMenuButton.onClick=[this]{
        audioProcessor.sp3.mp.mEngineMode = audioProcessor.esp3.EngineMenuButton.getToggleState();
        engineSwitch[2] = audioProcessor.esp3.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(2, engineSwitch);
        audioProcessor.esp3.EngineHideControl();
    };
    audioProcessor.esp3.StepperOnOff.onClick = [this] {
        audioProcessor.sp3.mp.mSampleStepperOn = audioProcessor.esp3.StepperOnOff.getToggleState();
    };
    audioProcessor.esp3.waveformCombo.onChange=[this]{
        audioProcessor.sp3.oscillator.waveform.setIndex(audioProcessor.esp3.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt3hWaveCombo.setSelectedId(audioProcessor.esp3.waveformCombo.getSelectedId());
    };

    audioProcessor.esp3.SampelGate.onValueChange=[this]{
        audioProcessor.sp3.mp.mSqGate =audioProcessor.esp3.SampelGate.getValue();
        audioProcessor.Rtime->setGateR3(audioProcessor.esp3.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[2].setValue(audioProcessor.esp3.SampelGate.getValue());
    };
    
    audioProcessor.esp3.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthLevel=audioProcessor.esp3.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[2].setValue(audioProcessor.esp3.synthLevelSlider.getValue());
    };
    audioProcessor.esp3.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthLevelMod=audioProcessor.esp3.synthLevelSliderMod.getValue();
    };
    audioProcessor.esp3.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequency( audioProcessor.esp3.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[2].setValue(audioProcessor.esp3.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[2].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp3.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp3.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequencyMod(audioProcessor.esp3.noteNumberSliderMod.getValue());
    };
    audioProcessor.esp3.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthAttack= audioProcessor.esp3.synthAttackSlider.getValue();
    };
    audioProcessor.esp3.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp3.mp.mSynthRelease= audioProcessor.esp3.synthReleaseSlider.getValue();
    };
    
    
    audioProcessor.esp3.SampelN1.onValueChange=[this]{
        
        audioProcessor.sp3.mp.mSampleN=audioProcessor.esp3.SampelN1.getValue();
        audioProcessor.stepperWave.MainMixWaveSliders[2].setValue(audioProcessor.esp3.SampelN1.getValue());
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), 2);
        audioProcessor.esp3.SampleFileLabel.setText (
        audioProcessor.urls.getUrl3V()[audioProcessor.sp3.mp.mSampleN].toString(), juce::dontSendNotification);
    
            sq3.setWaveNr(audioProcessor.esp3.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
             sq3.serialWaveParas(audioProcessor.valueTreeState, 2);
           
        
    };
    audioProcessor.esp3.PatternState.onClick=[this]{
        enginePatternState[2]= audioProcessor.esp3.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp3.PatternStReset.onClick = [this] {
        if (audioProcessor.esp3.PatternStReset.getToggleState() > 0)
            sq3.resetParaState(audioProcessor.valueTreeState,2);
        audioProcessor.stepperWave.resetPatternSteps(2);
        audioProcessor.esp3.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };


    audioProcessor.esp3.SampelPitch.onValueChange=[this]{
        audioProcessor.sp3.mp.mSamplePitch=audioProcessor.esp3.SampelPitch.getValue();
        
        if (audioProcessor.esp3.SampelPitch.isMouseButtonDown()) {
            sq3.setPitchSt(audioProcessor.esp3.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
          sq3.serialPitchParas(audioProcessor.valueTreeState, 2);
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[2].setValue(audioProcessor.esp3.SampelPitch.getValue());
    };
    audioProcessor.esp3.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSamplePitchLfoMod=audioProcessor.esp3.SampelPitchMod.getValue();
       
    };
    audioProcessor.esp3.SampelStart.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampleStart=audioProcessor.esp3.SampelStart.getValue();
        
    };
    audioProcessor.esp3.SampelEnd.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampleEnd=audioProcessor.esp3.SampelEnd.getValue();
        
    };
    audioProcessor.esp3.SampelVolume.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampelVolume=audioProcessor.esp3.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[2].setValue(audioProcessor.esp3.SampelVolume.getValue());
       
        if (audioProcessor.esp3.SampelVolume.isMouseButtonDown()) {
            sq3.setWaveVolumeSt(audioProcessor.esp3.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
            sq3.serialWaveVolumeParas(audioProcessor.valueTreeState, 2); 
        }
    };
    audioProcessor.esp3.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp3.mp.mSampelVolumeMod=audioProcessor.esp3.SampelVolumeMod.getValue();
    };
    
    audioProcessor.esp3.SpAttack.onValueChange=[this]{
        audioProcessor.sp3.mp.mSpAttack=audioProcessor.esp3.SpAttack.getValue();
        
    };
    audioProcessor.esp3.SpRelease.onValueChange=[this]{
        audioProcessor.sp3.mp.mSpRelease=audioProcessor.esp3.SpRelease.getValue();
        
    };
    audioProcessor.esp3.EnvelopeMode.onClick = [this] {
        audioProcessor.sp3.setAr(audioProcessor.esp3.EnvelopeMode.getToggleState());
        audioProcessor.esp3.hidecontrollAr();
    };
    audioProcessor.esp3.WaveSizes_t.onValueChange = [this] {
        espWsize_T[2] = audioProcessor.esp3.WaveSizes_t.getValue();
       audioProcessor.esp3.WaveSizes[espWsize_T[2]].setToggleState(true, juce::dontSendNotification);
       audioProcessor.setWSize(espWsize_T, 2);
    };
    for (int i = 0; i < 3; i++) {
        audioProcessor.esp3.WaveSizes[i].onClick = [this] {

            if (audioProcessor.esp3.WaveSizes[0].getToggleState() == true) { espWsize_T[2] = 0; }
            if (audioProcessor.esp3.WaveSizes[1].getToggleState() == true) { espWsize_T[2] = 1; }
            if (audioProcessor.esp3.WaveSizes[2].getToggleState() == true) { espWsize_T[2] = 2; }
            audioProcessor.esp3.WaveSizes_t.setValue(espWsize_T[2]);
            audioProcessor.setWSize(espWsize_T, 2);
        };
    }
    audioProcessor.esp3.Cutoff.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setcutoff(audioProcessor.esp3.Cutoff.getValue());
        
    };
    
    audioProcessor.esp3.CutMod.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setCutoffMod(audioProcessor.esp3.CutMod.getValue());
        
    };
    
    audioProcessor.esp3.Resonance.onValueChange=[this]{
        audioProcessor.sp3.filterDsLp->setResonance(audioProcessor.esp3.Resonance.getValue());
    };
    
    audioProcessor.esp3.LfoModulationSampel.onClick=[this]{
        audioProcessor.esp3.hidecontrollMod();
    };
    
    audioProcessor.esp3.playModeCombo.onChange=[this]{
        if(audioProcessor.esp3.LfoModulationSampel.getToggleState()==false)
        { audioProcessor.esp3.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp3.mp.mSamplePlayMode = audioProcessor.esp3.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp3.EngineHideControl();
    };
    
    audioProcessor.esp3.FilterModeCombo.onChange=[this]{
        audioProcessor.sp3.filterDsLp->fmode.setIndex(audioProcessor.esp3.FilterModeCombo.getSelectedItemIndex());
        
        
    };
   
    
    audioProcessor.esp3.DelayModeCombo.onChange=[this]{
        audioProcessor.sp3.echo->dMode.setIndex(audioProcessor.esp3.DelayModeCombo.getSelectedItemIndex());
       
    };
    audioProcessor.esp3.DelayTime.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayTime(audioProcessor.esp3.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[2].setValue(audioProcessor.esp3.DelayTime.getValue());
       
        if (audioProcessor.esp3.DelayTime.isMouseButtonDown()) {
            sq3.setDelayTSt(audioProcessor.esp3.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
           sq3.serialDelayTParas(audioProcessor.valueTreeState, 2); 
        }
    };
    audioProcessor.esp3.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayTimeMod(audioProcessor.esp3.DelayTimeMod.getValue());
    };
    audioProcessor.esp3.DelayLevel.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayLevel(audioProcessor.esp3.DelayLevel.getValue());
       
    };
    audioProcessor.esp3.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayLevelMod(audioProcessor.esp3.DelayLevelMod.getValue());
    };
    audioProcessor.esp3.DelayFeed.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayFeed(audioProcessor.esp3.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[2].setValue(audioProcessor.esp3.DelayFeed.getValue());
       
        if (audioProcessor.esp2.DelayFeed.isMouseButtonDown()) {
            sq2.setDelayFSt(audioProcessor.esp2.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 2);
            sq2.serialDelayFParas(audioProcessor.valueTreeState, 2); 

        }
        
    };
    audioProcessor.esp3.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayFeedMod(audioProcessor.esp3.DelayFeedMod.getValue());
    };
    audioProcessor.esp3.DelayMix.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayMix(audioProcessor.esp3.DelayMix.getValue());
    };
    audioProcessor.esp3.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp3.echo->setDelayMixMod(audioProcessor.esp3.DelayMixMod.getValue());
    };
    
    audioProcessor.esp3.LfoModeCombo.onChange=[this]{
        audioProcessor.sp3.oscillator.WaveformLfo.setIndex(audioProcessor.esp3.LfoModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp3.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp3.mp.mSpLfoRtrMode=audioProcessor.esp3.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger3(audioProcessor.esp3.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp3.LfoTime.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setFrequencyLfo(audioProcessor.esp3.LfoTime.getValue());
    };
    
    audioProcessor.esp3.LfoAmp.onValueChange=[this]{
        audioProcessor.sp3.oscillator.setLfoAmp(audioProcessor.esp3.LfoAmp.getValue());
    };
    


     //-------------------Sampler4------------------------------------
    
    
    
    addAndMakeVisible(audioProcessor.esp4);
    audioProcessor.esp4.EngineColour=3;
    
    
    audioProcessor.esp4.playTimeModeCombo.onChange=[this]{
        audioProcessor.Rtime->Setdivide4(audioProcessor.esp4.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp4.mp.mTimeMode = audioProcessor.esp4.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp4TimeCombo(audioProcessor.sp4.mp.mTimeMode);
    };
    
    audioProcessor.esp4.EngineMenuButton.onClick=[this]{
        audioProcessor.sp4.mp.mEngineMode = audioProcessor.esp4.EngineMenuButton.getToggleState();
        engineSwitch[3] = audioProcessor.esp4.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(3, engineSwitch);
        audioProcessor.esp4.EngineHideControl();
    };
    audioProcessor.esp4.StepperOnOff.onClick = [this] {
        audioProcessor.sp4.mp.mSampleStepperOn = audioProcessor.esp4.StepperOnOff.getToggleState();
    };
    audioProcessor.esp4.waveformCombo.onChange=[this]{
        audioProcessor.sp4.oscillator.waveform.setIndex(audioProcessor.esp4.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt4hWaveCombo.setSelectedId(audioProcessor.esp4.waveformCombo.getSelectedId());
    }; 
    
    audioProcessor.esp4.SampelGate.onValueChange=[this]{
        audioProcessor.sp4.mp.mSqGate =audioProcessor.esp4.SampelGate.getValue();
        audioProcessor.Rtime->setGateR4(audioProcessor.esp4.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[3].setValue(audioProcessor.esp4.SampelGate.getValue());
    };
    
    audioProcessor.esp4.synthLevelSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthLevel=audioProcessor.esp4.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[3].setValue(audioProcessor.esp4.synthLevelSlider.getValue());
    };
    audioProcessor.esp4.synthLevelSliderMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthLevelMod=audioProcessor.esp4.synthLevelSliderMod.getValue();
    };
    audioProcessor.esp4.noteNumberSlider.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequency( audioProcessor.esp4.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[3].setValue(audioProcessor.esp4.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[3].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp4.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp4.noteNumberSliderMod.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequencyMod(audioProcessor.esp4.noteNumberSliderMod.getValue());
    };
    audioProcessor.esp4.synthAttackSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthAttack= audioProcessor.esp4.synthAttackSlider.getValue();
    };
    audioProcessor.esp4.synthReleaseSlider.onValueChange=[this]{
        audioProcessor.sp4.mp.mSynthRelease= audioProcessor.esp4.synthReleaseSlider.getValue();
    };
    
    
    audioProcessor.esp4.SampelN1.onValueChange=[this]{
        
        audioProcessor.sp4.mp.mSampleN=audioProcessor.esp4.SampelN1.getValue();
        audioProcessor.stepperWave.MainMixWaveSliders[3].setValue(audioProcessor.esp4.SampelN1.getValue());
         audioProcessor.loadAudioFile(audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), 3);
        audioProcessor.esp4.SampleFileLabel.setText (
        audioProcessor.urls.getUrl4V()[audioProcessor.sp4.mp.mSampleN].toString(), juce::dontSendNotification);
     
            sq4.setWaveNr(audioProcessor.esp4.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
           sq4.serialWaveParas(audioProcessor.valueTreeState, 3);
          
        
    };
    audioProcessor.esp4.PatternState.onClick=[this]{
        enginePatternState[3]=  audioProcessor.esp4.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp4.PatternStReset.onClick = [this] {
        if (audioProcessor.esp4.PatternStReset.getToggleState() > 0)
            sq4.resetParaState(audioProcessor.valueTreeState,3);
        audioProcessor.stepperWave.resetPatternSteps(3);
        audioProcessor.esp4.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };


    audioProcessor.esp4.SampelPitch.onValueChange=[this]{
        audioProcessor.sp4.mp.mSamplePitch=audioProcessor.esp4.SampelPitch.getValue();
        
        if (audioProcessor.esp4.SampelPitch.isMouseButtonDown()) {
            sq4.setPitchSt(audioProcessor.esp4.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
           sq4.serialPitchParas(audioProcessor.valueTreeState, 3);
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[3].setValue(audioProcessor.esp4.SampelPitch.getValue());
    };
    audioProcessor.esp4.SampelPitchMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSamplePitchLfoMod=audioProcessor.esp4.SampelPitchMod.getValue();
        
    };
    audioProcessor.esp4.SampelStart.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampleStart=audioProcessor.esp4.SampelStart.getValue();
        
    };
    audioProcessor.esp4.SampelEnd.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampleEnd=audioProcessor.esp4.SampelEnd.getValue();
        
    };
    audioProcessor.esp4.SampelVolume.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampelVolume=audioProcessor.esp4.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[3].setValue(audioProcessor.esp4.SampelVolume.getValue());
       
        if (audioProcessor.esp4.SampelVolume.isMouseButtonDown()) {
            sq4.setWaveVolumeSt(audioProcessor.esp4.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
           sq4.serialWaveVolumeParas(audioProcessor.valueTreeState, 3);
        }
    };
    audioProcessor.esp4.SampelVolumeMod.onValueChange=[this]{
        audioProcessor.sp4.mp.mSampelVolumeMod=audioProcessor.esp4.SampelVolumeMod.getValue();
    };
    
    audioProcessor.esp4.SpAttack.onValueChange=[this]{
        audioProcessor.sp4.mp.mSpAttack=audioProcessor.esp4.SpAttack.getValue();
        
    };
    audioProcessor.esp4.SpRelease.onValueChange=[this]{
        audioProcessor.sp4.mp.mSpRelease=audioProcessor.esp4.SpRelease.getValue();
        
    };
    audioProcessor.esp4.EnvelopeMode.onClick = [this] {
        audioProcessor.sp4.setAr(audioProcessor.esp4.EnvelopeMode.getToggleState());
        audioProcessor.esp4.hidecontrollAr();
    };
    audioProcessor.esp4.WaveSizes_t.onValueChange = [this] {
        espWsize_T[3] = audioProcessor.esp4.WaveSizes_t.getValue();
             audioProcessor.esp4.WaveSizes[espWsize_T[3]].setToggleState(true, juce::dontSendNotification);
             audioProcessor.setWSize(espWsize_T, 3);
     };
    for (int i = 0; i < 3; i++) {
        audioProcessor.esp4.WaveSizes[i].onClick = [this] {

            if (audioProcessor.esp4.WaveSizes[0].getToggleState() == true) { espWsize_T[3] = 0; }
            if (audioProcessor.esp4.WaveSizes[1].getToggleState() == true) { espWsize_T[3] = 1; }
            if (audioProcessor.esp4.WaveSizes[2].getToggleState() == true) { espWsize_T[3] = 2; }
            audioProcessor.esp4.WaveSizes_t.setValue(espWsize_T[3]);
            audioProcessor.setWSize(espWsize_T, 3);
        };
    }
    audioProcessor.esp4.Cutoff.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setcutoff(audioProcessor.esp4.Cutoff.getValue());
        
    };
    
    audioProcessor.esp4.CutMod.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setCutoffMod(audioProcessor.esp4.CutMod.getValue());
        
    };
    
    audioProcessor.esp4.Resonance.onValueChange=[this]{
        audioProcessor.sp4.filterDsLp->setResonance(audioProcessor.esp4.Resonance.getValue());
    };
    
    audioProcessor.esp4.LfoModulationSampel.onClick=[this]{
        audioProcessor.esp4.hidecontrollMod();
    };
    
    audioProcessor.esp4.playModeCombo.onChange=[this]{
        if(audioProcessor.esp4.LfoModulationSampel.getToggleState()==false)
        { audioProcessor.esp4.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);}
        audioProcessor.sp4.mp.mSamplePlayMode = audioProcessor.esp4.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp4.EngineHideControl();
    };
    
    audioProcessor.esp4.FilterModeCombo.onChange=[this]{
        audioProcessor.sp4.filterDsLp->fmode.setIndex(audioProcessor.esp4.FilterModeCombo.getSelectedItemIndex());
        
        
    };
    
    audioProcessor.esp4.DelayModeCombo.onChange=[this]{
        audioProcessor.sp4.echo->dMode.setIndex(audioProcessor.esp4.DelayModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp4.DelayTime.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayTime(audioProcessor.esp4.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[3].setValue(audioProcessor.esp4.DelayTime.getValue());
       
        if (audioProcessor.esp4.DelayTime.isMouseButtonDown()) {
            sq4.setDelayTSt(audioProcessor.esp3.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);
            sq4.serialDelayTParas(audioProcessor.valueTreeState, 3);
        }
    };
    audioProcessor.esp4.DelayTimeMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayTimeMod(audioProcessor.esp4.DelayTimeMod.getValue());
    };
    audioProcessor.esp4.DelayLevel.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayLevel(audioProcessor.esp4.DelayLevel.getValue());
       
    };
    audioProcessor.esp4.DelayLevelMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayLevelMod(audioProcessor.esp4.DelayLevelMod.getValue());
    };
    audioProcessor.esp4.DelayFeed.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayFeed(audioProcessor.esp4.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[3].setValue(audioProcessor.esp4.DelayFeed.getValue());
       
        if (audioProcessor.esp4.DelayFeed.isMouseButtonDown()) {
            sq4.setDelayFSt(audioProcessor.esp4.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 3);          
            sq4.serialDelayFParas(audioProcessor.valueTreeState, 3);
        }
       
    };
    audioProcessor.esp4.DelayFeedMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayFeedMod(audioProcessor.esp4.DelayFeedMod.getValue());
    };
    audioProcessor.esp4.DelayMix.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayMix(audioProcessor.esp4.DelayMix.getValue());
    };
    audioProcessor.esp4.DelayMixMod.onValueChange=[this]{
        audioProcessor.sp4.echo->setDelayMixMod(audioProcessor.esp4.DelayMixMod.getValue());
    };
    
    audioProcessor.esp4.LfoModeCombo.onChange=[this]{
        audioProcessor.sp4.oscillator.WaveformLfo.setIndex(audioProcessor.esp4.LfoModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp4.LfoRtrModeCombo.onChange=[this]{
        audioProcessor.sp4.mp.mSpLfoRtrMode=audioProcessor.esp4.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger4(audioProcessor.esp4.LfoRtrModeCombo.getSelectedItemIndex());
        
    };
    audioProcessor.esp4.LfoTime.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setFrequencyLfo(audioProcessor.esp4.LfoTime.getValue());
    };
    
    audioProcessor.esp4.LfoAmp.onValueChange=[this]{
        audioProcessor.sp4.oscillator.setLfoAmp(audioProcessor.esp4.LfoAmp.getValue());
    };
    
    //-------------------Sampler5------------------------------------



    addAndMakeVisible(audioProcessor.esp5);
    audioProcessor.esp5.EngineColour = 4;

    
    audioProcessor.esp5.playTimeModeCombo.onChange = [this] {
        audioProcessor.Rtime->Setdivide5(audioProcessor.esp5.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp5.mp.mTimeMode = audioProcessor.esp5.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp5TimeCombo(audioProcessor.sp5.mp.mTimeMode);
    };

    audioProcessor.esp5.EngineMenuButton.onClick = [this] {
        audioProcessor.sp5.mp.mEngineMode = audioProcessor.esp5.EngineMenuButton.getToggleState();
        engineSwitch[4] = audioProcessor.esp5.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(4, engineSwitch);
        audioProcessor.esp5.EngineHideControl();
    };
    audioProcessor.esp5.StepperOnOff.onClick = [this] {
        audioProcessor.sp5.mp.mSampleStepperOn = audioProcessor.esp5.StepperOnOff.getToggleState();
    };
    audioProcessor.esp5.waveformCombo.onChange = [this] {
        audioProcessor.sp5.oscillator.waveform.setIndex(audioProcessor.esp5.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt5hWaveCombo.setSelectedId(audioProcessor.esp5.waveformCombo.getSelectedId());
    }; 
    
    audioProcessor.esp5.SampelGate.onValueChange = [this] {
        audioProcessor.sp5.mp.mSqGate = audioProcessor.esp5.SampelGate.getValue();
        audioProcessor.Rtime->setGateR5(audioProcessor.esp5.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[4].setValue(audioProcessor.esp5.SampelGate.getValue());
    };

    audioProcessor.esp5.synthLevelSlider.onValueChange = [this] {
        audioProcessor.sp5.mp.mSynthLevel = audioProcessor.esp5.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[4].setValue(audioProcessor.esp5.synthLevelSlider.getValue());
    };
    audioProcessor.esp5.synthLevelSliderMod.onValueChange = [this] {
        audioProcessor.sp5.mp.mSynthLevelMod = audioProcessor.esp5.synthLevelSliderMod.getValue();
    };
    audioProcessor.esp5.noteNumberSlider.onValueChange = [this] {
        audioProcessor.sp5.oscillator.setFrequency(audioProcessor.esp5.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[4].setValue(audioProcessor.esp5.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[4].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp5.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp5.noteNumberSliderMod.onValueChange = [this] {
        audioProcessor.sp5.oscillator.setFrequencyMod(audioProcessor.esp5.noteNumberSliderMod.getValue());
    };
    audioProcessor.esp5.synthAttackSlider.onValueChange = [this] {
        audioProcessor.sp5.mp.mSynthAttack = audioProcessor.esp5.synthAttackSlider.getValue();
    };
    audioProcessor.esp5.synthReleaseSlider.onValueChange = [this] {
        audioProcessor.sp5.mp.mSynthRelease = audioProcessor.esp5.synthReleaseSlider.getValue();
    };


    audioProcessor.esp5.SampelN1.onValueChange = [this] {

        audioProcessor.sp5.mp.mSampleN = audioProcessor.esp5.SampelN1.getValue();
        audioProcessor.stepperWave.MainMixWaveSliders[4].setValue(audioProcessor.esp5.SampelN1.getValue());
          audioProcessor.loadAudioFile(audioProcessor.urls.getUrl5V()[audioProcessor.sp5.mp.mSampleN].toString(), 4);
        audioProcessor.esp5.SampleFileLabel.setText(
            audioProcessor.urls.getUrl5V()[audioProcessor.sp5.mp.mSampleN].toString(), juce::dontSendNotification);
      
            sq5.setWaveNr(audioProcessor.esp5.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
           sq5.serialWaveParas(audioProcessor.valueTreeState, 4);
          
        
    };
    audioProcessor.esp5.PatternState.onClick = [this] {
        enginePatternState[4]= audioProcessor.esp5.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp5.PatternStReset.onClick = [this] {
        if (audioProcessor.esp5.PatternStReset.getToggleState() > 0)
            sq5.resetParaState(audioProcessor.valueTreeState,4);
        audioProcessor.stepperWave.resetPatternSteps(4);
        audioProcessor.esp5.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

   
    audioProcessor.esp5.SampelPitch.onValueChange = [this] {
        audioProcessor.sp5.mp.mSamplePitch = audioProcessor.esp5.SampelPitch.getValue();
       
        if (audioProcessor.esp5.SampelPitch.isMouseButtonDown()) {
            sq5.setPitchSt(audioProcessor.esp5.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
            sq5.serialPitchParas(audioProcessor.valueTreeState, 4);
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[4].setValue(audioProcessor.esp5.SampelPitch.getValue());
    };
    audioProcessor.esp5.SampelPitchMod.onValueChange = [this] {
        audioProcessor.sp5.mp.mSamplePitchLfoMod = audioProcessor.esp5.SampelPitchMod.getValue();

    };
    audioProcessor.esp5.SampelStart.onValueChange = [this] {
        audioProcessor.sp5.mp.mSampleStart = audioProcessor.esp5.SampelStart.getValue();

    };
    audioProcessor.esp5.SampelEnd.onValueChange = [this] {
        audioProcessor.sp5.mp.mSampleEnd = audioProcessor.esp5.SampelEnd.getValue();

    };
    audioProcessor.esp5.SampelVolume.onValueChange = [this] {
        audioProcessor.sp5.mp.mSampelVolume = audioProcessor.esp5.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[4].setValue(audioProcessor.esp5.SampelVolume.getValue());
       
        if (audioProcessor.esp5.SampelVolume.isMouseButtonDown()) {
            sq5.setWaveVolumeSt(audioProcessor.esp5.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
             sq5.serialWaveVolumeParas(audioProcessor.valueTreeState, 4);
        }
    };
    audioProcessor.esp5.SampelVolumeMod.onValueChange = [this] {
        audioProcessor.sp5.mp.mSampelVolumeMod = audioProcessor.esp5.SampelVolumeMod.getValue();
    };

    audioProcessor.esp5.SpAttack.onValueChange = [this] {
        audioProcessor.sp5.mp.mSpAttack = audioProcessor.esp5.SpAttack.getValue();

    };
    audioProcessor.esp5.SpRelease.onValueChange = [this] {
        audioProcessor.sp5.mp.mSpRelease = audioProcessor.esp5.SpRelease.getValue();

    };
    audioProcessor.esp5.EnvelopeMode.onClick = [this] {
        audioProcessor.sp5.setAr(audioProcessor.esp5.EnvelopeMode.getToggleState());
        audioProcessor.esp5.hidecontrollAr();
    };
    audioProcessor.esp5.WaveSizes_t.onValueChange = [this] {
        espWsize_T[4] = audioProcessor.esp5.WaveSizes_t.getValue();
        audioProcessor.esp5.WaveSizes[espWsize_T[4]].setToggleState(true, juce::dontSendNotification);
        audioProcessor.setWSize(espWsize_T, 4);
    };
    for (int i = 0; i < 3; i++) {
        audioProcessor.esp5.WaveSizes[i].onClick = [this] {

            if (audioProcessor.esp5.WaveSizes[0].getToggleState() == true) { espWsize_T[4] = 0; }
            if (audioProcessor.esp5.WaveSizes[1].getToggleState() == true) { espWsize_T[4] = 1; }
            if (audioProcessor.esp5.WaveSizes[2].getToggleState() == true) { espWsize_T[4] = 2; }
            audioProcessor.esp5.WaveSizes_t.setValue(espWsize_T[4]);
            audioProcessor.setWSize(espWsize_T, 4);
        };
    }
    audioProcessor.esp5.Cutoff.onValueChange = [this] {
        audioProcessor.sp5.filterDsLp->setcutoff(audioProcessor.esp5.Cutoff.getValue());

    };

    audioProcessor.esp5.CutMod.onValueChange = [this] {
        audioProcessor.sp5.filterDsLp->setCutoffMod(audioProcessor.esp5.CutMod.getValue());

    };

    audioProcessor.esp5.Resonance.onValueChange = [this] {
        audioProcessor.sp5.filterDsLp->setResonance(audioProcessor.esp5.Resonance.getValue());
    };

    audioProcessor.esp5.LfoModulationSampel.onClick = [this] {
        audioProcessor.esp5.hidecontrollMod();
    };

    audioProcessor.esp5.playModeCombo.onChange = [this] {
        if (audioProcessor.esp5.LfoModulationSampel.getToggleState() == false)
        {
            audioProcessor.esp5.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);
        }
        audioProcessor.sp5.mp.mSamplePlayMode = audioProcessor.esp5.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp5.EngineHideControl();
    };

    audioProcessor.esp5.FilterModeCombo.onChange = [this] {
        audioProcessor.sp5.filterDsLp->fmode.setIndex(audioProcessor.esp5.FilterModeCombo.getSelectedItemIndex());


    };

    audioProcessor.esp5.DelayModeCombo.onChange = [this] {
        audioProcessor.sp5.echo->dMode.setIndex(audioProcessor.esp5.DelayModeCombo.getSelectedItemIndex());
       
    };
    audioProcessor.esp5.DelayTime.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayTime(audioProcessor.esp5.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[4].setValue(audioProcessor.esp5.DelayTime.getValue());
        
        if (audioProcessor.esp5.DelayTime.isMouseButtonDown()) {
            sq5.setDelayTSt(audioProcessor.esp5.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
           sq5.serialDelayTParas(audioProcessor.valueTreeState, 4);
        }
    };
    audioProcessor.esp5.DelayTimeMod.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayTimeMod(audioProcessor.esp5.DelayTimeMod.getValue());
    };
    audioProcessor.esp5.DelayLevel.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayLevel(audioProcessor.esp5.DelayLevel.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[4].setValue(audioProcessor.esp5.DelayLevel.getValue());
    };
    audioProcessor.esp5.DelayLevelMod.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayLevelMod(audioProcessor.esp5.DelayLevelMod.getValue());
    };
    audioProcessor.esp5.DelayFeed.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayFeed(audioProcessor.esp5.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[4].setValue(audioProcessor.esp5.DelayFeed.getValue());
       
        if (audioProcessor.esp5.DelayFeed.isMouseButtonDown()) {
            sq5.setDelayFSt(audioProcessor.esp5.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 4);
            sq5.serialDelayFParas(audioProcessor.valueTreeState, 4);

        }
    };
    audioProcessor.esp5.DelayFeedMod.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayFeedMod(audioProcessor.esp5.DelayFeedMod.getValue());
    };
    audioProcessor.esp5.DelayMix.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayMix(audioProcessor.esp5.DelayMix.getValue());
    };
    audioProcessor.esp5.DelayMixMod.onValueChange = [this] {
        audioProcessor.sp5.echo->setDelayMixMod(audioProcessor.esp5.DelayMixMod.getValue());
    };

    audioProcessor.esp5.LfoModeCombo.onChange = [this] {
        audioProcessor.sp5.oscillator.WaveformLfo.setIndex(audioProcessor.esp5.LfoModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp5.LfoRtrModeCombo.onChange = [this] {
        audioProcessor.sp5.mp.mSpLfoRtrMode = audioProcessor.esp5.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger5(audioProcessor.esp5.LfoRtrModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp5.LfoTime.onValueChange = [this] {
        audioProcessor.sp5.oscillator.setFrequencyLfo(audioProcessor.esp5.LfoTime.getValue());
    };

    audioProcessor.esp5.LfoAmp.onValueChange = [this] {
        audioProcessor.sp5.oscillator.setLfoAmp(audioProcessor.esp5.LfoAmp.getValue());
    };
    //------------------------------------------------------6---------------------------

    
    addAndMakeVisible(audioProcessor.esp6);
    audioProcessor.esp6.EngineColour = 5;


    audioProcessor.esp6.playTimeModeCombo.onChange = [this] {
        audioProcessor.Rtime->Setdivide6(audioProcessor.esp6.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp6.mp.mTimeMode = audioProcessor.esp6.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp6TimeCombo(audioProcessor.sp6.mp.mTimeMode);
    };

    audioProcessor.esp6.EngineMenuButton.onClick = [this] {
        audioProcessor.sp6.mp.mEngineMode = audioProcessor.esp6.EngineMenuButton.getToggleState();
        engineSwitch[5] = audioProcessor.esp6.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(5, engineSwitch);
        audioProcessor.esp6.EngineHideControl();
    };
    audioProcessor.esp6.StepperOnOff.onClick = [this] {
        audioProcessor.sp6.mp.mSampleStepperOn = audioProcessor.esp6.StepperOnOff.getToggleState();
    };
    audioProcessor.esp6.waveformCombo.onChange = [this] {
        audioProcessor.sp6.oscillator.waveform.setIndex(audioProcessor.esp6.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt6hWaveCombo.setSelectedId(audioProcessor.esp6.waveformCombo.getSelectedId());
    }; 
    
    audioProcessor.esp6.SampelGate.onValueChange = [this] {
        audioProcessor.sp6.mp.mSqGate = audioProcessor.esp6.SampelGate.getValue();
        audioProcessor.Rtime->setGateR6(audioProcessor.esp6.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[5].setValue(audioProcessor.esp6.SampelGate.getValue());
    };

    audioProcessor.esp6.synthLevelSlider.onValueChange = [this] {
        audioProcessor.sp6.mp.mSynthLevel = audioProcessor.esp6.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[5].setValue(audioProcessor.esp6.synthLevelSlider.getValue());
    };
    audioProcessor.esp6.synthLevelSliderMod.onValueChange = [this] {
        audioProcessor.sp6.mp.mSynthLevelMod = audioProcessor.esp6.synthLevelSliderMod.getValue();
    };
    audioProcessor.esp6.noteNumberSlider.onValueChange = [this] {
        audioProcessor.sp6.oscillator.setFrequency(audioProcessor.esp6.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[5].setValue(audioProcessor.esp6.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[5].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp6.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp6.noteNumberSliderMod.onValueChange = [this] {
        audioProcessor.sp6.oscillator.setFrequencyMod(audioProcessor.esp6.noteNumberSliderMod.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[5].setValue(audioProcessor.esp6.noteNumberSlider.getValue());
    };
    audioProcessor.esp6.synthAttackSlider.onValueChange = [this] {
        audioProcessor.sp6.mp.mSynthAttack = audioProcessor.esp6.synthAttackSlider.getValue();
    };
    audioProcessor.esp6.synthReleaseSlider.onValueChange = [this] {
        audioProcessor.sp6.mp.mSynthRelease = audioProcessor.esp6.synthReleaseSlider.getValue();
    };


    audioProcessor.esp6.SampelN1.onValueChange = [this] {

        audioProcessor.sp6.mp.mSampleN = audioProcessor.esp6.SampelN1.getValue();
        audioProcessor.stepperWave.MainMixWaveSliders[5].setValue(audioProcessor.esp6.SampelN1.getValue());
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl6V()[audioProcessor.sp6.mp.mSampleN].toString(), 5);
        audioProcessor.esp6.SampleFileLabel.setText(
            audioProcessor.urls.getUrl6V()[audioProcessor.sp6.mp.mSampleN].toString(), juce::dontSendNotification);
     
            sq6.setWaveNr(audioProcessor.esp6.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
             sq6.serialWaveParas(audioProcessor.valueTreeState, 5);
           
        
    };
    audioProcessor.esp6.PatternState.onClick = [this] {
        enginePatternState[5]=  audioProcessor.esp6.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp6.PatternStReset.onClick = [this] {
        if (audioProcessor.esp6.PatternStReset.getToggleState() > 0)
            sq6.resetParaState(audioProcessor.valueTreeState,5);
        audioProcessor.stepperWave.resetPatternSteps(5);
        audioProcessor.esp6.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };


    audioProcessor.esp6.SampelPitch.onValueChange = [this] {
        audioProcessor.sp6.mp.mSamplePitch = audioProcessor.esp6.SampelPitch.getValue();
       
        if (audioProcessor.esp6.SampelPitch.isMouseButtonDown()) {
            sq6.setPitchSt(audioProcessor.esp6.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
            sq6.serialPitchParas(audioProcessor.valueTreeState, 5);
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[5].setValue(audioProcessor.esp6.SampelPitch.getValue());
    };
    audioProcessor.esp6.SampelPitchMod.onValueChange = [this] {
        audioProcessor.sp6.mp.mSamplePitchLfoMod = audioProcessor.esp6.SampelPitchMod.getValue();

    };
    audioProcessor.esp6.SampelStart.onValueChange = [this] {
        audioProcessor.sp6.mp.mSampleStart = audioProcessor.esp6.SampelStart.getValue();

    };
    audioProcessor.esp6.SampelEnd.onValueChange = [this] {
        audioProcessor.sp6.mp.mSampleEnd = audioProcessor.esp6.SampelEnd.getValue();

    };
    audioProcessor.esp6.SampelVolume.onValueChange = [this] {
        audioProcessor.sp6.mp.mSampelVolume = audioProcessor.esp6.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[5].setValue(audioProcessor.esp6.SampelVolume.getValue());
       
        if (audioProcessor.esp6.SampelVolume.isMouseButtonDown()) {
            sq6.setWaveVolumeSt(audioProcessor.esp6.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
            sq6.serialWaveVolumeParas(audioProcessor.valueTreeState, 5); 
        }
    };
    audioProcessor.esp6.SampelVolumeMod.onValueChange = [this] {
        audioProcessor.sp6.mp.mSampelVolumeMod = audioProcessor.esp6.SampelVolumeMod.getValue();
    };

    audioProcessor.esp6.SpAttack.onValueChange = [this] {
        audioProcessor.sp6.mp.mSpAttack = audioProcessor.esp6.SpAttack.getValue();

    };
    audioProcessor.esp6.SpRelease.onValueChange = [this] {
        audioProcessor.sp6.mp.mSpRelease = audioProcessor.esp6.SpRelease.getValue();

    };
    audioProcessor.esp6.EnvelopeMode.onClick = [this] {
        audioProcessor.sp6.setAr(audioProcessor.esp6.EnvelopeMode.getToggleState());
        audioProcessor.esp6.hidecontrollAr();
    };
    audioProcessor.esp6.WaveSizes_t.onValueChange = [this] {
        espWsize_T[5] = audioProcessor.esp6.WaveSizes_t.getValue();
        audioProcessor.esp6.WaveSizes[espWsize_T[5]].setToggleState(true, juce::dontSendNotification);
        audioProcessor.setWSize(espWsize_T, 5);
    };
    for (int i = 0; i < 3; i++) {
        audioProcessor.esp6.WaveSizes[i].onClick = [this] {

            if (audioProcessor.esp6.WaveSizes[0].getToggleState() == true) { espWsize_T[5] = 0; }
            if (audioProcessor.esp6.WaveSizes[1].getToggleState() == true) { espWsize_T[5] = 1; }
            if (audioProcessor.esp6.WaveSizes[2].getToggleState() == true) { espWsize_T[5] = 2; }
            audioProcessor.esp6.WaveSizes_t.setValue(espWsize_T[5]);
            audioProcessor.setWSize(espWsize_T, 5);
        };
    }
    audioProcessor.esp6.Cutoff.onValueChange = [this] {
        audioProcessor.sp6.filterDsLp->setcutoff(audioProcessor.esp6.Cutoff.getValue());

    };

    audioProcessor.esp6.CutMod.onValueChange = [this] {
        audioProcessor.sp6.filterDsLp->setCutoffMod(audioProcessor.esp6.CutMod.getValue());

    };

    audioProcessor.esp6.Resonance.onValueChange = [this] {
        audioProcessor.sp6.filterDsLp->setResonance(audioProcessor.esp6.Resonance.getValue());
    };

    audioProcessor.esp6.LfoModulationSampel.onClick = [this] {
        audioProcessor.esp6.hidecontrollMod();
    };

    audioProcessor.esp6.playModeCombo.onChange = [this] {
        if (audioProcessor.esp6.LfoModulationSampel.getToggleState() == false)
        {
            audioProcessor.esp6.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);
        }
        audioProcessor.sp6.mp.mSamplePlayMode = audioProcessor.esp6.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp6.EngineHideControl();
    };

    audioProcessor.esp6.FilterModeCombo.onChange = [this] {
        audioProcessor.sp6.filterDsLp->fmode.setIndex(audioProcessor.esp6.FilterModeCombo.getSelectedItemIndex());


    };

    audioProcessor.esp6.DelayModeCombo.onChange = [this] {
        audioProcessor.sp6.echo->dMode.setIndex(audioProcessor.esp6.DelayModeCombo.getSelectedItemIndex());
      
    };
    audioProcessor.esp6.DelayTime.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayTime(audioProcessor.esp6.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[5].setValue(audioProcessor.esp6.DelayTime.getValue());
       
        if (audioProcessor.esp6.DelayTime.isMouseButtonDown()) {
            sq6.setDelayTSt(audioProcessor.esp6.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
            sq6.serialDelayTParas(audioProcessor.valueTreeState, 5);
        }
       };
    audioProcessor.esp6.DelayTimeMod.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayTimeMod(audioProcessor.esp6.DelayTimeMod.getValue());
    };
    audioProcessor.esp6.DelayLevel.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayLevel(audioProcessor.esp6.DelayLevel.getValue());
      audioProcessor.stepperWave.MainMixDelayFeedSliders[5].setValue(audioProcessor.esp6.DelayLevel.getValue());
    };
    audioProcessor.esp6.DelayLevelMod.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayLevelMod(audioProcessor.esp6.DelayLevelMod.getValue());
        
    };
    audioProcessor.esp6.DelayFeed.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayFeed(audioProcessor.esp6.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[5].setValue(audioProcessor.esp6.DelayFeed.getValue());
       
        if (audioProcessor.esp6.DelayFeed.isMouseButtonDown()) {
            sq6.setDelayFSt(audioProcessor.esp1.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 5);
           sq6.serialDelayFParas(audioProcessor.valueTreeState, 5);

        }
    };
    audioProcessor.esp6.DelayFeedMod.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayFeedMod(audioProcessor.esp6.DelayFeedMod.getValue());
    };
    audioProcessor.esp6.DelayMix.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayMix(audioProcessor.esp6.DelayMix.getValue());
    };
    audioProcessor.esp6.DelayMixMod.onValueChange = [this] {
        audioProcessor.sp6.echo->setDelayMixMod(audioProcessor.esp6.DelayMixMod.getValue());
    };

    audioProcessor.esp6.LfoModeCombo.onChange = [this] {
        audioProcessor.sp6.oscillator.WaveformLfo.setIndex(audioProcessor.esp6.LfoModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp6.LfoRtrModeCombo.onChange = [this] {
        audioProcessor.sp6.mp.mSpLfoRtrMode = audioProcessor.esp6.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger6(audioProcessor.esp6.LfoRtrModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp6.LfoTime.onValueChange = [this] {
        audioProcessor.sp6.oscillator.setFrequencyLfo(audioProcessor.esp6.LfoTime.getValue());
    };

    audioProcessor.esp6.LfoAmp.onValueChange = [this] {
        audioProcessor.sp6.oscillator.setLfoAmp(audioProcessor.esp6.LfoAmp.getValue());
    };
    
    //------------------------------------------------------7---------------------------
    addAndMakeVisible(audioProcessor.esp7);
    audioProcessor.esp7.EngineColour = 6;


    audioProcessor.esp7.playTimeModeCombo.onChange = [this] {
        audioProcessor.Rtime->Setdivide7(audioProcessor.esp7.playTimeModeCombo.getSelectedItemIndex());
        audioProcessor.sp7.mp.mTimeMode = audioProcessor.esp7.playTimeModeCombo.getSelectedItemIndex();
        audioProcessor.stepperWave.setSp7TimeCombo(audioProcessor.sp7.mp.mTimeMode);
    };

    audioProcessor.esp7.EngineMenuButton.onClick = [this] {
        audioProcessor.sp7.mp.mEngineMode = audioProcessor.esp7.EngineMenuButton.getToggleState();
        engineSwitch[6] = audioProcessor.esp7.EngineMenuButton.getToggleState();
        audioProcessor.stepperWave.MainMixerEngineHideControl(6, engineSwitch);
        audioProcessor.esp7.EngineHideControl();
    };
    audioProcessor.esp7.StepperOnOff.onClick = [this] {
        audioProcessor.sp7.mp.mSampleStepperOn = audioProcessor.esp7.StepperOnOff.getToggleState();
    };
    audioProcessor.esp7.waveformCombo.onChange = [this] {
        audioProcessor.sp7.oscillator.waveform.setIndex(audioProcessor.esp7.waveformCombo.getSelectedItemIndex());
        audioProcessor.stepperWave.MainMixSynt7hWaveCombo.setSelectedId(audioProcessor.esp7.waveformCombo.getSelectedId());
    }; 
    
    
    audioProcessor.esp7.SampelGate.onValueChange = [this] {
        audioProcessor.sp7.mp.mSqGate = audioProcessor.esp7.SampelGate.getValue();
        audioProcessor.Rtime->setGateR7(audioProcessor.esp7.SampelGate.getValue());
        audioProcessor.stepperWave.MainMixGateSliders[6].setValue(audioProcessor.esp7.SampelGate.getValue());
    };

    audioProcessor.esp7.synthLevelSlider.onValueChange = [this] {
        audioProcessor.sp7.mp.mSynthLevel = audioProcessor.esp7.synthLevelSlider.getValue();
        audioProcessor.stepperWave.MainMixVolumeSliders[6].setValue(audioProcessor.esp7.synthLevelSlider.getValue());
    };
    audioProcessor.esp7.synthLevelSliderMod.onValueChange = [this] {
        audioProcessor.sp7.mp.mSynthLevelMod = audioProcessor.esp7.synthLevelSliderMod.getValue();
    };
    audioProcessor.esp7.noteNumberSlider.onValueChange = [this] {
        audioProcessor.sp7.oscillator.setFrequency(audioProcessor.esp7.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[6].setValue(audioProcessor.esp7.noteNumberSlider.getValue());
        audioProcessor.stepperWave.MainMixPitchSynthSliders[6].setTextValueSuffix(MidiMessage::getMidiNoteName(
            (int)audioProcessor.esp7.noteNumberSlider.getValue(), true, true, 4));
    };
    audioProcessor.esp7.noteNumberSliderMod.onValueChange = [this] {
        audioProcessor.sp7.oscillator.setFrequencyMod(audioProcessor.esp7.noteNumberSliderMod.getValue());
    };
    audioProcessor.esp7.synthAttackSlider.onValueChange = [this] {
        audioProcessor.sp7.mp.mSynthAttack = audioProcessor.esp7.synthAttackSlider.getValue();
    };
    audioProcessor.esp7.synthReleaseSlider.onValueChange = [this] {
        audioProcessor.sp7.mp.mSynthRelease = audioProcessor.esp7.synthReleaseSlider.getValue();
    };


    audioProcessor.esp7.SampelN1.onValueChange = [this] {

        audioProcessor.sp7.mp.mSampleN = audioProcessor.esp7.SampelN1.getValue();
        audioProcessor.stepperWave.MainMixWaveSliders[6].setValue(audioProcessor.esp7.SampelN1.getValue());
        audioProcessor.loadAudioFile(audioProcessor.urls.getUrl7V()[audioProcessor.sp7.mp.mSampleN].toString(), 6);
        audioProcessor.esp7.SampleFileLabel.setText(
            audioProcessor.urls.getUrl7V()[audioProcessor.sp7.mp.mSampleN].toString(), juce::dontSendNotification);
      
            sq7.setWaveNr(audioProcessor.esp7.SampelN1.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
            sq7.serialWaveParas(audioProcessor.valueTreeState, 6);
           
        
    };
    audioProcessor.esp7.PatternState.onClick = [this] {
        enginePatternState[6]= audioProcessor.esp7.PatternState.getToggleState();
        audioProcessor.stepperWave.setPatternState(enginePatternState);
    };
    audioProcessor.esp7.PatternStReset.onClick = [this] {
        if (audioProcessor.esp7.PatternStReset.getToggleState() > 0)
            sq7.resetParaState(audioProcessor.valueTreeState,6);
        audioProcessor.stepperWave.resetPatternSteps(6);
        audioProcessor.esp7.PatternStReset.setToggleState(false, juce::dontSendNotification);
    };

 
    audioProcessor.esp7.SampelPitch.onValueChange = [this] {
        audioProcessor.sp7.mp.mSamplePitch = audioProcessor.esp7.SampelPitch.getValue();
       
        if (audioProcessor.esp7.SampelPitch.isMouseButtonDown()) {
            sq7.setPitchSt(audioProcessor.esp7.SampelPitch.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
            sq7.serialPitchParas(audioProcessor.valueTreeState, 6);
        }
        audioProcessor.stepperWave.MainMixPitchAudioSliders[6].setValue(audioProcessor.esp7.SampelPitch.getValue());
    };
    audioProcessor.esp7.SampelPitchMod.onValueChange = [this] {
        audioProcessor.sp7.mp.mSamplePitchLfoMod = audioProcessor.esp7.SampelPitchMod.getValue();

    };
    audioProcessor.esp7.SampelStart.onValueChange = [this] {
        audioProcessor.sp7.mp.mSampleStart = audioProcessor.esp7.SampelStart.getValue();

    };
    audioProcessor.esp7.SampelEnd.onValueChange = [this] {
        audioProcessor.sp7.mp.mSampleEnd = audioProcessor.esp7.SampelEnd.getValue();

    };
    audioProcessor.esp7.SampelVolume.onValueChange = [this] {
        audioProcessor.sp7.mp.mSampelVolume = audioProcessor.esp7.SampelVolume.getValue();
        audioProcessor.stepperWave.MainMixVolumeAudioSliders[6].setValue(audioProcessor.esp7.SampelVolume.getValue());
       
        if (audioProcessor.esp7.SampelVolume.isMouseButtonDown()) {
            sq7.setWaveVolumeSt(audioProcessor.esp7.SampelVolume.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
           sq7.serialWaveVolumeParas(audioProcessor.valueTreeState, 6);
        }
    };
    audioProcessor.esp7.SampelVolumeMod.onValueChange = [this] {
        audioProcessor.sp7.mp.mSampelVolumeMod = audioProcessor.esp7.SampelVolumeMod.getValue();
    };

    audioProcessor.esp7.SpAttack.onValueChange = [this] {
        audioProcessor.sp7.mp.mSpAttack = audioProcessor.esp7.SpAttack.getValue();

    };
    audioProcessor.esp7.SpRelease.onValueChange = [this] {
        audioProcessor.sp7.mp.mSpRelease = audioProcessor.esp7.SpRelease.getValue();

    };
    audioProcessor.esp7.EnvelopeMode.onClick = [this] {
        audioProcessor.sp7.setAr(audioProcessor.esp7.EnvelopeMode.getToggleState());
        audioProcessor.esp7.hidecontrollAr();
    };
    audioProcessor.esp7.WaveSizes_t.onValueChange = [this] {
        espWsize_T[6] = audioProcessor.esp7.WaveSizes_t.getValue();
        audioProcessor.esp7.WaveSizes[espWsize_T[6]].setToggleState(true, juce::dontSendNotification);
        audioProcessor.setWSize(espWsize_T, 6);
    };
    for (int i = 0; i < 3; i++) {
        audioProcessor.esp7.WaveSizes[i].onClick = [this] {

            if (audioProcessor.esp7.WaveSizes[0].getToggleState() == true) { espWsize_T[6] = 0; }
            if (audioProcessor.esp7.WaveSizes[1].getToggleState() == true) { espWsize_T[6] = 1; }
            if (audioProcessor.esp7.WaveSizes[2].getToggleState() == true) { espWsize_T[6] = 2; }
            audioProcessor.esp7.WaveSizes_t.setValue(espWsize_T[6]);
            audioProcessor.setWSize(espWsize_T, 6);
        };
    }
    audioProcessor.esp7.Cutoff.onValueChange = [this] {
        audioProcessor.sp7.filterDsLp->setcutoff(audioProcessor.esp7.Cutoff.getValue());

    };

    audioProcessor.esp7.CutMod.onValueChange = [this] {
        audioProcessor.sp7.filterDsLp->setCutoffMod(audioProcessor.esp7.CutMod.getValue());

    };

    audioProcessor.esp7.Resonance.onValueChange = [this] {
        audioProcessor.sp7.filterDsLp->setResonance(audioProcessor.esp7.Resonance.getValue());
    };

    audioProcessor.esp7.LfoModulationSampel.onClick = [this] {
        audioProcessor.esp7.hidecontrollMod();
    };

    audioProcessor.esp7.playModeCombo.onChange = [this] {
        if (audioProcessor.esp7.LfoModulationSampel.getToggleState() == false)
        {
            audioProcessor.esp7.LfoModulationSampel.setToggleState(true, juce::dontSendNotification);
        }
        audioProcessor.sp7.mp.mSamplePlayMode = audioProcessor.esp7.playModeCombo.getSelectedItemIndex();
        audioProcessor.esp7.EngineHideControl();
    };

    audioProcessor.esp7.FilterModeCombo.onChange = [this] {
        audioProcessor.sp7.filterDsLp->fmode.setIndex(audioProcessor.esp7.FilterModeCombo.getSelectedItemIndex());


    };

    audioProcessor.esp7.DelayModeCombo.onChange = [this] {
        audioProcessor.sp7.echo->dMode.setIndex(audioProcessor.esp7.DelayModeCombo.getSelectedItemIndex());
      
    };
    audioProcessor.esp7.DelayTime.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayTime(audioProcessor.esp7.DelayTime.getValue());
        audioProcessor.stepperWave.MainMixDelayTimeSliders[6].setValue(audioProcessor.esp7.DelayTime.getValue());
       
        if (audioProcessor.esp7.DelayTime.isMouseButtonDown()) {
            sq7.setDelayTSt(audioProcessor.esp7.DelayTime.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
            sq7.serialDelayTParas(audioProcessor.valueTreeState, 6);
        }
    };
    audioProcessor.esp7.DelayTimeMod.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayTimeMod(audioProcessor.esp7.DelayTimeMod.getValue());
    };
    audioProcessor.esp7.DelayLevel.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayLevel(audioProcessor.esp7.DelayLevel.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[6].setValue(audioProcessor.esp7.DelayLevel.getValue());
    };
    audioProcessor.esp7.DelayLevelMod.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayLevelMod(audioProcessor.esp7.DelayLevelMod.getValue());
       
    };
    audioProcessor.esp7.DelayFeed.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayFeed(audioProcessor.esp7.DelayFeed.getValue());
        audioProcessor.stepperWave.MainMixDelayFeedSliders[6].setValue(audioProcessor.esp7.DelayFeed.getValue());
        
        if (audioProcessor.esp7.DelayFeed.isMouseButtonDown()) {
            sq7.setDelayFSt(audioProcessor.esp7.DelayFeed.getValue(), audioProcessor.mainp.MainTriggerPrNr(), 6);
          sq7.serialDelayFParas(audioProcessor.valueTreeState, 6);

        }
    };
    audioProcessor.esp7.DelayFeedMod.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayFeedMod(audioProcessor.esp7.DelayFeedMod.getValue());
    };
    audioProcessor.esp7.DelayMix.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayMix(audioProcessor.esp7.DelayMix.getValue());
    };
    audioProcessor.esp7.DelayMixMod.onValueChange = [this] {
        audioProcessor.sp7.echo->setDelayMixMod(audioProcessor.esp7.DelayMixMod.getValue());
    };

    audioProcessor.esp7.LfoModeCombo.onChange = [this] {
        audioProcessor.sp7.oscillator.WaveformLfo.setIndex(audioProcessor.esp7.LfoModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp7.LfoRtrModeCombo.onChange = [this] {
        audioProcessor.sp7.mp.mSpLfoRtrMode = audioProcessor.esp7.LfoRtrModeCombo.getSelectedItemIndex();
        audioProcessor.Rtime->SetRetrigger7(audioProcessor.esp7.LfoRtrModeCombo.getSelectedItemIndex());

    };
    audioProcessor.esp7.LfoTime.onValueChange = [this] {
        audioProcessor.sp7.oscillator.setFrequencyLfo(audioProcessor.esp7.LfoTime.getValue());
    };

    audioProcessor.esp7.LfoAmp.onValueChange = [this] {
        audioProcessor.sp7.oscillator.setLfoAmp(audioProcessor.esp7.LfoAmp.getValue());
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
    
    audioProcessor.mainp.MainEqModeTemp.onValueChange=[this]{
        EqMode_T = audioProcessor.mainp.MainEqModeTemp.getValue();
        audioProcessor.mainp.mainEqOnOff[EqMode_T].setToggleState(true,juce::NotificationType::sendNotification);
        
    };
    for(int i=0;i<4;i++){
        audioProcessor.mainp.mainEqOnOff[i].onClick=[this]{
        if(audioProcessor.mainp.mainEqOnOff[0].getToggleState()>0){ EqMode_T=0; }
        if(audioProcessor.mainp.mainEqOnOff[1].getToggleState()>0){ EqMode_T=1;}
        if(audioProcessor.mainp.mainEqOnOff[2].getToggleState()>0){ EqMode_T=2; }
        if(audioProcessor.mainp.mainEqOnOff[3].getToggleState()>0){ EqMode_T=3; }
            audioProcessor.equalizer->setEqMode(EqMode_T);
            audioProcessor.mainp.MainEqModeTemp.setValue(EqMode_T);
            
        };
    }

    audioProcessor.mainp.mainEqBassV.onValueChange=[this]{
        audioProcessor.equalizer->setBassV(audioProcessor.mainp.mainEqBassV.getValue());
    };

    audioProcessor.mainp.mainEqMidV.onValueChange=[this]{
        audioProcessor.equalizer->setMidV(audioProcessor.mainp.mainEqMidV.getValue());
    };

    audioProcessor.mainp.mainEqHighV.onValueChange=[this]{
        audioProcessor.equalizer->setHighV(audioProcessor.mainp.mainEqHighV.getValue());
    };
    BitCrMode_T=1;
    
    audioProcessor.mainp.MainBitCrushModusTemp.onValueChange=[this]{
        BitCrMode_T = audioProcessor.mainp.MainBitCrushModusTemp.getValue();
        audioProcessor.mainp.mainBitCrushModus[BitCrMode_T].setToggleState(true,juce::NotificationType::sendNotification);
    };
    for(int i=0;i<4;i++){
        audioProcessor.mainp.mainBitCrushModus[i].onClick=[this]{
            if(audioProcessor.mainp.mainBitCrushModus[0].getToggleState()>0){BitCrMode_T=0;}
            if(audioProcessor.mainp.mainBitCrushModus[1].getToggleState()>0){BitCrMode_T=1;}
            if(audioProcessor.mainp.mainBitCrushModus[2].getToggleState()>0){BitCrMode_T=2;}
            if(audioProcessor.mainp.mainBitCrushModus[3].getToggleState()>0){BitCrMode_T=3;}
            //audioProcessor.btc->SetModus(BitCrMode_T);
            audioProcessor.mainp.MainBitCrushModusTemp.setValue(BitCrMode_T);
            
        };
    }
    
    
    audioProcessor.mainp.mainBitCrushBits.onValueChange=[this]{
//        audioProcessor.btc->setBitNum(audioProcessor.mainp.mainBitCrushBits.getValue());
    };
    audioProcessor.mainp.mainBitCrushMix.onValueChange=[this]{
  //      audioProcessor.btc->setMix(audioProcessor.mainp.mainBitCrushMix.getValue());
    };
    
    audioProcessor.mainp.mainBitCrushWed_Dry.onValueChange=[this]{
   //     audioProcessor.btc->setDry(audioProcessor.mainp.mainBitCrushWed_Dry.getValue());
        
    };
    LimiterMode_T=1;
    
    audioProcessor.mainp.mainLimiterModeTemp.onValueChange=[this]{
        LimiterMode_T = audioProcessor.mainp.mainLimiterModeTemp.getValue();
        audioProcessor.mainp.mainLimiterMode[LimiterMode_T].setToggleState(true,juce::NotificationType::sendNotification);
    };
    for(int i=0;i<4;i++){
        audioProcessor.mainp.mainLimiterMode[i].onClick=[this]{
            if(audioProcessor.mainp.mainLimiterMode[0].getToggleState()>0){LimiterMode_T=0;}
            if(audioProcessor.mainp.mainLimiterMode[1].getToggleState()>0){LimiterMode_T=1;}
            if(audioProcessor.mainp.mainLimiterMode[2].getToggleState()>0){LimiterMode_T=2;}
            if(audioProcessor.mainp.mainLimiterMode[3].getToggleState()>0){LimiterMode_T=3;}
            audioProcessor.limiter->setLimiterMode(LimiterMode_T);
            audioProcessor.mainp.mainLimiterModeTemp.setValue(LimiterMode_T);
            
        };
    }
    
    audioProcessor.mainp.mainLimiterThresh.onValueChange=[this]{
        audioProcessor.limiter->setLimiterThrsh(audioProcessor.mainp.mainLimiterThresh.getValue());
    };
    audioProcessor.mainp.mainLimiterGain.onValueChange=[this]{
        audioProcessor.limiter->setLimiterGain(audioProcessor.mainp.mainLimiterGain.getValue());
    };

    audioProcessor.stepperWave.hideMix(0, engineSwitch);
    
      parameters.attachControls(
                                 audioProcessor.stepperWave.MidiCCcombo
                                ,audioProcessor.mainp.TimeComboBox
                                
                                ,audioProcessor.mainp.TimeSlider
                                ,audioProcessor.mainp.SeqLenghtSlider
                                ,audioProcessor.mainp.mainWaveSlider
                                ,audioProcessor.mainp.mainPitchSlider
                                ,audioProcessor.mainp.mainDelaySlider
                                ,audioProcessor.mainp.mainVolSlider
                                ,audioProcessor.mainp.mainLfoSelectSlider
                                ,audioProcessor.mainp.mainLfoPitchAmpSlider
                                ,audioProcessor.mainp.mainLfoDelayAmpSlider
                                ,audioProcessor.mainp.mainSHCombo
                                ,audioProcessor.mainp.SamplerEngineTemp
                                ,audioProcessor.mainp.TriggerProgramm10
                                ,audioProcessor.mainp.MainEqModeTemp
                                ,audioProcessor.mainp.mainEqBassV
                                ,audioProcessor.mainp.mainEqMidV
                                ,audioProcessor.mainp.mainEqHighV
                                ,audioProcessor.mainp.MainBitCrushModusTemp
                                ,audioProcessor.mainp.mainBitCrushBits
                                ,audioProcessor.mainp.mainBitCrushMix
                                ,audioProcessor.mainp.mainBitCrushWed_Dry
                                ,audioProcessor.mainp.mainLimiterModeTemp
                                ,audioProcessor.mainp.mainLimiterThresh
                                ,audioProcessor.mainp.mainLimiterGain
                      
      //--------------------------sp1------------------------//
                                ,audioProcessor.esp1.waveformCombo
                                ,audioProcessor.esp1.noteNumberSlider
                                ,audioProcessor.esp1.noteNumberSliderMod
                                ,audioProcessor.esp1.synthLevelSlider
                                ,audioProcessor.esp1.synthLevelSliderMod
                                ,audioProcessor.esp1.synthAttackSlider
                                ,audioProcessor.esp1.synthReleaseSlider
                                ,audioProcessor.esp1.synthReleaseSliderMod
                                ,audioProcessor.esp1.StepperOnOff
                                ,audioProcessor.esp1.EngineMenuButton
                           
                                ,audioProcessor.esp1.playModeCombo
                                ,audioProcessor.esp1.playTimeModeCombo
                   
                                ,audioProcessor.esp1.SampelGate
                                ,audioProcessor.esp1.SampelN1
                                ,audioProcessor.esp1.PatternState
                                ,audioProcessor.esp1.SampelPitch
                                ,audioProcessor.esp1.SampelPitchMod
                                ,audioProcessor.esp1.SampelStart
                                ,audioProcessor.esp1.SampelEnd
                                ,audioProcessor.esp1.SampelVolume
                                ,audioProcessor.esp1.SampelVolumeMod
                                ,audioProcessor.esp1.SpAttack
                                ,audioProcessor.esp1.SpRelease
                                ,audioProcessor.esp1.SpReleaseMod
                                ,audioProcessor.esp1.EnvelopeMode
                                ,audioProcessor.esp1.WaveSizes_t
                                ,audioProcessor.esp1.LfoModulationSampel
                                
                                
                                      
                                ,audioProcessor.esp1.Cutoff
                                ,audioProcessor.esp1.CutMod
                                ,audioProcessor.esp1.Resonance
                                ,audioProcessor.esp1.FilterModeCombo
                                
                                
                                ,audioProcessor.esp1.DelayModeCombo
                                ,audioProcessor.esp1.DelayTime
                                ,audioProcessor.esp1.DelayFeed
                                ,audioProcessor.esp1.DelayMix
                                ,audioProcessor.esp1.DelayLevel
                                ,audioProcessor.esp1.DelayTimeMod
                                ,audioProcessor.esp1.DelayFeedMod
                                ,audioProcessor.esp1.DelayMixMod
                                ,audioProcessor.esp1.DelayLevelMod
                                
                                
                                ,audioProcessor.esp1.LfoModeCombo
                                ,audioProcessor.esp1.LfoRtrModeCombo
                                ,audioProcessor.esp1.LfoTime
                                ,audioProcessor.esp1.LfoAmp
                                //--------------------------sp2------------------------//
                                ,audioProcessor.esp2.waveformCombo
                                ,audioProcessor.esp2.noteNumberSlider
                                ,audioProcessor.esp2.noteNumberSliderMod
                                ,audioProcessor.esp2.synthLevelSlider
                                ,audioProcessor.esp2.synthLevelSliderMod
                                ,audioProcessor.esp2.synthAttackSlider
                                ,audioProcessor.esp2.synthReleaseSlider
                                ,audioProcessor.esp2.synthReleaseSliderMod
                                ,audioProcessor.esp2.StepperOnOff
                                ,audioProcessor.esp2.EngineMenuButton
                                
                                ,audioProcessor.esp2.playModeCombo
                                ,audioProcessor.esp2.playTimeModeCombo
                                
                                ,audioProcessor.esp2.SampelGate
                                ,audioProcessor.esp2.SampelN1
                                ,audioProcessor.esp2.PatternState
                                ,audioProcessor.esp2.SampelPitch
                                ,audioProcessor.esp2.SampelPitchMod
                                ,audioProcessor.esp2.SampelStart
                                ,audioProcessor.esp2.SampelEnd
                                ,audioProcessor.esp2.SampelVolume
                                ,audioProcessor.esp2.SampelVolumeMod
                                ,audioProcessor.esp2.SpAttack
                                ,audioProcessor.esp2.SpRelease
                               ,audioProcessor.esp2.SpReleaseMod
                               ,audioProcessor.esp2.EnvelopeMode
                                ,audioProcessor.esp2.WaveSizes_t
                                ,audioProcessor.esp2.LfoModulationSampel
                                
                                
                                
                                ,audioProcessor.esp2.Cutoff
                                ,audioProcessor.esp2.CutMod
                                ,audioProcessor.esp2.Resonance
                                ,audioProcessor.esp2.FilterModeCombo
                                
                                
                                ,audioProcessor.esp2.DelayModeCombo
                                ,audioProcessor.esp2.DelayTime
                                ,audioProcessor.esp2.DelayFeed
                                ,audioProcessor.esp2.DelayMix
                                ,audioProcessor.esp2.DelayLevel
                                ,audioProcessor.esp2.DelayTimeMod
                                ,audioProcessor.esp2.DelayFeedMod
                                ,audioProcessor.esp2.DelayMixMod
                                ,audioProcessor.esp2.DelayLevelMod
                               
                                
                                ,audioProcessor.esp2.LfoModeCombo
                                ,audioProcessor.esp2.LfoRtrModeCombo
                                ,audioProcessor.esp2.LfoTime
                                ,audioProcessor.esp2.LfoAmp
                                //--------------------------sp3------------------------//
                                ,audioProcessor.esp3.waveformCombo
                                ,audioProcessor.esp3.noteNumberSlider
                                ,audioProcessor.esp3.noteNumberSliderMod
                                ,audioProcessor.esp3.synthLevelSlider
                                ,audioProcessor.esp3.synthLevelSliderMod
                                ,audioProcessor.esp3.synthAttackSlider
                                ,audioProcessor.esp3.synthReleaseSlider
                                ,audioProcessor.esp3.synthReleaseSliderMod
                                ,audioProcessor.esp3.StepperOnOff
                                ,audioProcessor.esp3.EngineMenuButton
                                
                                ,audioProcessor.esp3.playModeCombo
                                ,audioProcessor.esp3.playTimeModeCombo
                                
                                ,audioProcessor.esp3.SampelGate
                                ,audioProcessor.esp3.SampelN1
                                ,audioProcessor.esp3.PatternState
                                ,audioProcessor.esp3.SampelPitch
                                ,audioProcessor.esp3.SampelPitchMod
                                ,audioProcessor.esp3.SampelStart
                                ,audioProcessor.esp3.SampelEnd
                                ,audioProcessor.esp3.SampelVolume
                                ,audioProcessor.esp3.SampelVolumeMod
                                ,audioProcessor.esp3.SpAttack
                                ,audioProcessor.esp3.SpRelease
                                ,audioProcessor.esp3.SpReleaseMod
                                ,audioProcessor.esp3.EnvelopeMode
                                , audioProcessor.esp3.WaveSizes_t
                                ,audioProcessor.esp3.LfoModulationSampel
                                
                                
                                
                                ,audioProcessor.esp3.Cutoff
                                ,audioProcessor.esp3.CutMod
                                ,audioProcessor.esp3.Resonance
                                ,audioProcessor.esp3.FilterModeCombo
                                
                                
                                ,audioProcessor.esp3.DelayModeCombo
                                ,audioProcessor.esp3.DelayTime
                                ,audioProcessor.esp3.DelayFeed
                                ,audioProcessor.esp3.DelayMix
                                ,audioProcessor.esp3.DelayLevel
                                ,audioProcessor.esp3.DelayTimeMod
                                ,audioProcessor.esp3.DelayFeedMod
                                ,audioProcessor.esp3.DelayMixMod
                                ,audioProcessor.esp3.DelayLevelMod
                               
                                
                                ,audioProcessor.esp3.LfoModeCombo
                                ,audioProcessor.esp3.LfoRtrModeCombo
                                ,audioProcessor.esp3.LfoTime
                                ,audioProcessor.esp3.LfoAmp

                                 //--------------------------sp4------------------------//
                                ,audioProcessor.esp4.waveformCombo
                                ,audioProcessor.esp4.noteNumberSlider
                                ,audioProcessor.esp4.noteNumberSliderMod
                                ,audioProcessor.esp4.synthLevelSlider
                                ,audioProcessor.esp4.synthLevelSliderMod
                                ,audioProcessor.esp4.synthAttackSlider
                                ,audioProcessor.esp4.synthReleaseSlider
                                ,audioProcessor.esp4.synthReleaseSliderMod
                                ,audioProcessor.esp4.StepperOnOff
                                ,audioProcessor.esp4.EngineMenuButton
                                
                                ,audioProcessor.esp4.playModeCombo
                                ,audioProcessor.esp4.playTimeModeCombo
                                
                                ,audioProcessor.esp4.SampelGate
                                ,audioProcessor.esp4.SampelN1
                                ,audioProcessor.esp4.PatternState
                                ,audioProcessor.esp4.SampelPitch
                                ,audioProcessor.esp4.SampelPitchMod
                                ,audioProcessor.esp4.SampelStart
                                ,audioProcessor.esp4.SampelEnd
                                ,audioProcessor.esp4.SampelVolume
                                ,audioProcessor.esp4.SampelVolumeMod
                                ,audioProcessor.esp4.SpAttack
                                ,audioProcessor.esp4.SpRelease
                                ,audioProcessor.esp4.SpReleaseMod
                                ,audioProcessor.esp4.EnvelopeMode
                                ,audioProcessor.esp4.WaveSizes_t
                                ,audioProcessor.esp4.LfoModulationSampel
                                
                                
                                
                                ,audioProcessor.esp4.Cutoff
                                ,audioProcessor.esp4.CutMod
                                ,audioProcessor.esp4.Resonance
                                ,audioProcessor.esp4.FilterModeCombo
                                
                                
                                ,audioProcessor.esp4.DelayModeCombo
                                ,audioProcessor.esp4.DelayTime
                                ,audioProcessor.esp4.DelayFeed
                                ,audioProcessor.esp4.DelayMix
                                ,audioProcessor.esp4.DelayLevel
                                ,audioProcessor.esp4.DelayTimeMod
                                ,audioProcessor.esp4.DelayFeedMod
                                ,audioProcessor.esp4.DelayMixMod
                                ,audioProcessor.esp4.DelayLevelMod
                               
                                
                                ,audioProcessor.esp4.LfoModeCombo
                                ,audioProcessor.esp4.LfoRtrModeCombo
                                ,audioProcessor.esp4.LfoTime
                                ,audioProcessor.esp4.LfoAmp
                                    //--------------------------sp5------------------------//
                                    , audioProcessor.esp5.waveformCombo
                                    , audioProcessor.esp5.noteNumberSlider
                                    , audioProcessor.esp5.noteNumberSliderMod
                                    , audioProcessor.esp5.synthLevelSlider
                                    , audioProcessor.esp5.synthLevelSliderMod
                                    , audioProcessor.esp5.synthAttackSlider
                                    , audioProcessor.esp5.synthReleaseSlider
                                    , audioProcessor.esp5.synthReleaseSliderMod
                                    , audioProcessor.esp5.StepperOnOff
                                    , audioProcessor.esp5.EngineMenuButton

                                    , audioProcessor.esp5.playModeCombo
                                    , audioProcessor.esp5.playTimeModeCombo

                                    , audioProcessor.esp5.SampelGate
                                    , audioProcessor.esp5.SampelN1
                                    , audioProcessor.esp5.PatternState
                                    , audioProcessor.esp5.SampelPitch
                                    , audioProcessor.esp5.SampelPitchMod
                                    , audioProcessor.esp5.SampelStart
                                    , audioProcessor.esp5.SampelEnd
                                    , audioProcessor.esp5.SampelVolume
                                    , audioProcessor.esp5.SampelVolumeMod
                                    , audioProcessor.esp5.SpAttack
                                    , audioProcessor.esp5.SpRelease
                                    , audioProcessor.esp5.SpReleaseMod
                                    , audioProcessor.esp5.EnvelopeMode
                                    , audioProcessor.esp5.WaveSizes_t
                                    , audioProcessor.esp5.LfoModulationSampel



                                    , audioProcessor.esp5.Cutoff
                                    , audioProcessor.esp5.CutMod
                                    , audioProcessor.esp5.Resonance
                                    , audioProcessor.esp5.FilterModeCombo


                                    , audioProcessor.esp5.DelayModeCombo
                                    , audioProcessor.esp5.DelayTime
                                    , audioProcessor.esp5.DelayFeed
                                    , audioProcessor.esp5.DelayMix
                                    , audioProcessor.esp5.DelayLevel
                                    , audioProcessor.esp5.DelayTimeMod
                                    , audioProcessor.esp5.DelayFeedMod
                                    , audioProcessor.esp5.DelayMixMod
                                    , audioProcessor.esp5.DelayLevelMod


                                    , audioProcessor.esp5.LfoModeCombo
                                    , audioProcessor.esp5.LfoRtrModeCombo
                                    , audioProcessor.esp5.LfoTime
                                    , audioProcessor.esp5.LfoAmp
                                    //--------------------------sp6------------------------//
                                    , audioProcessor.esp6.waveformCombo
                                    , audioProcessor.esp6.noteNumberSlider
                                    , audioProcessor.esp6.noteNumberSliderMod
                                    , audioProcessor.esp6.synthLevelSlider
                                    , audioProcessor.esp6.synthLevelSliderMod
                                    , audioProcessor.esp6.synthAttackSlider
                                    , audioProcessor.esp6.synthReleaseSlider
                                    , audioProcessor.esp6.synthReleaseSliderMod
                                    , audioProcessor.esp6.StepperOnOff
                                    , audioProcessor.esp6.EngineMenuButton

                                    , audioProcessor.esp6.playModeCombo
                                    , audioProcessor.esp6.playTimeModeCombo

                                    , audioProcessor.esp6.SampelGate
                                    , audioProcessor.esp6.SampelN1
                                    , audioProcessor.esp6.PatternState
                                    , audioProcessor.esp6.SampelPitch
                                    , audioProcessor.esp6.SampelPitchMod
                                    , audioProcessor.esp6.SampelStart
                                    , audioProcessor.esp6.SampelEnd
                                    , audioProcessor.esp6.SampelVolume
                                    , audioProcessor.esp6.SampelVolumeMod
                                    , audioProcessor.esp6.SpAttack
                                    , audioProcessor.esp6.SpRelease
                                    , audioProcessor.esp6.SpReleaseMod
                                    , audioProcessor.esp6.EnvelopeMode
                                    , audioProcessor.esp6.WaveSizes_t
                                    , audioProcessor.esp6.LfoModulationSampel



                                    , audioProcessor.esp6.Cutoff
                                    , audioProcessor.esp6.CutMod
                                    , audioProcessor.esp6.Resonance
                                    , audioProcessor.esp6.FilterModeCombo


                                    , audioProcessor.esp6.DelayModeCombo
                                    , audioProcessor.esp6.DelayTime
                                    , audioProcessor.esp6.DelayFeed
                                    , audioProcessor.esp6.DelayMix
                                    , audioProcessor.esp6.DelayLevel
                                    , audioProcessor.esp6.DelayTimeMod
                                    , audioProcessor.esp6.DelayFeedMod
                                    , audioProcessor.esp6.DelayMixMod
                                    , audioProcessor.esp6.DelayLevelMod


                                    , audioProcessor.esp6.LfoModeCombo
                                    , audioProcessor.esp6.LfoRtrModeCombo
                                    , audioProcessor.esp6.LfoTime
                                    , audioProcessor.esp6.LfoAmp
                                        //--------------------------sp7------------------------//
                                        , audioProcessor.esp7.waveformCombo
                                        , audioProcessor.esp7.noteNumberSlider
                                        , audioProcessor.esp7.noteNumberSliderMod
                                        , audioProcessor.esp7.synthLevelSlider
                                        , audioProcessor.esp7.synthLevelSliderMod
                                        , audioProcessor.esp7.synthAttackSlider
                                        , audioProcessor.esp7.synthReleaseSlider
                                        , audioProcessor.esp7.synthReleaseSliderMod
                                        , audioProcessor.esp7.StepperOnOff
                                        , audioProcessor.esp7.EngineMenuButton

                                        , audioProcessor.esp7.playModeCombo
                                        , audioProcessor.esp7.playTimeModeCombo

                                        , audioProcessor.esp7.SampelGate
                                        , audioProcessor.esp7.SampelN1
                                        , audioProcessor.esp7.PatternState
                                        , audioProcessor.esp7.SampelPitch
                                        , audioProcessor.esp7.SampelPitchMod
                                        , audioProcessor.esp7.SampelStart
                                        , audioProcessor.esp7.SampelEnd
                                        , audioProcessor.esp7.SampelVolume
                                        , audioProcessor.esp7.SampelVolumeMod
                                        , audioProcessor.esp7.SpAttack
                                        , audioProcessor.esp7.SpRelease
                                        , audioProcessor.esp7.SpReleaseMod
                                        , audioProcessor.esp7.EnvelopeMode
                                        , audioProcessor.esp7.WaveSizes_t
                                        , audioProcessor.esp7.LfoModulationSampel



                                        , audioProcessor.esp7.Cutoff
                                        , audioProcessor.esp7.CutMod
                                        , audioProcessor.esp7.Resonance
                                        , audioProcessor.esp7.FilterModeCombo


                                        , audioProcessor.esp7.DelayModeCombo
                                        , audioProcessor.esp7.DelayTime
                                        , audioProcessor.esp7.DelayFeed
                                        , audioProcessor.esp7.DelayMix
                                        , audioProcessor.esp7.DelayLevel
                                        , audioProcessor.esp7.DelayTimeMod
                                        , audioProcessor.esp7.DelayFeedMod
                                        , audioProcessor.esp7.DelayMixMod
                                        , audioProcessor.esp7.DelayLevelMod


                                        , audioProcessor.esp7.LfoModeCombo
                                        , audioProcessor.esp7.LfoRtrModeCombo
                                        , audioProcessor.esp7.LfoTime
                                        , audioProcessor.esp7.LfoAmp
                                );
     
     
    timerCallback();
   startTimer(10);
    
   
    
    
   
    
    //--------------init-------
   
   

    /*
    addAndMakeVisible(undoButton);
    addAndMakeVisible(redoButton);
    undoButton.addListener(this);
    redoButton.addListener(this);
    */
    addAndMakeVisible(audioProcessor.meterV);
   
    audioProcessor.mainp.meterIn(0.5);


    




 

    auto* hyperlink1 = (new HyperlinkButton("www.hebeisen.soft/FaceBook",
        { "https://github.com/rogerhug/DeadPoolAudio_Modelx4_juce" }));

    addAndMakeVisible(hyperlink1);
    hyperlink1->setBounds(0, 0, 200, 22);

   


    // clear the undo manager now, because this is our starting point
    // (Setting up the ValueTree will have added many actions to the history, which 
    // aren't actually supposed to be undoable.)
  //  audioProcessor.undoManager.clearUndoHistory();

   
  

    updateTriggerParas();
    setSize (720, 565);
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
     MasterMenu.setBounds(100, 0, 650, 30);
     audioProcessor.meterV.setBounds(650, 320, 20, 65);
   //  MidiCCcombo.setBounds(100, 560, 500, 20);
  

     audioProcessor.mainp.setBounds(10,30,700,660);
     audioProcessor.stepperWave.setBounds(70, 60, 650, 210);
     sq1.setBounds(70,60,670,30);
     sq2.setBounds(70,90,650,30);
     sq3.setBounds(70,120,650,30);
     sq4.setBounds(70,150,650,30);
     sq5.setBounds(70, 180, 650, 30);
     sq6.setBounds(70, 210, 650, 30);
     sq7.setBounds(70, 240, 650, 30);
     
    audioProcessor.esp1.setBounds(5,400,705,150);
     audioProcessor.esp2.setBounds(5,400,705,150);
     audioProcessor.esp3.setBounds(5,400,705,150);
     audioProcessor.esp4.setBounds(5,400,705,150);
     
     audioProcessor.esp5.setBounds(5, 400, 705, 150);
     audioProcessor.esp6.setBounds(5, 400, 705, 150);
     audioProcessor.esp7.setBounds(5, 400, 705, 150);
     fileComp.get()->setBounds(0,300,150,100);
  //  SysthemInfoLabel.setBounds (0, 20, 70, 10);
  //  SampleFileLabel.setBounds (250, 220, 180, 40);
   
 //   undoButton.setBounds(600, 0,50,20);
 //   redoButton.setBounds(650, 0,50, 20);
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
int ud = 0;
void NewProjectAudioProcessorEditor::timerCallback() {

  
if(audioProcessor.trupdate== true){
        updateTriggerParas();
        updateSampleParas();
  
        audioProcessor.stepperWave.SpAudioSet1[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet2[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet3[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet4[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet5[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet6[0].setToggleState(true, juce::dontSendNotification);
        audioProcessor.stepperWave.SpAudioSet7[0].setToggleState(true, juce::dontSendNotification);
    
   

        audioProcessor.trupdate = false;


}
/*
const int on = audioProcessor.stepperWave.stepini1.isMouseButtonDown();
 // sprintf(dbtx,"%i" ,audioProcessor.esp1.SampelN1.isMouseButtonDown());
  //  const int wpn = audioProcessor.trs.unserialTSPW1(audioProcessor.valueTreeState)[audioProcessor.mainp.MainTriggerPrNr()];
    const int x = audioProcessor.mainp.mainVolSlider.getValue() * 4;// audioProcessor.mainp.SamplerEngineTemp.getValue();
    sprintf(dbt, "|para1| %f ||  para2| %i  para3 %i para 4 %i",
        0
        , audioProcessor.stepperWave.stepini1.isMouseButtonDown()
        , audioProcessor.trupdate
        , count2
    );
    const int ur1 = audioProcessor.esp1.SampelN1.getValue();

    //audioProcessor.mainp.timeLabel.setText(dbt, juce::dontSendNotification);
        audioProcessor.mainp.timeLabel.setText(audioProcessor.urls.getUrl1V()[ur1].toString(), juce::dontSendNotification);

 
 */

    
    
 //   audioProcessor.undoManager.beginNewTransaction();

 //   undoButton.setEnabled(audioProcessor.undoManager.canUndo());
  //  redoButton.setEnabled(audioProcessor.undoManager.canRedo());
}

void NewProjectAudioProcessorEditor::labelTextChanged(juce::Label *labelThatHasChanged) { 

}

void NewProjectAudioProcessorEditor::buttonClicked(juce::Button *b) { 
   
}

void NewProjectAudioProcessorEditor::updateTriggerParas() { 
    
     
    
    
       


     for(int i=0;i<16;i++)
     {
     
    
        
         

     sq1.unSerialTriggers(audioProcessor.valueTreeState, 0, 1);//  ------unserail triggers[16]
     sq1.unSerialWaveParas(audioProcessor.valueTreeState, 0);//-------unserial paraWave["0-6"]
     sq1.unSerialPitchParas(audioProcessor.valueTreeState, 0);
     sq1.unSerialDelayTParas(audioProcessor.valueTreeState, 0);
 
     sq2.unSerialTriggers(audioProcessor.valueTreeState, 1, 1);
     sq2.unSerialWaveParas(audioProcessor.valueTreeState, 1);
     sq2.unSerialPitchParas(audioProcessor.valueTreeState, 1);
     sq2.unSerialDelayTParas(audioProcessor.valueTreeState, 1);
  
     sq3.unSerialTriggers(audioProcessor.valueTreeState, 2, 1);
     sq3.unSerialWaveParas(audioProcessor.valueTreeState, 2);
     sq3.unSerialPitchParas(audioProcessor.valueTreeState, 2);
     sq3.unSerialDelayTParas(audioProcessor.valueTreeState, 2);

     sq4.unSerialTriggers(audioProcessor.valueTreeState, 3, 1);
     sq4.unSerialWaveParas(audioProcessor.valueTreeState, 3);
     sq4.unSerialPitchParas(audioProcessor.valueTreeState, 3);
     sq4.unSerialDelayTParas(audioProcessor.valueTreeState, 3);
 
     sq5.unSerialTriggers(audioProcessor.valueTreeState, 4, 1);
     sq5.unSerialWaveParas(audioProcessor.valueTreeState, 4);
     sq5.unSerialPitchParas(audioProcessor.valueTreeState, 4);
     sq5.unSerialDelayTParas(audioProcessor.valueTreeState, 4);

     sq6.unSerialTriggers(audioProcessor.valueTreeState, 5, 1);
     sq6.unSerialWaveParas(audioProcessor.valueTreeState, 5);
     sq6.unSerialPitchParas(audioProcessor.valueTreeState, 5);
     sq6.unSerialDelayTParas(audioProcessor.valueTreeState, 5);

     sq7.unSerialTriggers(audioProcessor.valueTreeState, 6, 1);
     sq7.unSerialWaveParas(audioProcessor.valueTreeState, 6);
     sq7.unSerialPitchParas(audioProcessor.valueTreeState, 6);
     sq7.unSerialDelayTParas(audioProcessor.valueTreeState, 6);

    
     
     sq1.triggermultibutA[i].setToggleState(sq1.getTriggers(0)[i], juce::dontSendNotification);
     sq2.triggermultibutA[i].setToggleState(sq2.getTriggers(1)[i], juce::dontSendNotification);
     sq3.triggermultibutA[i].setToggleState(sq3.getTriggers(2)[i], juce::dontSendNotification);
     sq4.triggermultibutA[i].setToggleState(sq4.getTriggers(3)[i], juce::dontSendNotification);
     sq5.triggermultibutA[i].setToggleState(sq5.getTriggers(4)[i], juce::dontSendNotification);
     sq6.triggermultibutA[i].setToggleState(sq6.getTriggers(5)[i], juce::dontSendNotification);
     sq7.triggermultibutA[i].setToggleState(sq7.getTriggers(6)[i], juce::dontSendNotification);

     }
 
     audioProcessor.Rtime->trigger1In(sq1.getTriggers(0));
     audioProcessor.Rtime->trigger2In(sq2.getTriggers(1));
     audioProcessor.Rtime->trigger3In(sq3.getTriggers(2));
     audioProcessor.Rtime->trigger4In(sq4.getTriggers(3));
     audioProcessor.Rtime->trigger5In(sq5.getTriggers(4));
     audioProcessor.Rtime->trigger6In(sq6.getTriggers(5));
     audioProcessor.Rtime->trigger7In(sq7.getTriggers(6));

     audioProcessor.stepperWave.setHideColors1(sq1.getTriggers(0), 0, audioProcessor.mainp.MainTriggerPrNr());
     audioProcessor.stepperWave.setHideColors2(sq2.getTriggers(1), 1, audioProcessor.mainp.MainTriggerPrNr());
     audioProcessor.stepperWave.setHideColors3(sq3.getTriggers(2), 2, audioProcessor.mainp.MainTriggerPrNr());
     audioProcessor.stepperWave.setHideColors4(sq4.getTriggers(3), 3, audioProcessor.mainp.MainTriggerPrNr());

     //**********************************************************stepper***********************************
     
         for (int p = 0; p < 10; p++) {
         audioProcessor.stepperWave.unSerialStepps(audioProcessor.valueTreeState, audioProcessor.mainp.SamplerEngineTemp.getValue(),p);
         audioProcessor.stepperWave.unSerialModeStepps(audioProcessor.valueTreeState, audioProcessor.mainp.SamplerEngineTemp.getValue(), p);


        } 

    //***********************************************************mixer**************************************

         engineSwitch[0] =audioProcessor.esp1.EngineMenuButton.getToggleState();
         engineSwitch[1] = audioProcessor.esp2.EngineMenuButton.getToggleState();
         engineSwitch[2] = audioProcessor.esp3.EngineMenuButton.getToggleState();
         engineSwitch[3] = audioProcessor.esp4.EngineMenuButton.getToggleState();
         engineSwitch[4] = audioProcessor.esp5.EngineMenuButton.getToggleState();
         engineSwitch[5] = audioProcessor.esp6.EngineMenuButton.getToggleState();
         engineSwitch[6] = audioProcessor.esp7.EngineMenuButton.getToggleState();
         for (int s = 0; s < 7; s++) {
             audioProcessor.stepperWave.MainMixerEngineHideControl(s, engineSwitch);
         }
   

}

void NewProjectAudioProcessorEditor::updateSampleParas()
{
    const int ur1 =audioProcessor.esp1.SampelN1.getValue();
    const int ur2 = audioProcessor.esp2.SampelN1.getValue();
    const int ur3 = audioProcessor.esp3.SampelN1.getValue();
    const int ur4 = audioProcessor.esp4.SampelN1.getValue();
    const int ur5 = audioProcessor.esp5.SampelN1.getValue();
    const int ur6 = audioProcessor.esp6.SampelN1.getValue();
    const int ur7 = audioProcessor.esp7.SampelN1.getValue();
    
   audioProcessor.esp1.SampleFileLabel.setText(
        audioProcessor.urls.getUrl1V()[ur1].toString(), juce::dontSendNotification);
    audioProcessor.esp2.SampleFileLabel.setText(
        audioProcessor.urls.getUrl2V()[ur2].toString(), juce::dontSendNotification);
    audioProcessor.esp3.SampleFileLabel.setText(
        audioProcessor.urls.getUrl3V()[ur3].toString(), juce::dontSendNotification);
    audioProcessor.esp4.SampleFileLabel.setText(
        audioProcessor.urls.getUrl4V()[ur4].toString(), juce::dontSendNotification);
    audioProcessor.esp5.SampleFileLabel.setText(
        audioProcessor.urls.getUrl5V()[ur5].toString(), juce::dontSendNotification);
    audioProcessor.esp6.SampleFileLabel.setText(
        audioProcessor.urls.getUrl6V()[ur6].toString(), juce::dontSendNotification);
    audioProcessor.esp7.SampleFileLabel.setText(
        audioProcessor.urls.getUrl7V()[ur7].toString(), juce::dontSendNotification);
 //   audioProcessor.trupdate = false;
   
}






