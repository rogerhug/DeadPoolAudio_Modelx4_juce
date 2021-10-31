
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "../synth/SynthWaveform.h"
#include"Eutils.h"


typedef AudioProcessorValueTreeState::ComboBoxAttachment ComboBoxAttachment;
typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;
typedef AudioProcessorValueTreeState::ButtonAttachment ButtonAttachment;



struct PluginParameters
{
    // Id's are symbolic names, Names are human-friendly names for GUI
    // Labels are supplementary, typically used for units of measure
    
    //-----------Mainparas-------------------
    
     static const String TimerMode_Id, TimerMode_Name, TimerMode_Label;
     static const String TimerBpm_Id, TimerBpm_Name, TimerBpm_Label;
     static const String mainSqLenght_Id, mainSqLenght_Name, mainSqLenght_Label;
    
    static const String mainWave_Id, mainWave_Name, mainWave_Label;
    static const String mainPitch_Id, mainPitch_Name, mainPitch_Label;
    static const String mainDelay_Id, mainDelay_Name, mainDelay_Label;
    static const String mainVolume_Id, mainVolume_Name, mainVolume_Label;
    
    static const String mainLfoSelect_Id, mainLfoSelect_Name, mainLfoSelect_Label;
    static const String mainLfoSpHold_Id, mainLfoSpHold_Name, mainLfoSpHold_Label;
    static const String mainLfoPitchAm_Id, mainLfoPitchAm_Name, mainLfoPitchAm_Label;
    static const String mainLfoDelayAm_Id, mainLfoDelayAm_Name, mainLfoDelayAm_Label;

    
    
    
    
    static const String EngineSelect_Id, EngineSelect_Name, EngineSelect_Label;


    static const String TriggerSelect10_Id, TriggerSelect10_Name, TriggerSelect10_Label;
    
    static const String mainEqMode_Id,mainEqMode_Name,mainEqMode_Label;
    static const String mainEqBassV_Id,mainEqBassV_Name,mainEqBassV_Label;
    static const String mainEqMidV_Id,mainEqMidV_Name,mainEqMidV_Label;
    static const String mainEqHighV_Id,mainEqHighV_Name,mainEqHighV_Label;
    
    static const String mainBitCrushMode_Id,mainBitCrushMode_Name,mainBitCrushMode_Label;
    static const String mainBitCrushBits_Id,mainBitCrushBits_Name,mainBitCrushBits_Label;
    static const String mainBitCrushMix_Id,mainBitCrushMix_Name,mainBitCrushMix_Label;
    static const String mainBitCrushDry_Id,mainBitCrushDry_Name,mainBitCrushDry_Label;
    
    static const String mainLimiterMode_Id,mainLimiterMode_Name,mainLimiterMode_Label;
    static const String mainLimiterThrsh_Id,mainLimiterThrsh_Name,mainLimiterThrsh_Label;
    static const String mainLimiterGain_Id,mainLimiterGain_Name,mainLimiterGain_Label;

    
    
    //Sampler1
    
    static const String Sp1Synthwaveform_Id, Sp1Synthwaveform_Name, Sp1Synthwaveform_Label;
    static const String Sp1SynthmidiNoteNumber_Id, Sp1SynthmidiNoteNumber_Name, Sp1SynthmidiNoteNumber_Label;
    static const String Sp1SynthmidiNoteNumberMod_Id, Sp1SynthmidiNoteNumberMod_Name, Sp1SynthmidiNoteNumberMod_Label;
    static const String Sp1Synthlevel_Id, Sp1Synthlevel_Name, Sp1Synthlevel_Label;
    static const String Sp1SynthlevelMod_Id, Sp1SynthlevelMod_Name, Sp1SynthlevelMod_Label;
    static const String Sp1SynthAttack_Id, Sp1SynthAttack_Name, Sp1SynthAttack_Label;
    static const String Sp1SynthRelease_Id, Sp1SynthRelease_Name, Sp1SynthRelease_Label;
    static const String Sp1SynthReleaseMod_Id, Sp1SynthReleaseMod_Name, Sp1SynthReleaseMod_Label;
    static const String Sp1SynthModPos_Id, Sp1SynthModPos_Name, Sp1SynthModPos_Label;

    static const String Sp1EngineMode_Id, Sp1EngineMode_Name, Sp1EngineMode_Label;
    static const String Sp1EMod_Id, Sp1EMod_Name, Sp1EMod_Label;
    static const String Sp1PlayMode_Id, Sp1PlayMode_Name, Sp1PlayMode_Label;
    static const String Sp1PlayTimeMode_Id, Sp1PlayTimeMode_Name, Sp1PlayTimeMode_Label;
    
    static const String Sp1WaveNr_Id, Sp1WaveNr_Name, Sp1WaveNr_Label;
    static const String Sp1WaveNrMod_Id, Sp1WaveNrMod_Name, Sp1WaveNrMod_Label;
    static const String Sp1Pitch_Id, Sp1Pitch_Name, Sp1Pitch_Label;
    static const String Sp1PitchMod_Id, Sp1PitchMod_Name, Sp1PitchMod_Label;
    static const String Sp1StartSample_Id, Sp1StartSample_Name, Sp1StartSample_Label;
    static const String Sp1EndSample_Id, Sp1EndSample_Name, Sp1EndSample_Label;
    static const String Sp1Volume_Id, Sp1Volume_Name, Sp1Volume_Label;
    static const String Sp1VolumeMod_Id, Sp1VolumeMod_Name, Sp1VolumeMod_Label;
    
    static const String Sp1Attack_Id, Sp1Attack_Name, Sp1Attack_Label;
    static const String Sp1Release_Id, Sp1Release_Name, Sp1Release_Label;
    static const String Sp1ReleaseMod_Id, Sp1ReleaseMod_Name, Sp1ReleaseMod_Label;
    static const String Sp1EnvMode_Id, Sp1EnvMode_Name, Sp1EnvMode_Label;
    static const String Sp1EnvModeFix_Id, Sp1EnvModeFix_Name, Sp1EnvModeFix_Label;
    
    
    
    static const String Sp1Gate_Id, Sp1Gate_Name, Sp1Gate_Label;

    
    
    static const String Sp1Cutoff_Id, Sp1Cutoff_Name, Sp1Cutoff_Label;
    static const String Sp1Resonance_Id, Sp1Resonance_Name, Sp1Resonance_Label;
    static const String Sp1FilterMode_Id, Sp1FilterMode_Name, Sp1FilterMode_Label;
    static const String Sp1CutoffMod_Id, Sp1CutoffMod_Name, Sp1CutoffMod_Label;

    
    static const String Sp1DelayMode_Id, Sp1DelayMode_Name, Sp1DelayMode_Label;
    static const String Sp1DelayTime_Id, Sp1DelayTime_Name, Sp1DelayTime_Label;
    static const String Sp1DelayFeed_Id, Sp1DelayFeed_Name, Sp1DelayFeed_Label;
    static const String Sp1DelayMix_Id, Sp1DelayMix_Name, Sp1DelayMix_Label;
    static const String Sp1DelayLevel_Id, Sp1DelayLevel_Name, Sp1DelayLevel_Label;
    static const String Sp1DelayTimeMod_Id, Sp1DelayTimeMod_Name, Sp1DelayTimeMod_Label;
    static const String Sp1DelayFeedMod_Id, Sp1DelayFeedMod_Name, Sp1DelayFeedMod_Label;
    static const String Sp1DelayMixMod_Id, Sp1DelayMixMod_Name, Sp1DelayMixMod_Label;
    static const String Sp1DelayLevelMod_Id, Sp1DelayLevelMod_Name, Sp1DelayLevelMod_Label;

    
    static const String Sp1LfoMode_Id, Sp1LfoMode_Name, Sp1LfoMode_Label;
    static const String Sp1LfoRtr_Id, Sp1LfoRtr_Name, Sp1LfoRtr_Label;
    static const String Sp1LfoTime_Id, Sp1LfoTime_Name, Sp1LfoTime_Label;
    static const String Sp1LfoAmp_Id, Sp1LfoAmp_Name, Sp1LfoAmp_Label;
    
    
    
    //----------------------------------2----------------------------------------

    static const String Sp2Synthwaveform_Id, Sp2Synthwaveform_Name, Sp2Synthwaveform_Label;
    static const String Sp2SynthmidiNoteNumber_Id, Sp2SynthmidiNoteNumber_Name, Sp2SynthmidiNoteNumber_Label;
    static const String Sp2SynthmidiNoteNumberMod_Id, Sp2SynthmidiNoteNumberMod_Name, Sp2SynthmidiNoteNumberMod_Label;
    static const String Sp2Synthlevel_Id, Sp2Synthlevel_Name, Sp2Synthlevel_Label;
    static const String Sp2SynthlevelMod_Id, Sp2SynthlevelMod_Name, Sp2SynthlevelMod_Label;
    static const String Sp2SynthAttack_Id, Sp2SynthAttack_Name, Sp2SynthAttack_Label;
    static const String Sp2SynthRelease_Id, Sp2SynthRelease_Name, Sp2SynthRelease_Label;
    static const String Sp2SynthReleaseMod_Id, Sp2SynthReleaseMod_Name, Sp2SynthReleaseMod_Label;
    static const String Sp2SynthModPos_Id, Sp2SynthModPos_Name, Sp2SynthModPos_Label;
    
