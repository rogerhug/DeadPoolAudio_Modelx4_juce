
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
    static const String MidiCCMode_Id, MidiCCMode_Name, MidiCCMode_Label;
     static const String TimerMode_Id, TimerMode_Name, TimerMode_Label;
     static const String TimerBpm_Id, TimerBpm_Name, TimerBpm_Label;
     static const String TimerLatence_Id, TimerLatence_Name, TimerLatence_Label;
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
    static const String Sp1StepperOnOff_Id, Sp1StepperOnOff_Name, Sp1StepperOnOff_Label;

    static const String Sp1EngineMode_Id, Sp1EngineMode_Name, Sp1EngineMode_Label;
    static const String Sp1EMod_Id, Sp1EMod_Name, Sp1EMod_Label;
    static const String Sp1PlayMode_Id, Sp1PlayMode_Name, Sp1PlayMode_Label;
    static const String Sp1PlayTimeMode_Id, Sp1PlayTimeMode_Name, Sp1PlayTimeMode_Label;
    
    static const String Sp1WaveNr_Id, Sp1WaveNr_Name, Sp1WaveNr_Label;
    static const String Sp1PatternStateParas_Id, Sp1PatternStateParas_Name, Sp1PatternStateParas_Label;
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
    static const String Sp2StepperOnOff_Id, Sp2StepperOnOff_Name, Sp2StepperOnOff_Label;
    
    static const String Sp2EngineMode_Id, Sp2EngineMode_Name, Sp2EngineMode_Label;
    static const String Sp2EMod_Id, Sp2EMod_Name, Sp2EMod_Label;
    static const String Sp2PlayMode_Id, Sp2PlayMode_Name, Sp2PlayMode_Label;
    static const String Sp2PlayTimeMode_Id, Sp2PlayTimeMode_Name, Sp2PlayTimeMode_Label;
    
    static const String Sp2WaveNr_Id, Sp2WaveNr_Name, Sp2WaveNr_Label;
    static const String Sp2PatternStateParas_Id, Sp2PatternStateParas_Name, Sp2PatternStateParas_Label;
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
    static const String Sp3StepperOnOff_Id, Sp3StepperOnOff_Name, Sp3StepperOnOff_Label;
    
    static const String Sp3EngineMode_Id, Sp3EngineMode_Name, Sp3EngineMode_Label;
    static const String Sp3EMod_Id, Sp3EMod_Name, Sp3EMod_Label;
    static const String Sp3PlayMode_Id, Sp3PlayMode_Name, Sp3PlayMode_Label;
    static const String Sp3PlayTimeMode_Id, Sp3PlayTimeMode_Name, Sp3PlayTimeMode_Label;
    
    static const String Sp3WaveNr_Id, Sp3WaveNr_Name, Sp3WaveNr_Label;
    static const String Sp3PatternStateParas_Id, Sp3PatternStateParas_Name, Sp3PatternStateParas_Label;
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
    static const String Sp4StepperOnOff_Id, Sp4StepperOnOff_Name, Sp4StepperOnOff_Label;
    
    static const String Sp4EngineMode_Id, Sp4EngineMode_Name, Sp4EngineMode_Label;
    static const String Sp4EMod_Id, Sp4EMod_Name, Sp4EMod_Label;
    static const String Sp4PlayMode_Id, Sp4PlayMode_Name, Sp4PlayMode_Label;
    static const String Sp4PlayTimeMode_Id, Sp4PlayTimeMode_Name, Sp4PlayTimeMode_Label;
    
    static const String Sp4WaveNr_Id, Sp4WaveNr_Name, Sp4WaveNr_Label;
    static const String Sp4PatternStateParas_Id, Sp4PatternStateParas_Name, Sp4PatternStateParas_Label;
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

    //----------------------------------5----------------------------------------

    static const String Sp5Synthwaveform_Id, Sp5Synthwaveform_Name, Sp5Synthwaveform_Label;
    static const String Sp5SynthmidiNoteNumber_Id, Sp5SynthmidiNoteNumber_Name, Sp5SynthmidiNoteNumber_Label;
    static const String Sp5SynthmidiNoteNumberMod_Id, Sp5SynthmidiNoteNumberMod_Name, Sp5SynthmidiNoteNumberMod_Label;
    static const String Sp5Synthlevel_Id, Sp5Synthlevel_Name, Sp5Synthlevel_Label;
    static const String Sp5SynthlevelMod_Id, Sp5SynthlevelMod_Name, Sp5SynthlevelMod_Label;
    static const String Sp5SynthAttack_Id, Sp5SynthAttack_Name, Sp5SynthAttack_Label;
    static const String Sp5SynthRelease_Id, Sp5SynthRelease_Name, Sp5SynthRelease_Label;
    static const String Sp5SynthReleaseMod_Id, Sp5SynthReleaseMod_Name, Sp5SynthReleaseMod_Label;
    static const String Sp5StepperOnOff_Id, Sp5StepperOnOff_Name, Sp5StepperOnOff_Label;

    static const String Sp5EngineMode_Id, Sp5EngineMode_Name, Sp5EngineMode_Label;
    static const String Sp5EMod_Id, Sp5EMod_Name, Sp5EMod_Label;
    static const String Sp5PlayMode_Id, Sp5PlayMode_Name, Sp5PlayMode_Label;
    static const String Sp5PlayTimeMode_Id, Sp5PlayTimeMode_Name, Sp5PlayTimeMode_Label;

    static const String Sp5WaveNr_Id, Sp5WaveNr_Name, Sp5WaveNr_Label;
    static const String Sp5PatternStateParas_Id, Sp5PatternStateParas_Name, Sp5PatternStateParas_Label;
    static const String Sp5Pitch_Id, Sp5Pitch_Name, Sp5Pitch_Label;
    static const String Sp5PitchMod_Id, Sp5PitchMod_Name, Sp5PitchMod_Label;
    static const String Sp5StartSample_Id, Sp5StartSample_Name, Sp5StartSample_Label;
    static const String Sp5EndSample_Id, Sp5EndSample_Name, Sp5EndSample_Label;
    static const String Sp5Volume_Id, Sp5Volume_Name, Sp5Volume_Label;
    static const String Sp5VolumeMod_Id, Sp5VolumeMod_Name, Sp5VolumeMod_Label;

    static const String Sp5Attack_Id, Sp5Attack_Name, Sp5Attack_Label;
    static const String Sp5Release_Id, Sp5Release_Name, Sp5Release_Label;
    static const String Sp5ReleaseMod_Id, Sp5ReleaseMod_Name, Sp5ReleaseMod_Label;
    static const String Sp5EnvMode_Id, Sp5EnvMode_Name, Sp5EnvMode_Label;
    static const String Sp5EnvModeFix_Id, Sp5EnvModeFix_Name, Sp5EnvModeFix_Label;

    static const String Sp5Gate_Id, Sp5Gate_Name, Sp5Gate_Label;



    static const String Sp5Cutoff_Id, Sp5Cutoff_Name, Sp5Cutoff_Label;
    static const String Sp5Resonance_Id, Sp5Resonance_Name, Sp5Resonance_Label;
    static const String Sp5FilterMode_Id, Sp5FilterMode_Name, Sp5FilterMode_Label;
    static const String Sp5CutoffMod_Id, Sp5CutoffMod_Name, Sp5CutoffMod_Label;


    static const String Sp5DelayMode_Id, Sp5DelayMode_Name, Sp5DelayMode_Label;
    static const String Sp5DelayTime_Id, Sp5DelayTime_Name, Sp5DelayTime_Label;
    static const String Sp5DelayFeed_Id, Sp5DelayFeed_Name, Sp5DelayFeed_Label;
    static const String Sp5DelayMix_Id, Sp5DelayMix_Name, Sp5DelayMix_Label;
    static const String Sp5DelayLevel_Id, Sp5DelayLevel_Name, Sp5DelayLevel_Label;
    static const String Sp5DelayTimeMod_Id, Sp5DelayTimeMod_Name, Sp5DelayTimeMod_Label;
    static const String Sp5DelayFeedMod_Id, Sp5DelayFeedMod_Name, Sp5DelayFeedMod_Label;
    static const String Sp5DelayMixMod_Id, Sp5DelayMixMod_Name, Sp5DelayMixMod_Label;
    static const String Sp5DelayLevelMod_Id, Sp5DelayLevelMod_Name, Sp5DelayLevelMod_Label;


    static const String Sp5LfoMode_Id, Sp5LfoMode_Name, Sp5LfoMode_Label;
    static const String Sp5LfoRtr_Id, Sp5LfoRtr_Name, Sp5LfoRtr_Label;
    static const String Sp5LfoTime_Id, Sp5LfoTime_Name, Sp5LfoTime_Label;
    static const String Sp5LfoAmp_Id, Sp5LfoAmp_Name, Sp5LfoAmp_Label;

    //----------------------------------6----------------------------------------

    static const String Sp6Synthwaveform_Id, Sp6Synthwaveform_Name, Sp6Synthwaveform_Label;
    static const String Sp6SynthmidiNoteNumber_Id, Sp6SynthmidiNoteNumber_Name, Sp6SynthmidiNoteNumber_Label;
    static const String Sp6SynthmidiNoteNumberMod_Id, Sp6SynthmidiNoteNumberMod_Name, Sp6SynthmidiNoteNumberMod_Label;
    static const String Sp6Synthlevel_Id, Sp6Synthlevel_Name, Sp6Synthlevel_Label;
    static const String Sp6SynthlevelMod_Id, Sp6SynthlevelMod_Name, Sp6SynthlevelMod_Label;
    static const String Sp6SynthAttack_Id, Sp6SynthAttack_Name, Sp6SynthAttack_Label;
    static const String Sp6SynthRelease_Id, Sp6SynthRelease_Name, Sp6SynthRelease_Label;
    static const String Sp6SynthReleaseMod_Id, Sp6SynthReleaseMod_Name, Sp6SynthReleaseMod_Label;
    static const String Sp6StepperOnOff_Id, Sp6StepperOnOff_Name, Sp6StepperOnOff_Label;

    static const String Sp6EngineMode_Id, Sp6EngineMode_Name, Sp6EngineMode_Label;
    static const String Sp6EMod_Id, Sp6EMod_Name, Sp6EMod_Label;
    static const String Sp6PlayMode_Id, Sp6PlayMode_Name, Sp6PlayMode_Label;
    static const String Sp6PlayTimeMode_Id, Sp6PlayTimeMode_Name, Sp6PlayTimeMode_Label;

    static const String Sp6WaveNr_Id, Sp6WaveNr_Name, Sp6WaveNr_Label;
    static const String Sp6PatternStateParas_Id, Sp6PatternStateParas_Name, Sp6PatternStateParas_Label;
    static const String Sp6Pitch_Id, Sp6Pitch_Name, Sp6Pitch_Label;
    static const String Sp6PitchMod_Id, Sp6PitchMod_Name, Sp6PitchMod_Label;
    static const String Sp6StartSample_Id, Sp6StartSample_Name, Sp6StartSample_Label;
    static const String Sp6EndSample_Id, Sp6EndSample_Name, Sp6EndSample_Label;
    static const String Sp6Volume_Id, Sp6Volume_Name, Sp6Volume_Label;
    static const String Sp6VolumeMod_Id, Sp6VolumeMod_Name, Sp6VolumeMod_Label;

    static const String Sp6Attack_Id, Sp6Attack_Name, Sp6Attack_Label;
    static const String Sp6Release_Id, Sp6Release_Name, Sp6Release_Label;
    static const String Sp6ReleaseMod_Id, Sp6ReleaseMod_Name, Sp6ReleaseMod_Label;
    static const String Sp6EnvMode_Id, Sp6EnvMode_Name, Sp6EnvMode_Label;
    static const String Sp6EnvModeFix_Id, Sp6EnvModeFix_Name, Sp6EnvModeFix_Label;

    static const String Sp6Gate_Id, Sp6Gate_Name, Sp6Gate_Label;



    static const String Sp6Cutoff_Id, Sp6Cutoff_Name, Sp6Cutoff_Label;
    static const String Sp6Resonance_Id, Sp6Resonance_Name, Sp6Resonance_Label;
    static const String Sp6FilterMode_Id, Sp6FilterMode_Name, Sp6FilterMode_Label;
    static const String Sp6CutoffMod_Id, Sp6CutoffMod_Name, Sp6CutoffMod_Label;


    static const String Sp6DelayMode_Id, Sp6DelayMode_Name, Sp6DelayMode_Label;
    static const String Sp6DelayTime_Id, Sp6DelayTime_Name, Sp6DelayTime_Label;
    static const String Sp6DelayFeed_Id, Sp6DelayFeed_Name, Sp6DelayFeed_Label;
    static const String Sp6DelayMix_Id, Sp6DelayMix_Name, Sp6DelayMix_Label;
    static const String Sp6DelayLevel_Id, Sp6DelayLevel_Name, Sp6DelayLevel_Label;
    static const String Sp6DelayTimeMod_Id, Sp6DelayTimeMod_Name, Sp6DelayTimeMod_Label;
    static const String Sp6DelayFeedMod_Id, Sp6DelayFeedMod_Name, Sp6DelayFeedMod_Label;
    static const String Sp6DelayMixMod_Id, Sp6DelayMixMod_Name, Sp6DelayMixMod_Label;
    static const String Sp6DelayLevelMod_Id, Sp6DelayLevelMod_Name, Sp6DelayLevelMod_Label;


    static const String Sp6LfoMode_Id, Sp6LfoMode_Name, Sp6LfoMode_Label;
    static const String Sp6LfoRtr_Id, Sp6LfoRtr_Name, Sp6LfoRtr_Label;
    static const String Sp6LfoTime_Id, Sp6LfoTime_Name, Sp6LfoTime_Label;
    static const String Sp6LfoAmp_Id, Sp6LfoAmp_Name, Sp6LfoAmp_Label;

    //----------------------------------7----------------------------------------

    static const String Sp7Synthwaveform_Id, Sp7Synthwaveform_Name, Sp7Synthwaveform_Label;
    static const String Sp7SynthmidiNoteNumber_Id, Sp7SynthmidiNoteNumber_Name, Sp7SynthmidiNoteNumber_Label;
    static const String Sp7SynthmidiNoteNumberMod_Id, Sp7SynthmidiNoteNumberMod_Name, Sp7SynthmidiNoteNumberMod_Label;
    static const String Sp7Synthlevel_Id, Sp7Synthlevel_Name, Sp7Synthlevel_Label;
    static const String Sp7SynthlevelMod_Id, Sp7SynthlevelMod_Name, Sp7SynthlevelMod_Label;
    static const String Sp7SynthAttack_Id, Sp7SynthAttack_Name, Sp7SynthAttack_Label;
    static const String Sp7SynthRelease_Id, Sp7SynthRelease_Name, Sp7SynthRelease_Label;
    static const String Sp7SynthReleaseMod_Id, Sp7SynthReleaseMod_Name, Sp7SynthReleaseMod_Label;
    static const String Sp7StepperOnOff_Id, Sp7StepperOnOff_Name, Sp7StepperOnOff_Label;

    static const String Sp7EngineMode_Id, Sp7EngineMode_Name, Sp7EngineMode_Label;
    static const String Sp7EMod_Id, Sp7EMod_Name, Sp7EMod_Label;
    static const String Sp7PlayMode_Id, Sp7PlayMode_Name, Sp7PlayMode_Label;
    static const String Sp7PlayTimeMode_Id, Sp7PlayTimeMode_Name, Sp7PlayTimeMode_Label;

    static const String Sp7WaveNr_Id, Sp7WaveNr_Name, Sp7WaveNr_Label;
    static const String Sp7PatternStateParas_Id, Sp7PatternStateParas_Name, Sp7PatternStateParas_Label;
    static const String Sp7Pitch_Id, Sp7Pitch_Name, Sp7Pitch_Label;
    static const String Sp7PitchMod_Id, Sp7PitchMod_Name, Sp7PitchMod_Label;
    static const String Sp7StartSample_Id, Sp7StartSample_Name, Sp7StartSample_Label;
    static const String Sp7EndSample_Id, Sp7EndSample_Name, Sp7EndSample_Label;
    static const String Sp7Volume_Id, Sp7Volume_Name, Sp7Volume_Label;
    static const String Sp7VolumeMod_Id, Sp7VolumeMod_Name, Sp7VolumeMod_Label;

    static const String Sp7Attack_Id, Sp7Attack_Name, Sp7Attack_Label;
    static const String Sp7Release_Id, Sp7Release_Name, Sp7Release_Label;
    static const String Sp7ReleaseMod_Id, Sp7ReleaseMod_Name, Sp7ReleaseMod_Label;
    static const String Sp7EnvMode_Id, Sp7EnvMode_Name, Sp7EnvMode_Label;
    static const String Sp7EnvModeFix_Id, Sp7EnvModeFix_Name, Sp7EnvModeFix_Label;

    static const String Sp7Gate_Id, Sp7Gate_Name, Sp7Gate_Label;



    static const String Sp7Cutoff_Id, Sp7Cutoff_Name, Sp7Cutoff_Label;
    static const String Sp7Resonance_Id, Sp7Resonance_Name, Sp7Resonance_Label;
    static const String Sp7FilterMode_Id, Sp7FilterMode_Name, Sp7FilterMode_Label;
    static const String Sp7CutoffMod_Id, Sp7CutoffMod_Name, Sp7CutoffMod_Label;


    static const String Sp7DelayMode_Id, Sp7DelayMode_Name, Sp7DelayMode_Label;
    static const String Sp7DelayTime_Id, Sp7DelayTime_Name, Sp7DelayTime_Label;
    static const String Sp7DelayFeed_Id, Sp7DelayFeed_Name, Sp7DelayFeed_Label;
    static const String Sp7DelayMix_Id, Sp7DelayMix_Name, Sp7DelayMix_Label;
    static const String Sp7DelayLevel_Id, Sp7DelayLevel_Name, Sp7DelayLevel_Label;
    static const String Sp7DelayTimeMod_Id, Sp7DelayTimeMod_Name, Sp7DelayTimeMod_Label;
    static const String Sp7DelayFeedMod_Id, Sp7DelayFeedMod_Name, Sp7DelayFeedMod_Label;
    static const String Sp7DelayMixMod_Id, Sp7DelayMixMod_Name, Sp7DelayMixMod_Label;
    static const String Sp7DelayLevelMod_Id, Sp7DelayLevelMod_Name, Sp7DelayLevelMod_Label;


    static const String Sp7LfoMode_Id, Sp7LfoMode_Name, Sp7LfoMode_Label;
    static const String Sp7LfoRtr_Id, Sp7LfoRtr_Name, Sp7LfoRtr_Label;
    static const String Sp7LfoTime_Id, Sp7LfoTime_Name, Sp7LfoTime_Label;
    static const String Sp7LfoAmp_Id, Sp7LfoAmp_Name, Sp7LfoAmp_Label;









    

    PluginParameters(AudioProcessorValueTreeState& vts);
    void createAllParameters();
    void detachControls();
    
    void attachControls(
                        //MainParas
                        ComboBox& MidiCCCombo,
                        ComboBox& TimerModeCombo,
                      
                        Slider& TimerBpmSlider,
                         Slider& TimerlatenceSlider,
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
                        Button& Sp1StepperOnOffToggle,
                        
                        Button& Sp1EngineModeButton,
                        
                        ComboBox& Sp1PlayModusCombo,
                        ComboBox& Sp1PlayTimeModeCombo,
                        
                        Slider& Sp1GateSlider,
                        Slider& Sp1WnrSlider,
                        Button& Sp1PatternStateValueSlider,
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
                        Button& Sp2StepperOnOffToggle,
                        
                        Button& Sp2EngineModeButton,
                        
                        ComboBox& Sp2PlayModusCombo,
                        ComboBox& Sp2PlayTimeModeCombo,
                        
                        Slider& Sp2GateSlider,
                        Slider& Sp2WnrSlider,
                        Button& Sp2PatternStateValueSlider,
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
                                      Button& Sp3StepperOnOffToggle,
                                      Button& Sp3EngineModeButton,
                                      
                                      ComboBox& Sp3PlayModusCombo,
                                      ComboBox& Sp3PlayTimeModusCombo,
                                      
                                      Slider& Sp3GateSlider,
                                      Slider& Sp3WnrSlider,
                                      Button& Sp3PatternStateValueSlider,
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
                        Button& Sp4StepperOnOffToggle,
                        Button& Sp4EngineModeButton,
                        
                        ComboBox& Sp4PlayModusCombo,
                        ComboBox& Sp4PlayTimeModusCombo,
                        
                        Slider& Sp4GateSlider,
                        Slider& Sp4WnrSlider,
                        Button& Sp4PatternStateValueSlider,
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
                        Slider& Sp4LfoAmpSlider,
                                          //----------------------------------5--
                                          ComboBox& Sp5SynthwaveformCombo,
                                          Slider& Sp5SynthnoteNumberSlider,
                                          Slider& Sp5SynthnoteNumberModSlider,
                                          Slider& Sp5SynthlevelSlider,
                                          Slider& Sp5SynthlevelModSlider,
                                          Slider& Sp5SynthAttackSlider,
                                          Slider& Sp5SynthReleaseSlider,
                                          Slider& Sp5SynthReleaseModSlider,
                                          Button& Sp5StepperOnOffToggle,
                                          Button& Sp5EngineModeButton,

                                          ComboBox& Sp5PlayModusCombo,
                                          ComboBox& Sp5PlayTimeModusCombo,

                                          Slider& Sp5GateSlider,
                                          Slider& Sp5WnrSlider,
                                          Button& Sp5PatternStateValueSlider,
                                          Slider& Sp5PichSlider,
                                          Slider& Sp5PichModSlider,
                                          Slider& Sp5StartSlider,
                                          Slider& Sp5EndSlider,
                                          Slider& Sp5VolumeSlider,
                                          Slider& Sp5VolumeModSlider,

                                          Slider& Sp5AttackSlider,
                                          Slider& Sp5ReleaseSlider,
                                          Slider& Sp5ReleaseModSlider,
                                          Button& Sp5EnvModeButton,
                                          Slider& Sp5EnvModeButton_tFix,
                                          Button& Sp5EModButton,

                                          Slider& Sp5CutoffSlider,
                                          Slider& Sp5CutoffModSlider,
                                          Slider& Sp5ResonanceSlider,
                                          ComboBox& Sp5FilterModusCombox,


                                          ComboBox& Sp5DelayModeCombox,
                                          Slider& Sp5DelayTimeSlider,
                                          Slider& Sp5DelayFeedSlider,
                                          Slider& Sp5DelayMixSlider,
                                          Slider& Sp5DelayLevelSlider,
                                          Slider& Sp5DelayTimeModSlider,
                                          Slider& Sp5DelayFeedModSlider,
                                          Slider& Sp5DelayMixModSlider,
                                          Slider& Sp5DelayLevelModSlider,


                                          ComboBox& Sp5LfoModeCombox,
                                          ComboBox& Sp5LfoRtrModeButton,
                                          Slider& Sp5LfoTimeSlider,
                                          Slider& Sp5LfoAmpSlider,
                            //----------------------------------6--
                            ComboBox& Sp6SynthwaveformCombo,
                            Slider& Sp6SynthnoteNumberSlider,
                            Slider& Sp6SynthnoteNumberModSlider,
                            Slider& Sp6SynthlevelSlider,
                            Slider& Sp6SynthlevelModSlider,
                            Slider& Sp6SynthAttackSlider,
                            Slider& Sp6SynthReleaseSlider,
                            Slider& Sp6SynthReleaseModSlider,
                            Button& Sp6StepperOnOffToggle,
                            Button& Sp6EngineModeButton,

                            ComboBox& Sp6PlayModusCombo,
                            ComboBox& Sp6PlayTimeModusCombo,

                            Slider& Sp6GateSlider,
                            Slider& Sp6WnrSlider,
                            Button& Sp6PatternStateValueSlider,
                            Slider& Sp6PichSlider,
                            Slider& Sp6PichModSlider,
                            Slider& Sp6StartSlider,
                            Slider& Sp6EndSlider,
                            Slider& Sp6VolumeSlider,
                            Slider& Sp6VolumeModSlider,

                            Slider& Sp6AttackSlider,
                            Slider& Sp6ReleaseSlider,
                            Slider& Sp6ReleaseModSlider,
                            Button& Sp6EnvModeButton,
                            Slider& Sp6EnvModeButton_tFix,
                            Button& Sp6EModButton,

                            Slider& Sp6CutoffSlider,
                            Slider& Sp6CutoffModSlider,
                            Slider& Sp6ResonanceSlider,
                            ComboBox& Sp6FilterModusCombox,


                            ComboBox& Sp6DelayModeCombox,
                            Slider& Sp6DelayTimeSlider,
                            Slider& Sp6DelayFeedSlider,
                            Slider& Sp6DelayMixSlider,
                            Slider& Sp6DelayLevelSlider,
                            Slider& Sp6DelayTimeModSlider,
                            Slider& Sp6DelayFeedModSlider,
                            Slider& Sp6DelayMixModSlider,
                            Slider& Sp6DelayLevelModSlider,


                            ComboBox& Sp6LfoModeCombox,
                            ComboBox& Sp6LfoRtrModeButton,
                            Slider& Sp6LfoTimeSlider,
                            Slider& Sp6LfoAmpSlider,
                                              //----------------------------------7--
                                              ComboBox& Sp7SynthwaveformCombo,
                                              Slider& Sp7SynthnoteNumberSlider,
                                              Slider& Sp7SynthnoteNumberModSlider,
                                              Slider& Sp7SynthlevelSlider,
                                              Slider& Sp7SynthlevelModSlider,
                                              Slider& Sp7SynthAttackSlider,
                                              Slider& Sp7SynthReleaseSlider,
                                              Slider& Sp7SynthReleaseModSlider,
                                              Button& Sp7StepperOnOffToggle,
                                              Button& Sp7EngineModeButton,

                                              ComboBox& Sp7PlayModusCombo,
                                              ComboBox& Sp7PlayTimeModusCombo,

                                              Slider& Sp7GateSlider,
                                              Slider& Sp7WnrSlider,
                                              Button& Sp7PatternStateValueSlider,
                                              Slider& Sp7PichSlider,
                                              Slider& Sp7PichModSlider,
                                              Slider& Sp7StartSlider,
                                              Slider& Sp7EndSlider,
                                              Slider& Sp7VolumeSlider,
                                              Slider& Sp7VolumeModSlider,

                                              Slider& Sp7AttackSlider,
                                              Slider& Sp7ReleaseSlider,
                                              Slider& Sp7ReleaseModSlider,
                                              Button& Sp7EnvModeButton,
                                              Slider& Sp7EnvModeButton_tFix,
                                              Button& Sp7EModButton,

                                              Slider& Sp7CutoffSlider,
                                              Slider& Sp7CutoffModSlider,
                                              Slider& Sp7ResonanceSlider,
                                              ComboBox& Sp7FilterModusCombox,


                                              ComboBox& Sp7DelayModeCombox,
                                              Slider& Sp7DelayTimeSlider,
                                              Slider& Sp7DelayFeedSlider,
                                              Slider& Sp7DelayMixSlider,
                                              Slider& Sp7DelayLevelSlider,
                                              Slider& Sp7DelayTimeModSlider,
                                              Slider& Sp7DelayFeedModSlider,
                                              Slider& Sp7DelayMixModSlider,
                                              Slider& Sp7DelayLevelModSlider,


                                              ComboBox& Sp7LfoModeCombox,
                                              ComboBox& Sp7LfoRtrModeButton,
                                              Slider& Sp7LfoTimeSlider,
                                              Slider& Sp7LfoAmpSlider

                        
 
                        );
    
    
    // Actual working parameter values
    
    //MainParas
    MidiCCMode midiCCmodus;
    TimeMode TimerModeV;
    int TimerBpm;
    float Timerlatence;
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
    bool StepperOnOffValue;
    bool statef;
    bool Sp1EngineMode;
    SamplePlayMode SpPlayMode;
    
    TimeDivMode Sp1PlayTimeMode;
    float Sp1Gate;
    int Sp1Wnr;
    bool Sp1PatternStateValue;
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
    bool Sp2StepperOnOffValue;

    bool Sp2EngineMode;
    SamplePlayMode Sp2PlayMode;
    TimeDivMode Sp2PlayTimeMode;
    float Sp2Gate;
    int Sp2Wnr;
    bool Sp2PatternStateValue;
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
    bool Sp3StepperOnOffValue;
    
    bool Sp3EngineMode;
    SamplePlayMode Sp3PlayMode;
    TimeDivMode Sp3PlayTimeMode;
    float Sp3Gate;
    int Sp3Wnr;
    bool Sp3PatternStateValue;
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
    bool Sp4StepperOnOffValue;
    
    bool Sp4EngineMode;
    SamplePlayMode Sp4PlayMode;
    TimeDivMode Sp4PlayTimeMode;
    float Sp4Gate;
    int Sp4Wnr;
    bool Sp4PatternStateValue;
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

    //-----sampelr5------------

    SynthWaveform Sp5waveform;

    int   Sp5synthmidiNoteNumber;
    float Sp5synthmidiNoteNumberMod;
    float Sp5synthlevel;
    float Sp5synthlevelMod;
    float Sp5SynthAttackValue;
    float Sp5SynthReleaseValue;
    float Sp5SynthReleaseModValue;
    bool Sp5StepperOnOffValue;

    bool Sp5EngineMode;
    SamplePlayMode Sp5PlayMode;
    TimeDivMode Sp5PlayTimeMode;
    float Sp5Gate;
    int Sp5Wnr;
    bool Sp5PatternStateValue;
    float Sp5Pitch;
    float Sp5PitchMod;
    float Sp5StartSampel;
    float Sp5EndSampel;
    float Sp5Volume;
    float Sp5VolumeMod;
    float Sp5Attack;
    float Sp5Release;
    bool Sp5EnvModeValue;
    int Sp5EnvModeFixValue;
    float Sp5ReleaseMod;
    bool Sp5Emod;


    FilterMode Sp5FilterMode;
    float Sp5Cutoff;
    float Sp5Resonance;
    float Sp5CutoffMod;


    DelayMode Sp5DelayMode;
    float Sp5DelayTime;
    float Sp5DelayFeed;
    float Sp5DelayMix;
    float Sp5DelayLevel;
    float Sp5DelayTimeMod;
    float Sp5DelayFeedMod;
    float Sp5DelayMixMod;
    float Sp5DelayLevelMod;


    LfoMode Sp5LfoMode;
    /// bool Sp5LfoRtrValue;
    LfoRtrMode Sp5LfoRtrMode;
    float Sp5LfoTime;
    float Sp5LfoAmp;
    //-----sampelr6------------

    SynthWaveform Sp6waveform;

    int   Sp6synthmidiNoteNumber;
    float Sp6synthmidiNoteNumberMod;
    float Sp6synthlevel;
    float Sp6synthlevelMod;
    float Sp6SynthAttackValue;
    float Sp6SynthReleaseValue;
    float Sp6SynthReleaseModValue;
    bool Sp6StepperOnOffValue;

    bool Sp6EngineMode;
    SamplePlayMode Sp6PlayMode;
    TimeDivMode Sp6PlayTimeMode;
    float Sp6Gate;
    int Sp6Wnr;
    bool Sp6PatternStateValue;
    float Sp6Pitch;
    float Sp6PitchMod;
    float Sp6StartSampel;
    float Sp6EndSampel;
    float Sp6Volume;
    float Sp6VolumeMod;
    float Sp6Attack;
    float Sp6Release;
    bool Sp6EnvModeValue;
    int Sp6EnvModeFixValue;
    float Sp6ReleaseMod;
    bool Sp6Emod;


    FilterMode Sp6FilterMode;
    float Sp6Cutoff;
    float Sp6Resonance;
    float Sp6CutoffMod;


    DelayMode Sp6DelayMode;
    float Sp6DelayTime;
    float Sp6DelayFeed;
    float Sp6DelayMix;
    float Sp6DelayLevel;
    float Sp6DelayTimeMod;
    float Sp6DelayFeedMod;
    float Sp6DelayMixMod;
    float Sp6DelayLevelMod;


    LfoMode Sp6LfoMode;
    /// bool Sp6LfoRtrValue;
    LfoRtrMode Sp6LfoRtrMode;
    float Sp6LfoTime;
    float Sp6LfoAmp;
    //-----sampelr7------------

    SynthWaveform Sp7waveform;

    int   Sp7synthmidiNoteNumber;
    float Sp7synthmidiNoteNumberMod;
    float Sp7synthlevel;
    float Sp7synthlevelMod;
    float Sp7SynthAttackValue;
    float Sp7SynthReleaseValue;
    float Sp7SynthReleaseModValue;
    bool Sp7StepperOnOffValue;

    bool Sp7EngineMode;
    SamplePlayMode Sp7PlayMode;
    TimeDivMode Sp7PlayTimeMode;
    float Sp7Gate;
    int Sp7Wnr;
    bool Sp7PatternStateValue;
    float Sp7Pitch;
    float Sp7PitchMod;
    float Sp7StartSampel;
    float Sp7EndSampel;
    float Sp7Volume;
    float Sp7VolumeMod;
    float Sp7Attack;
    float Sp7Release;
    bool Sp7EnvModeValue;
    int Sp7EnvModeFixValue;
    float Sp7ReleaseMod;
    bool Sp7Emod;


    FilterMode Sp7FilterMode;
    float Sp7Cutoff;
    float Sp7Resonance;
    float Sp7CutoffMod;


    DelayMode Sp7DelayMode;
    float Sp7DelayTime;
    float Sp7DelayFeed;
    float Sp7DelayMix;
    float Sp7DelayLevel;
    float Sp7DelayTimeMod;
    float Sp7DelayFeedMod;
    float Sp7DelayMixMod;
    float Sp7DelayLevelMod;


    LfoMode Sp7LfoMode;
    /// bool Sp7LfoRtrValue;
    LfoRtrMode Sp7LfoRtrMode;
    float Sp7LfoTime;
    float Sp7LfoAmp;



    
    
  

    // get/put XML
    void putToXml(XmlElement& xml);
    void getFromXml(XmlElement* xml);
  

 