    static const String Sp2EngineMode_Id, Sp2EngineMode_Name, Sp2EngineMode_Label;
    static const String Sp2EMod_Id, Sp2EMod_Name, Sp2EMod_Label;
    static const String Sp2PlayMode_Id, Sp2PlayMode_Name, Sp2PlayMode_Label;
    static const String Sp2PlayTimeMode_Id, Sp2PlayTimeMode_Name, Sp2PlayTimeMode_Label;
    
    static const String Sp2WaveNr_Id, Sp2WaveNr_Name, Sp2WaveNr_Label;
    static const String Sp2WaveNrMod_Id, Sp2WaveNrMod_Name, Sp2WaveNrMod_Label;
    static const String Sp2Pitch_Id, Sp2Pitch_Name, Sp2Pitch_Label;
    static const String Sp2PitchMod_Id, Sp2PitchMod_Name, Sp2PitchMod_Label;
    static const String Sp2StartSample_Id, Sp2StartSample_Name, Sp2StartSample_Label;
    static const String Sp2EndSample_Id, Sp2EndSample_Name, Sp2EndSample_Label;
    static const String Sp2Volume_Id, Sp2Volume_Name, Sp2Volume_Label;
    static const String Sp2VolumeMod_Id, Sp2VolumeMod_Name, Sp2VolumeMod_Label;
    
    static const String Sp2Attack_Id, Sp2Attack_Name, Sp2Attack_Label;
    static const String Sp2Release_Id, Sp2Release_Name, Sp2Release_Label;
    static const String Sp2ReleaseMod_Id, Sp2ReleaseMod_Name, Sp2ReleaseMod_Label;
    static const String Sp2EnvMode_Id, Sp2EnvMode_Name, Sp2EnvMode_Label;
    static const String Sp2EnvModeFix_Id, Sp2EnvModeFix_Name, Sp2EnvModeFix_Label;
    
    static const String Sp2Gate_Id, Sp2Gate_Name, Sp2Gate_Label;
    
    
    
    static const String Sp2Cutoff_Id, Sp2Cutoff_Name, Sp2Cutoff_Label;
    static const String Sp2Resonance_Id, Sp2Resonance_Name, Sp2Resonance_Label;
    static const String Sp2FilterMode_Id, Sp2FilterMode_Name, Sp2FilterMode_Label;
    static const String Sp2CutoffMod_Id, Sp2CutoffMod_Name, Sp2CutoffMod_Label;

    
    static const String Sp2DelayMode_Id, Sp2DelayMode_Name, Sp2DelayMode_Label;
    static const String Sp2DelayTime_Id, Sp2DelayTime_Name, Sp2DelayTime_Label;
    static const String Sp2DelayFeed_Id, Sp2DelayFeed_Name, Sp2DelayFeed_Label;
    static const String Sp2DelayMix_Id, Sp2DelayMix_Name, Sp2DelayMix_Label;
    static const String Sp2DelayLevel_Id, Sp2DelayLevel_Name, Sp2DelayLevel_Label;
    static const String Sp2DelayTimeMod_Id, Sp2DelayTimeMod_Name, Sp2DelayTimeMod_Label;
    static const String Sp2DelayFeedMod_Id, Sp2DelayFeedMod_Name, Sp2DelayFeedMod_Label;
    static const String Sp2DelayMixMod_Id, Sp2DelayMixMod_Name, Sp2DelayMixMod_Label;
    static const String Sp2DelayLevelMod_Id, Sp2DelayLevelMod_Name, Sp2DelayLevelMod_Label;

    
    static const String Sp2LfoMode_Id, Sp2LfoMode_Name, Sp2LfoMode_Label;
    static const String Sp2LfoRtr_Id, Sp2LfoRtr_Name, Sp2LfoRtr_Label;
    static const String Sp2LfoTime_Id, Sp2LfoTime_Name, Sp2LfoTime_Label;
    static const String Sp2LfoAmp_Id, Sp2LfoAmp_Name, Sp2LfoAmp_Label;
    
    //----------------------------------3----------------------------------------
    
    static const String Sp3Synthwaveform_Id, Sp3Synthwaveform_Name, Sp3Synthwaveform_Label;
    static const String Sp3SynthmidiNoteNumber_Id, Sp3SynthmidiNoteNumber_Name, Sp3SynthmidiNoteNumber_Label;
    static const String Sp3SynthmidiNoteNumberMod_Id, Sp3SynthmidiNoteNumberMod_Name, Sp3SynthmidiNoteNumberMod_Label;
    static const String Sp3Synthlevel_Id, Sp3Synthlevel_Name, Sp3Synthlevel_Label;
    static const String Sp3SynthlevelMod_Id, Sp3SynthlevelMod_Name, Sp3SynthlevelMod_Label;
    static const String Sp3SynthAttack_Id, Sp3SynthAttack_Name, Sp3SynthAttack_Label;
    static const String Sp3SynthRelease_Id, Sp3SynthRelease_Name, Sp3SynthRelease_Label;
    static const String Sp3SynthReleaseMod_Id, Sp3SynthReleaseMod_Name, Sp3SynthReleaseMod_Label;
    static const String Sp3SynthModPos_Id, Sp3SynthModPos_Name, Sp3SynthModPos_Label;
    
    static const String Sp3EngineMode_Id, Sp3EngineMode_Name, Sp3EngineMode_Label;
    static const String Sp3EMod_Id, Sp3EMod_Name, Sp3EMod_Label;
    static const String Sp3PlayMode_Id, Sp3PlayMode_Name, Sp3PlayMode_Label;
    static const String Sp3PlayTimeMode_Id, Sp3PlayTimeMode_Name, Sp3PlayTimeMode_Label;
    
    static const String Sp3WaveNr_Id, Sp3WaveNr_Name, Sp3WaveNr_Label;
    static const String Sp3WaveNrMod_Id, Sp3WaveNrMod_Name, Sp3WaveNrMod_Label;
    static const String Sp3Pitch_Id, Sp3Pitch_Name, Sp3Pitch_Label;
    static const String Sp3PitchMod_Id, Sp3PitchMod_Name, Sp3PitchMod_Label;
    static const String Sp3StartSample_Id, Sp3StartSample_Name, Sp3StartSample_Label;
    static const String Sp3EndSample_Id, Sp3EndSample_Name, Sp3EndSample_Label;
    static const String Sp3Volume_Id, Sp3Volume_Name, Sp3Volume_Label;
    static const String Sp3VolumeMod_Id, Sp3VolumeMod_Name, Sp3VolumeMod_Label;
    
    static const String Sp3Attack_Id, Sp3Attack_Name, Sp3Attack_Label;
    static const String Sp3Release_Id, Sp3Release_Name, Sp3Release_Label;
    static const String Sp3ReleaseMod_Id, Sp3ReleaseMod_Name, Sp3ReleaseMod_Label;
    static const String Sp3EnvMode_Id, Sp3EnvMode_Name, Sp3EnvMode_Label;
    static const String Sp3EnvModeFix_Id, Sp3EnvModeFix_Name, Sp3EnvModeFix_Label;
    
    static const String Sp3Gate_Id, Sp3Gate_Name, Sp3Gate_Label;
    
    
    
    static const String Sp3Cutoff_Id, Sp3Cutoff_Name, Sp3Cutoff_Label;
    static const String Sp3Resonance_Id, Sp3Resonance_Name, Sp3Resonance_Label;
    static const String Sp3FilterMode_Id, Sp3FilterMode_Name, Sp3FilterMode_Label;
    static const String Sp3CutoffMod_Id, Sp3CutoffMod_Name, Sp3CutoffMod_Label;
   
    
    static const String Sp3DelayMode_Id, Sp3DelayMode_Name, Sp3DelayMode_Label;
    static const String Sp3DelayTime_Id, Sp3DelayTime_Name, Sp3DelayTime_Label;
    static const String Sp3DelayFeed_Id, Sp3DelayFeed_Name, Sp3DelayFeed_Label;
    static const String Sp3DelayMix_Id, Sp3DelayMix_Name, Sp3DelayMix_Label;
    static const String Sp3DelayLevel_Id, Sp3DelayLevel_Name, Sp3DelayLevel_Label;
    static const String Sp3DelayTimeMod_Id, Sp3DelayTimeMod_Name, Sp3DelayTimeMod_Label;
    static const String Sp3DelayFeedMod_Id, Sp3DelayFeedMod_Name, Sp3DelayFeedMod_Label;
    static const String Sp3DelayMixMod_Id, Sp3DelayMixMod_Name, Sp3DelayMixMod_Label;
    static const String Sp3DelayLevelMod_Id, Sp3DelayLevelMod_Name, Sp3DelayLevelMod_Label;

    
    static const String Sp3LfoMode_Id, Sp3LfoMode_Name, Sp3LfoMode_Label;
    static const String Sp3LfoRtr_Id, Sp3LfoRtr_Name, Sp3LfoRtr_Label;
    static const String Sp3LfoTime_Id, Sp3LfoTime_Name, Sp3LfoTime_Label;
    static const String Sp3LfoAmp_Id, Sp3LfoAmp_Name, Sp3LfoAmp_Label;
    
    //----------------------------------4----------------------------------------
    
    static const String Sp4Synthwaveform_Id, Sp4Synthwaveform_Name, Sp4Synthwaveform_Label;
    static const String Sp4SynthmidiNoteNumber_Id, Sp4SynthmidiNoteNumber_Name, Sp4SynthmidiNoteNumber_Label;
    static const String Sp4SynthmidiNoteNumberMod_Id, Sp4SynthmidiNoteNumberMod_Name, Sp4SynthmidiNoteNumberMod_Label;
    static const String Sp4Synthlevel_Id, Sp4Synthlevel_Name, Sp4Synthlevel_Label;
    static const String Sp4SynthlevelMod_Id, Sp4SynthlevelMod_Name, Sp4SynthlevelMod_Label;
    static const String Sp4SynthAttack_Id, Sp4SynthAttack_Name, Sp4SynthAttack_Label;
    static const String Sp4SynthRelease_Id, Sp4SynthRelease_Name, Sp4SynthRelease_Label;
    static const String Sp4SynthReleaseMod_Id, Sp4SynthReleaseMod_Name, Sp4SynthReleaseMod_Label;
    static const String Sp4SynthModPos_Id, Sp4SynthModPos_Name, Sp4SynthModPos_Label;
    
    static const String Sp4EngineMode_Id, Sp4EngineMode_Name, Sp4EngineMode_Label;
    static const String Sp4EMod_Id, Sp4EMod_Name, Sp4EMod_Label;
    static const String Sp4PlayMode_Id, Sp4PlayMode_Name, Sp4PlayMode_Label;
    static const String Sp4PlayTimeMode_Id, Sp4PlayTimeMode_Name, Sp4PlayTimeMode_Label;
    
    static const String Sp4WaveNr_Id, Sp4WaveNr_Name, Sp4WaveNr_Label;
    static const String Sp4WaveNrMod_Id, Sp4WaveNrMod_Name, Sp4WaveNrMod_Label;
    static const String Sp4Pitch_Id, Sp4Pitch_Name, Sp4Pitch_Label;
    static const String Sp4PitchMod_Id, Sp4PitchMod_Name, Sp4PitchMod_Label;
    static const String Sp4StartSample_Id, Sp4StartSample_Name, Sp4StartSample_Label;
    static const String Sp4EndSample_Id, Sp4EndSample_Name, Sp4EndSample_Label;
    static const String Sp4Volume_Id, Sp4Volume_Name, Sp4Volume_Label;
    static const String Sp4VolumeMod_Id, Sp4VolumeMod_Name, Sp4VolumeMod_Label;
    
    static const String Sp4Attack_Id, Sp4Attack_Name, Sp4Attack_Label;
    static const String Sp4Release_Id, Sp4Release_Name, Sp4Release_Label;
    static const String Sp4ReleaseMod_Id, Sp4ReleaseMod_Name, Sp4ReleaseMod_Label;
    static const String Sp4EnvMode_Id, Sp4EnvMode_Name, Sp4EnvMode_Label;
    static const String Sp4EnvModeFix_Id, Sp4EnvModeFix_Name, Sp4EnvModeFix_Label;
    
    static const String Sp4Gate_Id, Sp4Gate_Name, Sp4Gate_Label;
    
    
    
    static const String Sp4Cutoff_Id, Sp4Cutoff_Name, Sp4Cutoff_Label;
    static const String Sp4Resonance_Id, Sp4Resonance_Name, Sp4Resonance_Label;
    static const String Sp4FilterMode_Id, Sp4FilterMode_Name, Sp4FilterMode_Label;
    static const String Sp4CutoffMod_Id, Sp4CutoffMod_Name, Sp4CutoffMod_Label;
  
    
    static const String Sp4DelayMode_Id, Sp4DelayMode_Name, Sp4DelayMode_Label;
    static const String Sp4DelayTime_Id, Sp4DelayTime_Name, Sp4DelayTime_Label;
    static const String Sp4DelayFeed_Id, Sp4DelayFeed_Name, Sp4DelayFeed_Label;
    static const String Sp4DelayMix_Id, Sp4DelayMix_Name, Sp4DelayMix_Label;
    static const String Sp4DelayLevel_Id, Sp4DelayLevel_Name, Sp4DelayLevel_Label;
    static const String Sp4DelayTimeMod_Id, Sp4DelayTimeMod_Name, Sp4DelayTimeMod_Label;
    static const String Sp4DelayFeedMod_Id, Sp4DelayFeedMod_Name, Sp4DelayFeedMod_Label;
    static const String Sp4DelayMixMod_Id, Sp4DelayMixMod_Name, Sp4DelayMixMod_Label;
    static const String Sp4DelayLevelMod_Id, Sp4DelayLevelMod_Name, Sp4DelayLevelMod_Label;

    
    static const String Sp4LfoMode_Id, Sp4LfoMode_Name, Sp4LfoMode_Label;
    static const String Sp4LfoRtr_Id, Sp4LfoRtr_Name, Sp4LfoRtr_Label;
    static const String Sp4LfoTime_Id, Sp4LfoTime_Name, Sp4LfoTime_Label;
    static const String Sp4LfoAmp_Id, Sp4LfoAmp_Name, Sp4LfoAmp_Label;



    

    PluginParameters(AudioProcessorValueTreeState& vts);
    void createAllParameters();
    void detachControls();
    