private:
    
    
  
    // Reference to AudioProcessorValueTreeState object that owns the parameter objects
    AudioProcessorValueTreeState& valueTreeState;

    // Attachment objects link GUI controls to parameters
    //MainParas
    ComboBoxAttachment* MidiCCModeAttachment;
    ComboBoxAttachment* TimerModeAttachment;
    SliderAttachment* TimerBpmAttachment;
    SliderAttachment* TimerLatenceAttachment;
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
    ButtonAttachment* Sp1StepperOnOffAttachment;
    
     ButtonAttachment* Sp1EngineModeAttachment;
    ComboBoxAttachment*Sp1PlayModeAttachment;
    ComboBoxAttachment*Sp1PlayTimeModeAttachment;
    ButtonAttachment* Sp1EngineModulationAttachment;
    SliderAttachment* Sp1WaveNrAttachment;
    ButtonAttachment* Sp1PatternStateParasAttachment;
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
    ButtonAttachment* Sp2StepperOnOffAttachment;
    
    ComboBoxAttachment*Sp2PlayModeAttachment;
    ComboBoxAttachment*Sp2PlayTimeModeAttachment;
    ButtonAttachment* Sp2EngineModeAttachment;
    ButtonAttachment* Sp2EngineModulationAttachment;
    SliderAttachment* Sp2WaveNrAttachment;
    ButtonAttachment* Sp2PatternStateParasAttachment;
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
    ButtonAttachment* Sp3StepperOnOffAttachment;
    
    ComboBoxAttachment*Sp3PlayModeAttachment;
    ComboBoxAttachment*Sp3PlayTimeModeAttachment;
    ButtonAttachment* Sp3EngineModeAttachment;
    ButtonAttachment* Sp3EngineModulationAttachment;
    SliderAttachment* Sp3WaveNrAttachment;
    ButtonAttachment* Sp3PatternStateParasAttachment;
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
    ButtonAttachment* Sp4StepperOnOffAttachment;
    
    ComboBoxAttachment*Sp4PlayModeAttachment;
    ComboBoxAttachment*Sp4PlayTimeModeAttachment;
    ButtonAttachment* Sp4EngineModeAttachment;
    ButtonAttachment* Sp4EngineModulationAttachment;
    SliderAttachment* Sp4WaveNrAttachment;
    ButtonAttachment* Sp4PatternStateParasAttachment;
    
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

    //---------------sp5attachment----------------

    ComboBoxAttachment* Sp5SynthWaveformAttachment;
    SliderAttachment* Sp5SynthNoteNumberAttachment;
    SliderAttachment* Sp5SynthNoteNumberModAttachment;
    SliderAttachment* Sp5SynthLevelAttachment;
    SliderAttachment* Sp5SynthLevelModAttachment;
    SliderAttachment* Sp5SynthAttackAttachment;
    SliderAttachment* Sp5SynthReleaseAttachment;
    SliderAttachment* Sp5SynthReleaseModAttachment;
    ButtonAttachment* Sp5StepperOnOffAttachment;

    ComboBoxAttachment* Sp5PlayModeAttachment;
    ComboBoxAttachment* Sp5PlayTimeModeAttachment;
    ButtonAttachment* Sp5EngineModeAttachment;
    ButtonAttachment* Sp5EngineModulationAttachment;
    SliderAttachment* Sp5WaveNrAttachment;
    ButtonAttachment* Sp5PatternStateParasAttachment;

    SliderAttachment* Sp5PitchAttachment;
    SliderAttachment* Sp5PitchModAttachment;
    SliderAttachment* Sp5StartAttachment;
    SliderAttachment* Sp5EndAttachment;
    SliderAttachment* Sp5VolumeAttachment;
    SliderAttachment* Sp5VolumeModAttachment;

    SliderAttachment* Sp5AttackAttachment;
    SliderAttachment* Sp5ReleaseAttachment;
    SliderAttachment* Sp5ReleaseModAttachment;
    ButtonAttachment* Sp5EnvModeAttachment;
    SliderAttachment* Sp5EnvModeFixAttachment;
    SliderAttachment* Sp5GateAttachment;

    SliderAttachment* Sp5FilterCutAttachment;
    SliderAttachment* Sp5FilterCutModAttachment;
    SliderAttachment* Sp5FilterResAttachment;
    ComboBoxAttachment* Sp5FilterModeAttachment;



    ComboBoxAttachment* Sp5DelayModeComboxAttachment;
    SliderAttachment* Sp5DelayTimeSliderAttachment;
    SliderAttachment* Sp5DelayFeedSliderAttachment;
    SliderAttachment* Sp5DelayMixSliderAttachment;
    SliderAttachment* Sp5DelayLevelSliderAttachment;
    SliderAttachment* Sp5DelayTimeSliderModAttachment;
    SliderAttachment* Sp5DelayFeedSliderModAttachment;
    SliderAttachment* Sp5DelayMixSliderModAttachment;
    SliderAttachment* Sp5DelayLevelSliderModAttachment;


    ComboBoxAttachment* Sp5LfoModeAttachment;
    ComboBoxAttachment* Sp5LfoRtrModeAttachment;
    SliderAttachment* Sp5LfoTimeAttachment;
    SliderAttachment* Sp5LfoAmpAttachment;

    //---------------sp6attachment----------------

    ComboBoxAttachment* Sp6SynthWaveformAttachment;
    SliderAttachment* Sp6SynthNoteNumberAttachment;
    SliderAttachment* Sp6SynthNoteNumberModAttachment;
    SliderAttachment* Sp6SynthLevelAttachment;
    SliderAttachment* Sp6SynthLevelModAttachment;
    SliderAttachment* Sp6SynthAttackAttachment;
    SliderAttachment* Sp6SynthReleaseAttachment;
    SliderAttachment* Sp6SynthReleaseModAttachment;
    ButtonAttachment* Sp6StepperOnOffAttachment;

    ComboBoxAttachment* Sp6PlayModeAttachment;
    ComboBoxAttachment* Sp6PlayTimeModeAttachment;
    ButtonAttachment* Sp6EngineModeAttachment;
    ButtonAttachment* Sp6EngineModulationAttachment;
    SliderAttachment* Sp6WaveNrAttachment;
    ButtonAttachment* Sp6PatternStateParasAttachment;

    SliderAttachment* Sp6PitchAttachment;
    SliderAttachment* Sp6PitchModAttachment;
    SliderAttachment* Sp6StartAttachment;
    SliderAttachment* Sp6EndAttachment;
    SliderAttachment* Sp6VolumeAttachment;
    SliderAttachment* Sp6VolumeModAttachment;

    SliderAttachment* Sp6AttackAttachment;
    SliderAttachment* Sp6ReleaseAttachment;
    SliderAttachment* Sp6ReleaseModAttachment;
    ButtonAttachment* Sp6EnvModeAttachment;
    SliderAttachment* Sp6EnvModeFixAttachment;
    SliderAttachment* Sp6GateAttachment;

    SliderAttachment* Sp6FilterCutAttachment;
    SliderAttachment* Sp6FilterCutModAttachment;
    SliderAttachment* Sp6FilterResAttachment;
    ComboBoxAttachment* Sp6FilterModeAttachment;



    ComboBoxAttachment* Sp6DelayModeComboxAttachment;
    SliderAttachment* Sp6DelayTimeSliderAttachment;
    SliderAttachment* Sp6DelayFeedSliderAttachment;
    SliderAttachment* Sp6DelayMixSliderAttachment;
    SliderAttachment* Sp6DelayLevelSliderAttachment;
    SliderAttachment* Sp6DelayTimeSliderModAttachment;
    SliderAttachment* Sp6DelayFeedSliderModAttachment;
    SliderAttachment* Sp6DelayMixSliderModAttachment;
    SliderAttachment* Sp6DelayLevelSliderModAttachment;


    ComboBoxAttachment* Sp6LfoModeAttachment;
    ComboBoxAttachment* Sp6LfoRtrModeAttachment;
    SliderAttachment* Sp6LfoTimeAttachment;
    SliderAttachment* Sp6LfoAmpAttachment;
    //---------------sp7attachment----------------

    ComboBoxAttachment* Sp7SynthWaveformAttachment;
    SliderAttachment* Sp7SynthNoteNumberAttachment;
    SliderAttachment* Sp7SynthNoteNumberModAttachment;
    SliderAttachment* Sp7SynthLevelAttachment;
    SliderAttachment* Sp7SynthLevelModAttachment;
    SliderAttachment* Sp7SynthAttackAttachment;
    SliderAttachment* Sp7SynthReleaseAttachment;
    SliderAttachment* Sp7SynthReleaseModAttachment;
    ButtonAttachment* Sp7StepperOnOffAttachment;

    ComboBoxAttachment* Sp7PlayModeAttachment;
    ComboBoxAttachment* Sp7PlayTimeModeAttachment;
    ButtonAttachment* Sp7EngineModeAttachment;
    ButtonAttachment* Sp7EngineModulationAttachment;
    SliderAttachment* Sp7WaveNrAttachment;
    ButtonAttachment* Sp7PatternStateParasAttachment;

    SliderAttachment* Sp7PitchAttachment;
    SliderAttachment* Sp7PitchModAttachment;
    SliderAttachment* Sp7StartAttachment;
    SliderAttachment* Sp7EndAttachment;
    SliderAttachment* Sp7VolumeAttachment;
    SliderAttachment* Sp7VolumeModAttachment;

    SliderAttachment* Sp7AttackAttachment;
    SliderAttachment* Sp7ReleaseAttachment;
    SliderAttachment* Sp7ReleaseModAttachment;
    ButtonAttachment* Sp7EnvModeAttachment;
    SliderAttachment* Sp7EnvModeFixAttachment;
    SliderAttachment* Sp7GateAttachment;

    SliderAttachment* Sp7FilterCutAttachment;
    SliderAttachment* Sp7FilterCutModAttachment;
    SliderAttachment* Sp7FilterResAttachment;
    ComboBoxAttachment* Sp7FilterModeAttachment;



    ComboBoxAttachment* Sp7DelayModeComboxAttachment;
    SliderAttachment* Sp7DelayTimeSliderAttachment;
    SliderAttachment* Sp7DelayFeedSliderAttachment;
    SliderAttachment* Sp7DelayMixSliderAttachment;
    SliderAttachment* Sp7DelayLevelSliderAttachment;
    SliderAttachment* Sp7DelayTimeSliderModAttachment;
    SliderAttachment* Sp7DelayFeedSliderModAttachment;
    SliderAttachment* Sp7DelayMixSliderModAttachment;
    SliderAttachment* Sp7DelayLevelSliderModAttachment;


    ComboBoxAttachment* Sp7LfoModeAttachment;
    ComboBoxAttachment* Sp7LfoRtrModeAttachment;
    SliderAttachment* Sp7LfoTimeAttachment;
    SliderAttachment* Sp7LfoAmpAttachment;
    

    // Specialized versions of AudioProcessorValueTreeState::Listener adapted for our parameter types
    struct MidiCCModeListener : public AudioProcessorValueTreeState::Listener
    {
        MidiCCMode& mode;

        MidiCCModeListener(MidiCCMode& mc) : AudioProcessorValueTreeState::Listener(), mode(mc) {}
        void parameterChanged(const String&, float newValue) override
        {
            mode.setIndex((int)(newValue + 0.5f));
        }
    };
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
     MidiCCModeListener MidiCCModeListener;
      TimerModeListener TimeModeListener;
      IntegerListener TimeBpmListener;
      FloatListener TimeLatenceListener;
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
    BoolListener Sp1StepperOnOffListener;
    BoolListener Sp1EngineModeListener;
    
    SpPlayModeListener Sp1PlayModusListener;
    TimerDivModeListener Sp1PlayTimeModusListener;
    FloatListener Sp1GateListener;
    IntegerListener Sp1WaveNrListener;
    BoolListener Sp1PatternStateParasListener;
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
    BoolListener Sp2StepperOnOffListener;
    BoolListener Sp2EngineModeListener;
    
    SpPlayModeListener Sp2PlayModusListener;
    TimerDivModeListener Sp2PlayTimeModusListener;
    FloatListener Sp2GateListener;
    IntegerListener Sp2WaveNrListener;
    BoolListener Sp2PatternStateParasListener;
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
    BoolListener Sp3StepperOnOffListener;
    BoolListener Sp3EngineModeListener;
    
    SpPlayModeListener Sp3PlayModusListener;
    TimerDivModeListener Sp3PlayTimeModusListener;
    FloatListener Sp3GateListener;
    IntegerListener Sp3WaveNrListener;
    BoolListener Sp3PatternStateParasListener;
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
    BoolListener Sp4StepperOnOffListener;
    BoolListener Sp4EngineModeListener;
    
    SpPlayModeListener Sp4PlayModusListener;
    TimerDivModeListener Sp4PlayTimeModusListener;
    FloatListener Sp4GateListener;
    IntegerListener Sp4WaveNrListener;
    BoolListener Sp4PatternStateParasListener;
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

    //---------------Sampler5Paras---------------
    WaveformListener Sp5SynthwaveformListener;
    IntegerListener Sp5SynthnoteNumberListener;
    FloatListener Sp5SynthnoteNumberModListener;
    FloatListener Sp5SynthlevelListener;
    FloatListener Sp5SynthlevelModListener;
    FloatListener Sp5SynthAttackListener;
    FloatListener Sp5SynthReleaseListener;
    FloatListener Sp5SynthReleaseModListener;
    BoolListener Sp5StepperOnOffListener;
    BoolListener Sp5EngineModeListener;

    SpPlayModeListener Sp5PlayModusListener;
    TimerDivModeListener Sp5PlayTimeModusListener;
    FloatListener Sp5GateListener;
    IntegerListener Sp5WaveNrListener;
    BoolListener Sp5PatternStateParasListener;
    FloatListener Sp5PitchListener;
    FloatListener Sp5PitchModListener;
    FloatListener Sp5StartListener;
    FloatListener Sp5EndListener;
    FloatListener Sp5VolumeListener;
    FloatListener Sp5VolumeModListener;
    BoolListener Sp5EmodListener;
    FloatListener Sp5AttackListener;
    FloatListener Sp5ReleaseListener;
    FloatListener Sp5ReleaseModListener;
    BoolListener Sp5EnvModeListener;
    IntegerListener  Sp5EnvModeFixListener;
    SpFilterModeListener Sp5FilterModusListener;
    FloatListener Sp5CutoffListener;
    FloatListener Sp5CutoffListenerMod;
    FloatListener Sp5ResonanceListener;



    SpDelayModeListener Sp5DelayModeListener;
    FloatListener Sp5DelayTimeListener;
    FloatListener Sp5DelayFeedListener;
    FloatListener Sp5DelayMixListener;
    FloatListener Sp5DelayLevelListener;
    FloatListener Sp5DelayTimeListenerMod;
    FloatListener Sp5DelayFeedListenerMod;
    FloatListener Sp5DelayMixListenerMod;
    FloatListener Sp5DelayLevelListenerMod;


    SpLfoModeListener Sp5LfoModeListener;
    SpLfoRtrModeListener Sp5LfoRtrModeListener;
    FloatListener Sp5LfoTimeListener;
    FloatListener Sp5LfoAmpListener;

    //---------------Sampler6Paras---------------
    WaveformListener Sp6SynthwaveformListener;
    IntegerListener Sp6SynthnoteNumberListener;
    FloatListener Sp6SynthnoteNumberModListener;
    FloatListener Sp6SynthlevelListener;
    FloatListener Sp6SynthlevelModListener;
    FloatListener Sp6SynthAttackListener;
    FloatListener Sp6SynthReleaseListener;
    FloatListener Sp6SynthReleaseModListener;
    BoolListener Sp6StepperOnOffListener;
    BoolListener Sp6EngineModeListener;

    SpPlayModeListener Sp6PlayModusListener;
    TimerDivModeListener Sp6PlayTimeModusListener;
    FloatListener Sp6GateListener;
    IntegerListener Sp6WaveNrListener;
    BoolListener Sp6PatternStateParasListener;
    FloatListener Sp6PitchListener;
    FloatListener Sp6PitchModListener;
    FloatListener Sp6StartListener;
    FloatListener Sp6EndListener;
    FloatListener Sp6VolumeListener;
    FloatListener Sp6VolumeModListener;
    BoolListener Sp6EmodListener;
    FloatListener Sp6AttackListener;
    FloatListener Sp6ReleaseListener;
    FloatListener Sp6ReleaseModListener;
    BoolListener Sp6EnvModeListener;
    IntegerListener  Sp6EnvModeFixListener;
    SpFilterModeListener Sp6FilterModusListener;
    FloatListener Sp6CutoffListener;
    FloatListener Sp6CutoffListenerMod;
    FloatListener Sp6ResonanceListener;



    SpDelayModeListener Sp6DelayModeListener;
    FloatListener Sp6DelayTimeListener;
    FloatListener Sp6DelayFeedListener;
    FloatListener Sp6DelayMixListener;
    FloatListener Sp6DelayLevelListener;
    FloatListener Sp6DelayTimeListenerMod;
    FloatListener Sp6DelayFeedListenerMod;
    FloatListener Sp6DelayMixListenerMod;
    FloatListener Sp6DelayLevelListenerMod;


    SpLfoModeListener Sp6LfoModeListener;
    SpLfoRtrModeListener Sp6LfoRtrModeListener;
    FloatListener Sp6LfoTimeListener;
    FloatListener Sp6LfoAmpListener;

    //---------------Sampler7Paras---------------
    WaveformListener Sp7SynthwaveformListener;
    IntegerListener Sp7SynthnoteNumberListener;
    FloatListener Sp7SynthnoteNumberModListener;
    FloatListener Sp7SynthlevelListener;
    FloatListener Sp7SynthlevelModListener;
    FloatListener Sp7SynthAttackListener;
    FloatListener Sp7SynthReleaseListener;
    FloatListener Sp7SynthReleaseModListener;
    BoolListener Sp7StepperOnOffListener;
    BoolListener Sp7EngineModeListener;

    SpPlayModeListener Sp7PlayModusListener;
    TimerDivModeListener Sp7PlayTimeModusListener;
    FloatListener Sp7GateListener;
    IntegerListener Sp7WaveNrListener;
    BoolListener Sp7PatternStateParasListener;
    FloatListener Sp7PitchListener;
    FloatListener Sp7PitchModListener;
    FloatListener Sp7StartListener;
    FloatListener Sp7EndListener;
    FloatListener Sp7VolumeListener;
    FloatListener Sp7VolumeModListener;
    BoolListener Sp7EmodListener;
    FloatListener Sp7AttackListener;
    FloatListener Sp7ReleaseListener;
    FloatListener Sp7ReleaseModListener;
    BoolListener Sp7EnvModeListener;
    IntegerListener  Sp7EnvModeFixListener;
    SpFilterModeListener Sp7FilterModusListener;
    FloatListener Sp7CutoffListener;
    FloatListener Sp7CutoffListenerMod;
    FloatListener Sp7ResonanceListener;



    SpDelayModeListener Sp7DelayModeListener;
    FloatListener Sp7DelayTimeListener;
    FloatListener Sp7DelayFeedListener;
    FloatListener Sp7DelayMixListener;
    FloatListener Sp7DelayLevelListener;
    FloatListener Sp7DelayTimeListenerMod;
    FloatListener Sp7DelayFeedListenerMod;
    FloatListener Sp7DelayMixListenerMod;
    FloatListener Sp7DelayLevelListenerMod;


    SpLfoModeListener Sp7LfoModeListener;
    SpLfoRtrModeListener Sp7LfoRtrModeListener;
    FloatListener Sp7LfoTimeListener;
    FloatListener Sp7LfoAmpListener;
    
    

    
    
};