    void attachControls(
                        //MainParas
                        ComboBox& TimerModeCombo,
                      
                        Slider& TimerBpmSlider,
                        Slider& mainSqLenghtSlider,
                        Slider& mainWaveSlider,
                        Slider& mainPitchSlider,
                        Slider& mainDelaySlider,
                        Slider& mainVolumeSlider,
                        Slider& mainLfoSelectSlider,
                        Slider& mainLfoPitchAmSlider,
                        Slider& mainLfoDelayAmSlider,
                        ComboBox& mainLfoShCombo,
                        
                        Slider& EngineSelectTempSlider,
                        Slider&TriggerSelect10,
                        
                        Slider& mainEqModeTempSlider,
                        Slider& mainEqBassVSlider,
                        Slider& mainEqMidVSlider,
                        Slider& mainEqHighVSlider,
                        Slider&mainBitCrushModeSlider,
                        Slider&mainBitCrushBitsSlider,
                        Slider&mainBitCrushMixSlider,
                        Slider&mainBitCrushDrySlider,
                        Slider& mainLimiterModeTempSlider,
                        Slider& mainLimiterThrshSlider,
                        Slider& mainLimiterGainSlider,
                        
                
                        
             
                        //Sampler1Paras
                        ComboBox& Sp1SynthwaveformCombo,
                        Slider& Sp1SynthnoteNumberSlider,
                        Slider& Sp1SynthnoteNumberModSlider,
                        Slider& Sp1SynthlevelSlider,
                        Slider& Sp1SynthlevelModSlider,
                        Slider& Sp1SynthattackSlider,
                        Slider& Sp1SynthreleaseSlider,
                        Slider& Sp1SynthreleaseModSlider,
                        Button& Sp1SynthModPosToggle,
                        
                        Button& Sp1EngineModeButton,
                        
                        ComboBox& Sp1PlayModusCombo,
                        ComboBox& Sp1PlayTimeModeCombo,
                        
                        Slider& Sp1GateSlider,
                        Slider& Sp1WnrSlider,
                        Button& Sp1WnrModSlider,
                        Slider& Sp1PichSlider,
                        Slider& Sp1PichModSlider,
                        Slider& Sp1StartSlider,
                        Slider& Sp1EndSlider,
                        Slider& Sp1VolumeSlider,
                        Slider& Sp1VolumeModSlider,

                        Slider& Sp1AttackSlider,
                        Slider& Sp1ReleaseSlider,
                        Slider& Sp1ReleaseModSlider,
                        Button& Sp1EnvModeButton,
                        Slider& Sp1EnvModeButton_tFix,
                        Button& Sp1EModButton,
                           
                 
                           
                        Slider& Sp1CutoffSlider,
                        Slider& Sp1CutoffModSlider,
                        Slider& Sp1ResonanceSlider,
                        ComboBox& Sp1FilterMode,
                   
                        
               
                        ComboBox& Sp1DelayModeCombox,
                        Slider& Sp1DelayTimeSlider,
                        Slider& Sp1DelayFeedSlider,
                        Slider& Sp1DelayMixSlider,
                        Slider& Sp1DelayLevelSlider,
                        Slider& Sp1DelayTimeSliderMod,
                        Slider& Sp1DelayFeedSliderMod,
                        Slider& Sp1DelayMixSliderMod,
                        Slider& Sp1DelayLevelSliderMod,
                      
                        
                        
                        ComboBox& Sp1LfoModeCombox,
                        ComboBox& Sp1LfoRtrModeCombo,
                        Slider& Sp1LfoTimeSlider,
                        Slider& Sp1LfoAmpSlider,
                        
                        //Sampler2Paras
                        ComboBox& Sp2SynthwaveformCombo,
                        Slider& Sp2SynthnoteNumberSlider,
                        Slider& Sp2SynthnoteNumberModSlider,
                        Slider& Sp2SynthlevelSlider,
                        Slider& Sp2SynthlevelModSlider,
                        Slider& Sp2SynthattackSlider,
                        Slider& Sp2SynthreleaseSlider,
                        Slider& Sp2SynthreleaseModSlider,
                        Button& Sp2SynthModPosToggle,
                        
                        Button& Sp2EngineModeButton,
                        
                        ComboBox& Sp2PlayModusCombo,
                        ComboBox& Sp2PlayTimeModeCombo,
                        
                        Slider& Sp2GateSlider,
                        Slider& Sp2WnrSlider,
                        Button& Sp2WnrModSlider,
                        Slider& Sp2PichSlider,
                        Slider& Sp2PichModSlider,
                        Slider& Sp2StartSlider,
                        Slider& Sp2EndSlider,
                        Slider& Sp2VolumeSlider,
                        Slider& Sp2VolumeModSlider,

                        Slider& Sp2AttackSlider,
                        Slider& Sp2ReleaseSlider,
                        Slider& Sp2ReleaseModSlider,
                        Button& Sp2EnvModeButton,
                        Slider& Sp2EnvModeButton_tFix,
                        Button& Sp2EModButton,
                        
                        
                        
                        Slider& Sp2CutoffSlider,
                        Slider& Sp2CutoffModSlider,
                        Slider& Sp2ResonanceSlider,
                        ComboBox& Sp2FilterMode,
                      
                        
                        
                        ComboBox& Sp2DelayModeCombox,
                        Slider& Sp2DelayTimeSlider,
                        Slider& Sp2DelayFeedSlider,
                        Slider& Sp2DelayMixSlider,
                        Slider& Sp2DelayLevelSlider,
                        Slider& Sp2DelayTimeSliderMod,
                        Slider& Sp2DelayFeedSliderMod,
                        Slider& Sp2DelayMixSliderMod,
                        Slider& Sp2DelayLevelSliderMod,
                        
                        
                        
                        ComboBox& Sp2LfoModeCombox,
                        ComboBox& Sp2LfoRtrModeCombo,
                        Slider& Sp2LfoTimeSlider,
                        Slider& Sp2LfoAmpSlider,

                        //----------------------------------3--
                                      ComboBox& Sp3SynthwaveformCombo,
                                      Slider& Sp3SynthnoteNumberSlider,
                                      Slider& Sp3SynthnoteNumberModSlider,
                                      Slider& Sp3SynthlevelSlider,
                                      Slider& Sp3SynthlevelModSlider,
                                      Slider& Sp3SynthAttackSlider,
                                      Slider& Sp3SynthReleaseSlider,
                                      Slider& Sp3SynthReleaseModSlider,
                                      Button& Sp3SynthModPosToggle,
                                      Button& Sp3EngineModeButton,
                                      
                                      ComboBox& Sp3PlayModusCombo,
                                      ComboBox& Sp3PlayTimeModusCombo,
                                      
                                      Slider& Sp3GateSlider,
                                      Slider& Sp3WnrSlider,
                                      Button& Sp3WnrModSlider,
                                      Slider& Sp3PichSlider,
                                      Slider& Sp3PichModSlider,
                                      Slider& Sp3StartSlider,
                                      Slider& Sp3EndSlider,
                                      Slider& Sp3VolumeSlider,
                                      Slider& Sp3VolumeModSlider,

                                      Slider& Sp3AttackSlider,
                                      Slider& Sp3ReleaseSlider,
                                      Slider& Sp3ReleaseModSlider,
                                      Button& Sp3EnvModeButton,
                                      Slider& Sp3EnvModeButton_tFix,
                                      Button& Sp3EModButton,
                                      
                                      Slider& Sp3CutoffSlider,
                                      Slider& Sp3CutoffModSlider,
                                      Slider& Sp3ResonanceSlider,
                                      ComboBox& Sp3FilterModusCombox,
                        
                                      
                                      ComboBox& Sp3DelayModeCombox,
                                      Slider& Sp3DelayTimeSlider,
                                      Slider& Sp3DelayFeedSlider,
                                      Slider& Sp3DelayMixSlider,
                                      Slider& Sp3DelayLevelSlider,
                                      Slider& Sp3DelayTimeModSlider,
                                      Slider& Sp3DelayFeedModSlider,
                                      Slider& Sp3DelayMixModSlider,
                                      Slider& Sp3DelayLevelModSlider,
                        
                                      
                                      ComboBox& Sp3LfoModeCombox,
                                      ComboBox& Sp3LfoRtrModeButton,
                                      Slider& Sp3LfoTimeSlider,
                                      Slider& Sp3LfoAmpSlider,
                        
                        //----------------------------------4--
                        ComboBox& Sp4SynthwaveformCombo,
                        Slider& Sp4SynthnoteNumberSlider,
                        Slider& Sp4SynthnoteNumberModSlider,
                        Slider& Sp4SynthlevelSlider,
                        Slider& Sp4SynthlevelModSlider,
                        Slider& Sp4SynthAttackSlider,
                        Slider& Sp4SynthReleaseSlider,
                        Slider& Sp4SynthReleaseModSlider,
                        Button& Sp4SynthModPosToggle,
                        Button& Sp4EngineModeButton,
                        
                        ComboBox& Sp4PlayModusCombo,
                        ComboBox& Sp4PlayTimeModusCombo,
                        
                        Slider& Sp4GateSlider,
                        Slider& Sp4WnrSlider,
                        Button& Sp4WnrModSlider,
                        Slider& Sp4PichSlider,
                        Slider& Sp4PichModSlider,
                        Slider& Sp4StartSlider,
                        Slider& Sp4EndSlider,
                        Slider& Sp4VolumeSlider,
                        Slider& Sp4VolumeModSlider,

                        Slider& Sp4AttackSlider,
                        Slider& Sp4ReleaseSlider,
                        Slider& Sp4ReleaseModSlider,
                        Button& Sp4EnvModeButton,
                        Slider& Sp4EnvModeButton_tFix,
                        Button& Sp4EModButton,
                        
                        Slider& Sp4CutoffSlider,
                        Slider& Sp4CutoffModSlider,
                        Slider& Sp4ResonanceSlider,
                        ComboBox& Sp4FilterModusCombox,
                        
                        
                        ComboBox& Sp4DelayModeCombox,
                        Slider& Sp4DelayTimeSlider,
                        Slider& Sp4DelayFeedSlider,
                        Slider& Sp4DelayMixSlider,
                        Slider& Sp4DelayLevelSlider,
                        Slider& Sp4DelayTimeModSlider,
                        Slider& Sp4DelayFeedModSlider,
                        Slider& Sp4DelayMixModSlider,
                        Slider& Sp4DelayLevelModSlider,
                      
                        
                        ComboBox& Sp4LfoModeCombox,
                        ComboBox& Sp4LfoRtrModeButton,
                        Slider& Sp4LfoTimeSlider,
                        Slider& Sp4LfoAmpSlider
                        
 
                        );
    

    // Actual working parameter values
    
    //MainParas
    TimeMode TimerModeV;
    int TimerBpm;
    int mainSqLenghtValue;
    
    int mainWaveValue;
    float mainPitchValue;
    float mainDelayValue;
    float mainVolumeValue;
    int mainLfoSelectValue;
    float mainLfoPitchAmValue;
    float mainLfoDelayAmValue;
    SampelHoldMode mainSpHoldMode;
    
    int EngineSelectValue;
  
    

    int TriggerSelectNumber10;
    
    int mainEqModevalue;

    float mainEqBassVValue;
    float mainEqMidVValue;
    float mainEqHighVValue;
    
    int mainBitCrushModeValue;
    float mainBitCrushBitsValue;
    float mainBitCrushMixValue;
    float mainBitCrushDryValue;
    
    int mainLimiterModeValue;
    float mainLimiterThrshValue;
    float mainLimiterGainValue;
    
    
    
    //-----sampelr1------------
    
    SynthWaveform waveform;

    int   Sp1synthmidiNoteNumber;
    float Sp1synthmidiNoteNumberMod;
    float Sp1synthlevel;
    float Sp1synthlevelMod;
    float Sp1SynthAttackValue;
    float Sp1SynthReleaseValue;
    float Sp1SynthReleaseModValue;
    bool loud;
    bool statef;
    bool Sp1EngineMode;
    SamplePlayMode SpPlayMode;
    
    TimeDivMode Sp1PlayTimeMode;
    float Sp1Gate;
    int Sp1Wnr;
    bool Sp1WnrMod;
    float Sp1Pitch;
    float Sp1PitchMod;
    float Sp1StartSampel;
    float Sp1EndSampel;
    float Sp1Volume;
    float Sp1VolumeMod;
    float Sp1Attack;
    float Sp1Release;
    bool Sp1EnvModeValue;
    int Sp1EnvModeFixValue;
    float Sp1ReleaseMod;
    bool Sp1Emod;
    
    
    FilterMode Sp1FilterMode;
    float Sp1Cutoff;
    float Sp1Resonance;
    float Sp1CutoffMod;

    
    DelayMode Sp1DelayMode;
    float Sp1DelayTime;
    float Sp1DelayFeed;
    float Sp1DelayMix;
    float Sp1DelayLevel;
    float Sp1DelayTimeMod;
    float Sp1DelayFeedMod;
    float Sp1DelayMixMod;
    float Sp1DelayLevelMod;
  
    
    LfoMode Sp1LfoMode;
   /// bool Sp1LfoRtrValue;
    LfoRtrMode Sp1LfoRtrMode;
    float Sp1LfoTime;
    float Sp1LfoAmp;
    
    //-----sampelr2------------
    
    SynthWaveform Sp2waveform;
    
    int   Sp2synthmidiNoteNumber;
    float Sp2synthmidiNoteNumberMod;
    float Sp2synthlevel;
    float Sp2synthlevelMod;
    float Sp2SynthAttackValue;
    float Sp2SynthReleaseValue;
    float Sp2SynthReleaseModValue;
    bool Sp2loud;

    bool Sp2EngineMode;
    SamplePlayMode Sp2PlayMode;
    TimeDivMode Sp2PlayTimeMode;
    float Sp2Gate;
    int Sp2Wnr;
    bool Sp2WnrMod;
    float Sp2Pitch;
    float Sp2PitchMod;
    float Sp2StartSampel;
    float Sp2EndSampel;
    float Sp2Volume;
    float Sp2VolumeMod;
    float Sp2Attack;
    float Sp2Release;
    bool Sp2EnvModeValue;
    int Sp2EnvModeFixValue;
    float Sp2ReleaseMod;
    bool Sp2Emod;
    
    
    FilterMode Sp2FilterMode;
    float Sp2Cutoff;
    float Sp2Resonance;
    float Sp2CutoffMod;
   
    
    DelayMode Sp2DelayMode;
    float Sp2DelayTime;
    float Sp2DelayFeed;
    float Sp2DelayMix;
    float Sp2DelayLevel;
    float Sp2DelayTimeMod;
    float Sp2DelayFeedMod;
    float Sp2DelayMixMod;
    float Sp2DelayLevelMod;

    
    LfoMode Sp2LfoMode;
    /// bool Sp2LfoRtrValue;
    LfoRtrMode Sp2LfoRtrMode;
    float Sp2LfoTime;
    float Sp2LfoAmp;
    
    //-----sampelr3------------
    
    SynthWaveform Sp3waveform;
    
    int   Sp3synthmidiNoteNumber;
    float Sp3synthmidiNoteNumberMod;
    float Sp3synthlevel;
    float Sp3synthlevelMod;
    float Sp3SynthAttackValue;
    float Sp3SynthReleaseValue;
    float Sp3SynthReleaseModValue;
    bool Sp3loud;
    
    bool Sp3EngineMode;
    SamplePlayMode Sp3PlayMode;
    TimeDivMode Sp3PlayTimeMode;
    float Sp3Gate;
    int Sp3Wnr;
    bool Sp3WnrMod;
    float Sp3Pitch;
    float Sp3PitchMod;
    float Sp3StartSampel;
    float Sp3EndSampel;
    float Sp3Volume;
    float Sp3VolumeMod;
    float Sp3Attack;
    float Sp3Release;
    bool Sp3EnvModeValue;
    int Sp3EnvModeFixValue;
    float Sp3ReleaseMod;
    bool Sp3Emod;
    
    
    FilterMode Sp3FilterMode;
    float Sp3Cutoff;
    float Sp3Resonance;
    float Sp3CutoffMod;
  
    
    DelayMode Sp3DelayMode;
    float Sp3DelayTime;
    float Sp3DelayFeed;
    float Sp3DelayMix;
    float Sp3DelayLevel;
    float Sp3DelayTimeMod;
    float Sp3DelayFeedMod;
    float Sp3DelayMixMod;
    float Sp3DelayLevelMod;
   
    
    LfoMode Sp3LfoMode;
    /// bool Sp3LfoRtrValue;
    LfoRtrMode Sp3LfoRtrMode;
    float Sp3LfoTime;
    float Sp3LfoAmp;

    //-----sampelr4------------
    
    SynthWaveform Sp4waveform;
    
    int   Sp4synthmidiNoteNumber;
    float Sp4synthmidiNoteNumberMod;
    float Sp4synthlevel;
    float Sp4synthlevelMod;
    float Sp4SynthAttackValue;
    float Sp4SynthReleaseValue;
    float Sp4SynthReleaseModValue;
    bool Sp4loud;
    
    bool Sp4EngineMode;
    SamplePlayMode Sp4PlayMode;
    TimeDivMode Sp4PlayTimeMode;
    float Sp4Gate;
    int Sp4Wnr;
    bool Sp4WnrMod;
    float Sp4Pitch;
    float Sp4PitchMod;
    float Sp4StartSampel;
    float Sp4EndSampel;
    float Sp4Volume;
    float Sp4VolumeMod;
    float Sp4Attack;
    float Sp4Release;
    bool Sp4EnvModeValue;
    int Sp4EnvModeFixValue;
    float Sp4ReleaseMod;
    bool Sp4Emod;
    
    
    FilterMode Sp4FilterMode;
    float Sp4Cutoff;
    float Sp4Resonance;
    float Sp4CutoffMod;
  
    
    DelayMode Sp4DelayMode;
    float Sp4DelayTime;
    float Sp4DelayFeed;
    float Sp4DelayMix;
    float Sp4DelayLevel;
    float Sp4DelayTimeMod;
    float Sp4DelayFeedMod;
    float Sp4DelayMixMod;
    float Sp4DelayLevelMod;

    
    LfoMode Sp4LfoMode;
    /// bool Sp4LfoRtrValue;
    LfoRtrMode Sp4LfoRtrMode;
    float Sp4LfoTime;
    float Sp4LfoAmp;
    
    
  

    // get/put XML
    void putToXml(XmlElement& xml);
    void getFromXml(XmlElement* xml);
  

 
private:
    
    
  
    // Reference to AudioProcessorValueTreeState object that owns the parameter objects
    AudioProcessorValueTreeState& valueTreeState;

    // Attachment objects link GUI controls to parameters
    //MainParas
    ComboBoxAttachment* TimerModeAttachment;
    SliderAttachment* TimerBpmAttachment;
    SliderAttachment* mainSqLenghtAttachment;
    
    SliderAttachment* mainWaveAttachment;
    SliderAttachment* mainPitchAttachment;
    SliderAttachment* mainDelayAttachment;
    SliderAttachment* mainVolumeAttachment;
    SliderAttachment* mainLfoSelectAttachment;
    SliderAttachment* mainLfoPitchAmAttachment;
    SliderAttachment* mainLfoDelayAmAttachment;
    ComboBoxAttachment* mainLfoSpHoldAttachment;
    
    SliderAttachment* EngineSelectAttachment;

    
    SliderAttachment* TriggerSelect10Attachment;
    
    SliderAttachment*mainEqModeAttachment;
    SliderAttachment*mainEqBassVAttachment;
    SliderAttachment*mainEqMidVAttachment;
    SliderAttachment*mainEqHighVAttachment;
    
    SliderAttachment*mainBitCrushModeAttachment;
     SliderAttachment*mainBitCrushBitsAttachment;
     SliderAttachment*mainBitCrushMixAttachment;
    SliderAttachment*mainBitCrushDryAttachment;
    
    
    
    SliderAttachment*mainLimiterModeAttachment;
     SliderAttachment*mainLimiterThrshAttachment;
     SliderAttachment*mainLimiterGainAttachment;
    
    

    
    //---------------sp1attachment----------------
    
    ComboBoxAttachment* Sp1SynthWaveformAttachment;
    SliderAttachment* Sp1SynthNoteNumberAttachment;
    SliderAttachment* Sp1SynthNoteNumberModAttachment;
    SliderAttachment* Sp1SynthLevelAttachment;
    SliderAttachment* Sp1SynthLevelModAttachment;
    SliderAttachment* Sp1SynthAttackAttachment;
    SliderAttachment* Sp1SynthReleaseAttachment;
    SliderAttachment* Sp1SynthReleaseModAttachment;
    ButtonAttachment* Sp1SynthModPosAttachment;
    
     ButtonAttachment* Sp1EngineModeAttachment;
    ComboBoxAttachment*Sp1PlayModeAttachment;
    ComboBoxAttachment*Sp1PlayTimeModeAttachment;
    ButtonAttachment* Sp1EngineModulationAttachment;
    SliderAttachment* Sp1WaveNrAttachment;
    ButtonAttachment* Sp1WaveNrModAttachment;
    SliderAttachment* Sp1PitchAttachment;
    SliderAttachment* Sp1PitchModAttachment;
    SliderAttachment* Sp1StartAttachment;
    SliderAttachment* Sp1EndAttachment;
    SliderAttachment* Sp1VolumeAttachment;
    SliderAttachment* Sp1VolumeModAttachment;
    
    SliderAttachment* Sp1AttackAttachment;
    SliderAttachment* Sp1ReleaseAttachment;
    SliderAttachment* Sp1ReleaseModAttachment;
    ButtonAttachment* Sp1EnvModeAttachment;
    SliderAttachment* Sp1EnvModeFixAttachment;

    SliderAttachment* Sp1GateAttachment;
    
    SliderAttachment* Sp1FilterCutAttachment;
    SliderAttachment* Sp1FilterCutModAttachment;
    SliderAttachment* Sp1FilterResAttachment;
    ComboBoxAttachment*Sp1FilterModeAttachment;

    
    
    ComboBoxAttachment* Sp1DelayModeComboxAttachment;
    SliderAttachment* Sp1DelayTimeSliderAttachment;
    SliderAttachment* Sp1DelayFeedSliderAttachment;
    SliderAttachment* Sp1DelayMixSliderAttachment;
    SliderAttachment* Sp1DelayLevelSliderAttachment;
    SliderAttachment* Sp1DelayTimeSliderModAttachment;
    SliderAttachment* Sp1DelayFeedSliderModAttachment;
    SliderAttachment* Sp1DelayMixSliderModAttachment;
    SliderAttachment* Sp1DelayLevelSliderModAttachment;

    
    ComboBoxAttachment* Sp1LfoModeAttachment;
    ComboBoxAttachment* Sp1LfoRtrModeAttachment;
    SliderAttachment* Sp1LfoTimeAttachment;
    SliderAttachment* Sp1LfoAmpAttachment;
    
    //---------------sp2attachment----------------
    
    ComboBoxAttachment* Sp2SynthWaveformAttachment;
    SliderAttachment* Sp2SynthNoteNumberAttachment;
    SliderAttachment* Sp2SynthNoteNumberModAttachment;
    SliderAttachment* Sp2SynthLevelAttachment;
    SliderAttachment* Sp2SynthLevelModAttachment;
    SliderAttachment* Sp2SynthAttackAttachment;
    SliderAttachment* Sp2SynthReleaseAttachment;
    SliderAttachment* Sp2SynthReleaseModAttachment;
    ButtonAttachment* Sp2SynthModPosAttachment;
    
    ComboBoxAttachment*Sp2PlayModeAttachment;
    ComboBoxAttachment*Sp2PlayTimeModeAttachment;
    ButtonAttachment* Sp2EngineModeAttachment;
    ButtonAttachment* Sp2EngineModulationAttachment;
    SliderAttachment* Sp2WaveNrAttachment;
    ButtonAttachment* Sp2WaveNrModAttachment;
    SliderAttachment* Sp2PitchAttachment;
    SliderAttachment* Sp2PitchModAttachment;
    SliderAttachment* Sp2StartAttachment;
    SliderAttachment* Sp2EndAttachment;
    SliderAttachment* Sp2VolumeAttachment;
    SliderAttachment* Sp2VolumeModAttachment;
    
    SliderAttachment* Sp2AttackAttachment;
    SliderAttachment* Sp2ReleaseAttachment;
    SliderAttachment* Sp2ReleaseModAttachment;
    ButtonAttachment* Sp2EnvModeAttachment;
    SliderAttachment* Sp2EnvModeFixAttachment;
    SliderAttachment* Sp2GateAttachment;
    
    SliderAttachment* Sp2FilterCutAttachment;
    SliderAttachment* Sp2FilterCutModAttachment;
    SliderAttachment* Sp2FilterResAttachment;
    ComboBoxAttachment*Sp2FilterModeAttachment;

    
    
    ComboBoxAttachment* Sp2DelayModeComboxAttachment;
    SliderAttachment* Sp2DelayTimeSliderAttachment;
    SliderAttachment* Sp2DelayFeedSliderAttachment;
    SliderAttachment* Sp2DelayMixSliderAttachment;
    SliderAttachment* Sp2DelayLevelSliderAttachment;
    SliderAttachment* Sp2DelayTimeSliderModAttachment;
    SliderAttachment* Sp2DelayFeedSliderModAttachment;
    SliderAttachment* Sp2DelayMixSliderModAttachment;
    SliderAttachment* Sp2DelayLevelSliderModAttachment;

    
    ComboBoxAttachment* Sp2LfoModeAttachment;
    ComboBoxAttachment* Sp2LfoRtrModeAttachment;
    SliderAttachment* Sp2LfoTimeAttachment;
    SliderAttachment* Sp2LfoAmpAttachment;
    
    //---------------sp3attachment----------------
    
    ComboBoxAttachment* Sp3SynthWaveformAttachment;
    SliderAttachment* Sp3SynthNoteNumberAttachment;
    SliderAttachment* Sp3SynthNoteNumberModAttachment;
    SliderAttachment* Sp3SynthLevelAttachment;
    SliderAttachment* Sp3SynthLevelModAttachment;
    SliderAttachment* Sp3SynthAttackAttachment;
    SliderAttachment* Sp3SynthReleaseAttachment;
    SliderAttachment* Sp3SynthReleaseModAttachment;
    ButtonAttachment* Sp3SynthModPosAttachment;
    
    ComboBoxAttachment*Sp3PlayModeAttachment;
    ComboBoxAttachment*Sp3PlayTimeModeAttachment;
    ButtonAttachment* Sp3EngineModeAttachment;
    ButtonAttachment* Sp3EngineModulationAttachment;
    SliderAttachment* Sp3WaveNrAttachment;
    ButtonAttachment* Sp3WaveNrModAttachment;
    SliderAttachment* Sp3PitchAttachment;
    SliderAttachment* Sp3PitchModAttachment;
    SliderAttachment* Sp3StartAttachment;
    SliderAttachment* Sp3EndAttachment;
    SliderAttachment* Sp3VolumeAttachment;
    SliderAttachment* Sp3VolumeModAttachment;
    
    SliderAttachment* Sp3AttackAttachment;
    SliderAttachment* Sp3ReleaseAttachment;
    SliderAttachment* Sp3ReleaseModAttachment;
    ButtonAttachment* Sp3EnvModeAttachment;
    SliderAttachment* Sp3EnvModeFixAttachment;
    SliderAttachment* Sp3GateAttachment;
    
    SliderAttachment* Sp3FilterCutAttachment;
    SliderAttachment* Sp3FilterCutModAttachment;
    SliderAttachment* Sp3FilterResAttachment;
    ComboBoxAttachment*Sp3FilterModeAttachment;
  
    
    
    ComboBoxAttachment* Sp3DelayModeComboxAttachment;
    SliderAttachment* Sp3DelayTimeSliderAttachment;
    SliderAttachment* Sp3DelayFeedSliderAttachment;
    SliderAttachment* Sp3DelayMixSliderAttachment;
    SliderAttachment* Sp3DelayLevelSliderAttachment;
    SliderAttachment* Sp3DelayTimeSliderModAttachment;
    SliderAttachment* Sp3DelayFeedSliderModAttachment;
    SliderAttachment* Sp3DelayMixSliderModAttachment;
    SliderAttachment* Sp3DelayLevelSliderModAttachment;
  
    
    ComboBoxAttachment* Sp3LfoModeAttachment;
    ComboBoxAttachment* Sp3LfoRtrModeAttachment;
    SliderAttachment* Sp3LfoTimeAttachment;
    SliderAttachment* Sp3LfoAmpAttachment;

    //---------------sp4attachment----------------
    
    ComboBoxAttachment* Sp4SynthWaveformAttachment;
    SliderAttachment* Sp4SynthNoteNumberAttachment;
    SliderAttachment* Sp4SynthNoteNumberModAttachment;
    SliderAttachment* Sp4SynthLevelAttachment;
    SliderAttachment* Sp4SynthLevelModAttachment;
    SliderAttachment* Sp4SynthAttackAttachment;
    SliderAttachment* Sp4SynthReleaseAttachment;
    SliderAttachment* Sp4SynthReleaseModAttachment;
    ButtonAttachment* Sp4SynthModPosAttachment;
    
    ComboBoxAttachment*Sp4PlayModeAttachment;
    ComboBoxAttachment*Sp4PlayTimeModeAttachment;
    ButtonAttachment* Sp4EngineModeAttachment;
    ButtonAttachment* Sp4EngineModulationAttachment;
    SliderAttachment* Sp4WaveNrAttachment;
    ButtonAttachment* Sp4WaveNrModAttachment;
    
    SliderAttachment* Sp4PitchAttachment;
    SliderAttachment* Sp4PitchModAttachment;
    SliderAttachment* Sp4StartAttachment;
    SliderAttachment* Sp4EndAttachment;
    SliderAttachment* Sp4VolumeAttachment;
    SliderAttachment* Sp4VolumeModAttachment;
    
    SliderAttachment* Sp4AttackAttachment;
    SliderAttachment* Sp4ReleaseAttachment;
    SliderAttachment* Sp4ReleaseModAttachment;
    ButtonAttachment* Sp4EnvModeAttachment;
    SliderAttachment* Sp4EnvModeFixAttachment;
    SliderAttachment* Sp4GateAttachment;
    
    SliderAttachment* Sp4FilterCutAttachment;
    SliderAttachment* Sp4FilterCutModAttachment;
    SliderAttachment* Sp4FilterResAttachment;
    ComboBoxAttachment*Sp4FilterModeAttachment;

    
    
    ComboBoxAttachment* Sp4DelayModeComboxAttachment;
    SliderAttachment* Sp4DelayTimeSliderAttachment;
    SliderAttachment* Sp4DelayFeedSliderAttachment;
    SliderAttachment* Sp4DelayMixSliderAttachment;
    SliderAttachment* Sp4DelayLevelSliderAttachment;
    SliderAttachment* Sp4DelayTimeSliderModAttachment;
    SliderAttachment* Sp4DelayFeedSliderModAttachment;
    SliderAttachment* Sp4DelayMixSliderModAttachment;
    SliderAttachment* Sp4DelayLevelSliderModAttachment;
 
    
    ComboBoxAttachment* Sp4LfoModeAttachment;
    ComboBoxAttachment* Sp4LfoRtrModeAttachment;
    SliderAttachment* Sp4LfoTimeAttachment;
    SliderAttachment* Sp4LfoAmpAttachment;
    

    // Specialized versions of AudioProcessorValueTreeState::Listener adapted for our parameter types
    
    struct TimerModeListener : public AudioProcessorValueTreeState::Listener
    {
        TimeMode& mode;
        
        TimerModeListener(TimeMode& tm) : AudioProcessorValueTreeState::Listener(), mode(tm) {}
        void parameterChanged(const String&, float newValue) override
        {
            mode.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct TimerDivModeListener : public AudioProcessorValueTreeState::Listener
    {
        TimeDivMode& mode;
        
        TimerDivModeListener(TimeDivMode& wf) : AudioProcessorValueTreeState::Listener(), mode(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            mode.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct WaveformListener : public AudioProcessorValueTreeState::Listener
    {
        SynthWaveform& waveform;

        WaveformListener(SynthWaveform& wf) : AudioProcessorValueTreeState::Listener(), waveform(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            waveform.setIndex((int)(newValue + 0.5f));
        }
    };
    struct SampelSetListener : public AudioProcessorValueTreeState::Listener
    {
        SampelSetMode& Spset;
        
        SampelSetListener(SampelSetMode& wf) : AudioProcessorValueTreeState::Listener(), Spset(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            Spset.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct SampelHoldListener : public AudioProcessorValueTreeState::Listener
    {
        SampelHoldMode& Sphold;
        
        SampelHoldListener(SampelHoldMode& wf) : AudioProcessorValueTreeState::Listener(), Sphold(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            Sphold.setIndex((int)(newValue + 0.5f));
        }
    };
    struct SpPlayModeListener : public AudioProcessorValueTreeState::Listener
    {
        
        
        SamplePlayMode& SpPlayModes;
  
        SpPlayModeListener(SamplePlayMode& wf) : AudioProcessorValueTreeState::Listener(), SpPlayModes(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
           SpPlayModes.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct SpLfoModeListener : public AudioProcessorValueTreeState::Listener
    {
        
        
        LfoMode& SpLfoModes;
        
        SpLfoModeListener(LfoMode& wf) : AudioProcessorValueTreeState::Listener(), SpLfoModes(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            SpLfoModes.setIndex((int)(newValue + 0.5f));
        }
    };
    struct SpLfoRtrModeListener : public AudioProcessorValueTreeState::Listener
    {
        
        
        LfoRtrMode& SpLfoRtrModes;
        
        SpLfoRtrModeListener(LfoRtrMode& wf) : AudioProcessorValueTreeState::Listener(), SpLfoRtrModes(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            SpLfoRtrModes.setIndex((int)(newValue + 0.5f));
        }
    };
    struct SpFilterModeListener : public AudioProcessorValueTreeState::Listener
    {
        
        
        FilterMode& SpFilterModes;
        
        SpFilterModeListener(FilterMode& wf) : AudioProcessorValueTreeState::Listener(), SpFilterModes(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            SpFilterModes.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct SpDelayModeListener : public AudioProcessorValueTreeState::Listener
    {
        
        
        DelayMode& SpDelayModes;
        
        SpDelayModeListener(DelayMode& wf) : AudioProcessorValueTreeState::Listener(), SpDelayModes(wf) {}
        void parameterChanged(const String&, float newValue) override
        {
            SpDelayModes.setIndex((int)(newValue + 0.5f));
        }
    };
    
    struct IntegerListener : public AudioProcessorValueTreeState::Listener
    {
        int& workingValue;

        IntegerListener(int& wv) : AudioProcessorValueTreeState::Listener(), workingValue(wv) {}
        void parameterChanged(const String&, float newValue) override
        {
           
            workingValue = (int)newValue;
        }
    };

    struct FloatListener : public AudioProcessorValueTreeState::Listener
    {
        float& workingValue;
        float scaleFactor;      // multiply parameter values by this to get working value

        FloatListener(float& wv, float sf=1.0f) : AudioProcessorValueTreeState::Listener(), workingValue(wv), scaleFactor(sf) {}
        void parameterChanged(const String&, float newValue) override
        {
            workingValue = scaleFactor * newValue;
        }
    };

    struct BoolListener : public AudioProcessorValueTreeState::Listener
    {
        bool& workingValue;
        void test (int *p)
        {
            
            
        }
        BoolListener(bool& wv) : AudioProcessorValueTreeState::Listener(), workingValue(wv) {}
        void parameterChanged(const String&, float newValue) override
        {
            workingValue = newValue >= 0.5f;
        }
    };



private:
    
    //---------------MainParas-------------------
    
      TimerModeListener TimeModeListener;
      IntegerListener TimeBpmListener;
      IntegerListener mainSqLenghtListener;
    
      IntegerListener mainWaveListener;
      FloatListener mainPitchListener;
      FloatListener mainDelayListener;
      FloatListener mainVolumeListener;
      IntegerListener mainLfoSelectListener;
      FloatListener mainLfoPitchAmListener;
      FloatListener mainLfoDelayAmListener;
      SampelHoldListener mainLfoSpHoldlistener;
    
      IntegerListener EngineSelectListener;
      IntegerListener TriggerSelect10Listener;
    
     IntegerListener mainEqModeListener;
    FloatListener mainEqBassVListener;
    FloatListener mainEqMidVListener;
    FloatListener mainEqHighVListener;
    
    IntegerListener mainBitCrushModeListener;
    FloatListener mainBitCrushBitsListener;
    FloatListener mainBitCrushMixListener;
    FloatListener mainBitCrushDryListener;
    
     IntegerListener mainLimiterModeListener;
     FloatListener mainLimiterThrshListener;
     FloatListener mainLimiterGainListener;
    

    
    //---------------Sampler1Paras---------------
    WaveformListener Sp1SynthwaveformListener;
    IntegerListener Sp1SynthnoteNumberListener;
    FloatListener Sp1SynthnoteNumberModListener;
    FloatListener Sp1SynthlevelListener;
    FloatListener Sp1SynthlevelModListener;
    FloatListener Sp1SynthAttackListener;
    FloatListener Sp1SynthReleaseListener;
    FloatListener Sp1SynthReleaseModListener;
    BoolListener Sp1SynthModPosListener;
    BoolListener Sp1EngineModeListener;
    
    SpPlayModeListener Sp1PlayModusListener;
    TimerDivModeListener Sp1PlayTimeModusListener;
    FloatListener Sp1GateListener;
    IntegerListener Sp1WaveNrListener;
    BoolListener Sp1WaveNrModListener;
    FloatListener Sp1PitchListener;
    FloatListener Sp1PitchModListener;
    FloatListener Sp1StartListener;
    FloatListener Sp1EndListener;
    FloatListener Sp1VolumeListener;
    FloatListener Sp1VolumeModListener;
    BoolListener Sp1EmodListener;
    FloatListener Sp1AttackListener;
    FloatListener Sp1ReleaseListener;
    FloatListener Sp1ReleaseModListener;
    BoolListener Sp1EnvModeListener;
    IntegerListener  Sp1EnvModeFixListener;
    SpFilterModeListener Sp1FilterModusListener;
    FloatListener Sp1CutoffListener;
    FloatListener Sp1CutoffListenerMod;
    FloatListener Sp1ResonanceListener;
  
    
    
    SpDelayModeListener Sp1DelayModeListener;
    FloatListener Sp1DelayTimeListener;
    FloatListener Sp1DelayFeedListener;
    FloatListener Sp1DelayMixListener;
    FloatListener Sp1DelayLevelListener;
    FloatListener Sp1DelayTimeListenerMod;
    FloatListener Sp1DelayFeedListenerMod;
    FloatListener Sp1DelayMixListenerMod;
    FloatListener Sp1DelayLevelListenerMod;

    
    SpLfoModeListener Sp1LfoModeListener;
    SpLfoRtrModeListener Sp1LfoRtrModeListener;
    FloatListener Sp1LfoTimeListener;
    FloatListener Sp1LfoAmpListener;
    
    
    //---------------Sampler2Paras---------------
    WaveformListener Sp2SynthwaveformListener;
    IntegerListener Sp2SynthnoteNumberListener;
    FloatListener Sp2SynthnoteNumberModListener;
    FloatListener Sp2SynthlevelListener;
    FloatListener Sp2SynthlevelModListener;
    FloatListener Sp2SynthAttackListener;
    FloatListener Sp2SynthReleaseListener;
    FloatListener Sp2SynthReleaseModListener;
    BoolListener Sp2SynthModPosListener;
    BoolListener Sp2EngineModeListener;
    
    SpPlayModeListener Sp2PlayModusListener;
    TimerDivModeListener Sp2PlayTimeModusListener;
    FloatListener Sp2GateListener;
    IntegerListener Sp2WaveNrListener;
    BoolListener Sp2WaveNrModListener;
    FloatListener Sp2PitchListener;
    FloatListener Sp2PitchModListener;
    FloatListener Sp2StartListener;
    FloatListener Sp2EndListener;
    FloatListener Sp2VolumeListener;
    FloatListener Sp2VolumeModListener;
    BoolListener Sp2EmodListener;
    FloatListener Sp2AttackListener;
    FloatListener Sp2ReleaseListener;
    FloatListener Sp2ReleaseModListener;
    BoolListener Sp2EnvModeListener;
    IntegerListener  Sp2EnvModeFixListener;
    
    SpFilterModeListener Sp2FilterModusListener;
    FloatListener Sp2CutoffListener;
    FloatListener Sp2CutoffListenerMod;
    FloatListener Sp2ResonanceListener;
   
    
    
    SpDelayModeListener Sp2DelayModeListener;
    FloatListener Sp2DelayTimeListener;
    FloatListener Sp2DelayFeedListener;
    FloatListener Sp2DelayMixListener;
    FloatListener Sp2DelayLevelListener;
    FloatListener Sp2DelayTimeListenerMod;
    FloatListener Sp2DelayFeedListenerMod;
    FloatListener Sp2DelayMixListenerMod;
    FloatListener Sp2DelayLevelListenerMod;
 
    
    SpLfoModeListener Sp2LfoModeListener;
    SpLfoRtrModeListener Sp2LfoRtrModeListener;
    FloatListener Sp2LfoTimeListener;
    FloatListener Sp2LfoAmpListener;
    
    //---------------Sampler3Paras---------------
    WaveformListener Sp3SynthwaveformListener;
    IntegerListener Sp3SynthnoteNumberListener;
    FloatListener Sp3SynthnoteNumberModListener;
    FloatListener Sp3SynthlevelListener;
    FloatListener Sp3SynthlevelModListener;
    FloatListener Sp3SynthAttackListener;
    FloatListener Sp3SynthReleaseListener;
    FloatListener Sp3SynthReleaseModListener;
    BoolListener Sp3SynthModPosListener;
    BoolListener Sp3EngineModeListener;
    
    SpPlayModeListener Sp3PlayModusListener;
    TimerDivModeListener Sp3PlayTimeModusListener;
    FloatListener Sp3GateListener;
    IntegerListener Sp3WaveNrListener;
    BoolListener Sp3WaveNrModListener;
    FloatListener Sp3PitchListener;
    FloatListener Sp3PitchModListener;
    FloatListener Sp3StartListener;
    FloatListener Sp3EndListener;
    FloatListener Sp3VolumeListener;
    FloatListener Sp3VolumeModListener;
    BoolListener Sp3EmodListener;
    FloatListener Sp3AttackListener;
    FloatListener Sp3ReleaseListener;
    FloatListener Sp3ReleaseModListener;
    BoolListener Sp3EnvModeListener;
    IntegerListener  Sp3EnvModeFixListener;
    SpFilterModeListener Sp3FilterModusListener;
    FloatListener Sp3CutoffListener;
    FloatListener Sp3CutoffListenerMod;
    FloatListener Sp3ResonanceListener;
   
    
    
    SpDelayModeListener Sp3DelayModeListener;
    FloatListener Sp3DelayTimeListener;
    FloatListener Sp3DelayFeedListener;
    FloatListener Sp3DelayMixListener;
    FloatListener Sp3DelayLevelListener;
    FloatListener Sp3DelayTimeListenerMod;
    FloatListener Sp3DelayFeedListenerMod;
    FloatListener Sp3DelayMixListenerMod;
    FloatListener Sp3DelayLevelListenerMod;

    
    SpLfoModeListener Sp3LfoModeListener;
    SpLfoRtrModeListener Sp3LfoRtrModeListener;
    FloatListener Sp3LfoTimeListener;
    FloatListener Sp3LfoAmpListener;

    //---------------Sampler4Paras---------------
    WaveformListener Sp4SynthwaveformListener;
    IntegerListener Sp4SynthnoteNumberListener;
    FloatListener Sp4SynthnoteNumberModListener;
    FloatListener Sp4SynthlevelListener;
    FloatListener Sp4SynthlevelModListener;
    FloatListener Sp4SynthAttackListener;
    FloatListener Sp4SynthReleaseListener;
    FloatListener Sp4SynthReleaseModListener;
    BoolListener Sp4SynthModPosListener;
    BoolListener Sp4EngineModeListener;
    
    SpPlayModeListener Sp4PlayModusListener;
    TimerDivModeListener Sp4PlayTimeModusListener;
    FloatListener Sp4GateListener;
    IntegerListener Sp4WaveNrListener;
    BoolListener Sp4WaveNrModListener;
    FloatListener Sp4PitchListener;
    FloatListener Sp4PitchModListener;
    FloatListener Sp4StartListener;
    FloatListener Sp4EndListener;
    FloatListener Sp4VolumeListener;
    FloatListener Sp4VolumeModListener;
    BoolListener Sp4EmodListener;
    FloatListener Sp4AttackListener;
    FloatListener Sp4ReleaseListener;
    FloatListener Sp4ReleaseModListener;
    BoolListener Sp4EnvModeListener;
    IntegerListener  Sp4EnvModeFixListener;
    SpFilterModeListener Sp4FilterModusListener;
    FloatListener Sp4CutoffListener;
    FloatListener Sp4CutoffListenerMod;
    FloatListener Sp4ResonanceListener;
  
    
    
    SpDelayModeListener Sp4DelayModeListener;
    FloatListener Sp4DelayTimeListener;
    FloatListener Sp4DelayFeedListener;
    FloatListener Sp4DelayMixListener;
    FloatListener Sp4DelayLevelListener;
    FloatListener Sp4DelayTimeListenerMod;
    FloatListener Sp4DelayFeedListenerMod;
    FloatListener Sp4DelayMixListenerMod;
    FloatListener Sp4DelayLevelListenerMod;

    
    SpLfoModeListener Sp4LfoModeListener;
    SpLfoRtrModeListener Sp4LfoRtrModeListener;
    FloatListener Sp4LfoTimeListener;
    FloatListener Sp4LfoAmpListener;
    
    

    
    
};
