
#include "PluginParameters.h"

// Names are symbolic names used to tag AudioParameter objects and XML attributes
// Labels are human-friendly identifiers for use in GUIs



//--------------Mainparas--------------------------------
const String PluginParameters::MidiCCMode_Id = "midiccmode";
const String PluginParameters::MidiCCMode_Name = TRANS("MidiCCmode");
const String PluginParameters::MidiCCMode_Label;

const String PluginParameters::TimerMode_Id = "timermode";
const String PluginParameters::TimerMode_Name = TRANS("Timermode");
const String PluginParameters::TimerMode_Label;


const String PluginParameters::TimerBpm_Id = "timerbpm";
const String PluginParameters::TimerBpm_Name = TRANS("Timerbpm");
const String PluginParameters::TimerBpm_Label;

const String PluginParameters::TimerLatence_Id = "timerlatence";
const String PluginParameters::TimerLatence_Name = TRANS("Timerlatence");
const String PluginParameters::TimerLatence_Label;

const String PluginParameters::mainSqLenght_Id = "mainSqLenght";
const String PluginParameters::mainSqLenght_Name = TRANS("MainSqLenght");
const String PluginParameters::mainSqLenght_Label=TRANS("MainSqLenght");

const String PluginParameters::mainWave_Id = "mainWave";
const String PluginParameters::mainWave_Name = TRANS("MainWave");
const String PluginParameters::mainWave_Label;

const String PluginParameters::mainPitch_Id = "mainPitch";
const String PluginParameters::mainPitch_Name = TRANS("MainPitch");
const String PluginParameters::mainPitch_Label;

const String PluginParameters::mainDelay_Id = "mainDelay";
const String PluginParameters::mainDelay_Name = TRANS("MainDelay");
const String PluginParameters::mainDelay_Label;

const String PluginParameters::mainVolume_Id = "mainVolume";
const String PluginParameters::mainVolume_Name = TRANS("Mainvolume");
const String PluginParameters::mainVolume_Label;

const String PluginParameters::mainLfoSelect_Id = "mainLfoSelect";
const String PluginParameters::mainLfoSelect_Name = TRANS("MainLfoSelect");
const String PluginParameters::mainLfoSelect_Label;

const String PluginParameters::mainLfoPitchAm_Id = "mainLfoPitchAm";
const String PluginParameters::mainLfoPitchAm_Name = TRANS("MainLfoPitchAm");
const String PluginParameters::mainLfoPitchAm_Label;

const String PluginParameters::mainLfoDelayAm_Id = "mainLfoDelayAm";
const String PluginParameters::mainLfoDelayAm_Name = TRANS("MainLfoDelayAm");
const String PluginParameters::mainLfoDelayAm_Label;

const String PluginParameters::mainLfoSpHold_Id = "mainLfoSpHold";
const String PluginParameters::mainLfoSpHold_Name = TRANS("MainLfoSpHold");
const String PluginParameters::mainLfoSpHold_Label;

const String PluginParameters::EngineSelect_Id = "engineselect";
const String PluginParameters::EngineSelect_Name = TRANS("Engineselect");
const String PluginParameters::EngineSelect_Label;





const String PluginParameters::TriggerSelect10_Id = "triggerselect10";
const String PluginParameters::TriggerSelect10_Name = TRANS("Triggerselect10");
const String PluginParameters::TriggerSelect10_Label;

const String PluginParameters::mainEqMode_Id = "mainEqMode";
const String PluginParameters::mainEqMode_Name = TRANS("MainEqMode");
const String PluginParameters::mainEqMode_Label;


const String PluginParameters::mainEqBassV_Id = "mainEqBassV";
const String PluginParameters::mainEqBassV_Name = TRANS("MainEqBassV");
const String PluginParameters::mainEqBassV_Label;


const String PluginParameters::mainEqMidV_Id = "mainEqMidV";
const String PluginParameters::mainEqMidV_Name = TRANS("MainEqMidV");
const String PluginParameters::mainEqMidV_Label;

const String PluginParameters::mainEqHighV_Id = "mainEqHighV";
const String PluginParameters::mainEqHighV_Name = TRANS("MainEqHighV");
const String PluginParameters::mainEqHighV_Label;


const String PluginParameters::mainBitCrushMode_Id = "mainBitCrushMode";
const String PluginParameters::mainBitCrushMode_Name = TRANS("MainBitCrushMode");
const String PluginParameters::mainBitCrushMode_Label;

const String PluginParameters::mainBitCrushBits_Id = "mainBitCrushBits";
const String PluginParameters::mainBitCrushBits_Name = TRANS("MainBitCrushBits");
const String PluginParameters::mainBitCrushBits_Label;

const String PluginParameters::mainBitCrushMix_Id = "mainBitCrushMix";
const String PluginParameters::mainBitCrushMix_Name = TRANS("MainBitCrushMix");
const String PluginParameters::mainBitCrushMix_Label;

const String PluginParameters::mainBitCrushDry_Id = "mainBitCrushDry";
const String PluginParameters::mainBitCrushDry_Name = TRANS("MainBitCrushDry");
const String PluginParameters::mainBitCrushDry_Label;


const String PluginParameters::mainLimiterMode_Id = "mainLimiterMode";
const String PluginParameters::mainLimiterMode_Name = TRANS("MainLimiterMode");
const String PluginParameters::mainLimiterMode_Label;

const String PluginParameters::mainLimiterThrsh_Id = "mainLimiterThresh";
const String PluginParameters::mainLimiterThrsh_Name = TRANS("MainLimiterThresh");
const String PluginParameters::mainLimiterThrsh_Label;

const String PluginParameters::mainLimiterGain_Id = "mainLimiterGain";
const String PluginParameters::mainLimiterGain_Name = TRANS("MainLimiterGain");
const String PluginParameters::mainLimiterGain_Label;

//-------------Sampler1Paras-----------------------------
const String PluginParameters::Sp1Synthwaveform_Id = "sp1Synthwaveform";
const String PluginParameters::Sp1Synthwaveform_Name = TRANS("Sp1SynthWaveform");
const String PluginParameters::Sp1Synthwaveform_Label;

const String PluginParameters::Sp1SynthmidiNoteNumber_Id = "sp1SynthmidiNoteNumber";
const String PluginParameters::Sp1SynthmidiNoteNumber_Name = TRANS("Sp1SynthMidi Note Number");
const String PluginParameters::Sp1SynthmidiNoteNumber_Label;

const String PluginParameters::Sp1SynthmidiNoteNumberMod_Id = "sp1SynthmidiNoteNumberMod";
const String PluginParameters::Sp1SynthmidiNoteNumberMod_Name = TRANS("Sp1SynthMidi Note NumberMod");
const String PluginParameters::Sp1SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp1Synthlevel_Id = "sp1Synthlevel";
const String PluginParameters::Sp1Synthlevel_Name = TRANS("Sp1SynthLevel");
const String PluginParameters::Sp1Synthlevel_Label = TRANS("Sp1Synth/10");

const String PluginParameters::Sp1SynthlevelMod_Id = "sp1SynthlevelMod";
const String PluginParameters::Sp1SynthlevelMod_Name = TRANS("Sp1SynthLevelMod");
const String PluginParameters::Sp1SynthlevelMod_Label;

const String PluginParameters::Sp1SynthAttack_Id = "sp1Synthattack";
const String PluginParameters::Sp1SynthAttack_Name = TRANS("Sp1Synthattack");
const String PluginParameters::Sp1SynthAttack_Label ;

const String PluginParameters::Sp1SynthRelease_Id = "sp1Synthrelease";
const String PluginParameters::Sp1SynthRelease_Name = TRANS("Sp1Synthrelease");
const String PluginParameters::Sp1SynthRelease_Label ;

const String PluginParameters::Sp1SynthReleaseMod_Id = "sp1SynthreleaseMod";
const String PluginParameters::Sp1SynthReleaseMod_Name = TRANS("Sp1SynthreleaseMod");
const String PluginParameters::Sp1SynthReleaseMod_Label ;

const String PluginParameters::Sp1StepperOnOff_Id = "Sp1StepperOnOff";
const String PluginParameters::Sp1StepperOnOff_Name = TRANS("Sp1StepperOnOff");
const String PluginParameters::Sp1StepperOnOff_Label;

const String PluginParameters::Sp1EngineMode_Id = "sp1emode";
const String PluginParameters::Sp1EngineMode_Name = TRANS("Sp1Emode");
const String PluginParameters::Sp1EngineMode_Label;



const String PluginParameters::Sp1WaveNr_Id = "sp1WaveNr";
const String PluginParameters::Sp1WaveNr_Name = TRANS("Sp1Wav");
const String PluginParameters::Sp1WaveNr_Label;

const String PluginParameters::Sp1PatternStateParas_Id = "sp1PatternStateParas";
const String PluginParameters::Sp1PatternStateParas_Name = TRANS("Sp1WavNrMod");
const String PluginParameters::Sp1PatternStateParas_Label;


const String PluginParameters::Sp1Gate_Id = "sp1gate";
const String PluginParameters::Sp1Gate_Name = TRANS("Sp1Gate");
const String PluginParameters::Sp1Gate_Label;

const String PluginParameters::Sp1PlayMode_Id = "sp1play";
const String PluginParameters::Sp1PlayMode_Name = TRANS("Sp1Play");
const String PluginParameters::Sp1PlayMode_Label;

const String PluginParameters::Sp1PlayTimeMode_Id = "sp1playtime";
const String PluginParameters::Sp1PlayTimeMode_Name = TRANS("Sp1Playtime");
const String PluginParameters::Sp1PlayTimeMode_Label;

const String PluginParameters::Sp1Pitch_Id = "sp1pitch";
const String PluginParameters::Sp1Pitch_Name = TRANS("Sp1Pitch");
const String PluginParameters::Sp1Pitch_Label;

const String PluginParameters::Sp1PitchMod_Id = "sp1pitchM";
const String PluginParameters::Sp1PitchMod_Name = TRANS("Sp1PitchM");
const String PluginParameters::Sp1PitchMod_Label;

const String PluginParameters::Sp1StartSample_Id = "sp1start";
const String PluginParameters::Sp1StartSample_Name = TRANS("Sp1Start");
const String PluginParameters::Sp1StartSample_Label;

const String PluginParameters::Sp1EndSample_Id = "sp1end";
const String PluginParameters::Sp1EndSample_Name = TRANS("Sp1End");
const String PluginParameters::Sp1EndSample_Label;

const String PluginParameters::Sp1Volume_Id = "sp1vol";
const String PluginParameters::Sp1Volume_Name = TRANS("Sp1Vol");
const String PluginParameters::Sp1Volume_Label;

const String PluginParameters::Sp1VolumeMod_Id = "sp1volM";
const String PluginParameters::Sp1VolumeMod_Name = TRANS("Sp1VolM");
const String PluginParameters::Sp1VolumeMod_Label;

const String PluginParameters::Sp1Attack_Id = "sp1attack";
const String PluginParameters::Sp1Attack_Name = TRANS("Sp1attack");
const String PluginParameters::Sp1Attack_Label;

const String PluginParameters::Sp1Release_Id = "sp1release";
const String PluginParameters::Sp1Release_Name = TRANS("Sp1release");
const String PluginParameters::Sp1Release_Label;

const String PluginParameters::Sp1ReleaseMod_Id = "sp1releasemod";
const String PluginParameters::Sp1ReleaseMod_Name = TRANS("Sp1releasemod");
const String PluginParameters::Sp1ReleaseMod_Label;

const String PluginParameters::Sp1EnvMode_Id = "sp1envmode";
const String PluginParameters::Sp1EnvMode_Name = TRANS("Sp1envmode");
const String PluginParameters::Sp1EnvMode_Label;


const String PluginParameters::Sp1EnvModeFix_Id = "sp1envfixmode";
const String PluginParameters::Sp1EnvModeFix_Name = TRANS("Sp1envfixmode");
const String PluginParameters::Sp1EnvModeFix_Label;

const String PluginParameters::Sp1EMod_Id = "sp1eModea";
const String PluginParameters::Sp1EMod_Name = TRANS("Sp1eModea");
const String PluginParameters::Sp1EMod_Label;

const String PluginParameters::Sp1Cutoff_Id = "sp1cut";
const String PluginParameters::Sp1Cutoff_Name = TRANS("Sp1Cut");
const String PluginParameters::Sp1Cutoff_Label;

const String PluginParameters::Sp1CutoffMod_Id = "sp1cutm";
const String PluginParameters::Sp1CutoffMod_Name = TRANS("Sp1Cutm");
const String PluginParameters::Sp1CutoffMod_Label;


const String PluginParameters::Sp1Resonance_Id = "sp1res";
const String PluginParameters::Sp1Resonance_Name = TRANS("Sp1Res");
const String PluginParameters::Sp1Resonance_Label;

const String PluginParameters::Sp1FilterMode_Id = "sp1vcfm";
const String PluginParameters::Sp1FilterMode_Name = TRANS("Sp1Vcfm");
const String PluginParameters::Sp1FilterMode_Label;



const String PluginParameters::Sp1DelayMode_Id = "sp1dlm";
const String PluginParameters::Sp1DelayMode_Name = TRANS("Sp1Dlm");
const String PluginParameters::Sp1DelayMode_Label;

const String PluginParameters::Sp1DelayTime_Id = "sp1dlt";
const String PluginParameters::Sp1DelayTime_Name = TRANS("Sp1Dlt");
const String PluginParameters::Sp1DelayTime_Label;

const String PluginParameters::Sp1DelayFeed_Id = "sp1dlf";
const String PluginParameters::Sp1DelayFeed_Name = TRANS("Sp1Dlf");
const String PluginParameters::Sp1DelayFeed_Label;

const String PluginParameters::Sp1DelayMix_Id = "sp1dlmx";
const String PluginParameters::Sp1DelayMix_Name = TRANS("Sp1Dlmx");
const String PluginParameters::Sp1DelayMix_Label;

const String PluginParameters::Sp1DelayLevel_Id = "sp1dl";
const String PluginParameters::Sp1DelayLevel_Name = TRANS("Sp1Dll");
const String PluginParameters::Sp1DelayLevel_Label;

const String PluginParameters::Sp1DelayTimeMod_Id = "sp1dltm";
const String PluginParameters::Sp1DelayTimeMod_Name = TRANS("Sp1Dltm");
const String PluginParameters::Sp1DelayTimeMod_Label;

const String PluginParameters::Sp1DelayFeedMod_Id = "sp1dlfm";
const String PluginParameters::Sp1DelayFeedMod_Name = TRANS("Sp1Dlfm");
const String PluginParameters::Sp1DelayFeedMod_Label;

const String PluginParameters::Sp1DelayMixMod_Id = "sp1dlmxm";
const String PluginParameters::Sp1DelayMixMod_Name = TRANS("Sp1Dlmxm");
const String PluginParameters::Sp1DelayMixMod_Label;

const String PluginParameters::Sp1DelayLevelMod_Id = "sp1dlmod";
const String PluginParameters::Sp1DelayLevelMod_Name = TRANS("Sp1Dllmod");
const String PluginParameters::Sp1DelayLevelMod_Label;

const String PluginParameters::Sp1LfoMode_Id = "sp1lfom";
const String PluginParameters::Sp1LfoMode_Name = TRANS("Sp1Lfom");
const String PluginParameters::Sp1LfoMode_Label;

const String PluginParameters::Sp1LfoRtr_Id = "sp1LfoRtr";
const String PluginParameters::Sp1LfoRtr_Name = TRANS("Sp1LfoRtr");
const String PluginParameters::Sp1LfoRtr_Label;



const String PluginParameters::Sp1LfoTime_Id = "sp1lfot";
const String PluginParameters::Sp1LfoTime_Name = TRANS("Sp1Lfot");
const String PluginParameters::Sp1LfoTime_Label;

const String PluginParameters::Sp1LfoAmp_Id = "sp1lfoa";
const String PluginParameters::Sp1LfoAmp_Name = TRANS("Sp1Lfoa");
const String PluginParameters::Sp1LfoAmp_Label;


//-------------Sampler2Paras-----------------------------
const String PluginParameters::Sp2Synthwaveform_Id = "Sp2Synthwaveform";
const String PluginParameters::Sp2Synthwaveform_Name = TRANS("Sp2SynthWaveform");
const String PluginParameters::Sp2Synthwaveform_Label;

const String PluginParameters::Sp2SynthmidiNoteNumber_Id = "Sp2SynthmidiNoteNumber";
const String PluginParameters::Sp2SynthmidiNoteNumber_Name = TRANS("Sp2SynthMidi Note Number");
const String PluginParameters::Sp2SynthmidiNoteNumber_Label;

const String PluginParameters::Sp2SynthmidiNoteNumberMod_Id = "Sp2SynthmidiNoteNumberMod";
const String PluginParameters::Sp2SynthmidiNoteNumberMod_Name = TRANS("Sp2SynthMidi Note NumberMod");
const String PluginParameters::Sp2SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp2Synthlevel_Id = "Sp2Synthlevel";
const String PluginParameters::Sp2Synthlevel_Name = TRANS("Sp2SynthLevel");
const String PluginParameters::Sp2Synthlevel_Label = TRANS("Sp2Synth/10");

const String PluginParameters::Sp2SynthlevelMod_Id = "Sp2SynthlevelMod";
const String PluginParameters::Sp2SynthlevelMod_Name = TRANS("Sp2SynthLevelMod");
const String PluginParameters::Sp2SynthlevelMod_Label;

const String PluginParameters::Sp2SynthAttack_Id = "Sp2Synthattack";
const String PluginParameters::Sp2SynthAttack_Name = TRANS("Sp2Synthattack");
const String PluginParameters::Sp2SynthAttack_Label ;

const String PluginParameters::Sp2SynthRelease_Id = "Sp2Synthrelease";
const String PluginParameters::Sp2SynthRelease_Name = TRANS("Sp2Synthrelease");
const String PluginParameters::Sp2SynthRelease_Label ;

const String PluginParameters::Sp2SynthReleaseMod_Id = "Sp2SynthreleaseMod";
const String PluginParameters::Sp2SynthReleaseMod_Name = TRANS("Sp2SynthreleaseMod");
const String PluginParameters::Sp2SynthReleaseMod_Label ;

const String PluginParameters::Sp2EnvMode_Id = "sp2envmode";
const String PluginParameters::Sp2EnvMode_Name = TRANS("Sp2envmode");
const String PluginParameters::Sp2EnvMode_Label;

const String PluginParameters::Sp2StepperOnOff_Id = "Sp2StepperOnOff";
const String PluginParameters::Sp2StepperOnOff_Name = TRANS("Sp2StepperOnOff");
const String PluginParameters::Sp2StepperOnOff_Label;

const String PluginParameters::Sp2EngineMode_Id = "Sp2emode";
const String PluginParameters::Sp2EngineMode_Name = TRANS("Sp2Emode");
const String PluginParameters::Sp2EngineMode_Label;



const String PluginParameters::Sp2WaveNr_Id = "Sp2WaveNr";
const String PluginParameters::Sp2WaveNr_Name = TRANS("Sp2Wav");
const String PluginParameters::Sp2WaveNr_Label;

const String PluginParameters::Sp2PatternStateParas_Id = "sp2PatternStateParas";
const String PluginParameters::Sp2PatternStateParas_Name = TRANS("Sp2WavNrMod");
const String PluginParameters::Sp2PatternStateParas_Label;


const String PluginParameters::Sp2Gate_Id = "Sp2gate";
const String PluginParameters::Sp2Gate_Name = TRANS("Sp2Gate");
const String PluginParameters::Sp2Gate_Label;

const String PluginParameters::Sp2PlayMode_Id = "Sp2play";
const String PluginParameters::Sp2PlayMode_Name = TRANS("Sp2Play");
const String PluginParameters::Sp2PlayMode_Label;

const String PluginParameters::Sp2PlayTimeMode_Id = "Sp2playtime";
const String PluginParameters::Sp2PlayTimeMode_Name = TRANS("Sp2Playtime");
const String PluginParameters::Sp2PlayTimeMode_Label;

const String PluginParameters::Sp2Pitch_Id = "Sp2pitch";
const String PluginParameters::Sp2Pitch_Name = TRANS("Sp2Pitch");
const String PluginParameters::Sp2Pitch_Label;

const String PluginParameters::Sp2PitchMod_Id = "Sp2pitchM";
const String PluginParameters::Sp2PitchMod_Name = TRANS("Sp2PitchM");
const String PluginParameters::Sp2PitchMod_Label;

const String PluginParameters::Sp2StartSample_Id = "Sp2start";
const String PluginParameters::Sp2StartSample_Name = TRANS("Sp2Start");
const String PluginParameters::Sp2StartSample_Label;

const String PluginParameters::Sp2EndSample_Id = "Sp2end";
const String PluginParameters::Sp2EndSample_Name = TRANS("Sp2End");
const String PluginParameters::Sp2EndSample_Label;

const String PluginParameters::Sp2Volume_Id = "Sp2vol";
const String PluginParameters::Sp2Volume_Name = TRANS("Sp2Vol");
const String PluginParameters::Sp2Volume_Label;

const String PluginParameters::Sp2VolumeMod_Id = "Sp2volM";
const String PluginParameters::Sp2VolumeMod_Name = TRANS("Sp2VolM");
const String PluginParameters::Sp2VolumeMod_Label;

const String PluginParameters::Sp2Attack_Id = "Sp2attack";
const String PluginParameters::Sp2Attack_Name = TRANS("Sp2attack");
const String PluginParameters::Sp2Attack_Label;

const String PluginParameters::Sp2Release_Id = "Sp2release";
const String PluginParameters::Sp2Release_Name = TRANS("Sp2release");
const String PluginParameters::Sp2Release_Label;

const String PluginParameters::Sp2ReleaseMod_Id = "Sp2releasemod";
const String PluginParameters::Sp2ReleaseMod_Name = TRANS("Sp2releasemod");
const String PluginParameters::Sp2ReleaseMod_Label;

const String PluginParameters::Sp2EMod_Id = "Sp2eModeMod";
const String PluginParameters::Sp2EMod_Name = TRANS("Sp2eModeMod");
const String PluginParameters::Sp2EMod_Label;

const String PluginParameters::Sp2EnvModeFix_Id = "sp2envfixmode";
const String PluginParameters::Sp2EnvModeFix_Name = TRANS("Sp2envfixmode");
const String PluginParameters::Sp2EnvModeFix_Label;

const String PluginParameters::Sp2Cutoff_Id = "Sp2cut";
const String PluginParameters::Sp2Cutoff_Name = TRANS("Sp2Cut");
const String PluginParameters::Sp2Cutoff_Label;

const String PluginParameters::Sp2CutoffMod_Id = "Sp2cutm";
const String PluginParameters::Sp2CutoffMod_Name = TRANS("Sp2Cutm");
const String PluginParameters::Sp2CutoffMod_Label;


const String PluginParameters::Sp2Resonance_Id = "Sp2res";
const String PluginParameters::Sp2Resonance_Name = TRANS("Sp2Res");
const String PluginParameters::Sp2Resonance_Label;

const String PluginParameters::Sp2FilterMode_Id = "Sp2vcfm";
const String PluginParameters::Sp2FilterMode_Name = TRANS("Sp2Vcfm");
const String PluginParameters::Sp2FilterMode_Label;



const String PluginParameters::Sp2DelayMode_Id = "Sp2dlm";
const String PluginParameters::Sp2DelayMode_Name = TRANS("Sp2Dlm");
const String PluginParameters::Sp2DelayMode_Label;

const String PluginParameters::Sp2DelayTime_Id = "Sp2dlt";
const String PluginParameters::Sp2DelayTime_Name = TRANS("Sp2Dlt");
const String PluginParameters::Sp2DelayTime_Label;

const String PluginParameters::Sp2DelayFeed_Id = "Sp2dlf";
const String PluginParameters::Sp2DelayFeed_Name = TRANS("Sp2Dlf");
const String PluginParameters::Sp2DelayFeed_Label;

const String PluginParameters::Sp2DelayMix_Id = "Sp2dlmx";
const String PluginParameters::Sp2DelayMix_Name = TRANS("Sp2Dlmx");
const String PluginParameters::Sp2DelayMix_Label;

const String PluginParameters::Sp2DelayLevel_Id = "Sp2dl";
const String PluginParameters::Sp2DelayLevel_Name = TRANS("Sp2Dll");
const String PluginParameters::Sp2DelayLevel_Label;

const String PluginParameters::Sp2DelayTimeMod_Id = "Sp2dltm";
const String PluginParameters::Sp2DelayTimeMod_Name = TRANS("Sp2Dltm");
const String PluginParameters::Sp2DelayTimeMod_Label;

const String PluginParameters::Sp2DelayFeedMod_Id = "Sp2dlfm";
const String PluginParameters::Sp2DelayFeedMod_Name = TRANS("Sp2Dlfm");
const String PluginParameters::Sp2DelayFeedMod_Label;

const String PluginParameters::Sp2DelayMixMod_Id = "Sp2dlmxm";
const String PluginParameters::Sp2DelayMixMod_Name = TRANS("Sp2Dlmxm");
const String PluginParameters::Sp2DelayMixMod_Label;

const String PluginParameters::Sp2DelayLevelMod_Id = "Sp2dlmod";
const String PluginParameters::Sp2DelayLevelMod_Name = TRANS("Sp2Dllmod");
const String PluginParameters::Sp2DelayLevelMod_Label;

const String PluginParameters::Sp2LfoMode_Id = "Sp2lfom";
const String PluginParameters::Sp2LfoMode_Name = TRANS("Sp2Lfom");
const String PluginParameters::Sp2LfoMode_Label;

const String PluginParameters::Sp2LfoRtr_Id = "Sp2LfoRtr";
const String PluginParameters::Sp2LfoRtr_Name = TRANS("Sp2LfoRtr");
const String PluginParameters::Sp2LfoRtr_Label;



const String PluginParameters::Sp2LfoTime_Id = "Sp2lfot";
const String PluginParameters::Sp2LfoTime_Name = TRANS("Sp2Lfot");
const String PluginParameters::Sp2LfoTime_Label;

const String PluginParameters::Sp2LfoAmp_Id = "Sp2lfoa";
const String PluginParameters::Sp2LfoAmp_Name = TRANS("Sp2Lfoa");
const String PluginParameters::Sp2LfoAmp_Label;


//-------------Sampler3Paras-----------------------------
const String PluginParameters::Sp3Synthwaveform_Id = "Sp3Synthwaveform";
const String PluginParameters::Sp3Synthwaveform_Name = TRANS("Sp3SynthWaveform");
const String PluginParameters::Sp3Synthwaveform_Label;

const String PluginParameters::Sp3SynthmidiNoteNumber_Id = "Sp3SynthmidiNoteNumber";
const String PluginParameters::Sp3SynthmidiNoteNumber_Name = TRANS("Sp3SynthMidi Note Number");
const String PluginParameters::Sp3SynthmidiNoteNumber_Label;

const String PluginParameters::Sp3SynthmidiNoteNumberMod_Id = "Sp3SynthmidiNoteNumberMod";
const String PluginParameters::Sp3SynthmidiNoteNumberMod_Name = TRANS("Sp3SynthMidi Note NumberMod");
const String PluginParameters::Sp3SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp3Synthlevel_Id = "Sp3Synthlevel";
const String PluginParameters::Sp3Synthlevel_Name = TRANS("Sp3SynthLevel");
const String PluginParameters::Sp3Synthlevel_Label = TRANS("Sp3Synth/10");

const String PluginParameters::Sp3SynthlevelMod_Id = "Sp3SynthlevelMod";
const String PluginParameters::Sp3SynthlevelMod_Name = TRANS("Sp3SynthLevelMod");
const String PluginParameters::Sp3SynthlevelMod_Label;

const String PluginParameters::Sp3SynthAttack_Id = "Sp3Synthattack";
const String PluginParameters::Sp3SynthAttack_Name = TRANS("Sp3Synthattack");
const String PluginParameters::Sp3SynthAttack_Label ;

const String PluginParameters::Sp3SynthRelease_Id = "Sp3Synthrelease";
const String PluginParameters::Sp3SynthRelease_Name = TRANS("Sp3Synthrelease");
const String PluginParameters::Sp3SynthRelease_Label ;

const String PluginParameters::Sp3SynthReleaseMod_Id = "Sp3SynthreleaseMod";
const String PluginParameters::Sp3SynthReleaseMod_Name = TRANS("Sp3SynthreleaseMod");
const String PluginParameters::Sp3SynthReleaseMod_Label ;

const String PluginParameters::Sp3StepperOnOff_Id = "Sp3StepperOnOff";
const String PluginParameters::Sp3StepperOnOff_Name = TRANS("Sp3StepperOnOff");
const String PluginParameters::Sp3StepperOnOff_Label;

const String PluginParameters::Sp3EngineMode_Id = "Sp3emode";
const String PluginParameters::Sp3EngineMode_Name = TRANS("Sp3Emode");
const String PluginParameters::Sp3EngineMode_Label;



const String PluginParameters::Sp3WaveNr_Id = "Sp3WaveNr";
const String PluginParameters::Sp3WaveNr_Name = TRANS("Sp3Wav");
const String PluginParameters::Sp3WaveNr_Label;

const String PluginParameters::Sp3PatternStateParas_Id = "sp3PatternStateParas";
const String PluginParameters::Sp3PatternStateParas_Name = TRANS("Sp3WavNrMod");
const String PluginParameters::Sp3PatternStateParas_Label;


const String PluginParameters::Sp3Gate_Id = "Sp3gate";
const String PluginParameters::Sp3Gate_Name = TRANS("Sp3Gate");
const String PluginParameters::Sp3Gate_Label;

const String PluginParameters::Sp3PlayMode_Id = "Sp3play";
const String PluginParameters::Sp3PlayMode_Name = TRANS("Sp3Play");
const String PluginParameters::Sp3PlayMode_Label;

const String PluginParameters::Sp3PlayTimeMode_Id = "Sp3playtime";
const String PluginParameters::Sp3PlayTimeMode_Name = TRANS("Sp3Playtime");
const String PluginParameters::Sp3PlayTimeMode_Label;

const String PluginParameters::Sp3Pitch_Id = "Sp3pitch";
const String PluginParameters::Sp3Pitch_Name = TRANS("Sp3Pitch");
const String PluginParameters::Sp3Pitch_Label;

const String PluginParameters::Sp3PitchMod_Id = "Sp3pitchM";
const String PluginParameters::Sp3PitchMod_Name = TRANS("Sp3PitchM");
const String PluginParameters::Sp3PitchMod_Label;

const String PluginParameters::Sp3StartSample_Id = "Sp3start";
const String PluginParameters::Sp3StartSample_Name = TRANS("Sp3Start");
const String PluginParameters::Sp3StartSample_Label;

const String PluginParameters::Sp3EndSample_Id = "Sp3end";
const String PluginParameters::Sp3EndSample_Name = TRANS("Sp3End");
const String PluginParameters::Sp3EndSample_Label;

const String PluginParameters::Sp3Volume_Id = "Sp3vol";
const String PluginParameters::Sp3Volume_Name = TRANS("Sp3Vol");
const String PluginParameters::Sp3Volume_Label;

const String PluginParameters::Sp3VolumeMod_Id = "Sp3volM";
const String PluginParameters::Sp3VolumeMod_Name = TRANS("Sp3VolM");
const String PluginParameters::Sp3VolumeMod_Label;

const String PluginParameters::Sp3Attack_Id = "Sp3attack";
const String PluginParameters::Sp3Attack_Name = TRANS("Sp3attack");
const String PluginParameters::Sp3Attack_Label;

const String PluginParameters::Sp3Release_Id = "Sp3release";
const String PluginParameters::Sp3Release_Name = TRANS("Sp3release");
const String PluginParameters::Sp3Release_Label;

const String PluginParameters::Sp3ReleaseMod_Id = "Sp3releasemod";
const String PluginParameters::Sp3ReleaseMod_Name = TRANS("Sp3releasemod");
const String PluginParameters::Sp3ReleaseMod_Label;

const String PluginParameters::Sp3EnvMode_Id = "sp3envmode";
const String PluginParameters::Sp3EnvMode_Name = TRANS("Sp3envmode");
const String PluginParameters::Sp3EnvMode_Label;

const String PluginParameters::Sp3EnvModeFix_Id = "sp3envfixmode";
const String PluginParameters::Sp3EnvModeFix_Name = TRANS("Sp3envfixmode");
const String PluginParameters::Sp3EnvModeFix_Label;

const String PluginParameters::Sp3EMod_Id = "Sp3eModeMod";
const String PluginParameters::Sp3EMod_Name = TRANS("Sp3eModeMod");
const String PluginParameters::Sp3EMod_Label;

const String PluginParameters::Sp3Cutoff_Id = "Sp3cut";
const String PluginParameters::Sp3Cutoff_Name = TRANS("Sp3Cut");
const String PluginParameters::Sp3Cutoff_Label;

const String PluginParameters::Sp3CutoffMod_Id = "Sp3cutm";
const String PluginParameters::Sp3CutoffMod_Name = TRANS("Sp3Cutm");
const String PluginParameters::Sp3CutoffMod_Label;


const String PluginParameters::Sp3Resonance_Id = "Sp3res";
const String PluginParameters::Sp3Resonance_Name = TRANS("Sp3Res");
const String PluginParameters::Sp3Resonance_Label;

const String PluginParameters::Sp3FilterMode_Id = "Sp3vcfm";
const String PluginParameters::Sp3FilterMode_Name = TRANS("Sp3Vcfm");
const String PluginParameters::Sp3FilterMode_Label;



const String PluginParameters::Sp3DelayMode_Id = "Sp3dlm";
const String PluginParameters::Sp3DelayMode_Name = TRANS("Sp3Dlm");
const String PluginParameters::Sp3DelayMode_Label;

const String PluginParameters::Sp3DelayTime_Id = "Sp3dlt";
const String PluginParameters::Sp3DelayTime_Name = TRANS("Sp3Dlt");
const String PluginParameters::Sp3DelayTime_Label;

const String PluginParameters::Sp3DelayFeed_Id = "Sp3dlf";
const String PluginParameters::Sp3DelayFeed_Name = TRANS("Sp3Dlf");
const String PluginParameters::Sp3DelayFeed_Label;

const String PluginParameters::Sp3DelayMix_Id = "Sp3dlmx";
const String PluginParameters::Sp3DelayMix_Name = TRANS("Sp3Dlmx");
const String PluginParameters::Sp3DelayMix_Label;

const String PluginParameters::Sp3DelayLevel_Id = "Sp3dl";
const String PluginParameters::Sp3DelayLevel_Name = TRANS("Sp3Dll");
const String PluginParameters::Sp3DelayLevel_Label;

const String PluginParameters::Sp3DelayTimeMod_Id = "Sp3dltm";
const String PluginParameters::Sp3DelayTimeMod_Name = TRANS("Sp3Dltm");
const String PluginParameters::Sp3DelayTimeMod_Label;

const String PluginParameters::Sp3DelayFeedMod_Id = "Sp3dlfm";
const String PluginParameters::Sp3DelayFeedMod_Name = TRANS("Sp3Dlfm");
const String PluginParameters::Sp3DelayFeedMod_Label;

const String PluginParameters::Sp3DelayMixMod_Id = "Sp3dlmxm";
const String PluginParameters::Sp3DelayMixMod_Name = TRANS("Sp3Dlmxm");
const String PluginParameters::Sp3DelayMixMod_Label;

const String PluginParameters::Sp3DelayLevelMod_Id = "Sp3dlmod";
const String PluginParameters::Sp3DelayLevelMod_Name = TRANS("Sp3Dllmod");
const String PluginParameters::Sp3DelayLevelMod_Label;

const String PluginParameters::Sp3LfoMode_Id = "Sp3lfom";
const String PluginParameters::Sp3LfoMode_Name = TRANS("Sp3Lfom");
const String PluginParameters::Sp3LfoMode_Label;

const String PluginParameters::Sp3LfoRtr_Id = "Sp3LfoRtr";
const String PluginParameters::Sp3LfoRtr_Name = TRANS("Sp3LfoRtr");
const String PluginParameters::Sp3LfoRtr_Label;


const String PluginParameters::Sp3LfoTime_Id = "Sp3lfot";
const String PluginParameters::Sp3LfoTime_Name = TRANS("Sp3Lfot");
const String PluginParameters::Sp3LfoTime_Label;

const String PluginParameters::Sp3LfoAmp_Id = "Sp3lfoa";
const String PluginParameters::Sp3LfoAmp_Name = TRANS("Sp3Lfoa");
const String PluginParameters::Sp3LfoAmp_Label;

//************************************************************
//-------------Sampler4Paras-----------------------------
//************************************************************
const String PluginParameters::Sp4Synthwaveform_Id = "Sp4Synthwaveform";
const String PluginParameters::Sp4Synthwaveform_Name = TRANS("Sp4SynthWaveform");
const String PluginParameters::Sp4Synthwaveform_Label;

const String PluginParameters::Sp4SynthmidiNoteNumber_Id = "Sp4SynthmidiNoteNumber";
const String PluginParameters::Sp4SynthmidiNoteNumber_Name = TRANS("Sp4SynthMidi Note Number");
const String PluginParameters::Sp4SynthmidiNoteNumber_Label;

const String PluginParameters::Sp4SynthmidiNoteNumberMod_Id = "Sp4SynthmidiNoteNumberMod";
const String PluginParameters::Sp4SynthmidiNoteNumberMod_Name = TRANS("Sp4SynthMidi Note NumberMod");
const String PluginParameters::Sp4SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp4Synthlevel_Id = "Sp4Synthlevel";
const String PluginParameters::Sp4Synthlevel_Name = TRANS("Sp4SynthLevel");
const String PluginParameters::Sp4Synthlevel_Label = TRANS("Sp4Synth/10");

const String PluginParameters::Sp4SynthlevelMod_Id = "Sp4SynthlevelMod";
const String PluginParameters::Sp4SynthlevelMod_Name = TRANS("Sp4SynthLevelMod");
const String PluginParameters::Sp4SynthlevelMod_Label;

const String PluginParameters::Sp4SynthAttack_Id = "Sp4Synthattack";
const String PluginParameters::Sp4SynthAttack_Name = TRANS("Sp4Synthattack");
const String PluginParameters::Sp4SynthAttack_Label ;

const String PluginParameters::Sp4SynthRelease_Id = "Sp4Synthrelease";
const String PluginParameters::Sp4SynthRelease_Name = TRANS("Sp4Synthrelease");
const String PluginParameters::Sp4SynthRelease_Label ;

const String PluginParameters::Sp4SynthReleaseMod_Id = "Sp4SynthreleaseMod";
const String PluginParameters::Sp4SynthReleaseMod_Name = TRANS("Sp4SynthreleaseMod");
const String PluginParameters::Sp4SynthReleaseMod_Label ;

const String PluginParameters::Sp4StepperOnOff_Id = "Sp4StepperOnOff";
const String PluginParameters::Sp4StepperOnOff_Name = TRANS("Sp4StepperOnOff");
const String PluginParameters::Sp4StepperOnOff_Label;

const String PluginParameters::Sp4EngineMode_Id = "Sp4emode";
const String PluginParameters::Sp4EngineMode_Name = TRANS("Sp4Emode");
const String PluginParameters::Sp4EngineMode_Label;



const String PluginParameters::Sp4WaveNr_Id = "Sp4WaveNr";
const String PluginParameters::Sp4WaveNr_Name = TRANS("Sp4Wav");
const String PluginParameters::Sp4WaveNr_Label;

const String PluginParameters::Sp4PatternStateParas_Id = "sp4PatternStateParas";
const String PluginParameters::Sp4PatternStateParas_Name = TRANS("Sp4WavNrMod");
const String PluginParameters::Sp4PatternStateParas_Label;


const String PluginParameters::Sp4Gate_Id = "Sp4gate";
const String PluginParameters::Sp4Gate_Name = TRANS("Sp4Gate");
const String PluginParameters::Sp4Gate_Label;

const String PluginParameters::Sp4PlayMode_Id = "Sp4play";
const String PluginParameters::Sp4PlayMode_Name = TRANS("Sp4Play");
const String PluginParameters::Sp4PlayMode_Label;

const String PluginParameters::Sp4PlayTimeMode_Id = "Sp4playtime";
const String PluginParameters::Sp4PlayTimeMode_Name = TRANS("Sp4Playtime");
const String PluginParameters::Sp4PlayTimeMode_Label;

const String PluginParameters::Sp4Pitch_Id = "Sp4pitch";
const String PluginParameters::Sp4Pitch_Name = TRANS("Sp4Pitch");
const String PluginParameters::Sp4Pitch_Label;

const String PluginParameters::Sp4PitchMod_Id = "Sp4pitchM";
const String PluginParameters::Sp4PitchMod_Name = TRANS("Sp4PitchM");
const String PluginParameters::Sp4PitchMod_Label;

const String PluginParameters::Sp4StartSample_Id = "Sp4start";
const String PluginParameters::Sp4StartSample_Name = TRANS("Sp4Start");
const String PluginParameters::Sp4StartSample_Label;

const String PluginParameters::Sp4EndSample_Id = "Sp4end";
const String PluginParameters::Sp4EndSample_Name = TRANS("Sp4End");
const String PluginParameters::Sp4EndSample_Label;

const String PluginParameters::Sp4Volume_Id = "Sp4vol";
const String PluginParameters::Sp4Volume_Name = TRANS("Sp4Vol");
const String PluginParameters::Sp4Volume_Label;

const String PluginParameters::Sp4VolumeMod_Id = "Sp4volM";
const String PluginParameters::Sp4VolumeMod_Name = TRANS("Sp4VolM");
const String PluginParameters::Sp4VolumeMod_Label;

const String PluginParameters::Sp4Attack_Id = "Sp4attack";
const String PluginParameters::Sp4Attack_Name = TRANS("Sp4attack");
const String PluginParameters::Sp4Attack_Label;

const String PluginParameters::Sp4Release_Id = "Sp4release";
const String PluginParameters::Sp4Release_Name = TRANS("Sp4release");
const String PluginParameters::Sp4Release_Label;

const String PluginParameters::Sp4ReleaseMod_Id = "Sp4releasemod";
const String PluginParameters::Sp4ReleaseMod_Name = TRANS("Sp4releasemod");
const String PluginParameters::Sp4ReleaseMod_Label;

const String PluginParameters::Sp4EnvMode_Id = "sp4envmode";
const String PluginParameters::Sp4EnvMode_Name = TRANS("Sp4envmode");
const String PluginParameters::Sp4EnvMode_Label;

const String PluginParameters::Sp4EnvModeFix_Id = "sp4envfixmode";
const String PluginParameters::Sp4EnvModeFix_Name = TRANS("Sp4envfixmode");
const String PluginParameters::Sp4EnvModeFix_Label;

const String PluginParameters::Sp4EMod_Id = "Sp4eModeMod";
const String PluginParameters::Sp4EMod_Name = TRANS("Sp4eModeMod");
const String PluginParameters::Sp4EMod_Label;

const String PluginParameters::Sp4Cutoff_Id = "Sp4cut";
const String PluginParameters::Sp4Cutoff_Name = TRANS("Sp4Cut");
const String PluginParameters::Sp4Cutoff_Label;

const String PluginParameters::Sp4CutoffMod_Id = "Sp4cutm";
const String PluginParameters::Sp4CutoffMod_Name = TRANS("Sp4Cutm");
const String PluginParameters::Sp4CutoffMod_Label;


const String PluginParameters::Sp4Resonance_Id = "Sp4res";
const String PluginParameters::Sp4Resonance_Name = TRANS("Sp4Res");
const String PluginParameters::Sp4Resonance_Label;

const String PluginParameters::Sp4FilterMode_Id = "Sp4vcfm";
const String PluginParameters::Sp4FilterMode_Name = TRANS("Sp4Vcfm");
const String PluginParameters::Sp4FilterMode_Label;



const String PluginParameters::Sp4DelayMode_Id = "Sp4dlm";
const String PluginParameters::Sp4DelayMode_Name = TRANS("Sp4Dlm");
const String PluginParameters::Sp4DelayMode_Label;

const String PluginParameters::Sp4DelayTime_Id = "Sp4dlt";
const String PluginParameters::Sp4DelayTime_Name = TRANS("Sp4Dlt");
const String PluginParameters::Sp4DelayTime_Label;

const String PluginParameters::Sp4DelayFeed_Id = "Sp4dlf";
const String PluginParameters::Sp4DelayFeed_Name = TRANS("Sp4Dlf");
const String PluginParameters::Sp4DelayFeed_Label;

const String PluginParameters::Sp4DelayMix_Id = "Sp4dlmx";
const String PluginParameters::Sp4DelayMix_Name = TRANS("Sp4Dlmx");
const String PluginParameters::Sp4DelayMix_Label;

const String PluginParameters::Sp4DelayLevel_Id = "Sp4dl";
const String PluginParameters::Sp4DelayLevel_Name = TRANS("Sp4Dll");
const String PluginParameters::Sp4DelayLevel_Label;

const String PluginParameters::Sp4DelayTimeMod_Id = "Sp4dltm";
const String PluginParameters::Sp4DelayTimeMod_Name = TRANS("Sp4Dltm");
const String PluginParameters::Sp4DelayTimeMod_Label;

const String PluginParameters::Sp4DelayFeedMod_Id = "Sp4dlfm";
const String PluginParameters::Sp4DelayFeedMod_Name = TRANS("Sp4Dlfm");
const String PluginParameters::Sp4DelayFeedMod_Label;

const String PluginParameters::Sp4DelayMixMod_Id = "Sp4dlmxm";
const String PluginParameters::Sp4DelayMixMod_Name = TRANS("Sp4Dlmxm");
const String PluginParameters::Sp4DelayMixMod_Label;

const String PluginParameters::Sp4DelayLevelMod_Id = "Sp4dlmod";
const String PluginParameters::Sp4DelayLevelMod_Name = TRANS("Sp4Dllmod");
const String PluginParameters::Sp4DelayLevelMod_Label;

const String PluginParameters::Sp4LfoMode_Id = "Sp4lfom";
const String PluginParameters::Sp4LfoMode_Name = TRANS("Sp4Lfom");
const String PluginParameters::Sp4LfoMode_Label;

const String PluginParameters::Sp4LfoRtr_Id = "Sp4LfoRtr";
const String PluginParameters::Sp4LfoRtr_Name = TRANS("Sp4LfoRtr");
const String PluginParameters::Sp4LfoRtr_Label;



const String PluginParameters::Sp4LfoTime_Id = "Sp4lfot";
const String PluginParameters::Sp4LfoTime_Name = TRANS("Sp4Lfot");
const String PluginParameters::Sp4LfoTime_Label;

const String PluginParameters::Sp4LfoAmp_Id = "Sp4lfoa";
const String PluginParameters::Sp4LfoAmp_Name = TRANS("Sp4Lfoa");
const String PluginParameters::Sp4LfoAmp_Label;

//************************************************************
//-------------Sampler5Paras-----------------------------
//************************************************************
const String PluginParameters::Sp5Synthwaveform_Id = "Sp5Synthwaveform";
const String PluginParameters::Sp5Synthwaveform_Name = TRANS("Sp5SynthWaveform");
const String PluginParameters::Sp5Synthwaveform_Label;

const String PluginParameters::Sp5SynthmidiNoteNumber_Id = "Sp5SynthmidiNoteNumber";
const String PluginParameters::Sp5SynthmidiNoteNumber_Name = TRANS("Sp5SynthMidi Note Number");
const String PluginParameters::Sp5SynthmidiNoteNumber_Label;

const String PluginParameters::Sp5SynthmidiNoteNumberMod_Id = "Sp5SynthmidiNoteNumberMod";
const String PluginParameters::Sp5SynthmidiNoteNumberMod_Name = TRANS("Sp5SynthMidi Note NumberMod");
const String PluginParameters::Sp5SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp5Synthlevel_Id = "Sp5Synthlevel";
const String PluginParameters::Sp5Synthlevel_Name = TRANS("Sp5SynthLevel");
const String PluginParameters::Sp5Synthlevel_Label = TRANS("Sp5Synth/10");

const String PluginParameters::Sp5SynthlevelMod_Id = "Sp5SynthlevelMod";
const String PluginParameters::Sp5SynthlevelMod_Name = TRANS("Sp5SynthLevelMod");
const String PluginParameters::Sp5SynthlevelMod_Label;

const String PluginParameters::Sp5SynthAttack_Id = "Sp5Synthattack";
const String PluginParameters::Sp5SynthAttack_Name = TRANS("Sp5Synthattack");
const String PluginParameters::Sp5SynthAttack_Label;

const String PluginParameters::Sp5SynthRelease_Id = "Sp5Synthrelease";
const String PluginParameters::Sp5SynthRelease_Name = TRANS("Sp5Synthrelease");
const String PluginParameters::Sp5SynthRelease_Label;

const String PluginParameters::Sp5SynthReleaseMod_Id = "Sp5SynthreleaseMod";
const String PluginParameters::Sp5SynthReleaseMod_Name = TRANS("Sp5SynthreleaseMod");
const String PluginParameters::Sp5SynthReleaseMod_Label;

const String PluginParameters::Sp5StepperOnOff_Id = "Sp5StepperOnOff";
const String PluginParameters::Sp5StepperOnOff_Name = TRANS("Sp5StepperOnOff");
const String PluginParameters::Sp5StepperOnOff_Label;

const String PluginParameters::Sp5EngineMode_Id = "Sp5emode";
const String PluginParameters::Sp5EngineMode_Name = TRANS("Sp5Emode");
const String PluginParameters::Sp5EngineMode_Label;



const String PluginParameters::Sp5WaveNr_Id = "Sp5WaveNr";
const String PluginParameters::Sp5WaveNr_Name = TRANS("Sp5Wav");
const String PluginParameters::Sp5WaveNr_Label;

const String PluginParameters::Sp5PatternStateParas_Id = "Sp5PatternStateParas";
const String PluginParameters::Sp5PatternStateParas_Name = TRANS("Sp5WavNrMod");
const String PluginParameters::Sp5PatternStateParas_Label;


const String PluginParameters::Sp5Gate_Id = "Sp5gate";
const String PluginParameters::Sp5Gate_Name = TRANS("Sp5Gate");
const String PluginParameters::Sp5Gate_Label;

const String PluginParameters::Sp5PlayMode_Id = "Sp5play";
const String PluginParameters::Sp5PlayMode_Name = TRANS("Sp5Play");
const String PluginParameters::Sp5PlayMode_Label;

const String PluginParameters::Sp5PlayTimeMode_Id = "Sp5playtime";
const String PluginParameters::Sp5PlayTimeMode_Name = TRANS("Sp5Playtime");
const String PluginParameters::Sp5PlayTimeMode_Label;

const String PluginParameters::Sp5Pitch_Id = "Sp5pitch";
const String PluginParameters::Sp5Pitch_Name = TRANS("Sp5Pitch");
const String PluginParameters::Sp5Pitch_Label;

const String PluginParameters::Sp5PitchMod_Id = "Sp5pitchM";
const String PluginParameters::Sp5PitchMod_Name = TRANS("Sp5PitchM");
const String PluginParameters::Sp5PitchMod_Label;

const String PluginParameters::Sp5StartSample_Id = "Sp5start";
const String PluginParameters::Sp5StartSample_Name = TRANS("Sp5Start");
const String PluginParameters::Sp5StartSample_Label;

const String PluginParameters::Sp5EndSample_Id = "Sp5end";
const String PluginParameters::Sp5EndSample_Name = TRANS("Sp5End");
const String PluginParameters::Sp5EndSample_Label;

const String PluginParameters::Sp5Volume_Id = "Sp5vol";
const String PluginParameters::Sp5Volume_Name = TRANS("Sp5Vol");
const String PluginParameters::Sp5Volume_Label;

const String PluginParameters::Sp5VolumeMod_Id = "Sp5volM";
const String PluginParameters::Sp5VolumeMod_Name = TRANS("Sp5VolM");
const String PluginParameters::Sp5VolumeMod_Label;

const String PluginParameters::Sp5Attack_Id = "Sp5attack";
const String PluginParameters::Sp5Attack_Name = TRANS("Sp5attack");
const String PluginParameters::Sp5Attack_Label;

const String PluginParameters::Sp5Release_Id = "Sp5release";
const String PluginParameters::Sp5Release_Name = TRANS("Sp5release");
const String PluginParameters::Sp5Release_Label;

const String PluginParameters::Sp5ReleaseMod_Id = "Sp5releasemod";
const String PluginParameters::Sp5ReleaseMod_Name = TRANS("Sp5releasemod");
const String PluginParameters::Sp5ReleaseMod_Label;

const String PluginParameters::Sp5EnvMode_Id = "Sp5envmode";
const String PluginParameters::Sp5EnvMode_Name = TRANS("Sp5envmode");
const String PluginParameters::Sp5EnvMode_Label;

const String PluginParameters::Sp5EnvModeFix_Id = "Sp5envfixmode";
const String PluginParameters::Sp5EnvModeFix_Name = TRANS("Sp5envfixmode");
const String PluginParameters::Sp5EnvModeFix_Label;

const String PluginParameters::Sp5EMod_Id = "Sp5eModeMod";
const String PluginParameters::Sp5EMod_Name = TRANS("Sp5eModeMod");
const String PluginParameters::Sp5EMod_Label;

const String PluginParameters::Sp5Cutoff_Id = "Sp5cut";
const String PluginParameters::Sp5Cutoff_Name = TRANS("Sp5Cut");
const String PluginParameters::Sp5Cutoff_Label;

const String PluginParameters::Sp5CutoffMod_Id = "Sp5cutm";
const String PluginParameters::Sp5CutoffMod_Name = TRANS("Sp5Cutm");
const String PluginParameters::Sp5CutoffMod_Label;


const String PluginParameters::Sp5Resonance_Id = "Sp5res";
const String PluginParameters::Sp5Resonance_Name = TRANS("Sp5Res");
const String PluginParameters::Sp5Resonance_Label;

const String PluginParameters::Sp5FilterMode_Id = "Sp5vcfm";
const String PluginParameters::Sp5FilterMode_Name = TRANS("Sp5Vcfm");
const String PluginParameters::Sp5FilterMode_Label;



const String PluginParameters::Sp5DelayMode_Id = "Sp5dlm";
const String PluginParameters::Sp5DelayMode_Name = TRANS("Sp5Dlm");
const String PluginParameters::Sp5DelayMode_Label;

const String PluginParameters::Sp5DelayTime_Id = "Sp5dlt";
const String PluginParameters::Sp5DelayTime_Name = TRANS("Sp5Dlt");
const String PluginParameters::Sp5DelayTime_Label;

const String PluginParameters::Sp5DelayFeed_Id = "Sp5dlf";
const String PluginParameters::Sp5DelayFeed_Name = TRANS("Sp5Dlf");
const String PluginParameters::Sp5DelayFeed_Label;

const String PluginParameters::Sp5DelayMix_Id = "Sp5dlmx";
const String PluginParameters::Sp5DelayMix_Name = TRANS("Sp5Dlmx");
const String PluginParameters::Sp5DelayMix_Label;

const String PluginParameters::Sp5DelayLevel_Id = "Sp5dl";
const String PluginParameters::Sp5DelayLevel_Name = TRANS("Sp5Dll");
const String PluginParameters::Sp5DelayLevel_Label;

const String PluginParameters::Sp5DelayTimeMod_Id = "Sp5dltm";
const String PluginParameters::Sp5DelayTimeMod_Name = TRANS("Sp5Dltm");
const String PluginParameters::Sp5DelayTimeMod_Label;

const String PluginParameters::Sp5DelayFeedMod_Id = "Sp5dlfm";
const String PluginParameters::Sp5DelayFeedMod_Name = TRANS("Sp5Dlfm");
const String PluginParameters::Sp5DelayFeedMod_Label;

const String PluginParameters::Sp5DelayMixMod_Id = "Sp5dlmxm";
const String PluginParameters::Sp5DelayMixMod_Name = TRANS("Sp5Dlmxm");
const String PluginParameters::Sp5DelayMixMod_Label;

const String PluginParameters::Sp5DelayLevelMod_Id = "Sp5dlmod";
const String PluginParameters::Sp5DelayLevelMod_Name = TRANS("Sp5Dllmod");
const String PluginParameters::Sp5DelayLevelMod_Label;

const String PluginParameters::Sp5LfoMode_Id = "Sp5lfom";
const String PluginParameters::Sp5LfoMode_Name = TRANS("Sp5Lfom");
const String PluginParameters::Sp5LfoMode_Label;

const String PluginParameters::Sp5LfoRtr_Id = "Sp5LfoRtr";
const String PluginParameters::Sp5LfoRtr_Name = TRANS("Sp5LfoRtr");
const String PluginParameters::Sp5LfoRtr_Label;



const String PluginParameters::Sp5LfoTime_Id = "Sp5lfot";
const String PluginParameters::Sp5LfoTime_Name = TRANS("Sp5Lfot");
const String PluginParameters::Sp5LfoTime_Label;

const String PluginParameters::Sp5LfoAmp_Id = "Sp5lfoa";
const String PluginParameters::Sp5LfoAmp_Name = TRANS("Sp5Lfoa");
const String PluginParameters::Sp5LfoAmp_Label;
//************************************************************
//-------------Sampler6Paras-----------------------------
//************************************************************
const String PluginParameters::Sp6Synthwaveform_Id = "Sp6Synthwaveform";
const String PluginParameters::Sp6Synthwaveform_Name = TRANS("Sp6SynthWaveform");
const String PluginParameters::Sp6Synthwaveform_Label;

const String PluginParameters::Sp6SynthmidiNoteNumber_Id = "Sp6SynthmidiNoteNumber";
const String PluginParameters::Sp6SynthmidiNoteNumber_Name = TRANS("Sp6SynthMidi Note Number");
const String PluginParameters::Sp6SynthmidiNoteNumber_Label;

const String PluginParameters::Sp6SynthmidiNoteNumberMod_Id = "Sp6SynthmidiNoteNumberMod";
const String PluginParameters::Sp6SynthmidiNoteNumberMod_Name = TRANS("Sp6SynthMidi Note NumberMod");
const String PluginParameters::Sp6SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp6Synthlevel_Id = "Sp6Synthlevel";
const String PluginParameters::Sp6Synthlevel_Name = TRANS("Sp6SynthLevel");
const String PluginParameters::Sp6Synthlevel_Label = TRANS("Sp6Synth/10");

const String PluginParameters::Sp6SynthlevelMod_Id = "Sp6SynthlevelMod";
const String PluginParameters::Sp6SynthlevelMod_Name = TRANS("Sp6SynthLevelMod");
const String PluginParameters::Sp6SynthlevelMod_Label;

const String PluginParameters::Sp6SynthAttack_Id = "Sp6Synthattack";
const String PluginParameters::Sp6SynthAttack_Name = TRANS("Sp6Synthattack");
const String PluginParameters::Sp6SynthAttack_Label;

const String PluginParameters::Sp6SynthRelease_Id = "Sp6Synthrelease";
const String PluginParameters::Sp6SynthRelease_Name = TRANS("Sp6Synthrelease");
const String PluginParameters::Sp6SynthRelease_Label;

const String PluginParameters::Sp6SynthReleaseMod_Id = "Sp6SynthreleaseMod";
const String PluginParameters::Sp6SynthReleaseMod_Name = TRANS("Sp6SynthreleaseMod");
const String PluginParameters::Sp6SynthReleaseMod_Label;

const String PluginParameters::Sp6StepperOnOff_Id = "Sp6StepperOnOff";
const String PluginParameters::Sp6StepperOnOff_Name = TRANS("Sp6StepperOnOff");
const String PluginParameters::Sp6StepperOnOff_Label;

const String PluginParameters::Sp6EngineMode_Id = "Sp6emode";
const String PluginParameters::Sp6EngineMode_Name = TRANS("Sp6Emode");
const String PluginParameters::Sp6EngineMode_Label;



const String PluginParameters::Sp6WaveNr_Id = "Sp6WaveNr";
const String PluginParameters::Sp6WaveNr_Name = TRANS("Sp6Wav");
const String PluginParameters::Sp6WaveNr_Label;

const String PluginParameters::Sp6PatternStateParas_Id = "Sp6PatternStateParas";
const String PluginParameters::Sp6PatternStateParas_Name = TRANS("Sp6WavNrMod");
const String PluginParameters::Sp6PatternStateParas_Label;


const String PluginParameters::Sp6Gate_Id = "Sp6gate";
const String PluginParameters::Sp6Gate_Name = TRANS("Sp6Gate");
const String PluginParameters::Sp6Gate_Label;

const String PluginParameters::Sp6PlayMode_Id = "Sp6play";
const String PluginParameters::Sp6PlayMode_Name = TRANS("Sp6Play");
const String PluginParameters::Sp6PlayMode_Label;

const String PluginParameters::Sp6PlayTimeMode_Id = "Sp6playtime";
const String PluginParameters::Sp6PlayTimeMode_Name = TRANS("Sp6Playtime");
const String PluginParameters::Sp6PlayTimeMode_Label;

const String PluginParameters::Sp6Pitch_Id = "Sp6pitch";
const String PluginParameters::Sp6Pitch_Name = TRANS("Sp6Pitch");
const String PluginParameters::Sp6Pitch_Label;

const String PluginParameters::Sp6PitchMod_Id = "Sp6pitchM";
const String PluginParameters::Sp6PitchMod_Name = TRANS("Sp6PitchM");
const String PluginParameters::Sp6PitchMod_Label;

const String PluginParameters::Sp6StartSample_Id = "Sp6start";
const String PluginParameters::Sp6StartSample_Name = TRANS("Sp6Start");
const String PluginParameters::Sp6StartSample_Label;

const String PluginParameters::Sp6EndSample_Id = "Sp6end";
const String PluginParameters::Sp6EndSample_Name = TRANS("Sp6End");
const String PluginParameters::Sp6EndSample_Label;

const String PluginParameters::Sp6Volume_Id = "Sp6vol";
const String PluginParameters::Sp6Volume_Name = TRANS("Sp6Vol");
const String PluginParameters::Sp6Volume_Label;

const String PluginParameters::Sp6VolumeMod_Id = "Sp6volM";
const String PluginParameters::Sp6VolumeMod_Name = TRANS("Sp6VolM");
const String PluginParameters::Sp6VolumeMod_Label;

const String PluginParameters::Sp6Attack_Id = "Sp6attack";
const String PluginParameters::Sp6Attack_Name = TRANS("Sp6attack");
const String PluginParameters::Sp6Attack_Label;

const String PluginParameters::Sp6Release_Id = "Sp6release";
const String PluginParameters::Sp6Release_Name = TRANS("Sp6release");
const String PluginParameters::Sp6Release_Label;

const String PluginParameters::Sp6ReleaseMod_Id = "Sp6releasemod";
const String PluginParameters::Sp6ReleaseMod_Name = TRANS("Sp6releasemod");
const String PluginParameters::Sp6ReleaseMod_Label;

const String PluginParameters::Sp6EnvMode_Id = "Sp6envmode";
const String PluginParameters::Sp6EnvMode_Name = TRANS("Sp6envmode");
const String PluginParameters::Sp6EnvMode_Label;

const String PluginParameters::Sp6EnvModeFix_Id = "Sp6envfixmode";
const String PluginParameters::Sp6EnvModeFix_Name = TRANS("Sp6envfixmode");
const String PluginParameters::Sp6EnvModeFix_Label;

const String PluginParameters::Sp6EMod_Id = "Sp6eModeMod";
const String PluginParameters::Sp6EMod_Name = TRANS("Sp6eModeMod");
const String PluginParameters::Sp6EMod_Label;

const String PluginParameters::Sp6Cutoff_Id = "Sp6cut";
const String PluginParameters::Sp6Cutoff_Name = TRANS("Sp6Cut");
const String PluginParameters::Sp6Cutoff_Label;

const String PluginParameters::Sp6CutoffMod_Id = "Sp6cutm";
const String PluginParameters::Sp6CutoffMod_Name = TRANS("Sp6Cutm");
const String PluginParameters::Sp6CutoffMod_Label;


const String PluginParameters::Sp6Resonance_Id = "Sp6res";
const String PluginParameters::Sp6Resonance_Name = TRANS("Sp6Res");
const String PluginParameters::Sp6Resonance_Label;

const String PluginParameters::Sp6FilterMode_Id = "Sp6vcfm";
const String PluginParameters::Sp6FilterMode_Name = TRANS("Sp6Vcfm");
const String PluginParameters::Sp6FilterMode_Label;



const String PluginParameters::Sp6DelayMode_Id = "Sp6dlm";
const String PluginParameters::Sp6DelayMode_Name = TRANS("Sp6Dlm");
const String PluginParameters::Sp6DelayMode_Label;

const String PluginParameters::Sp6DelayTime_Id = "Sp6dlt";
const String PluginParameters::Sp6DelayTime_Name = TRANS("Sp6Dlt");
const String PluginParameters::Sp6DelayTime_Label;

const String PluginParameters::Sp6DelayFeed_Id = "Sp6dlf";
const String PluginParameters::Sp6DelayFeed_Name = TRANS("Sp6Dlf");
const String PluginParameters::Sp6DelayFeed_Label;

const String PluginParameters::Sp6DelayMix_Id = "Sp6dlmx";
const String PluginParameters::Sp6DelayMix_Name = TRANS("Sp6Dlmx");
const String PluginParameters::Sp6DelayMix_Label;

const String PluginParameters::Sp6DelayLevel_Id = "Sp6dl";
const String PluginParameters::Sp6DelayLevel_Name = TRANS("Sp6Dll");
const String PluginParameters::Sp6DelayLevel_Label;

const String PluginParameters::Sp6DelayTimeMod_Id = "Sp6dltm";
const String PluginParameters::Sp6DelayTimeMod_Name = TRANS("Sp6Dltm");
const String PluginParameters::Sp6DelayTimeMod_Label;

const String PluginParameters::Sp6DelayFeedMod_Id = "Sp6dlfm";
const String PluginParameters::Sp6DelayFeedMod_Name = TRANS("Sp6Dlfm");
const String PluginParameters::Sp6DelayFeedMod_Label;

const String PluginParameters::Sp6DelayMixMod_Id = "Sp6dlmxm";
const String PluginParameters::Sp6DelayMixMod_Name = TRANS("Sp6Dlmxm");
const String PluginParameters::Sp6DelayMixMod_Label;

const String PluginParameters::Sp6DelayLevelMod_Id = "Sp6dlmod";
const String PluginParameters::Sp6DelayLevelMod_Name = TRANS("Sp6Dllmod");
const String PluginParameters::Sp6DelayLevelMod_Label;

const String PluginParameters::Sp6LfoMode_Id = "Sp6lfom";
const String PluginParameters::Sp6LfoMode_Name = TRANS("Sp6Lfom");
const String PluginParameters::Sp6LfoMode_Label;

const String PluginParameters::Sp6LfoRtr_Id = "Sp6LfoRtr";
const String PluginParameters::Sp6LfoRtr_Name = TRANS("Sp6LfoRtr");
const String PluginParameters::Sp6LfoRtr_Label;



const String PluginParameters::Sp6LfoTime_Id = "Sp6lfot";
const String PluginParameters::Sp6LfoTime_Name = TRANS("Sp6Lfot");
const String PluginParameters::Sp6LfoTime_Label;

const String PluginParameters::Sp6LfoAmp_Id = "Sp6lfoa";
const String PluginParameters::Sp6LfoAmp_Name = TRANS("Sp6Lfoa");
const String PluginParameters::Sp6LfoAmp_Label;
//************************************************************
//-------------Sampler7Paras-----------------------------
//************************************************************
const String PluginParameters::Sp7Synthwaveform_Id = "Sp7Synthwaveform";
const String PluginParameters::Sp7Synthwaveform_Name = TRANS("Sp7SynthWaveform");
const String PluginParameters::Sp7Synthwaveform_Label;

const String PluginParameters::Sp7SynthmidiNoteNumber_Id = "Sp7SynthmidiNoteNumber";
const String PluginParameters::Sp7SynthmidiNoteNumber_Name = TRANS("Sp7SynthMidi Note Number");
const String PluginParameters::Sp7SynthmidiNoteNumber_Label;

const String PluginParameters::Sp7SynthmidiNoteNumberMod_Id = "Sp7SynthmidiNoteNumberMod";
const String PluginParameters::Sp7SynthmidiNoteNumberMod_Name = TRANS("Sp7SynthMidi Note NumberMod");
const String PluginParameters::Sp7SynthmidiNoteNumberMod_Label;

const String PluginParameters::Sp7Synthlevel_Id = "Sp7Synthlevel";
const String PluginParameters::Sp7Synthlevel_Name = TRANS("Sp7SynthLevel");
const String PluginParameters::Sp7Synthlevel_Label = TRANS("Sp7Synth/10");

const String PluginParameters::Sp7SynthlevelMod_Id = "Sp7SynthlevelMod";
const String PluginParameters::Sp7SynthlevelMod_Name = TRANS("Sp7SynthLevelMod");
const String PluginParameters::Sp7SynthlevelMod_Label;

const String PluginParameters::Sp7SynthAttack_Id = "Sp7Synthattack";
const String PluginParameters::Sp7SynthAttack_Name = TRANS("Sp7Synthattack");
const String PluginParameters::Sp7SynthAttack_Label;

const String PluginParameters::Sp7SynthRelease_Id = "Sp7Synthrelease";
const String PluginParameters::Sp7SynthRelease_Name = TRANS("Sp7Synthrelease");
const String PluginParameters::Sp7SynthRelease_Label;

const String PluginParameters::Sp7SynthReleaseMod_Id = "Sp7SynthreleaseMod";
const String PluginParameters::Sp7SynthReleaseMod_Name = TRANS("Sp7SynthreleaseMod");
const String PluginParameters::Sp7SynthReleaseMod_Label;

const String PluginParameters::Sp7StepperOnOff_Id = "Sp7StepperOnOff";
const String PluginParameters::Sp7StepperOnOff_Name = TRANS("Sp7StepperOnOff");
const String PluginParameters::Sp7StepperOnOff_Label;

const String PluginParameters::Sp7EngineMode_Id = "Sp7emode";
const String PluginParameters::Sp7EngineMode_Name = TRANS("Sp7Emode");
const String PluginParameters::Sp7EngineMode_Label;



const String PluginParameters::Sp7WaveNr_Id = "Sp7WaveNr";
const String PluginParameters::Sp7WaveNr_Name = TRANS("Sp7Wav");
const String PluginParameters::Sp7WaveNr_Label;

const String PluginParameters::Sp7PatternStateParas_Id = "Sp7PatternStateParas";
const String PluginParameters::Sp7PatternStateParas_Name = TRANS("Sp7WavNrMod");
const String PluginParameters::Sp7PatternStateParas_Label;


const String PluginParameters::Sp7Gate_Id = "Sp7gate";
const String PluginParameters::Sp7Gate_Name = TRANS("Sp7Gate");
const String PluginParameters::Sp7Gate_Label;

const String PluginParameters::Sp7PlayMode_Id = "Sp7play";
const String PluginParameters::Sp7PlayMode_Name = TRANS("Sp7Play");
const String PluginParameters::Sp7PlayMode_Label;

const String PluginParameters::Sp7PlayTimeMode_Id = "Sp7playtime";
const String PluginParameters::Sp7PlayTimeMode_Name = TRANS("Sp7Playtime");
const String PluginParameters::Sp7PlayTimeMode_Label;

const String PluginParameters::Sp7Pitch_Id = "Sp7pitch";
const String PluginParameters::Sp7Pitch_Name = TRANS("Sp7Pitch");
const String PluginParameters::Sp7Pitch_Label;

const String PluginParameters::Sp7PitchMod_Id = "Sp7pitchM";
const String PluginParameters::Sp7PitchMod_Name = TRANS("Sp7PitchM");
const String PluginParameters::Sp7PitchMod_Label;

const String PluginParameters::Sp7StartSample_Id = "Sp7start";
const String PluginParameters::Sp7StartSample_Name = TRANS("Sp7Start");
const String PluginParameters::Sp7StartSample_Label;

const String PluginParameters::Sp7EndSample_Id = "Sp7end";
const String PluginParameters::Sp7EndSample_Name = TRANS("Sp7End");
const String PluginParameters::Sp7EndSample_Label;

const String PluginParameters::Sp7Volume_Id = "Sp7vol";
const String PluginParameters::Sp7Volume_Name = TRANS("Sp7Vol");
const String PluginParameters::Sp7Volume_Label;

const String PluginParameters::Sp7VolumeMod_Id = "Sp7volM";
const String PluginParameters::Sp7VolumeMod_Name = TRANS("Sp7VolM");
const String PluginParameters::Sp7VolumeMod_Label;

const String PluginParameters::Sp7Attack_Id = "Sp7attack";
const String PluginParameters::Sp7Attack_Name = TRANS("Sp7attack");
const String PluginParameters::Sp7Attack_Label;

const String PluginParameters::Sp7Release_Id = "Sp7release";
const String PluginParameters::Sp7Release_Name = TRANS("Sp7release");
const String PluginParameters::Sp7Release_Label;

const String PluginParameters::Sp7ReleaseMod_Id = "Sp7releasemod";
const String PluginParameters::Sp7ReleaseMod_Name = TRANS("Sp7releasemod");
const String PluginParameters::Sp7ReleaseMod_Label;

const String PluginParameters::Sp7EnvMode_Id = "Sp7envmode";
const String PluginParameters::Sp7EnvMode_Name = TRANS("Sp7envmode");
const String PluginParameters::Sp7EnvMode_Label;

const String PluginParameters::Sp7EnvModeFix_Id = "Sp7envfixmode";
const String PluginParameters::Sp7EnvModeFix_Name = TRANS("Sp7envfixmode");
const String PluginParameters::Sp7EnvModeFix_Label;

const String PluginParameters::Sp7EMod_Id = "Sp7eModeMod";
const String PluginParameters::Sp7EMod_Name = TRANS("Sp7eModeMod");
const String PluginParameters::Sp7EMod_Label;

const String PluginParameters::Sp7Cutoff_Id = "Sp7cut";
const String PluginParameters::Sp7Cutoff_Name = TRANS("Sp7Cut");
const String PluginParameters::Sp7Cutoff_Label;

const String PluginParameters::Sp7CutoffMod_Id = "Sp7cutm";
const String PluginParameters::Sp7CutoffMod_Name = TRANS("Sp7Cutm");
const String PluginParameters::Sp7CutoffMod_Label;


const String PluginParameters::Sp7Resonance_Id = "Sp7res";
const String PluginParameters::Sp7Resonance_Name = TRANS("Sp7Res");
const String PluginParameters::Sp7Resonance_Label;

const String PluginParameters::Sp7FilterMode_Id = "Sp7vcfm";
const String PluginParameters::Sp7FilterMode_Name = TRANS("Sp7Vcfm");
const String PluginParameters::Sp7FilterMode_Label;



const String PluginParameters::Sp7DelayMode_Id = "Sp7dlm";
const String PluginParameters::Sp7DelayMode_Name = TRANS("Sp7Dlm");
const String PluginParameters::Sp7DelayMode_Label;

const String PluginParameters::Sp7DelayTime_Id = "Sp7dlt";
const String PluginParameters::Sp7DelayTime_Name = TRANS("Sp7Dlt");
const String PluginParameters::Sp7DelayTime_Label;

const String PluginParameters::Sp7DelayFeed_Id = "Sp7dlf";
const String PluginParameters::Sp7DelayFeed_Name = TRANS("Sp7Dlf");
const String PluginParameters::Sp7DelayFeed_Label;

const String PluginParameters::Sp7DelayMix_Id = "Sp7dlmx";
const String PluginParameters::Sp7DelayMix_Name = TRANS("Sp7Dlmx");
const String PluginParameters::Sp7DelayMix_Label;

const String PluginParameters::Sp7DelayLevel_Id = "Sp7dl";
const String PluginParameters::Sp7DelayLevel_Name = TRANS("Sp7Dll");
const String PluginParameters::Sp7DelayLevel_Label;

const String PluginParameters::Sp7DelayTimeMod_Id = "Sp7dltm";
const String PluginParameters::Sp7DelayTimeMod_Name = TRANS("Sp7Dltm");
const String PluginParameters::Sp7DelayTimeMod_Label;

const String PluginParameters::Sp7DelayFeedMod_Id = "Sp7dlfm";
const String PluginParameters::Sp7DelayFeedMod_Name = TRANS("Sp7Dlfm");
const String PluginParameters::Sp7DelayFeedMod_Label;

const String PluginParameters::Sp7DelayMixMod_Id = "Sp7dlmxm";
const String PluginParameters::Sp7DelayMixMod_Name = TRANS("Sp7Dlmxm");
const String PluginParameters::Sp7DelayMixMod_Label;

const String PluginParameters::Sp7DelayLevelMod_Id = "Sp7dlmod";
const String PluginParameters::Sp7DelayLevelMod_Name = TRANS("Sp7Dllmod");
const String PluginParameters::Sp7DelayLevelMod_Label;

const String PluginParameters::Sp7LfoMode_Id = "Sp7lfom";
const String PluginParameters::Sp7LfoMode_Name = TRANS("Sp7Lfom");
const String PluginParameters::Sp7LfoMode_Label;

const String PluginParameters::Sp7LfoRtr_Id = "Sp7LfoRtr";
const String PluginParameters::Sp7LfoRtr_Name = TRANS("Sp7LfoRtr");
const String PluginParameters::Sp7LfoRtr_Label;



const String PluginParameters::Sp7LfoTime_Id = "Sp7lfot";
const String PluginParameters::Sp7LfoTime_Name = TRANS("Sp7Lfot");
const String PluginParameters::Sp7LfoTime_Label;

const String PluginParameters::Sp7LfoAmp_Id = "Sp7lfoa";
const String PluginParameters::Sp7LfoAmp_Name = TRANS("Sp7Lfoa");
const String PluginParameters::Sp7LfoAmp_Label;




PluginParameters::PluginParameters(AudioProcessorValueTreeState& vts)
    : valueTreeState(vts)

//------------mainattachment------------

, MidiCCModeAttachment(nullptr)

,TimerModeAttachment(nullptr)
,TimerBpmAttachment(nullptr)
, TimerLatenceAttachment(nullptr)
,mainSqLenghtAttachment(nullptr)
,mainWaveAttachment(nullptr)
,mainPitchAttachment(nullptr)
,mainDelayAttachment(nullptr)
,mainVolumeAttachment(nullptr)
,mainLfoSelectAttachment(nullptr)
,mainLfoPitchAmAttachment(nullptr)
,mainLfoDelayAmAttachment(nullptr)
,mainLfoSpHoldAttachment(nullptr)

,EngineSelectAttachment(nullptr)


,TriggerSelect10Attachment(nullptr)

,mainEqModeAttachment(nullptr)
,mainEqBassVAttachment(nullptr)
,mainEqMidVAttachment(nullptr)
,mainEqHighVAttachment(nullptr)

,mainBitCrushModeAttachment(nullptr)
,mainBitCrushBitsAttachment(nullptr)
,mainBitCrushMixAttachment(nullptr)
,mainBitCrushDryAttachment(nullptr)

,mainLimiterModeAttachment(nullptr)
,mainLimiterThrshAttachment(nullptr)
,mainLimiterGainAttachment(nullptr)


//---------------sp1attachment------------

,Sp1SynthWaveformAttachment(nullptr)
,Sp1SynthNoteNumberAttachment(nullptr)
,Sp1SynthNoteNumberModAttachment(nullptr)
,Sp1SynthLevelAttachment(nullptr)
,Sp1SynthLevelModAttachment(nullptr)
,Sp1SynthAttackAttachment(nullptr)
,Sp1SynthReleaseAttachment(nullptr)
,Sp1SynthReleaseModAttachment(nullptr)
,Sp1StepperOnOffAttachment(nullptr)

,Sp1PlayModeAttachment(nullptr)
,Sp1PlayTimeModeAttachment(nullptr)
,Sp1EngineModeAttachment(nullptr)
,Sp1EngineModulationAttachment(nullptr)
,Sp1WaveNrAttachment(nullptr)
,Sp1PatternStateParasAttachment(nullptr)
,Sp1PitchAttachment(nullptr)
,Sp1PitchModAttachment(nullptr)
,Sp1StartAttachment(nullptr)
,Sp1EndAttachment(nullptr)
,Sp1VolumeAttachment(nullptr)
,Sp1VolumeModAttachment(nullptr)
,Sp1AttackAttachment(nullptr)
,Sp1ReleaseAttachment(nullptr)
,Sp1ReleaseModAttachment(nullptr)
,Sp1EnvModeAttachment(nullptr)
, Sp1EnvModeFixAttachment(nullptr)
,Sp1GateAttachment(nullptr)

,Sp1FilterCutAttachment(nullptr)
,Sp1FilterCutModAttachment(nullptr)
,Sp1FilterResAttachment(nullptr)
,Sp1FilterModeAttachment(nullptr)


,Sp1DelayModeComboxAttachment(nullptr)
,Sp1DelayTimeSliderAttachment(nullptr)
,Sp1DelayFeedSliderAttachment(nullptr)
,Sp1DelayMixSliderAttachment(nullptr)
,Sp1DelayLevelSliderAttachment(nullptr)
,Sp1DelayTimeSliderModAttachment(nullptr)
,Sp1DelayFeedSliderModAttachment(nullptr)
,Sp1DelayMixSliderModAttachment(nullptr)
,Sp1DelayLevelSliderModAttachment(nullptr)

,Sp1LfoModeAttachment(nullptr)
,Sp1LfoRtrModeAttachment(nullptr)
,Sp1LfoTimeAttachment(nullptr)
,Sp1LfoAmpAttachment(nullptr)

//---------------sp2attachment------------

,Sp2SynthWaveformAttachment(nullptr)
,Sp2SynthNoteNumberAttachment(nullptr)
,Sp2SynthNoteNumberModAttachment(nullptr)
,Sp2SynthLevelAttachment(nullptr)
,Sp2SynthLevelModAttachment(nullptr)
,Sp2SynthAttackAttachment(nullptr)
,Sp2SynthReleaseAttachment(nullptr)
,Sp2SynthReleaseModAttachment(nullptr)
,Sp2StepperOnOffAttachment(nullptr)

,Sp2PlayModeAttachment(nullptr)
,Sp2PlayTimeModeAttachment(nullptr)
,Sp2EngineModeAttachment(nullptr)
,Sp2EngineModulationAttachment(nullptr)
,Sp2WaveNrAttachment(nullptr)
,Sp2PatternStateParasAttachment(nullptr)
,Sp2PitchAttachment(nullptr)
,Sp2PitchModAttachment(nullptr)
,Sp2StartAttachment(nullptr)
,Sp2EndAttachment(nullptr)
,Sp2VolumeAttachment(nullptr)
,Sp2VolumeModAttachment(nullptr)
,Sp2AttackAttachment(nullptr)
,Sp2ReleaseAttachment(nullptr)
,Sp2ReleaseModAttachment(nullptr)
, Sp2EnvModeAttachment(nullptr)
, Sp2EnvModeFixAttachment(nullptr)
,Sp2GateAttachment(nullptr)

,Sp2FilterCutAttachment(nullptr)
,Sp2FilterCutModAttachment(nullptr)
,Sp2FilterResAttachment(nullptr)
,Sp2FilterModeAttachment(nullptr)


,Sp2DelayModeComboxAttachment(nullptr)
,Sp2DelayTimeSliderAttachment(nullptr)
,Sp2DelayFeedSliderAttachment(nullptr)
,Sp2DelayMixSliderAttachment(nullptr)
,Sp2DelayLevelSliderAttachment(nullptr)
,Sp2DelayTimeSliderModAttachment(nullptr)
,Sp2DelayFeedSliderModAttachment(nullptr)
,Sp2DelayMixSliderModAttachment(nullptr)
,Sp2DelayLevelSliderModAttachment(nullptr)

,Sp2LfoModeAttachment(nullptr)
,Sp2LfoRtrModeAttachment(nullptr)
,Sp2LfoTimeAttachment(nullptr)
,Sp2LfoAmpAttachment(nullptr)

//---------------sp3attachment------------

,Sp3SynthWaveformAttachment(nullptr)
,Sp3SynthNoteNumberAttachment(nullptr)
,Sp3SynthNoteNumberModAttachment(nullptr)
,Sp3SynthLevelAttachment(nullptr)
,Sp3SynthLevelModAttachment(nullptr)
,Sp3SynthAttackAttachment(nullptr)
,Sp3SynthReleaseAttachment(nullptr)
,Sp3SynthReleaseModAttachment(nullptr)
,Sp3StepperOnOffAttachment(nullptr)

,Sp3PlayModeAttachment(nullptr)
,Sp3PlayTimeModeAttachment(nullptr)
,Sp3EngineModeAttachment(nullptr)
,Sp3EngineModulationAttachment(nullptr)
,Sp3WaveNrAttachment(nullptr)
,Sp3PatternStateParasAttachment(nullptr)
,Sp3PitchAttachment(nullptr)
,Sp3PitchModAttachment(nullptr)
,Sp3StartAttachment(nullptr)
,Sp3EndAttachment(nullptr)
,Sp3VolumeAttachment(nullptr)
,Sp3VolumeModAttachment(nullptr)
,Sp3AttackAttachment(nullptr)
,Sp3ReleaseAttachment(nullptr)
,Sp3ReleaseModAttachment(nullptr)
,Sp3EnvModeAttachment(nullptr)
, Sp3EnvModeFixAttachment(nullptr)
,Sp3GateAttachment(nullptr)

,Sp3FilterCutAttachment(nullptr)
,Sp3FilterCutModAttachment(nullptr)
,Sp3FilterResAttachment(nullptr)
,Sp3FilterModeAttachment(nullptr)


,Sp3DelayModeComboxAttachment(nullptr)
,Sp3DelayTimeSliderAttachment(nullptr)
,Sp3DelayFeedSliderAttachment(nullptr)
,Sp3DelayMixSliderAttachment(nullptr)
,Sp3DelayLevelSliderAttachment(nullptr)
,Sp3DelayTimeSliderModAttachment(nullptr)
,Sp3DelayFeedSliderModAttachment(nullptr)
,Sp3DelayMixSliderModAttachment(nullptr)
,Sp3DelayLevelSliderModAttachment(nullptr)

,Sp3LfoModeAttachment(nullptr)
,Sp3LfoRtrModeAttachment(nullptr)
,Sp3LfoTimeAttachment(nullptr)
,Sp3LfoAmpAttachment(nullptr)

//---------------sp4attachment------------

,Sp4SynthWaveformAttachment(nullptr)
,Sp4SynthNoteNumberAttachment(nullptr)
,Sp4SynthNoteNumberModAttachment(nullptr)
,Sp4SynthLevelAttachment(nullptr)
,Sp4SynthLevelModAttachment(nullptr)
,Sp4SynthAttackAttachment(nullptr)
,Sp4SynthReleaseAttachment(nullptr)
,Sp4SynthReleaseModAttachment(nullptr)
,Sp4StepperOnOffAttachment(nullptr)

,Sp4PlayModeAttachment(nullptr)
,Sp4PlayTimeModeAttachment(nullptr)
,Sp4EngineModeAttachment(nullptr)
,Sp4EngineModulationAttachment(nullptr)
,Sp4WaveNrAttachment(nullptr)
,Sp4PatternStateParasAttachment(nullptr)
,Sp4PitchAttachment(nullptr)
,Sp4PitchModAttachment(nullptr)
,Sp4StartAttachment(nullptr)
,Sp4EndAttachment(nullptr)
,Sp4VolumeAttachment(nullptr)
,Sp4VolumeModAttachment(nullptr)
,Sp4AttackAttachment(nullptr)
,Sp4ReleaseAttachment(nullptr)
,Sp4ReleaseModAttachment(nullptr)
,Sp4EnvModeAttachment(nullptr)
, Sp4EnvModeFixAttachment(nullptr)
,Sp4GateAttachment(nullptr)

,Sp4FilterCutAttachment(nullptr)
,Sp4FilterCutModAttachment(nullptr)
,Sp4FilterResAttachment(nullptr)
,Sp4FilterModeAttachment(nullptr)


,Sp4DelayModeComboxAttachment(nullptr)
,Sp4DelayTimeSliderAttachment(nullptr)
,Sp4DelayFeedSliderAttachment(nullptr)
,Sp4DelayMixSliderAttachment(nullptr)
,Sp4DelayLevelSliderAttachment(nullptr)
,Sp4DelayTimeSliderModAttachment(nullptr)
,Sp4DelayFeedSliderModAttachment(nullptr)
,Sp4DelayMixSliderModAttachment(nullptr)
,Sp4DelayLevelSliderModAttachment(nullptr)

,Sp4LfoModeAttachment(nullptr)
,Sp4LfoRtrModeAttachment(nullptr)
,Sp4LfoTimeAttachment(nullptr)
,Sp4LfoAmpAttachment(nullptr)
//---------------sp5attachment------------

, Sp5SynthWaveformAttachment(nullptr)
, Sp5SynthNoteNumberAttachment(nullptr)
, Sp5SynthNoteNumberModAttachment(nullptr)
, Sp5SynthLevelAttachment(nullptr)
, Sp5SynthLevelModAttachment(nullptr)
, Sp5SynthAttackAttachment(nullptr)
, Sp5SynthReleaseAttachment(nullptr)
, Sp5SynthReleaseModAttachment(nullptr)
, Sp5StepperOnOffAttachment(nullptr)

, Sp5PlayModeAttachment(nullptr)
, Sp5PlayTimeModeAttachment(nullptr)
, Sp5EngineModeAttachment(nullptr)
, Sp5EngineModulationAttachment(nullptr)
, Sp5WaveNrAttachment(nullptr)
, Sp5PatternStateParasAttachment(nullptr)
, Sp5PitchAttachment(nullptr)
, Sp5PitchModAttachment(nullptr)
, Sp5StartAttachment(nullptr)
, Sp5EndAttachment(nullptr)
, Sp5VolumeAttachment(nullptr)
, Sp5VolumeModAttachment(nullptr)
, Sp5AttackAttachment(nullptr)
, Sp5ReleaseAttachment(nullptr)
, Sp5ReleaseModAttachment(nullptr)
, Sp5EnvModeAttachment(nullptr)
, Sp5EnvModeFixAttachment(nullptr)
, Sp5GateAttachment(nullptr)

, Sp5FilterCutAttachment(nullptr)
, Sp5FilterCutModAttachment(nullptr)
, Sp5FilterResAttachment(nullptr)
, Sp5FilterModeAttachment(nullptr)


, Sp5DelayModeComboxAttachment(nullptr)
, Sp5DelayTimeSliderAttachment(nullptr)
, Sp5DelayFeedSliderAttachment(nullptr)
, Sp5DelayMixSliderAttachment(nullptr)
, Sp5DelayLevelSliderAttachment(nullptr)
, Sp5DelayTimeSliderModAttachment(nullptr)
, Sp5DelayFeedSliderModAttachment(nullptr)
, Sp5DelayMixSliderModAttachment(nullptr)
, Sp5DelayLevelSliderModAttachment(nullptr)

, Sp5LfoModeAttachment(nullptr)
, Sp5LfoRtrModeAttachment(nullptr)
, Sp5LfoTimeAttachment(nullptr)
, Sp5LfoAmpAttachment(nullptr)
//---------------sp6attachment------------

, Sp6SynthWaveformAttachment(nullptr)
, Sp6SynthNoteNumberAttachment(nullptr)
, Sp6SynthNoteNumberModAttachment(nullptr)
, Sp6SynthLevelAttachment(nullptr)
, Sp6SynthLevelModAttachment(nullptr)
, Sp6SynthAttackAttachment(nullptr)
, Sp6SynthReleaseAttachment(nullptr)
, Sp6SynthReleaseModAttachment(nullptr)
, Sp6StepperOnOffAttachment(nullptr)

, Sp6PlayModeAttachment(nullptr)
, Sp6PlayTimeModeAttachment(nullptr)
, Sp6EngineModeAttachment(nullptr)
, Sp6EngineModulationAttachment(nullptr)
, Sp6WaveNrAttachment(nullptr)
, Sp6PatternStateParasAttachment(nullptr)
, Sp6PitchAttachment(nullptr)
, Sp6PitchModAttachment(nullptr)
, Sp6StartAttachment(nullptr)
, Sp6EndAttachment(nullptr)
, Sp6VolumeAttachment(nullptr)
, Sp6VolumeModAttachment(nullptr)
, Sp6AttackAttachment(nullptr)
, Sp6ReleaseAttachment(nullptr)
, Sp6ReleaseModAttachment(nullptr)
, Sp6EnvModeAttachment(nullptr)
, Sp6EnvModeFixAttachment(nullptr)
, Sp6GateAttachment(nullptr)

, Sp6FilterCutAttachment(nullptr)
, Sp6FilterCutModAttachment(nullptr)
, Sp6FilterResAttachment(nullptr)
, Sp6FilterModeAttachment(nullptr)


, Sp6DelayModeComboxAttachment(nullptr)
, Sp6DelayTimeSliderAttachment(nullptr)
, Sp6DelayFeedSliderAttachment(nullptr)
, Sp6DelayMixSliderAttachment(nullptr)
, Sp6DelayLevelSliderAttachment(nullptr)
, Sp6DelayTimeSliderModAttachment(nullptr)
, Sp6DelayFeedSliderModAttachment(nullptr)
, Sp6DelayMixSliderModAttachment(nullptr)
, Sp6DelayLevelSliderModAttachment(nullptr)

, Sp6LfoModeAttachment(nullptr)
, Sp6LfoRtrModeAttachment(nullptr)
, Sp6LfoTimeAttachment(nullptr)
, Sp6LfoAmpAttachment(nullptr)
//---------------sp7attachment------------

, Sp7SynthWaveformAttachment(nullptr)
, Sp7SynthNoteNumberAttachment(nullptr)
, Sp7SynthNoteNumberModAttachment(nullptr)
, Sp7SynthLevelAttachment(nullptr)
, Sp7SynthLevelModAttachment(nullptr)
, Sp7SynthAttackAttachment(nullptr)
, Sp7SynthReleaseAttachment(nullptr)
, Sp7SynthReleaseModAttachment(nullptr)
, Sp7StepperOnOffAttachment(nullptr)

, Sp7PlayModeAttachment(nullptr)
, Sp7PlayTimeModeAttachment(nullptr)
, Sp7EngineModeAttachment(nullptr)
, Sp7EngineModulationAttachment(nullptr)
, Sp7WaveNrAttachment(nullptr)
, Sp7PatternStateParasAttachment(nullptr)
, Sp7PitchAttachment(nullptr)
, Sp7PitchModAttachment(nullptr)
, Sp7StartAttachment(nullptr)
, Sp7EndAttachment(nullptr)
, Sp7VolumeAttachment(nullptr)
, Sp7VolumeModAttachment(nullptr)
, Sp7AttackAttachment(nullptr)
, Sp7ReleaseAttachment(nullptr)
, Sp7ReleaseModAttachment(nullptr)
, Sp7EnvModeAttachment(nullptr)
, Sp7EnvModeFixAttachment(nullptr)
, Sp7GateAttachment(nullptr)

, Sp7FilterCutAttachment(nullptr)
, Sp7FilterCutModAttachment(nullptr)
, Sp7FilterResAttachment(nullptr)
, Sp7FilterModeAttachment(nullptr)


, Sp7DelayModeComboxAttachment(nullptr)
, Sp7DelayTimeSliderAttachment(nullptr)
, Sp7DelayFeedSliderAttachment(nullptr)
, Sp7DelayMixSliderAttachment(nullptr)
, Sp7DelayLevelSliderAttachment(nullptr)
, Sp7DelayTimeSliderModAttachment(nullptr)
, Sp7DelayFeedSliderModAttachment(nullptr)
, Sp7DelayMixSliderModAttachment(nullptr)
, Sp7DelayLevelSliderModAttachment(nullptr)

, Sp7LfoModeAttachment(nullptr)
, Sp7LfoRtrModeAttachment(nullptr)
, Sp7LfoTimeAttachment(nullptr)
, Sp7LfoAmpAttachment(nullptr)





//--------------mainparas----------------

, MidiCCModeListener(midiCCmodus)

,TimeModeListener(TimerModeV)
,TimeBpmListener(TimerBpm)
, TimeLatenceListener(Timerlatence)
,mainSqLenghtListener(mainSqLenghtValue)
,mainWaveListener(mainWaveValue)
,mainPitchListener(mainPitchValue)
,mainDelayListener(mainDelayValue)
,mainVolumeListener(mainVolumeValue)
,mainLfoSelectListener(mainLfoSelectValue)
,mainLfoPitchAmListener(mainLfoPitchAmValue)
,mainLfoDelayAmListener(mainLfoDelayAmValue)
,mainLfoSpHoldlistener(mainSpHoldMode)
,EngineSelectListener(EngineSelectValue)

,TriggerSelect10Listener(TriggerSelectNumber10)

,mainEqModeListener(mainEqModevalue)
,mainEqBassVListener(mainEqBassVValue)
,mainEqMidVListener(mainEqMidVValue)
,mainEqHighVListener(mainEqHighVValue)

,mainBitCrushModeListener(mainBitCrushModeValue)
,mainBitCrushBitsListener(mainBitCrushBitsValue)
,mainBitCrushMixListener(mainBitCrushMixValue)
,mainBitCrushDryListener(mainBitCrushDryValue)

,mainLimiterModeListener(mainLimiterModeValue)
,mainLimiterThrshListener(mainLimiterThrshValue)
,mainLimiterGainListener(mainLimiterGainValue)


//-----------------------------------Sp1_paras---
,Sp1SynthwaveformListener(waveform)
,Sp1SynthnoteNumberListener(Sp1synthmidiNoteNumber)
,Sp1SynthnoteNumberModListener(Sp1synthmidiNoteNumberMod)
,Sp1SynthlevelListener(Sp1synthlevel, 0.1f)
,Sp1SynthlevelModListener(Sp1synthlevelMod)
,Sp1SynthAttackListener(Sp1SynthAttackValue)
,Sp1SynthReleaseListener(Sp1SynthReleaseValue)
,Sp1SynthReleaseModListener(Sp1SynthReleaseModValue)
,Sp1StepperOnOffListener(StepperOnOffValue)

,Sp1EngineModeListener(Sp1EngineMode)
,Sp1PlayModusListener(SpPlayMode)
,Sp1PlayTimeModusListener(Sp1PlayTimeMode)
,Sp1GateListener(Sp1Gate)
,Sp1WaveNrListener(Sp1Wnr)
,Sp1PatternStateParasListener(Sp1PatternStateValue)
,Sp1PitchListener(Sp1Pitch)
,Sp1PitchModListener(Sp1PitchMod)
,Sp1StartListener(Sp1StartSampel)
,Sp1EndListener(Sp1EndSampel)
,Sp1VolumeListener(Sp1Volume)
,Sp1VolumeModListener(Sp1VolumeMod)
,Sp1AttackListener(Sp1Attack)
,Sp1ReleaseListener(Sp1Release)
,Sp1ReleaseModListener(Sp1ReleaseMod)
,Sp1EnvModeListener(Sp1EnvModeValue)
, Sp1EnvModeFixListener(Sp1EnvModeFixValue)
,Sp1EmodListener(Sp1Emod)

,Sp1CutoffListener(Sp1Cutoff)
,Sp1CutoffListenerMod(Sp1CutoffMod)
,Sp1ResonanceListener(Sp1Resonance)
,Sp1FilterModusListener(Sp1FilterMode)


,Sp1DelayModeListener(Sp1DelayMode)
,Sp1DelayTimeListener(Sp1DelayTime)
,Sp1DelayFeedListener(Sp1DelayFeed)
,Sp1DelayMixListener(Sp1DelayMix)
,Sp1DelayLevelListener(Sp1DelayLevel)
,Sp1DelayTimeListenerMod(Sp1DelayTimeMod)
,Sp1DelayFeedListenerMod(Sp1DelayFeedMod)
,Sp1DelayMixListenerMod(Sp1DelayMixMod)
,Sp1DelayLevelListenerMod(Sp1DelayLevelMod)



,Sp1LfoModeListener(Sp1LfoMode)
,Sp1LfoRtrModeListener(Sp1LfoRtrMode)
,Sp1LfoTimeListener(Sp1LfoTime)
,Sp1LfoAmpListener(Sp1LfoAmp)



//-----------------------------------Sp2_paras---
,Sp2SynthwaveformListener(Sp2waveform)
,Sp2SynthnoteNumberListener(Sp2synthmidiNoteNumber)
,Sp2SynthnoteNumberModListener(Sp2synthmidiNoteNumberMod)
,Sp2SynthlevelListener(Sp2synthlevel, 0.1f)
,Sp2SynthlevelModListener(Sp2synthlevelMod)
,Sp2SynthAttackListener(Sp2SynthAttackValue)
,Sp2SynthReleaseListener(Sp2SynthReleaseValue)
,Sp2SynthReleaseModListener(Sp2SynthReleaseModValue)
,Sp2StepperOnOffListener(Sp2StepperOnOffValue)
,Sp2EngineModeListener(Sp2EngineMode)

,Sp2PlayModusListener(SpPlayMode)
,Sp2PlayTimeModusListener(Sp2PlayTimeMode)
,Sp2GateListener(Sp2Gate)
,Sp2WaveNrListener(Sp2Wnr)
,Sp2PatternStateParasListener(Sp2PatternStateValue)
,Sp2PitchListener(Sp2Pitch)
,Sp2PitchModListener(Sp2PitchMod)
,Sp2StartListener(Sp2StartSampel)
,Sp2EndListener(Sp2EndSampel)
,Sp2VolumeListener(Sp2Volume)
,Sp2VolumeModListener(Sp2VolumeMod)
,Sp2AttackListener(Sp2Attack)
,Sp2ReleaseListener(Sp2Release)
,Sp2ReleaseModListener(Sp2ReleaseMod)
,Sp2EnvModeListener(Sp2EnvModeValue)
, Sp2EnvModeFixListener(Sp2EnvModeFixValue)
,Sp2EmodListener(Sp2Emod)

,Sp2CutoffListener(Sp2Cutoff)
,Sp2CutoffListenerMod(Sp2CutoffMod)
,Sp2ResonanceListener(Sp2Resonance)
,Sp2FilterModusListener(Sp2FilterMode)


,Sp2DelayModeListener(Sp2DelayMode)
,Sp2DelayTimeListener(Sp2DelayTime)
,Sp2DelayFeedListener(Sp2DelayFeed)
,Sp2DelayMixListener(Sp2DelayMix)
,Sp2DelayLevelListener(Sp2DelayLevel)
,Sp2DelayTimeListenerMod(Sp2DelayTimeMod)
,Sp2DelayFeedListenerMod(Sp2DelayFeedMod)
,Sp2DelayMixListenerMod(Sp2DelayMixMod)
,Sp2DelayLevelListenerMod(Sp2DelayLevelMod)



,Sp2LfoModeListener(Sp2LfoMode)
,Sp2LfoRtrModeListener(Sp2LfoRtrMode)
,Sp2LfoTimeListener(Sp2LfoTime)
,Sp2LfoAmpListener(Sp2LfoAmp)

//-----------------------------------Sp3_paras---
,Sp3SynthwaveformListener(Sp3waveform)
,Sp3SynthnoteNumberListener(Sp3synthmidiNoteNumber)
,Sp3SynthnoteNumberModListener(Sp3synthmidiNoteNumberMod)
,Sp3SynthlevelListener(Sp3synthlevel, 0.1f)
,Sp3SynthlevelModListener(Sp3synthlevelMod)
,Sp3SynthAttackListener(Sp3SynthAttackValue)
,Sp3SynthReleaseListener(Sp3SynthReleaseValue)
,Sp3SynthReleaseModListener(Sp3SynthReleaseModValue)
,Sp3StepperOnOffListener(Sp3StepperOnOffValue)
,Sp3EngineModeListener(Sp3EngineMode)

,Sp3PlayModusListener(SpPlayMode)
,Sp3PlayTimeModusListener(Sp3PlayTimeMode)
,Sp3GateListener(Sp3Gate)
,Sp3WaveNrListener(Sp3Wnr)
,Sp3PatternStateParasListener(Sp3PatternStateValue)
,Sp3PitchListener(Sp3Pitch)
,Sp3PitchModListener(Sp3PitchMod)
,Sp3StartListener(Sp3StartSampel)
,Sp3EndListener(Sp3EndSampel)
,Sp3VolumeListener(Sp3Volume)
,Sp3VolumeModListener(Sp3VolumeMod)
,Sp3AttackListener(Sp3Attack)
,Sp3ReleaseListener(Sp3Release)
,Sp3ReleaseModListener(Sp3ReleaseMod)
,Sp3EnvModeListener(Sp3EnvModeValue)
, Sp3EnvModeFixListener(Sp3EnvModeFixValue)
,Sp3EmodListener(Sp3Emod)

,Sp3CutoffListener(Sp3Cutoff)
,Sp3CutoffListenerMod(Sp3CutoffMod)
,Sp3ResonanceListener(Sp3Resonance)
,Sp3FilterModusListener(Sp3FilterMode)


,Sp3DelayModeListener(Sp3DelayMode)
,Sp3DelayTimeListener(Sp3DelayTime)
,Sp3DelayFeedListener(Sp3DelayFeed)
,Sp3DelayMixListener(Sp3DelayMix)
,Sp3DelayLevelListener(Sp3DelayLevel)
,Sp3DelayTimeListenerMod(Sp3DelayTimeMod)
,Sp3DelayFeedListenerMod(Sp3DelayFeedMod)
,Sp3DelayMixListenerMod(Sp3DelayMixMod)
,Sp3DelayLevelListenerMod(Sp3DelayLevelMod)



,Sp3LfoModeListener(Sp3LfoMode)
,Sp3LfoRtrModeListener(Sp3LfoRtrMode)
,Sp3LfoTimeListener(Sp3LfoTime)
,Sp3LfoAmpListener(Sp3LfoAmp)


//-----------------------------------Sp4_paras---
,Sp4SynthwaveformListener(Sp4waveform)
,Sp4SynthnoteNumberListener(Sp4synthmidiNoteNumber)
,Sp4SynthnoteNumberModListener(Sp4synthmidiNoteNumberMod)
,Sp4SynthlevelListener(Sp4synthlevel, 0.1f)
,Sp4SynthlevelModListener(Sp4synthlevelMod)
,Sp4SynthAttackListener(Sp4SynthAttackValue)
,Sp4SynthReleaseListener(Sp4SynthReleaseValue)
,Sp4SynthReleaseModListener(Sp4SynthReleaseModValue)
,Sp4StepperOnOffListener(Sp4StepperOnOffValue)
,Sp4EngineModeListener(Sp4EngineMode)

,Sp4PlayModusListener(SpPlayMode)
,Sp4PlayTimeModusListener(Sp4PlayTimeMode)
,Sp4GateListener(Sp4Gate)
,Sp4WaveNrListener(Sp4Wnr)
,Sp4PatternStateParasListener(Sp4PatternStateValue)
,Sp4PitchListener(Sp4Pitch)
,Sp4PitchModListener(Sp4PitchMod)
,Sp4StartListener(Sp4StartSampel)
,Sp4EndListener(Sp4EndSampel)
,Sp4VolumeListener(Sp4Volume)
,Sp4VolumeModListener(Sp4VolumeMod)
,Sp4AttackListener(Sp4Attack)
,Sp4ReleaseListener(Sp4Release)
,Sp4ReleaseModListener(Sp4ReleaseMod)
,Sp4EnvModeListener(Sp4EnvModeValue)
,Sp4EnvModeFixListener(Sp4EnvModeFixValue)
,Sp4EmodListener(Sp4Emod)

,Sp4CutoffListener(Sp4Cutoff)
,Sp4CutoffListenerMod(Sp4CutoffMod)
,Sp4ResonanceListener(Sp4Resonance)
,Sp4FilterModusListener(Sp4FilterMode)


,Sp4DelayModeListener(Sp4DelayMode)
,Sp4DelayTimeListener(Sp4DelayTime)
,Sp4DelayFeedListener(Sp4DelayFeed)
,Sp4DelayMixListener(Sp4DelayMix)
,Sp4DelayLevelListener(Sp4DelayLevel)
,Sp4DelayTimeListenerMod(Sp4DelayTimeMod)
,Sp4DelayFeedListenerMod(Sp4DelayFeedMod)
,Sp4DelayMixListenerMod(Sp4DelayMixMod)
,Sp4DelayLevelListenerMod(Sp4DelayLevelMod)



,Sp4LfoModeListener(Sp4LfoMode)
,Sp4LfoRtrModeListener(Sp4LfoRtrMode)
,Sp4LfoTimeListener(Sp4LfoTime)
,Sp4LfoAmpListener(Sp4LfoAmp)
//-----------------------------------Sp5_paras---
, Sp5SynthwaveformListener(Sp5waveform)
, Sp5SynthnoteNumberListener(Sp5synthmidiNoteNumber)
, Sp5SynthnoteNumberModListener(Sp5synthmidiNoteNumberMod)
, Sp5SynthlevelListener(Sp5synthlevel, 0.1f)
, Sp5SynthlevelModListener(Sp5synthlevelMod)
, Sp5SynthAttackListener(Sp5SynthAttackValue)
, Sp5SynthReleaseListener(Sp5SynthReleaseValue)
, Sp5SynthReleaseModListener(Sp5SynthReleaseModValue)
, Sp5StepperOnOffListener(Sp5StepperOnOffValue)
, Sp5EngineModeListener(Sp5EngineMode)

, Sp5PlayModusListener(SpPlayMode)
, Sp5PlayTimeModusListener(Sp5PlayTimeMode)
, Sp5GateListener(Sp5Gate)
, Sp5WaveNrListener(Sp5Wnr)
, Sp5PatternStateParasListener(Sp5PatternStateValue)
, Sp5PitchListener(Sp5Pitch)
, Sp5PitchModListener(Sp5PitchMod)
, Sp5StartListener(Sp5StartSampel)
, Sp5EndListener(Sp5EndSampel)
, Sp5VolumeListener(Sp5Volume)
, Sp5VolumeModListener(Sp5VolumeMod)
, Sp5AttackListener(Sp5Attack)
, Sp5ReleaseListener(Sp5Release)
, Sp5ReleaseModListener(Sp5ReleaseMod)
, Sp5EnvModeListener(Sp5EnvModeValue)
, Sp5EnvModeFixListener(Sp5EnvModeFixValue)
, Sp5EmodListener(Sp5Emod)

, Sp5CutoffListener(Sp5Cutoff)
, Sp5CutoffListenerMod(Sp5CutoffMod)
, Sp5ResonanceListener(Sp5Resonance)
, Sp5FilterModusListener(Sp5FilterMode)


, Sp5DelayModeListener(Sp5DelayMode)
, Sp5DelayTimeListener(Sp5DelayTime)
, Sp5DelayFeedListener(Sp5DelayFeed)
, Sp5DelayMixListener(Sp5DelayMix)
, Sp5DelayLevelListener(Sp5DelayLevel)
, Sp5DelayTimeListenerMod(Sp5DelayTimeMod)
, Sp5DelayFeedListenerMod(Sp5DelayFeedMod)
, Sp5DelayMixListenerMod(Sp5DelayMixMod)
, Sp5DelayLevelListenerMod(Sp5DelayLevelMod)



, Sp5LfoModeListener(Sp5LfoMode)
, Sp5LfoRtrModeListener(Sp5LfoRtrMode)
, Sp5LfoTimeListener(Sp5LfoTime)
, Sp5LfoAmpListener(Sp5LfoAmp)
//-----------------------------------Sp6_paras---
, Sp6SynthwaveformListener(Sp6waveform)
, Sp6SynthnoteNumberListener(Sp6synthmidiNoteNumber)
, Sp6SynthnoteNumberModListener(Sp6synthmidiNoteNumberMod)
, Sp6SynthlevelListener(Sp6synthlevel, 0.1f)
, Sp6SynthlevelModListener(Sp6synthlevelMod)
, Sp6SynthAttackListener(Sp6SynthAttackValue)
, Sp6SynthReleaseListener(Sp6SynthReleaseValue)
, Sp6SynthReleaseModListener(Sp6SynthReleaseModValue)
, Sp6StepperOnOffListener(Sp6StepperOnOffValue)
, Sp6EngineModeListener(Sp6EngineMode)

, Sp6PlayModusListener(SpPlayMode)
, Sp6PlayTimeModusListener(Sp6PlayTimeMode)
, Sp6GateListener(Sp6Gate)
, Sp6WaveNrListener(Sp6Wnr)
, Sp6PatternStateParasListener(Sp6PatternStateValue)
, Sp6PitchListener(Sp6Pitch)
, Sp6PitchModListener(Sp6PitchMod)
, Sp6StartListener(Sp6StartSampel)
, Sp6EndListener(Sp6EndSampel)
, Sp6VolumeListener(Sp6Volume)
, Sp6VolumeModListener(Sp6VolumeMod)
, Sp6AttackListener(Sp6Attack)
, Sp6ReleaseListener(Sp6Release)
, Sp6ReleaseModListener(Sp6ReleaseMod)
, Sp6EnvModeListener(Sp6EnvModeValue)
, Sp6EnvModeFixListener(Sp6EnvModeFixValue)
, Sp6EmodListener(Sp6Emod)

, Sp6CutoffListener(Sp6Cutoff)
, Sp6CutoffListenerMod(Sp6CutoffMod)
, Sp6ResonanceListener(Sp6Resonance)
, Sp6FilterModusListener(Sp6FilterMode)


, Sp6DelayModeListener(Sp6DelayMode)
, Sp6DelayTimeListener(Sp6DelayTime)
, Sp6DelayFeedListener(Sp6DelayFeed)
, Sp6DelayMixListener(Sp6DelayMix)
, Sp6DelayLevelListener(Sp6DelayLevel)
, Sp6DelayTimeListenerMod(Sp6DelayTimeMod)
, Sp6DelayFeedListenerMod(Sp6DelayFeedMod)
, Sp6DelayMixListenerMod(Sp6DelayMixMod)
, Sp6DelayLevelListenerMod(Sp6DelayLevelMod)



, Sp6LfoModeListener(Sp6LfoMode)
, Sp6LfoRtrModeListener(Sp6LfoRtrMode)
, Sp6LfoTimeListener(Sp6LfoTime)
, Sp6LfoAmpListener(Sp6LfoAmp)
//-----------------------------------Sp7_paras---
, Sp7SynthwaveformListener(Sp7waveform)
, Sp7SynthnoteNumberListener(Sp7synthmidiNoteNumber)
, Sp7SynthnoteNumberModListener(Sp7synthmidiNoteNumberMod)
, Sp7SynthlevelListener(Sp7synthlevel, 0.1f)
, Sp7SynthlevelModListener(Sp7synthlevelMod)
, Sp7SynthAttackListener(Sp7SynthAttackValue)
, Sp7SynthReleaseListener(Sp7SynthReleaseValue)
, Sp7SynthReleaseModListener(Sp7SynthReleaseModValue)
, Sp7StepperOnOffListener(Sp7StepperOnOffValue)
, Sp7EngineModeListener(Sp7EngineMode)

, Sp7PlayModusListener(SpPlayMode)
, Sp7PlayTimeModusListener(Sp7PlayTimeMode)
, Sp7GateListener(Sp7Gate)
, Sp7WaveNrListener(Sp7Wnr)
, Sp7PatternStateParasListener(Sp7PatternStateValue)
, Sp7PitchListener(Sp7Pitch)
, Sp7PitchModListener(Sp7PitchMod)
, Sp7StartListener(Sp7StartSampel)
, Sp7EndListener(Sp7EndSampel)
, Sp7VolumeListener(Sp7Volume)
, Sp7VolumeModListener(Sp7VolumeMod)
, Sp7AttackListener(Sp7Attack)
, Sp7ReleaseListener(Sp7Release)
, Sp7ReleaseModListener(Sp7ReleaseMod)
, Sp7EnvModeListener(Sp7EnvModeValue)
, Sp7EnvModeFixListener(Sp7EnvModeFixValue)
, Sp7EmodListener(Sp7Emod)

, Sp7CutoffListener(Sp7Cutoff)
, Sp7CutoffListenerMod(Sp7CutoffMod)
, Sp7ResonanceListener(Sp7Resonance)
, Sp7FilterModusListener(Sp7FilterMode)


, Sp7DelayModeListener(Sp7DelayMode)
, Sp7DelayTimeListener(Sp7DelayTime)
, Sp7DelayFeedListener(Sp7DelayFeed)
, Sp7DelayMixListener(Sp7DelayMix)
, Sp7DelayLevelListener(Sp7DelayLevel)
, Sp7DelayTimeListenerMod(Sp7DelayTimeMod)
, Sp7DelayFeedListenerMod(Sp7DelayFeedMod)
, Sp7DelayMixListenerMod(Sp7DelayMixMod)
, Sp7DelayLevelListenerMod(Sp7DelayLevelMod)



, Sp7LfoModeListener(Sp7LfoMode)
, Sp7LfoRtrModeListener(Sp7LfoRtrMode)
, Sp7LfoTimeListener(Sp7LfoTime)
, Sp7LfoAmpListener(Sp7LfoAmp)



{
    

    // Set default values of working values
    //-----------------Mainparas------------------
    midiCCmodus.setIndex(0);
    TimerModeV.setIndex(0);
    TimerBpm=120;
    Timerlatence = 0.5;
    mainSqLenghtValue=16;
    mainWaveValue=10;
    mainPitchValue=1;
    mainDelayValue=0.5;
    mainVolumeValue=0.7;
    
    mainLfoSelectValue=0;
    mainLfoPitchAmValue=0.0f;
    mainLfoDelayAmValue=0.0f;
    mainSpHoldMode.setIndex(0);
    
    EngineSelectValue=0;


    TriggerSelectNumber10=0;
    mainEqModevalue=0;
    mainEqBassVValue=0.7;
    mainEqMidVValue=0.5;
    mainEqHighVValue=0.7;
    
    mainBitCrushModeValue=0;
    mainBitCrushBitsValue=0.5f;
    mainBitCrushMixValue=0.5f;
    mainBitCrushDryValue=0.5f;
 
    mainLimiterModeValue=1;
    mainLimiterThrshValue=0.5f;
    mainLimiterGainValue=0.5f;

    
 
    
    
    //----------------Engine1----------------------
    
    
    // waveform already defaults to "Sine"
    
    SpPlayMode.setIndex(1);
    Sp1PlayTimeMode.setIndex(7);
    Sp1synthlevel = 0.3f;
    Sp1synthlevelMod = 0.0f;
    StepperOnOffValue = false;
    Sp1synthmidiNoteNumber = 60;
    Sp1synthmidiNoteNumberMod = 0;
    Sp1SynthReleaseValue=0.2;
    Sp1SynthReleaseModValue=0.0;
    Sp1SynthAttackValue=0.2;
    Sp1EngineMode=true;
 
    Sp1Wnr=5;
    Sp1PatternStateValue =false;
    Sp1Gate=0.5;
    Sp1Pitch=0.5;
    Sp1PitchMod=0.0f;
    Sp1StartSampel=0;
    Sp1EndSampel=1;
    Sp1Volume=0.7;
    Sp1Emod=false;
    Sp1VolumeMod=0.0;
    Sp1Attack=0.1;
    Sp1Release=0.4;
    Sp1ReleaseMod=0.0;
    Sp1EnvModeValue = false;
    Sp1EnvModeFixValue = 1;
    Sp1Cutoff=0.9;
    Sp1CutoffMod=0.0;
    Sp1Resonance=0;

    Sp1DelayMode.setIndex(0);
    Sp1DelayTime=0.5;
    
    Sp1DelayFeed=0.5;
    Sp1DelayMix=0.0;
    Sp1DelayLevel=0.5;
    Sp1DelayTimeMod=0.0;
    Sp1DelayFeedMod=0.0;
    Sp1DelayMixMod=0.0;
    Sp1DelayLevelMod=0.0;

    
    Sp1LfoMode.setIndex(1);
 //  Sp1LfoRtrValue=false;
   Sp1LfoTime=0.2;
   Sp1LfoAmp=0.5;
    
    //----------------Engine2----------------------
    
    
    // waveform already defaults to "Sine"
    
    
    Sp2PlayMode.setIndex(1);
    Sp2PlayTimeMode.setIndex(7);
    Sp2synthlevel = 0.2f;
    Sp2synthlevelMod = 0.0f;
    Sp2StepperOnOffValue = false;
    Sp2synthmidiNoteNumber = 67;
    Sp2synthmidiNoteNumberMod = 0;
    Sp2SynthReleaseValue=0.2;
    Sp2SynthReleaseModValue=0.0;
    Sp2SynthAttackValue=0.2;
    Sp2EngineMode=true;
    
    Sp2Wnr=5;
    Sp2PatternStateValue=false;
    Sp2Gate=0.5;
    Sp2Pitch=0.5;
    Sp2PitchMod=0.0f;
    Sp2StartSampel=0;
    Sp2EndSampel=1;
    Sp2Volume=0.7;
    Sp2Emod=false;
    Sp2VolumeMod=0.0;
    Sp2Attack=0.1;
    Sp2Release=0.3;
    Sp2ReleaseMod=0.0;
    Sp2EnvModeValue = false;
    Sp2EnvModeFixValue = 1;
    Sp2Cutoff=0.9;
    Sp2CutoffMod=0.0;
    Sp2Resonance=0;
   
    Sp2DelayMode.setIndex(1);
    Sp2DelayTime=0.5;
    Sp2DelayFeed=0.5;
    Sp2DelayMix=0.3;
    Sp2DelayLevel=0.5;
    Sp2DelayTimeMod=0.0;
    Sp2DelayFeedMod=0.0;
    Sp2DelayMixMod=0.0;
    Sp2DelayLevelMod=0.0;
    
    
     Sp2LfoMode.setIndex(1);
    //  Sp2LfoRtrValue=false;
    Sp2LfoTime=0.1;
    Sp2LfoAmp=0.3;

//----------------Engine3----------------------
    
    
    // waveform already defaults to "Sine"
    
    Sp3PlayMode.setIndex(1);
    Sp3PlayTimeMode.setIndex(7);
    Sp3synthlevel = 0.2f;
    Sp3synthlevelMod = 0.0f;
    Sp3StepperOnOffValue = false;
    Sp3synthmidiNoteNumber = 74;
    Sp3synthmidiNoteNumberMod = 0;
    Sp3SynthReleaseValue=0.2;
    Sp3SynthReleaseModValue=0.0;
    Sp3SynthAttackValue=0.2;
    Sp3EngineMode=true;
    
    Sp3Wnr=5;
    Sp3PatternStateValue=false;
    Sp3Gate=0.5;
    Sp3Pitch=0.5;
    Sp3PitchMod=0.0f;
    Sp3StartSampel=0;
    Sp3EndSampel=1;
    Sp3Volume=0.7;
    Sp3Emod=false;
    Sp3VolumeMod=0.0;
    Sp3Attack=0.1;
    Sp3Release=0.9;
    Sp3ReleaseMod=0.0;
    Sp3EnvModeValue = false;
    Sp3EnvModeFixValue = 1;
    Sp3Cutoff=0.9;
    Sp3CutoffMod=0.0;
    Sp3Resonance=0;

    Sp3DelayMode.setIndex(1);
    Sp3DelayTime=0.5;
    Sp3DelayFeed=0.5;
    Sp3DelayMix=0.6;
    Sp3DelayLevel=0.5;
    Sp3DelayTimeMod=0.0;
    Sp3DelayFeedMod=0.0;
    Sp3DelayMixMod=0.0;
    Sp3DelayLevelMod=0.0;

    
     Sp3LfoMode.setIndex(1);
    //  Sp3LfoRtrValue=false;
    Sp3LfoTime=0.3;
    Sp3LfoAmp=0.3;

    //----------------Engine4----------------------
    
    
    // waveform already defaults to "Sine"
    
    Sp4PlayMode.setIndex(1);
    Sp4PlayTimeMode.setIndex(7);
    Sp4synthlevel = 0.2f;
    Sp4synthlevelMod = 0.0f;
    Sp4StepperOnOffValue = false;
    Sp4synthmidiNoteNumber = 53;
    Sp4synthmidiNoteNumberMod = 0;
    Sp4SynthReleaseValue=0.2;
    Sp4SynthReleaseModValue=0.0;
    Sp4SynthAttackValue=0.2;
    Sp4EngineMode=true;
    
    Sp4Wnr=5;
    Sp4PatternStateValue=false;
    Sp4Gate=0.5;
    Sp4Pitch=0.5;
    Sp4PitchMod=0.0f;
    Sp4StartSampel=0;
    Sp4EndSampel=1;
    Sp4Volume=0.7;
    Sp4Emod=false;
    Sp4VolumeMod=0.0;
    Sp4Attack=0.1;
    Sp4Release=0.3;
    Sp4ReleaseMod=0.0;
    Sp4EnvModeValue = false;
    Sp4EnvModeFixValue = 1;
    Sp4Cutoff=0.9;
    Sp4CutoffMod=0.0;
    Sp4Resonance=0;
 
    Sp4DelayMode.setIndex(2);
    Sp4DelayTime=0.5;
    Sp4DelayFeed=0.5;
    Sp4DelayMix=0.5;
    Sp4DelayLevel=0.5;
    Sp4DelayTimeMod=0.0;
    Sp4DelayFeedMod=0.0;
    Sp4DelayMixMod=0.0;
    Sp4DelayLevelMod=0.0;
  
    
     Sp4LfoMode.setIndex(1);
    //  Sp4LfoRtrValue=false;
    Sp4LfoTime=0.1;
    Sp4LfoAmp=0.6;

    //----------------Engine5----------------------


   // waveform already defaults to "Sine"

    Sp5PlayMode.setIndex(1);
    Sp5PlayTimeMode.setIndex(7);
    Sp5synthlevel = 0.2f;
    Sp5synthlevelMod = 0.0f;
    Sp5StepperOnOffValue = false;
    Sp5synthmidiNoteNumber = 60;
    Sp5synthmidiNoteNumberMod = 0;
    Sp5SynthReleaseValue = 0.2;
    Sp5SynthReleaseModValue = 0.0;
    Sp5SynthAttackValue = 0.2;
    Sp5EngineMode = true;

    Sp5Wnr = 5;
    Sp5PatternStateValue = false;
    Sp5Gate = 0.5;
    Sp5Pitch = 0.5;
    Sp5PitchMod = 0.0f;
    Sp5StartSampel = 0;
    Sp5EndSampel = 1;
    Sp5Volume = 0.7;
    Sp5Emod = false;
    Sp5VolumeMod = 0.0;
    Sp5Attack = 0.1;
    Sp5Release = 0.3;
    Sp5ReleaseMod = 0.0;
    Sp5EnvModeValue = false;
    Sp5EnvModeFixValue = 1;
    Sp5Cutoff = 0.9;
    Sp5CutoffMod = 0.0;
    Sp5Resonance = 0;

    Sp5DelayMode.setIndex(2);
    Sp5DelayTime = 0.5;
    Sp5DelayFeed = 0.5;
    Sp5DelayMix = 0.5;
    Sp5DelayLevel = 0.5;
    Sp5DelayTimeMod = 0.0;
    Sp5DelayFeedMod = 0.0;
    Sp5DelayMixMod = 0.0;
    Sp5DelayLevelMod = 0.0;


    Sp5LfoMode.setIndex(1);
    //  Sp5LfoRtrValue=false;
    Sp5LfoTime = 0.1;
    Sp5LfoAmp = 0.6;

    //----------------Engine6----------------------


   // waveform already defaults to "Sine"

    Sp6PlayMode.setIndex(1);
    Sp6PlayTimeMode.setIndex(7);
    Sp6synthlevel = 0.2f;
    Sp6synthlevelMod = 0.0f;
    Sp6StepperOnOffValue = false;
    Sp6synthmidiNoteNumber = 67;
    Sp6synthmidiNoteNumberMod = 0;
    Sp6SynthReleaseValue = 0.2;
    Sp6SynthReleaseModValue = 0.0;
    Sp6SynthAttackValue = 0.2;
    Sp6EngineMode = true;

    Sp6Wnr = 5;
    Sp6PatternStateValue = false;
    Sp6Gate = 0.5;
    Sp6Pitch = 0.5;
    Sp6PitchMod = 0.0f;
    Sp6StartSampel = 0;
    Sp6EndSampel = 1;
    Sp6Volume = 0.7;
    Sp6Emod = false;
    Sp6VolumeMod = 0.0;
    Sp6Attack = 0.1;
    Sp6Release = 0.3;
    Sp6ReleaseMod = 0.0;
    Sp6EnvModeValue = false;
    Sp6EnvModeFixValue = 1;
    Sp6Cutoff = 0.9;
    Sp6CutoffMod = 0.0;
    Sp6Resonance = 0;

    Sp6DelayMode.setIndex(2);
    Sp6DelayTime = 0.5;
    Sp6DelayFeed = 0.5;
    Sp6DelayMix = 0.5;
    Sp6DelayLevel = 0.5;
    Sp6DelayTimeMod = 0.0;
    Sp6DelayFeedMod = 0.0;
    Sp6DelayMixMod = 0.0;
    Sp6DelayLevelMod = 0.0;


    Sp6LfoMode.setIndex(1);
    //  Sp6LfoRtrValue=false;
    Sp6LfoTime = 0.2;
    Sp6LfoAmp = 0.2;

    //----------------Engine7----------------------


   // waveform already defaults to "Sine"

    Sp7PlayMode.setIndex(1);
    Sp7PlayTimeMode.setIndex(7);
    Sp7synthlevel = 0.2f;
    Sp7synthlevelMod = 0.0f;
    Sp7StepperOnOffValue = false;
    Sp7synthmidiNoteNumber = 64;
    Sp7synthmidiNoteNumberMod = 0;
    Sp7SynthReleaseValue = 0.2;
    Sp7SynthReleaseModValue = 0.0;
    Sp7SynthAttackValue = 0.2;
    Sp7EngineMode = true;

    Sp7Wnr = 5;
    Sp7PatternStateValue = false;
    Sp7Gate = 0.5;
    Sp7Pitch = 0.5;
    Sp7PitchMod = 0.0f;
    Sp7StartSampel = 0;
    Sp7EndSampel = 1;
    Sp7Volume = 0.7;
    Sp7Emod = false;
    Sp7VolumeMod = 0.0;
    Sp7Attack = 0.1;
    Sp7Release = 0.3;
    Sp7ReleaseMod = 0.0;
    Sp7EnvModeValue = false;
    Sp7EnvModeFixValue = 1;
    Sp7Cutoff = 0.9;
    Sp7CutoffMod = 0.0;
    Sp7Resonance = 0;

    Sp7DelayMode.setIndex(2);
    Sp7DelayTime = 0.5;
    Sp7DelayFeed = 0.5;
    Sp7DelayMix = 0.5;
    Sp7DelayLevel = 0.5;
    Sp7DelayTimeMod = 0.0;
    Sp7DelayFeedMod = 0.0;
    Sp7DelayMixMod = 0.0;
    Sp7DelayLevelMod = 0.0;


    Sp7LfoMode.setIndex(1);
    //  Sp7LfoRtrValue=false;
    Sp7LfoTime = 0.1;
    Sp7LfoAmp = 0.3;

    
}

void PluginParameters::createAllParameters()
{
 //------------------------------Mainparas-----------------------------------
    
    valueTreeState.createAndAddParameter(MidiCCMode_Id, MidiCCMode_Name, MidiCCMode_Label,
        NormalisableRange<float>(0.0f, (float)(MidiCCMode::kChoices - 1), 1.0f),
        (float)midiCCmodus.getIndex(),
        MidiCCMode::floatToText,
        MidiCCMode::textToFloat);
    valueTreeState.addParameterListener(MidiCCMode_Id, &MidiCCModeListener);

    
    
    valueTreeState.createAndAddParameter(TimerMode_Id, TimerMode_Name, TimerMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeMode::kChoices - 1), 1.0f),
                                         (float)TimerModeV.getIndex(),
                                         TimeMode::floatToText,
                                         TimeMode::textToFloat);
    valueTreeState.addParameterListener(TimerMode_Id, &TimeModeListener);
    

    
    valueTreeState.createAndAddParameter(TimerBpm_Id, TimerBpm_Name, TimerBpm_Label,
                                        NormalisableRange<float>(10.0f, 180.0f, 1),
                                         TimerBpm,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(TimerBpm_Id, &TimeBpmListener);

    valueTreeState.createAndAddParameter(TimerLatence_Id, TimerLatence_Name, TimerLatence_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001),
        Timerlatence,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(TimerLatence_Id, &TimeLatenceListener);
    
    
    valueTreeState.createAndAddParameter(mainSqLenght_Id, mainSqLenght_Name, mainSqLenght_Label,
                                         NormalisableRange<float>(1.0f, 16.0f, 1),
                                         mainSqLenghtValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainSqLenght_Id, &mainSqLenghtListener);
    
    
    
    valueTreeState.createAndAddParameter(mainWave_Id, mainWave_Name, mainWave_Label,
                                         NormalisableRange<float>(0.0f, 20.0f, 1),
                                         mainWaveValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainWave_Id, &mainWaveListener);
    
    valueTreeState.createAndAddParameter(mainPitch_Id, mainPitch_Name, mainPitch_Label,
                                         NormalisableRange<float>(0.5f, 1.5f, 0.001),
                                         mainPitchValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainPitch_Id, &mainPitchListener);
    
    valueTreeState.createAndAddParameter(mainDelay_Id, mainDelay_Name, mainDelay_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001),
                                         mainDelayValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainDelay_Id, &mainDelayListener);
     
    valueTreeState.createAndAddParameter(mainVolume_Id, mainVolume_Name, mainVolume_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001),
                                         mainVolumeValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainVolume_Id, &mainVolumeListener);
    
    valueTreeState.createAndAddParameter(mainLfoSelect_Id, mainLfoSelect_Name, mainLfoSelect_Label,
                                         NormalisableRange<float>(0, 3, 1),
                                         mainLfoSelectValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLfoSelect_Id, &mainLfoSelectListener);
    
    
    valueTreeState.createAndAddParameter(mainLfoPitchAm_Id, mainLfoPitchAm_Name, mainLfoPitchAm_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001),
                                         mainLfoPitchAmValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLfoPitchAm_Id, &mainLfoPitchAmListener);
    
    valueTreeState.createAndAddParameter(mainLfoDelayAm_Id, mainLfoDelayAm_Name, mainLfoDelayAm_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001),
                                         mainLfoDelayAmValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLfoDelayAm_Id, &mainLfoDelayAmListener);
    
    valueTreeState.createAndAddParameter(mainLfoSpHold_Id, mainLfoSpHold_Name, mainLfoSpHold_Label,
                                         NormalisableRange<float>(0.0f, (float)(SampelHoldMode::kChoices - 1), 1.0f),
                                         (float)mainSpHoldMode.getIndex(),
                                         SampelHoldMode::floatToText,
                                         SampelHoldMode::textToFloat);
    valueTreeState.addParameterListener(mainLfoSpHold_Id, &mainLfoSpHoldlistener);
    
    
   
    valueTreeState.createAndAddParameter(EngineSelect_Id, EngineSelect_Name, EngineSelect_Label,
                                         NormalisableRange<float>(0.0f, 6.0f, 1.0f),
                                         EngineSelectValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(EngineSelect_Id, &EngineSelectListener);
    



    
    valueTreeState.createAndAddParameter(TriggerSelect10_Id, TriggerSelect10_Name, TriggerSelect10_Label,
                                         NormalisableRange<float>(0, 9,1),
                                         TriggerSelectNumber10,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(TriggerSelect10_Id, &TriggerSelect10Listener);
    
    valueTreeState.createAndAddParameter(mainEqMode_Id, mainEqMode_Name, mainEqMode_Label,
                                         NormalisableRange<float>(0, 2,1),
                                         mainEqModevalue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainEqMode_Id, &mainEqModeListener);
    
    
    
    valueTreeState.createAndAddParameter(mainEqBassV_Id, mainEqBassV_Name, mainEqBassV_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.001f),
                                         mainEqBassVValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainEqBassV_Id, &mainEqBassVListener);
    
  
    valueTreeState.createAndAddParameter(mainEqMidV_Id, mainEqMidV_Name, mainEqMidV_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.001f),
                                         mainEqMidVValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainEqMidV_Id, &mainEqMidVListener);

    
    valueTreeState.createAndAddParameter(mainEqHighV_Id, mainEqHighV_Name, mainEqHighV_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.001f),
                                         mainEqHighVValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainEqHighV_Id, &mainEqHighVListener);
    
    valueTreeState.createAndAddParameter(mainLimiterMode_Id, mainLimiterMode_Name, mainLimiterMode_Label,
                                         NormalisableRange<float>(0.0f,3.0f,1.0f),
                                         mainLimiterModeValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLimiterMode_Id, &mainLimiterModeListener);
    
    valueTreeState.createAndAddParameter(mainBitCrushMode_Id, mainBitCrushMode_Name, mainBitCrushMode_Label,
                                         NormalisableRange<float>(0.0f,3.0f,1.0f),
                                         mainBitCrushModeValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainBitCrushMode_Id, &mainBitCrushModeListener);
    
    valueTreeState.createAndAddParameter(mainBitCrushBits_Id, mainBitCrushBits_Name, mainBitCrushBits_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.000000123f),
                                         mainBitCrushBitsValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainBitCrushBits_Id, &mainBitCrushBitsListener);
    
    valueTreeState.createAndAddParameter(mainBitCrushMix_Id, mainBitCrushMix_Name, mainBitCrushMix_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.0000001f),
                                         mainBitCrushMixValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainBitCrushMix_Id, &mainBitCrushMixListener);
    
    valueTreeState.createAndAddParameter(mainBitCrushDry_Id, mainBitCrushDry_Name, mainBitCrushDry_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.0000001f),
                                         mainBitCrushDryValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainBitCrushDry_Id, &mainBitCrushDryListener);
    
    
    
    
    
    valueTreeState.createAndAddParameter(mainLimiterThrsh_Id, mainLimiterThrsh_Name, mainLimiterThrsh_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         mainLimiterThrshValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLimiterThrsh_Id, &mainLimiterThrshListener);
    
    valueTreeState.createAndAddParameter(mainLimiterGain_Id, mainLimiterGain_Name, mainLimiterGain_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         mainLimiterGainValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(mainLimiterGain_Id, &mainLimiterGainListener);
    
   
//--------------------------------------------1------------------------------------------------
    
    
    // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp1Synthwaveform_Id, Sp1Synthwaveform_Name, Sp1Synthwaveform_Label,
        NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
        (float)waveform.getIndex(),
        SynthWaveform::floatToText,
        SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp1Synthwaveform_Id, &Sp1SynthwaveformListener);

    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp1SynthmidiNoteNumber_Id, Sp1SynthmidiNoteNumber_Name, Sp1SynthmidiNoteNumber_Label,
        NormalisableRange<float>(0.0f, 127.0f, 1.0f),
        (float)Sp1synthmidiNoteNumber,
        [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp1SynthmidiNoteNumber_Id, &Sp1SynthnoteNumberListener);

    valueTreeState.createAndAddParameter(Sp1SynthmidiNoteNumberMod_Id, Sp1SynthmidiNoteNumberMod_Name, Sp1SynthmidiNoteNumberMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp1synthmidiNoteNumberMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1SynthmidiNoteNumberMod_Id, &Sp1SynthnoteNumberModListener);

    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp1Synthlevel_Id, Sp1Synthlevel_Name, Sp1Synthlevel_Label,
        NormalisableRange<float>(0.0f, 1.0f),
                                         Sp1synthlevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Synthlevel_Id, &Sp1SynthlevelListener);
    
    valueTreeState.createAndAddParameter(Sp1SynthlevelMod_Id, Sp1SynthlevelMod_Name, Sp1SynthlevelMod_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         Sp1synthlevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1SynthlevelMod_Id, &Sp1SynthlevelModListener);
    
    valueTreeState.createAndAddParameter(Sp1SynthAttack_Id, Sp1SynthAttack_Name, Sp1SynthAttack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp1SynthAttackValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1SynthAttack_Id, &Sp1SynthAttackListener);
    
    valueTreeState.createAndAddParameter(Sp1SynthRelease_Id, Sp1SynthRelease_Name, Sp1SynthRelease_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp1SynthReleaseValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1SynthRelease_Id, &Sp1SynthReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp1SynthReleaseMod_Id, Sp1SynthReleaseMod_Name, Sp1SynthReleaseMod_Label,
                                        NormalisableRange<float>(0.0f, 1.0f),
                                        Sp1SynthReleaseModValue,
                                        [](float value) { return String(value); },
                                        [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1SynthReleaseMod_Id, &Sp1SynthReleaseModListener);

    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp1StepperOnOff_Id, Sp1StepperOnOff_Name, Sp1StepperOnOff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        StepperOnOffValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp1StepperOnOff_Id, &Sp1StepperOnOffListener);
    
    valueTreeState.createAndAddParameter(Sp1EngineMode_Id, Sp1EngineMode_Name, Sp1EngineMode_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp1EngineMode ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
        valueTreeState.addParameterListener(Sp1EngineMode_Id, &Sp1EngineModeListener);


    valueTreeState.createAndAddParameter(Sp1PlayMode_Id, Sp1PlayMode_Name, Sp1PlayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
                                         (float)SpPlayMode.getIndex(),
                                         SamplePlayMode::floatToText,
                                         SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp1PlayMode_Id, &Sp1PlayModusListener);
    
    valueTreeState.createAndAddParameter(Sp1PlayTimeMode_Id, Sp1PlayTimeMode_Name, Sp1PlayTimeMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
                                         (float)Sp1PlayTimeMode.getIndex(),
                                         TimeDivMode::floatToText,
                                         TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp1PlayTimeMode_Id, &Sp1PlayTimeModusListener);
    
    
    valueTreeState.createAndAddParameter(Sp1WaveNr_Id, Sp1WaveNr_Name, Sp1WaveNr_Label,
                                         NormalisableRange<float>(0.0f, 71.0f, 1),
                                         Sp1Wnr,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1WaveNr_Id, &Sp1WaveNrListener);
   
    valueTreeState.createAndAddParameter(Sp1PatternStateParas_Id, Sp1PatternStateParas_Name, Sp1PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp1PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
                                   
    valueTreeState.addParameterListener(Sp1PatternStateParas_Id, &Sp1PatternStateParasListener);
    
    
    valueTreeState.createAndAddParameter(Sp1Gate_Id, Sp1Gate_Name, Sp1Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.01f),
                                         Sp1Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Gate_Id, &Sp1GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp1Pitch_Id, Sp1Pitch_Name, Sp1Pitch_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp1Pitch,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Pitch_Id, &Sp1PitchListener);
    
    valueTreeState.createAndAddParameter(Sp1PitchMod_Id, Sp1PitchMod_Name, Sp1PitchMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp1PitchMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1PitchMod_Id, &Sp1PitchModListener);
    
    valueTreeState.createAndAddParameter(Sp1StartSample_Id, Sp1StartSample_Name, Sp1StartSample_Label,
                                         NormalisableRange<float>(0.0f, 0.5f, 0.01f),
                                         Sp1StartSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1StartSample_Id, &Sp1StartListener);
    
    
    valueTreeState.createAndAddParameter(Sp1EndSample_Id, Sp1EndSample_Name, Sp1EndSample_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp1EndSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1EndSample_Id, &Sp1EndListener);
    
    valueTreeState.createAndAddParameter(Sp1Volume_Id, Sp1Volume_Name, Sp1Volume_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp1Volume,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Volume_Id, &Sp1VolumeListener);
    
    valueTreeState.createAndAddParameter(Sp1VolumeMod_Id, Sp1VolumeMod_Name, Sp1VolumeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1VolumeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1VolumeMod_Id, &Sp1VolumeModListener);
    
    valueTreeState.createAndAddParameter(Sp1Attack_Id, Sp1Attack_Name, Sp1Attack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1Attack,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Attack_Id, &Sp1AttackListener);
    
    valueTreeState.createAndAddParameter(Sp1Release_Id, Sp1Release_Name, Sp1Release_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1Release,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Release_Id, &Sp1ReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp1ReleaseMod_Id, Sp1ReleaseMod_Name, Sp1ReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1ReleaseMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1ReleaseMod_Id, &Sp1ReleaseModListener);
    
    valueTreeState.createAndAddParameter(Sp1EnvMode_Id, Sp1EnvMode_Name, Sp1EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp1EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp1EnvMode_Id, &Sp1EnvModeListener);


    valueTreeState.createAndAddParameter(Sp1EnvModeFix_Id, Sp1EnvModeFix_Name, Sp1EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp1EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp1EnvModeFix_Id, &Sp1EnvModeFixListener);



    valueTreeState.createAndAddParameter(Sp1EMod_Id, Sp1EMod_Name, Sp1EMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp1Emod ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp1EMod_Id, &Sp1EmodListener);

    
    valueTreeState.createAndAddParameter(Sp1Cutoff_Id, Sp1Cutoff_Name, Sp1Cutoff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp1Cutoff,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Cutoff_Id, &Sp1CutoffListener);

    valueTreeState.createAndAddParameter(Sp1CutoffMod_Id, Sp1CutoffMod_Name, Sp1CutoffMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1CutoffMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1CutoffMod_Id, &Sp1CutoffListenerMod);
    
    valueTreeState.createAndAddParameter(Sp1Resonance_Id, Sp1Resonance_Name, Sp1Resonance_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp1Resonance,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Resonance_Id, &Sp1ResonanceListener);

    
    valueTreeState.createAndAddParameter(Sp1FilterMode_Id, Sp1FilterMode_Name, Sp1FilterMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
                                         (float)Sp1FilterMode.getIndex(),
                                         FilterMode::floatToText,
                                         FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp1FilterMode_Id, &Sp1FilterModusListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp1DelayMode_Id, Sp1DelayMode_Name, Sp1DelayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
                                         (float)Sp1DelayMode.getIndex(),
                                         DelayMode::floatToText,
                                         DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp1DelayMode_Id, &Sp1DelayModeListener);
    
    valueTreeState.createAndAddParameter(Sp1DelayTime_Id, Sp1DelayTime_Name, Sp1DelayTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp1DelayTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayTime_Id, &Sp1DelayTimeListener);

    valueTreeState.createAndAddParameter(Sp1DelayFeed_Id, Sp1DelayFeed_Name, Sp1DelayFeed_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp1DelayFeed,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayFeed_Id, &Sp1DelayFeedListener);
    
    valueTreeState.createAndAddParameter(Sp1DelayMix_Id, Sp1DelayMix_Name, Sp1DelayMix_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayMix,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayMix_Id, &Sp1DelayMixListener);
    
    valueTreeState.createAndAddParameter(Sp1DelayLevel_Id, Sp1DelayLevel_Name, Sp1DelayLevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayLevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayLevel_Id, &Sp1DelayLevelListener);
    
    valueTreeState.createAndAddParameter(Sp1DelayTimeMod_Id, Sp1DelayTimeMod_Name, Sp1DelayTimeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayTimeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayTimeMod_Id, &Sp1DelayTimeListenerMod);
    
    valueTreeState.createAndAddParameter(Sp1DelayFeedMod_Id, Sp1DelayFeedMod_Name, Sp1DelayFeedMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayFeedMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayFeedMod_Id, &Sp1DelayFeedListenerMod);
    
    valueTreeState.createAndAddParameter(Sp1DelayMixMod_Id, Sp1DelayMixMod_Name, Sp1DelayMixMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayMixMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayMixMod_Id, &Sp1DelayMixListenerMod);
    
    valueTreeState.createAndAddParameter(Sp1DelayLevelMod_Id, Sp1DelayLevelMod_Name, Sp1DelayLevelMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1DelayLevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1DelayLevelMod_Id, &Sp1DelayLevelListenerMod);
    
    
  
    
    
    //---------------------------lfo-------------------------
    
    
    valueTreeState.createAndAddParameter(Sp1LfoMode_Id, Sp1LfoMode_Name, Sp1LfoMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
                                         (float)Sp1LfoMode.getIndex(),
                                         LfoMode::floatToText,
                                         LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp1LfoMode_Id, &Sp1LfoModeListener);
    
    valueTreeState.createAndAddParameter(Sp1LfoRtr_Id, Sp1LfoRtr_Name, Sp1LfoRtr_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
                                         (float)Sp1LfoRtrMode.getIndex(),
                                         LfoRtrMode::floatToText,
                                         LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp1LfoRtr_Id, &Sp1LfoRtrModeListener);
    
    valueTreeState.createAndAddParameter(Sp1LfoTime_Id, Sp1LfoTime_Name, Sp1LfoTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1LfoTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1LfoTime_Id, &Sp1LfoTimeListener);
    
    valueTreeState.createAndAddParameter(Sp1LfoAmp_Id, Sp1LfoAmp_Name, Sp1LfoAmp_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp1LfoAmp,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1LfoAmp_Id, &Sp1LfoAmpListener);
    
    //**********************************************************************************************
    //--------------------------------------------2------------------------------------------------
    //*************************************************************************************************
    
    // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp2Synthwaveform_Id, Sp2Synthwaveform_Name, Sp2Synthwaveform_Label,
                                         NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
                                         (float)Sp2waveform.getIndex(),
                                         SynthWaveform::floatToText,
                                         SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp2Synthwaveform_Id, &Sp2SynthwaveformListener);
    
    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp2SynthmidiNoteNumber_Id, Sp2SynthmidiNoteNumber_Name, Sp2SynthmidiNoteNumber_Label,
                                         NormalisableRange<float>(0.0f, 127.0f, 1.0f),
                                         (float)Sp2synthmidiNoteNumber,
                                         [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
                                         [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp2SynthmidiNoteNumber_Id, &Sp2SynthnoteNumberListener);
    
    valueTreeState.createAndAddParameter(Sp2SynthmidiNoteNumberMod_Id, Sp2SynthmidiNoteNumberMod_Name, Sp2SynthmidiNoteNumberMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp2synthmidiNoteNumberMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2SynthmidiNoteNumberMod_Id, &Sp2SynthnoteNumberModListener);
    
    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp2Synthlevel_Id, Sp2Synthlevel_Name, Sp2Synthlevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp2synthlevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Synthlevel_Id, &Sp2SynthlevelListener);
    
    valueTreeState.createAndAddParameter(Sp2SynthlevelMod_Id, Sp2SynthlevelMod_Name, Sp2SynthlevelMod_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         Sp2synthlevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2SynthlevelMod_Id, &Sp2SynthlevelModListener);
    
    valueTreeState.createAndAddParameter(Sp2SynthAttack_Id, Sp2SynthAttack_Name, Sp2SynthAttack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp2SynthAttackValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2SynthAttack_Id, &Sp2SynthAttackListener);
    
    valueTreeState.createAndAddParameter(Sp2SynthRelease_Id, Sp2SynthRelease_Name, Sp2SynthRelease_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp2SynthReleaseValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2SynthRelease_Id, &Sp2SynthReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp2SynthReleaseMod_Id, Sp2SynthReleaseMod_Name, Sp2SynthReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp2SynthReleaseModValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2SynthReleaseMod_Id, &Sp2SynthReleaseModListener);
    
    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp2StepperOnOff_Id, Sp2StepperOnOff_Name, Sp2StepperOnOff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp2StepperOnOffValue ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp2StepperOnOff_Id, &Sp2StepperOnOffListener);
    
    valueTreeState.createAndAddParameter(Sp2EngineMode_Id, Sp2EngineMode_Name, Sp2EngineMode_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp2EngineMode ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp2EngineMode_Id, &Sp2EngineModeListener);
    
    
    valueTreeState.createAndAddParameter(Sp2PlayMode_Id, Sp2PlayMode_Name, Sp2PlayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
                                         (float)Sp2PlayMode.getIndex(),
                                         SamplePlayMode::floatToText,
                                         SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp2PlayMode_Id, &Sp2PlayModusListener);
    
    valueTreeState.createAndAddParameter(Sp2PlayTimeMode_Id, Sp2PlayTimeMode_Name, Sp2PlayTimeMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
                                         (float)Sp2PlayTimeMode.getIndex(),
                                         TimeDivMode::floatToText,
                                         TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp2PlayTimeMode_Id, &Sp2PlayTimeModusListener);
    
    
    valueTreeState.createAndAddParameter(Sp2WaveNr_Id, Sp2WaveNr_Name, Sp2WaveNr_Label,
                                         NormalisableRange<float>(0.0f, 71.0f, 1),
                                         Sp2Wnr,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2WaveNr_Id, &Sp2WaveNrListener);
    
    valueTreeState.createAndAddParameter(Sp2PatternStateParas_Id, Sp2PatternStateParas_Name, Sp2PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp2PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp2PatternStateParas_Id, &Sp2PatternStateParasListener);
    
    valueTreeState.createAndAddParameter(Sp2Gate_Id, Sp2Gate_Name, Sp2Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.001f),
                                         Sp2Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Gate_Id, &Sp2GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp2Pitch_Id, Sp2Pitch_Name, Sp2Pitch_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2Pitch,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Pitch_Id, &Sp2PitchListener);
    
    valueTreeState.createAndAddParameter(Sp2PitchMod_Id, Sp2PitchMod_Name, Sp2PitchMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp2PitchMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2PitchMod_Id, &Sp2PitchModListener);
    
    valueTreeState.createAndAddParameter(Sp2StartSample_Id, Sp2StartSample_Name, Sp2StartSample_Label,
                                         NormalisableRange<float>(0.0f, 0.5f, 0.001f),
                                         Sp2StartSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2StartSample_Id, &Sp2StartListener);
    
    
    valueTreeState.createAndAddParameter(Sp2EndSample_Id, Sp2EndSample_Name, Sp2EndSample_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2EndSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2EndSample_Id, &Sp2EndListener);
    
    valueTreeState.createAndAddParameter(Sp2Volume_Id, Sp2Volume_Name, Sp2Volume_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2Volume,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Volume_Id, &Sp2VolumeListener);
    
    valueTreeState.createAndAddParameter(Sp2VolumeMod_Id, Sp2VolumeMod_Name, Sp2VolumeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2VolumeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2VolumeMod_Id, &Sp2VolumeModListener);
    
    valueTreeState.createAndAddParameter(Sp2Attack_Id, Sp2Attack_Name, Sp2Attack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2Attack,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Attack_Id, &Sp2AttackListener);
    
    valueTreeState.createAndAddParameter(Sp2Release_Id, Sp2Release_Name, Sp2Release_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2Release,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Release_Id, &Sp2ReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp2EnvMode_Id, Sp2EnvMode_Name, Sp2EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp2EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp2EnvMode_Id, &Sp2EnvModeListener);

    valueTreeState.createAndAddParameter(Sp2EnvModeFix_Id, Sp2EnvModeFix_Name, Sp2EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp2EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp2EnvModeFix_Id, &Sp2EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp2ReleaseMod_Id, Sp2ReleaseMod_Name, Sp2ReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2ReleaseMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2ReleaseMod_Id, &Sp2ReleaseModListener);
    
    valueTreeState.createAndAddParameter(Sp2EMod_Id, Sp2EMod_Name, Sp2EMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp2Emod ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp2EMod_Id, &Sp2EmodListener);
    
    
    valueTreeState.createAndAddParameter(Sp2Cutoff_Id, Sp2Cutoff_Name, Sp2Cutoff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp2Cutoff,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Cutoff_Id, &Sp2CutoffListener);
    
    valueTreeState.createAndAddParameter(Sp2CutoffMod_Id, Sp2CutoffMod_Name, Sp2CutoffMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2CutoffMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2CutoffMod_Id, &Sp2CutoffListenerMod);
    
    valueTreeState.createAndAddParameter(Sp2Resonance_Id, Sp2Resonance_Name, Sp2Resonance_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp2Resonance,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Resonance_Id, &Sp2ResonanceListener);
    
    
    valueTreeState.createAndAddParameter(Sp2FilterMode_Id, Sp2FilterMode_Name, Sp2FilterMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
                                         (float)Sp2FilterMode.getIndex(),
                                         FilterMode::floatToText,
                                         FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp2FilterMode_Id, &Sp2FilterModusListener);
    
   
    
    valueTreeState.createAndAddParameter(Sp2DelayMode_Id, Sp2DelayMode_Name, Sp2DelayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
                                         (float)Sp2DelayMode.getIndex(),
                                         DelayMode::floatToText,
                                         DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp2DelayMode_Id, &Sp2DelayModeListener);
    
    valueTreeState.createAndAddParameter(Sp2DelayTime_Id, Sp2DelayTime_Name, Sp2DelayTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp2DelayTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayTime_Id, &Sp2DelayTimeListener);
    
    valueTreeState.createAndAddParameter(Sp2DelayFeed_Id, Sp2DelayFeed_Name, Sp2DelayFeed_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp2DelayFeed,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayFeed_Id, &Sp2DelayFeedListener);
    
    valueTreeState.createAndAddParameter(Sp2DelayMix_Id, Sp2DelayMix_Name, Sp2DelayMix_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayMix,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayMix_Id, &Sp2DelayMixListener);
    
    valueTreeState.createAndAddParameter(Sp2DelayLevel_Id, Sp2DelayLevel_Name, Sp2DelayLevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayLevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayLevel_Id, &Sp2DelayLevelListener);
    
    valueTreeState.createAndAddParameter(Sp2DelayTimeMod_Id, Sp2DelayTimeMod_Name, Sp2DelayTimeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayTimeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayTimeMod_Id, &Sp2DelayTimeListenerMod);
    
    valueTreeState.createAndAddParameter(Sp2DelayFeedMod_Id, Sp2DelayFeedMod_Name, Sp2DelayFeedMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayFeedMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayFeedMod_Id, &Sp2DelayFeedListenerMod);
    
    valueTreeState.createAndAddParameter(Sp2DelayMixMod_Id, Sp2DelayMixMod_Name, Sp2DelayMixMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayMixMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayMixMod_Id, &Sp2DelayMixListenerMod);
    
    valueTreeState.createAndAddParameter(Sp2DelayLevelMod_Id, Sp2DelayLevelMod_Name, Sp2DelayLevelMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2DelayLevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2DelayLevelMod_Id, &Sp2DelayLevelListenerMod);
    
    
    
    
    
    //---------------------------lfo-------------------------
    
    
    valueTreeState.createAndAddParameter(Sp2LfoMode_Id, Sp2LfoMode_Name, Sp2LfoMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
                                         (float)Sp2LfoMode.getIndex(),
                                         LfoMode::floatToText,
                                         LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp2LfoMode_Id, &Sp2LfoModeListener);
    
    valueTreeState.createAndAddParameter(Sp2LfoRtr_Id, Sp2LfoRtr_Name, Sp2LfoRtr_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
                                         (float)Sp2LfoRtrMode.getIndex(),
                                         LfoRtrMode::floatToText,
                                         LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp2LfoRtr_Id, &Sp2LfoRtrModeListener);
    
    valueTreeState.createAndAddParameter(Sp2LfoTime_Id, Sp2LfoTime_Name, Sp2LfoTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2LfoTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2LfoTime_Id, &Sp2LfoTimeListener);
    
    valueTreeState.createAndAddParameter(Sp2LfoAmp_Id, Sp2LfoAmp_Name, Sp2LfoAmp_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp2LfoAmp,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2LfoAmp_Id, &Sp2LfoAmpListener);

    //************************************************************************************************
    //--------------------------------------------3------------------------------------------------
    //************************************************************************************************
    
    // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp3Synthwaveform_Id, Sp3Synthwaveform_Name, Sp3Synthwaveform_Label,
                                         NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
                                         (float)Sp3waveform.getIndex(),
                                         SynthWaveform::floatToText,
                                         SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp3Synthwaveform_Id, &Sp3SynthwaveformListener);
    
    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp3SynthmidiNoteNumber_Id, Sp3SynthmidiNoteNumber_Name, Sp3SynthmidiNoteNumber_Label,
                                         NormalisableRange<float>(0.0f, 127.0f, 1.0f),
                                         (float)Sp3synthmidiNoteNumber,
                                         [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
                                         [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp3SynthmidiNoteNumber_Id, &Sp3SynthnoteNumberListener);
    
    valueTreeState.createAndAddParameter(Sp3SynthmidiNoteNumberMod_Id, Sp3SynthmidiNoteNumberMod_Name, Sp3SynthmidiNoteNumberMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp3synthmidiNoteNumberMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3SynthmidiNoteNumberMod_Id, &Sp3SynthnoteNumberModListener);
    
    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp3Synthlevel_Id, Sp3Synthlevel_Name, Sp3Synthlevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp3synthlevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Synthlevel_Id, &Sp3SynthlevelListener);
    
    valueTreeState.createAndAddParameter(Sp3SynthlevelMod_Id, Sp3SynthlevelMod_Name, Sp3SynthlevelMod_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         Sp3synthlevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3SynthlevelMod_Id, &Sp3SynthlevelModListener);
    
    valueTreeState.createAndAddParameter(Sp3SynthAttack_Id, Sp3SynthAttack_Name, Sp3SynthAttack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp3SynthAttackValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3SynthAttack_Id, &Sp3SynthAttackListener);
    
    valueTreeState.createAndAddParameter(Sp3SynthRelease_Id, Sp3SynthRelease_Name, Sp3SynthRelease_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp3SynthReleaseValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3SynthRelease_Id, &Sp3SynthReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp3SynthReleaseMod_Id, Sp3SynthReleaseMod_Name, Sp3SynthReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp3SynthReleaseModValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3SynthReleaseMod_Id, &Sp3SynthReleaseModListener);
    
    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp3StepperOnOff_Id, Sp3StepperOnOff_Name, Sp3StepperOnOff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp3StepperOnOffValue ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp3StepperOnOff_Id, &Sp3StepperOnOffListener);
    
    valueTreeState.createAndAddParameter(Sp3EngineMode_Id, Sp3EngineMode_Name, Sp3EngineMode_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp3EngineMode ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp3EngineMode_Id, &Sp3EngineModeListener);
    
    
    valueTreeState.createAndAddParameter(Sp3PlayMode_Id, Sp3PlayMode_Name, Sp3PlayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
                                         (float)Sp3PlayMode.getIndex(),
                                         SamplePlayMode::floatToText,
                                         SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp3PlayMode_Id, &Sp3PlayModusListener);
    
    valueTreeState.createAndAddParameter(Sp3PlayTimeMode_Id, Sp3PlayTimeMode_Name, Sp3PlayTimeMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
                                         (float)Sp3PlayTimeMode.getIndex(),
                                         TimeDivMode::floatToText,
                                         TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp3PlayTimeMode_Id, &Sp3PlayTimeModusListener);
    
    
    valueTreeState.createAndAddParameter(Sp3WaveNr_Id, Sp3WaveNr_Name, Sp3WaveNr_Label,
                                         NormalisableRange<float>(0.0f, 72.0f, 1),
                                         Sp3Wnr,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3WaveNr_Id, &Sp3WaveNrListener);
    
    valueTreeState.createAndAddParameter(Sp3PatternStateParas_Id, Sp3PatternStateParas_Name, Sp3PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp3PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp3PatternStateParas_Id, &Sp3PatternStateParasListener);
    
    valueTreeState.createAndAddParameter(Sp3Gate_Id, Sp3Gate_Name, Sp3Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.001f),
                                         Sp3Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Gate_Id, &Sp3GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp3Pitch_Id, Sp3Pitch_Name, Sp3Pitch_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3Pitch,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Pitch_Id, &Sp3PitchListener);
    
    valueTreeState.createAndAddParameter(Sp3PitchMod_Id, Sp3PitchMod_Name, Sp3PitchMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp3PitchMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3PitchMod_Id, &Sp3PitchModListener);
    
    valueTreeState.createAndAddParameter(Sp3StartSample_Id, Sp3StartSample_Name, Sp3StartSample_Label,
                                         NormalisableRange<float>(0.0f, 0.5f, 0.001f),
                                         Sp3StartSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3StartSample_Id, &Sp3StartListener);
    
    
    valueTreeState.createAndAddParameter(Sp3EndSample_Id, Sp3EndSample_Name, Sp3EndSample_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3EndSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3EndSample_Id, &Sp3EndListener);
    
    valueTreeState.createAndAddParameter(Sp3Volume_Id, Sp3Volume_Name, Sp3Volume_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3Volume,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Volume_Id, &Sp3VolumeListener);
    
    valueTreeState.createAndAddParameter(Sp3VolumeMod_Id, Sp3VolumeMod_Name, Sp3VolumeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3VolumeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3VolumeMod_Id, &Sp3VolumeModListener);
    
    valueTreeState.createAndAddParameter(Sp3Attack_Id, Sp3Attack_Name, Sp3Attack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3Attack,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Attack_Id, &Sp3AttackListener);
    
    valueTreeState.createAndAddParameter(Sp3Release_Id, Sp3Release_Name, Sp3Release_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3Release,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Release_Id, &Sp3ReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp3ReleaseMod_Id, Sp3ReleaseMod_Name, Sp3ReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3ReleaseMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3ReleaseMod_Id, &Sp3ReleaseModListener);
    
    valueTreeState.createAndAddParameter(Sp3EnvMode_Id, Sp3EnvMode_Name, Sp3EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp3EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp3EnvMode_Id, &Sp3EnvModeListener);

    valueTreeState.createAndAddParameter(Sp3EnvModeFix_Id, Sp3EnvModeFix_Name, Sp3EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp3EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp3EnvModeFix_Id, &Sp3EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp3EMod_Id, Sp3EMod_Name, Sp3EMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp3Emod ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp3EMod_Id, &Sp3EmodListener);
    
    
    valueTreeState.createAndAddParameter(Sp3Cutoff_Id, Sp3Cutoff_Name, Sp3Cutoff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp3Cutoff,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Cutoff_Id, &Sp3CutoffListener);
    
    valueTreeState.createAndAddParameter(Sp3CutoffMod_Id, Sp3CutoffMod_Name, Sp3CutoffMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3CutoffMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3CutoffMod_Id, &Sp3CutoffListenerMod);
    
    valueTreeState.createAndAddParameter(Sp3Resonance_Id, Sp3Resonance_Name, Sp3Resonance_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp3Resonance,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Resonance_Id, &Sp3ResonanceListener);
    
    
    valueTreeState.createAndAddParameter(Sp3FilterMode_Id, Sp3FilterMode_Name, Sp3FilterMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
                                         (float)Sp3FilterMode.getIndex(),
                                         FilterMode::floatToText,
                                         FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp3FilterMode_Id, &Sp3FilterModusListener);
    
   
    
    valueTreeState.createAndAddParameter(Sp3DelayMode_Id, Sp3DelayMode_Name, Sp3DelayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
                                         (float)Sp3DelayMode.getIndex(),
                                         DelayMode::floatToText,
                                         DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp3DelayMode_Id, &Sp3DelayModeListener);
    
    valueTreeState.createAndAddParameter(Sp3DelayTime_Id, Sp3DelayTime_Name, Sp3DelayTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp3DelayTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayTime_Id, &Sp3DelayTimeListener);
    
    valueTreeState.createAndAddParameter(Sp3DelayFeed_Id, Sp3DelayFeed_Name, Sp3DelayFeed_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp3DelayFeed,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayFeed_Id, &Sp3DelayFeedListener);
    
    valueTreeState.createAndAddParameter(Sp3DelayMix_Id, Sp3DelayMix_Name, Sp3DelayMix_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayMix,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayMix_Id, &Sp3DelayMixListener);
    
    valueTreeState.createAndAddParameter(Sp3DelayLevel_Id, Sp3DelayLevel_Name, Sp3DelayLevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayLevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayLevel_Id, &Sp3DelayLevelListener);
    
    valueTreeState.createAndAddParameter(Sp3DelayTimeMod_Id, Sp3DelayTimeMod_Name, Sp3DelayTimeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayTimeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayTimeMod_Id, &Sp3DelayTimeListenerMod);
    
    valueTreeState.createAndAddParameter(Sp3DelayFeedMod_Id, Sp3DelayFeedMod_Name, Sp3DelayFeedMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayFeedMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayFeedMod_Id, &Sp3DelayFeedListenerMod);
    
    valueTreeState.createAndAddParameter(Sp3DelayMixMod_Id, Sp3DelayMixMod_Name, Sp3DelayMixMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayMixMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayMixMod_Id, &Sp3DelayMixListenerMod);
    
    valueTreeState.createAndAddParameter(Sp3DelayLevelMod_Id, Sp3DelayLevelMod_Name, Sp3DelayLevelMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3DelayLevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3DelayLevelMod_Id, &Sp3DelayLevelListenerMod);
    
    
   
    
    
    //---------------------------lfo-------------------------
    
    
    valueTreeState.createAndAddParameter(Sp3LfoMode_Id, Sp3LfoMode_Name, Sp3LfoMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
                                         (float)Sp3LfoMode.getIndex(),
                                         LfoMode::floatToText,
                                         LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp3LfoMode_Id, &Sp3LfoModeListener);
    
    valueTreeState.createAndAddParameter(Sp3LfoRtr_Id, Sp3LfoRtr_Name, Sp3LfoRtr_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
                                         (float)Sp3LfoRtrMode.getIndex(),
                                         LfoRtrMode::floatToText,
                                         LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp3LfoRtr_Id, &Sp3LfoRtrModeListener);
    
    valueTreeState.createAndAddParameter(Sp3LfoTime_Id, Sp3LfoTime_Name, Sp3LfoTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3LfoTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3LfoTime_Id, &Sp3LfoTimeListener);
    
    valueTreeState.createAndAddParameter(Sp3LfoAmp_Id, Sp3LfoAmp_Name, Sp3LfoAmp_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp3LfoAmp,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3LfoAmp_Id, &Sp3LfoAmpListener);
    
    //*************************************************************************************************
    //--------------------------------------------4------------------------------------------------
    //**************************************************************************************************

    
    // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp4Synthwaveform_Id, Sp4Synthwaveform_Name, Sp4Synthwaveform_Label,
                                         NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
                                         (float)Sp4waveform.getIndex(),
                                         SynthWaveform::floatToText,
                                         SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp4Synthwaveform_Id, &Sp4SynthwaveformListener);
    
    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp4SynthmidiNoteNumber_Id, Sp4SynthmidiNoteNumber_Name, Sp4SynthmidiNoteNumber_Label,
                                         NormalisableRange<float>(0.0f, 127.0f, 1.0f),
                                         (float)Sp4synthmidiNoteNumber,
                                         [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
                                         [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp4SynthmidiNoteNumber_Id, &Sp4SynthnoteNumberListener);
    
    valueTreeState.createAndAddParameter(Sp4SynthmidiNoteNumberMod_Id, Sp4SynthmidiNoteNumberMod_Name, Sp4SynthmidiNoteNumberMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp4synthmidiNoteNumberMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4SynthmidiNoteNumberMod_Id, &Sp4SynthnoteNumberModListener);
    
    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp4Synthlevel_Id, Sp4Synthlevel_Name, Sp4Synthlevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp4synthlevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Synthlevel_Id, &Sp4SynthlevelListener);
    
    valueTreeState.createAndAddParameter(Sp4SynthlevelMod_Id, Sp4SynthlevelMod_Name, Sp4SynthlevelMod_Label,
                                         NormalisableRange<float>(0.0f,1.0f,0.01f),
                                         Sp4synthlevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4SynthlevelMod_Id, &Sp4SynthlevelModListener);
    
    valueTreeState.createAndAddParameter(Sp4SynthAttack_Id, Sp4SynthAttack_Name, Sp4SynthAttack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp4SynthAttackValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4SynthAttack_Id, &Sp4SynthAttackListener);
    
    valueTreeState.createAndAddParameter(Sp4SynthRelease_Id, Sp4SynthRelease_Name, Sp4SynthRelease_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp4SynthReleaseValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4SynthRelease_Id, &Sp4SynthReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp4SynthReleaseMod_Id, Sp4SynthReleaseMod_Name, Sp4SynthReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f),
                                         Sp4SynthReleaseModValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4SynthReleaseMod_Id, &Sp4SynthReleaseModListener);
    
    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp4StepperOnOff_Id, Sp4StepperOnOff_Name, Sp4StepperOnOff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp4StepperOnOffValue ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp4StepperOnOff_Id, &Sp4StepperOnOffListener);
    
    valueTreeState.createAndAddParameter(Sp4EngineMode_Id, Sp4EngineMode_Name, Sp4EngineMode_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp4EngineMode ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp4EngineMode_Id, &Sp4EngineModeListener);
    
    
    valueTreeState.createAndAddParameter(Sp4PlayMode_Id, Sp4PlayMode_Name, Sp4PlayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
                                         (float)Sp4PlayMode.getIndex(),
                                         SamplePlayMode::floatToText,
                                         SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp4PlayMode_Id, &Sp4PlayModusListener);
    
    valueTreeState.createAndAddParameter(Sp4PlayTimeMode_Id, Sp4PlayTimeMode_Name, Sp4PlayTimeMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
                                         (float)Sp4PlayTimeMode.getIndex(),
                                         TimeDivMode::floatToText,
                                         TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp4PlayTimeMode_Id, &Sp4PlayTimeModusListener);
    
    
    valueTreeState.createAndAddParameter(Sp4WaveNr_Id, Sp4WaveNr_Name, Sp4WaveNr_Label,
                                         NormalisableRange<float>(0.0f, 72.0f, 1),
                                         Sp4Wnr,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4WaveNr_Id, &Sp4WaveNrListener);
    
    valueTreeState.createAndAddParameter(Sp4PatternStateParas_Id, Sp4PatternStateParas_Name, Sp4PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp4PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp4PatternStateParas_Id, &Sp4PatternStateParasListener);
    
    valueTreeState.createAndAddParameter(Sp4EnvModeFix_Id, Sp4EnvModeFix_Name, Sp4EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp4EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp4EnvModeFix_Id, &Sp4EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp4Gate_Id, Sp4Gate_Name, Sp4Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.001f),
                                         Sp4Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Gate_Id, &Sp4GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp4Pitch_Id, Sp4Pitch_Name, Sp4Pitch_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4Pitch,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Pitch_Id, &Sp4PitchListener);
    
    valueTreeState.createAndAddParameter(Sp4PitchMod_Id, Sp4PitchMod_Name, Sp4PitchMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.01f),
                                         Sp4PitchMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4PitchMod_Id, &Sp4PitchModListener);
    
    valueTreeState.createAndAddParameter(Sp4StartSample_Id, Sp4StartSample_Name, Sp4StartSample_Label,
                                         NormalisableRange<float>(0.0f, 0.5f, 0.001f),
                                         Sp4StartSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4StartSample_Id, &Sp4StartListener);
    
    
    valueTreeState.createAndAddParameter(Sp4EndSample_Id, Sp4EndSample_Name, Sp4EndSample_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4EndSampel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4EndSample_Id, &Sp4EndListener);
    
    valueTreeState.createAndAddParameter(Sp4Volume_Id, Sp4Volume_Name, Sp4Volume_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4Volume,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Volume_Id, &Sp4VolumeListener);
    
    valueTreeState.createAndAddParameter(Sp4VolumeMod_Id, Sp4VolumeMod_Name, Sp4VolumeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4VolumeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4VolumeMod_Id, &Sp4VolumeModListener);
    
    valueTreeState.createAndAddParameter(Sp4Attack_Id, Sp4Attack_Name, Sp4Attack_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4Attack,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Attack_Id, &Sp4AttackListener);
    
    valueTreeState.createAndAddParameter(Sp4Release_Id, Sp4Release_Name, Sp4Release_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4Release,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Release_Id, &Sp4ReleaseListener);
    
    valueTreeState.createAndAddParameter(Sp4ReleaseMod_Id, Sp4ReleaseMod_Name, Sp4ReleaseMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4ReleaseMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4ReleaseMod_Id, &Sp4ReleaseModListener);
    
    valueTreeState.createAndAddParameter(Sp4EnvMode_Id, Sp4EnvMode_Name, Sp4EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp4EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp4EnvMode_Id, &Sp4EnvModeListener);

    valueTreeState.createAndAddParameter(Sp4EMod_Id, Sp4EMod_Name, Sp4EMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp4Emod ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp4EMod_Id, &Sp4EmodListener);
    
    
    valueTreeState.createAndAddParameter(Sp4Cutoff_Id, Sp4Cutoff_Name, Sp4Cutoff_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp4Cutoff,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Cutoff_Id, &Sp4CutoffListener);
    
    valueTreeState.createAndAddParameter(Sp4CutoffMod_Id, Sp4CutoffMod_Name, Sp4CutoffMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4CutoffMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4CutoffMod_Id, &Sp4CutoffListenerMod);
    
    valueTreeState.createAndAddParameter(Sp4Resonance_Id, Sp4Resonance_Name, Sp4Resonance_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp4Resonance,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4Resonance_Id, &Sp4ResonanceListener);
    
    
    valueTreeState.createAndAddParameter(Sp4FilterMode_Id, Sp4FilterMode_Name, Sp4FilterMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
                                         (float)Sp4FilterMode.getIndex(),
                                         FilterMode::floatToText,
                                         FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp4FilterMode_Id, &Sp4FilterModusListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp4DelayMode_Id, Sp4DelayMode_Name, Sp4DelayMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
                                         (float)Sp4DelayMode.getIndex(),
                                         DelayMode::floatToText,
                                         DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp4DelayMode_Id, &Sp4DelayModeListener);
    
    valueTreeState.createAndAddParameter(Sp4DelayTime_Id, Sp4DelayTime_Name, Sp4DelayTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp4DelayTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayTime_Id, &Sp4DelayTimeListener);
    
    valueTreeState.createAndAddParameter(Sp4DelayFeed_Id, Sp4DelayFeed_Name, Sp4DelayFeed_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
                                         Sp4DelayFeed,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayFeed_Id, &Sp4DelayFeedListener);
    
    valueTreeState.createAndAddParameter(Sp4DelayMix_Id, Sp4DelayMix_Name, Sp4DelayMix_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayMix,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayMix_Id, &Sp4DelayMixListener);
    
    valueTreeState.createAndAddParameter(Sp4DelayLevel_Id, Sp4DelayLevel_Name, Sp4DelayLevel_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayLevel,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayLevel_Id, &Sp4DelayLevelListener);
    
    valueTreeState.createAndAddParameter(Sp4DelayTimeMod_Id, Sp4DelayTimeMod_Name, Sp4DelayTimeMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayTimeMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayTimeMod_Id, &Sp4DelayTimeListenerMod);
    
    valueTreeState.createAndAddParameter(Sp4DelayFeedMod_Id, Sp4DelayFeedMod_Name, Sp4DelayFeedMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayFeedMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayFeedMod_Id, &Sp4DelayFeedListenerMod);
    
    valueTreeState.createAndAddParameter(Sp4DelayMixMod_Id, Sp4DelayMixMod_Name, Sp4DelayMixMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayMixMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayMixMod_Id, &Sp4DelayMixListenerMod);
    
    valueTreeState.createAndAddParameter(Sp4DelayLevelMod_Id, Sp4DelayLevelMod_Name, Sp4DelayLevelMod_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4DelayLevelMod,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4DelayLevelMod_Id, &Sp4DelayLevelListenerMod);
    
    
   
    
    
    //---------------------------lfo-------------------------
    
    
    valueTreeState.createAndAddParameter(Sp4LfoMode_Id, Sp4LfoMode_Name, Sp4LfoMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
                                         (float)Sp4LfoMode.getIndex(),
                                         LfoMode::floatToText,
                                         LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp4LfoMode_Id, &Sp4LfoModeListener);
    
    valueTreeState.createAndAddParameter(Sp4LfoRtr_Id, Sp4LfoRtr_Name, Sp4LfoRtr_Label,
                                         NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
                                         (float)Sp4LfoRtrMode.getIndex(),
                                         LfoRtrMode::floatToText,
                                         LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp4LfoRtr_Id, &Sp4LfoRtrModeListener);
    
    valueTreeState.createAndAddParameter(Sp4LfoTime_Id, Sp4LfoTime_Name, Sp4LfoTime_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4LfoTime,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4LfoTime_Id, &Sp4LfoTimeListener);
    
    valueTreeState.createAndAddParameter(Sp4LfoAmp_Id, Sp4LfoAmp_Name, Sp4LfoAmp_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 0.001f),
                                         Sp4LfoAmp,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp4LfoAmp_Id, &Sp4LfoAmpListener);

    //*************************************************************************************************
   //--------------------------------------------5------------------------------------------------
   //**************************************************************************************************


   // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp5Synthwaveform_Id, Sp5Synthwaveform_Name, Sp5Synthwaveform_Label,
        NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
        (float)Sp5waveform.getIndex(),
        SynthWaveform::floatToText,
        SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp5Synthwaveform_Id, &Sp5SynthwaveformListener);

    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp5SynthmidiNoteNumber_Id, Sp5SynthmidiNoteNumber_Name, Sp5SynthmidiNoteNumber_Label,
        NormalisableRange<float>(0.0f, 127.0f, 1.0f),
        (float)Sp5synthmidiNoteNumber,
        [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthmidiNoteNumber_Id, &Sp5SynthnoteNumberListener);

    valueTreeState.createAndAddParameter(Sp5SynthmidiNoteNumberMod_Id, Sp5SynthmidiNoteNumberMod_Name, Sp5SynthmidiNoteNumberMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp5synthmidiNoteNumberMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthmidiNoteNumberMod_Id, &Sp5SynthnoteNumberModListener);

    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp5Synthlevel_Id, Sp5Synthlevel_Name, Sp5Synthlevel_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp5synthlevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Synthlevel_Id, &Sp5SynthlevelListener);

    valueTreeState.createAndAddParameter(Sp5SynthlevelMod_Id, Sp5SynthlevelMod_Name, Sp5SynthlevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp5synthlevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthlevelMod_Id, &Sp5SynthlevelModListener);

    valueTreeState.createAndAddParameter(Sp5SynthAttack_Id, Sp5SynthAttack_Name, Sp5SynthAttack_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp5SynthAttackValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthAttack_Id, &Sp5SynthAttackListener);

    valueTreeState.createAndAddParameter(Sp5SynthRelease_Id, Sp5SynthRelease_Name, Sp5SynthRelease_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp5SynthReleaseValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthRelease_Id, &Sp5SynthReleaseListener);

    valueTreeState.createAndAddParameter(Sp5SynthReleaseMod_Id, Sp5SynthReleaseMod_Name, Sp5SynthReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp5SynthReleaseModValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5SynthReleaseMod_Id, &Sp5SynthReleaseModListener);

    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp5StepperOnOff_Id, Sp5StepperOnOff_Name, Sp5StepperOnOff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp5StepperOnOffValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp5StepperOnOff_Id, &Sp5StepperOnOffListener);

    valueTreeState.createAndAddParameter(Sp5EngineMode_Id, Sp5EngineMode_Name, Sp5EngineMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp5EngineMode ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp5EngineMode_Id, &Sp5EngineModeListener);


    valueTreeState.createAndAddParameter(Sp5PlayMode_Id, Sp5PlayMode_Name, Sp5PlayMode_Label,
        NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
        (float)Sp5PlayMode.getIndex(),
        SamplePlayMode::floatToText,
        SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp5PlayMode_Id, &Sp5PlayModusListener);

    valueTreeState.createAndAddParameter(Sp5PlayTimeMode_Id, Sp5PlayTimeMode_Name, Sp5PlayTimeMode_Label,
        NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
        (float)Sp5PlayTimeMode.getIndex(),
        TimeDivMode::floatToText,
        TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp5PlayTimeMode_Id, &Sp5PlayTimeModusListener);


    valueTreeState.createAndAddParameter(Sp5WaveNr_Id, Sp5WaveNr_Name, Sp5WaveNr_Label,
        NormalisableRange<float>(0.0f, 72.0f, 1),
        Sp5Wnr,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5WaveNr_Id, &Sp5WaveNrListener);

    valueTreeState.createAndAddParameter(Sp5PatternStateParas_Id, Sp5PatternStateParas_Name, Sp5PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp5PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp5PatternStateParas_Id, &Sp5PatternStateParasListener);

    valueTreeState.createAndAddParameter(Sp5EnvModeFix_Id, Sp5EnvModeFix_Name, Sp5EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp5EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5EnvModeFix_Id, &Sp5EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp5Gate_Id, Sp5Gate_Name, Sp5Gate_Label,
        NormalisableRange<float>(0.0f, 0.99f, 0.001f),
        Sp5Gate,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Gate_Id, &Sp5GateListener);



    valueTreeState.createAndAddParameter(Sp5Pitch_Id, Sp5Pitch_Name, Sp5Pitch_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5Pitch,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Pitch_Id, &Sp5PitchListener);

    valueTreeState.createAndAddParameter(Sp5PitchMod_Id, Sp5PitchMod_Name, Sp5PitchMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp5PitchMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5PitchMod_Id, &Sp5PitchModListener);

    valueTreeState.createAndAddParameter(Sp5StartSample_Id, Sp5StartSample_Name, Sp5StartSample_Label,
        NormalisableRange<float>(0.0f, 0.5f, 0.001f),
        Sp5StartSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5StartSample_Id, &Sp5StartListener);


    valueTreeState.createAndAddParameter(Sp5EndSample_Id, Sp5EndSample_Name, Sp5EndSample_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5EndSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5EndSample_Id, &Sp5EndListener);

    valueTreeState.createAndAddParameter(Sp5Volume_Id, Sp5Volume_Name, Sp5Volume_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5Volume,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Volume_Id, &Sp5VolumeListener);

    valueTreeState.createAndAddParameter(Sp5VolumeMod_Id, Sp5VolumeMod_Name, Sp5VolumeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5VolumeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5VolumeMod_Id, &Sp5VolumeModListener);

    valueTreeState.createAndAddParameter(Sp5Attack_Id, Sp5Attack_Name, Sp5Attack_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5Attack,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Attack_Id, &Sp5AttackListener);

    valueTreeState.createAndAddParameter(Sp5Release_Id, Sp5Release_Name, Sp5Release_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5Release,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Release_Id, &Sp5ReleaseListener);

    valueTreeState.createAndAddParameter(Sp5ReleaseMod_Id, Sp5ReleaseMod_Name, Sp5ReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5ReleaseMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5ReleaseMod_Id, &Sp5ReleaseModListener);

    valueTreeState.createAndAddParameter(Sp5EnvMode_Id, Sp5EnvMode_Name, Sp5EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp5EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp5EnvMode_Id, &Sp5EnvModeListener);

    valueTreeState.createAndAddParameter(Sp5EMod_Id, Sp5EMod_Name, Sp5EMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp5Emod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp5EMod_Id, &Sp5EmodListener);


    valueTreeState.createAndAddParameter(Sp5Cutoff_Id, Sp5Cutoff_Name, Sp5Cutoff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp5Cutoff,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Cutoff_Id, &Sp5CutoffListener);

    valueTreeState.createAndAddParameter(Sp5CutoffMod_Id, Sp5CutoffMod_Name, Sp5CutoffMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5CutoffMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5CutoffMod_Id, &Sp5CutoffListenerMod);

    valueTreeState.createAndAddParameter(Sp5Resonance_Id, Sp5Resonance_Name, Sp5Resonance_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp5Resonance,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5Resonance_Id, &Sp5ResonanceListener);


    valueTreeState.createAndAddParameter(Sp5FilterMode_Id, Sp5FilterMode_Name, Sp5FilterMode_Label,
        NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
        (float)Sp5FilterMode.getIndex(),
        FilterMode::floatToText,
        FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp5FilterMode_Id, &Sp5FilterModusListener);



    valueTreeState.createAndAddParameter(Sp5DelayMode_Id, Sp5DelayMode_Name, Sp5DelayMode_Label,
        NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
        (float)Sp5DelayMode.getIndex(),
        DelayMode::floatToText,
        DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp5DelayMode_Id, &Sp5DelayModeListener);

    valueTreeState.createAndAddParameter(Sp5DelayTime_Id, Sp5DelayTime_Name, Sp5DelayTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp5DelayTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayTime_Id, &Sp5DelayTimeListener);

    valueTreeState.createAndAddParameter(Sp5DelayFeed_Id, Sp5DelayFeed_Name, Sp5DelayFeed_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp5DelayFeed,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayFeed_Id, &Sp5DelayFeedListener);

    valueTreeState.createAndAddParameter(Sp5DelayMix_Id, Sp5DelayMix_Name, Sp5DelayMix_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayMix,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayMix_Id, &Sp5DelayMixListener);

    valueTreeState.createAndAddParameter(Sp5DelayLevel_Id, Sp5DelayLevel_Name, Sp5DelayLevel_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayLevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayLevel_Id, &Sp5DelayLevelListener);

    valueTreeState.createAndAddParameter(Sp5DelayTimeMod_Id, Sp5DelayTimeMod_Name, Sp5DelayTimeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayTimeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayTimeMod_Id, &Sp5DelayTimeListenerMod);

    valueTreeState.createAndAddParameter(Sp5DelayFeedMod_Id, Sp5DelayFeedMod_Name, Sp5DelayFeedMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayFeedMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayFeedMod_Id, &Sp5DelayFeedListenerMod);

    valueTreeState.createAndAddParameter(Sp5DelayMixMod_Id, Sp5DelayMixMod_Name, Sp5DelayMixMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayMixMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayMixMod_Id, &Sp5DelayMixListenerMod);

    valueTreeState.createAndAddParameter(Sp5DelayLevelMod_Id, Sp5DelayLevelMod_Name, Sp5DelayLevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5DelayLevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5DelayLevelMod_Id, &Sp5DelayLevelListenerMod);





    //---------------------------lfo-------------------------


    valueTreeState.createAndAddParameter(Sp5LfoMode_Id, Sp5LfoMode_Name, Sp5LfoMode_Label,
        NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
        (float)Sp5LfoMode.getIndex(),
        LfoMode::floatToText,
        LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp5LfoMode_Id, &Sp5LfoModeListener);

    valueTreeState.createAndAddParameter(Sp5LfoRtr_Id, Sp5LfoRtr_Name, Sp5LfoRtr_Label,
        NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
        (float)Sp5LfoRtrMode.getIndex(),
        LfoRtrMode::floatToText,
        LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp5LfoRtr_Id, &Sp5LfoRtrModeListener);

    valueTreeState.createAndAddParameter(Sp5LfoTime_Id, Sp5LfoTime_Name, Sp5LfoTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5LfoTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5LfoTime_Id, &Sp5LfoTimeListener);

    valueTreeState.createAndAddParameter(Sp5LfoAmp_Id, Sp5LfoAmp_Name, Sp5LfoAmp_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp5LfoAmp,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp5LfoAmp_Id, &Sp5LfoAmpListener);
    
    //*************************************************************************************************
   //--------------------------------------------6------------------------------------------------
   //**************************************************************************************************


   // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp6Synthwaveform_Id, Sp6Synthwaveform_Name, Sp6Synthwaveform_Label,
        NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
        (float)Sp6waveform.getIndex(),
        SynthWaveform::floatToText,
        SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp6Synthwaveform_Id, &Sp6SynthwaveformListener);

    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp6SynthmidiNoteNumber_Id, Sp6SynthmidiNoteNumber_Name, Sp6SynthmidiNoteNumber_Label,
        NormalisableRange<float>(0.0f, 127.0f, 1.0f),
        (float)Sp6synthmidiNoteNumber,
        [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthmidiNoteNumber_Id, &Sp6SynthnoteNumberListener);

    valueTreeState.createAndAddParameter(Sp6SynthmidiNoteNumberMod_Id, Sp6SynthmidiNoteNumberMod_Name, Sp6SynthmidiNoteNumberMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp6synthmidiNoteNumberMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthmidiNoteNumberMod_Id, &Sp6SynthnoteNumberModListener);

    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp6Synthlevel_Id, Sp6Synthlevel_Name, Sp6Synthlevel_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp6synthlevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Synthlevel_Id, &Sp6SynthlevelListener);

    valueTreeState.createAndAddParameter(Sp6SynthlevelMod_Id, Sp6SynthlevelMod_Name, Sp6SynthlevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp6synthlevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthlevelMod_Id, &Sp6SynthlevelModListener);

    valueTreeState.createAndAddParameter(Sp6SynthAttack_Id, Sp6SynthAttack_Name, Sp6SynthAttack_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp6SynthAttackValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthAttack_Id, &Sp6SynthAttackListener);

    valueTreeState.createAndAddParameter(Sp6SynthRelease_Id, Sp6SynthRelease_Name, Sp6SynthRelease_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp6SynthReleaseValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthRelease_Id, &Sp6SynthReleaseListener);

    valueTreeState.createAndAddParameter(Sp6SynthReleaseMod_Id, Sp6SynthReleaseMod_Name, Sp6SynthReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp6SynthReleaseModValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6SynthReleaseMod_Id, &Sp6SynthReleaseModListener);

    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp6StepperOnOff_Id, Sp6StepperOnOff_Name, Sp6StepperOnOff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp6StepperOnOffValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp6StepperOnOff_Id, &Sp6StepperOnOffListener);

    valueTreeState.createAndAddParameter(Sp6EngineMode_Id, Sp6EngineMode_Name, Sp6EngineMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp6EngineMode ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp6EngineMode_Id, &Sp6EngineModeListener);


    valueTreeState.createAndAddParameter(Sp6PlayMode_Id, Sp6PlayMode_Name, Sp6PlayMode_Label,
        NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
        (float)Sp6PlayMode.getIndex(),
        SamplePlayMode::floatToText,
        SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp6PlayMode_Id, &Sp6PlayModusListener);

    valueTreeState.createAndAddParameter(Sp6PlayTimeMode_Id, Sp6PlayTimeMode_Name, Sp6PlayTimeMode_Label,
        NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
        (float)Sp6PlayTimeMode.getIndex(),
        TimeDivMode::floatToText,
        TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp6PlayTimeMode_Id, &Sp6PlayTimeModusListener);


    valueTreeState.createAndAddParameter(Sp6WaveNr_Id, Sp6WaveNr_Name, Sp6WaveNr_Label,
        NormalisableRange<float>(0.0f, 72.0f, 1),
        Sp6Wnr,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6WaveNr_Id, &Sp6WaveNrListener);

    valueTreeState.createAndAddParameter(Sp6PatternStateParas_Id, Sp6PatternStateParas_Name, Sp6PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp6PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp6PatternStateParas_Id, &Sp6PatternStateParasListener);

    valueTreeState.createAndAddParameter(Sp6EnvModeFix_Id, Sp6EnvModeFix_Name, Sp6EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp6EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6EnvModeFix_Id, &Sp6EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp6Gate_Id, Sp6Gate_Name, Sp6Gate_Label,
        NormalisableRange<float>(0.0f, 0.99f, 0.001f),
        Sp6Gate,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Gate_Id, &Sp6GateListener);



    valueTreeState.createAndAddParameter(Sp6Pitch_Id, Sp6Pitch_Name, Sp6Pitch_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6Pitch,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Pitch_Id, &Sp6PitchListener);

    valueTreeState.createAndAddParameter(Sp6PitchMod_Id, Sp6PitchMod_Name, Sp6PitchMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp6PitchMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6PitchMod_Id, &Sp6PitchModListener);

    valueTreeState.createAndAddParameter(Sp6StartSample_Id, Sp6StartSample_Name, Sp6StartSample_Label,
        NormalisableRange<float>(0.0f, 0.5f, 0.001f),
        Sp6StartSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6StartSample_Id, &Sp6StartListener);


    valueTreeState.createAndAddParameter(Sp6EndSample_Id, Sp6EndSample_Name, Sp6EndSample_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6EndSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6EndSample_Id, &Sp6EndListener);

    valueTreeState.createAndAddParameter(Sp6Volume_Id, Sp6Volume_Name, Sp6Volume_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6Volume,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Volume_Id, &Sp6VolumeListener);

    valueTreeState.createAndAddParameter(Sp6VolumeMod_Id, Sp6VolumeMod_Name, Sp6VolumeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6VolumeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6VolumeMod_Id, &Sp6VolumeModListener);

    valueTreeState.createAndAddParameter(Sp6Attack_Id, Sp6Attack_Name, Sp6Attack_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6Attack,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Attack_Id, &Sp6AttackListener);

    valueTreeState.createAndAddParameter(Sp6Release_Id, Sp6Release_Name, Sp6Release_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6Release,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Release_Id, &Sp6ReleaseListener);

    valueTreeState.createAndAddParameter(Sp6ReleaseMod_Id, Sp6ReleaseMod_Name, Sp6ReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6ReleaseMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6ReleaseMod_Id, &Sp6ReleaseModListener);

    valueTreeState.createAndAddParameter(Sp6EnvMode_Id, Sp6EnvMode_Name, Sp6EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp6EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp6EnvMode_Id, &Sp6EnvModeListener);

    valueTreeState.createAndAddParameter(Sp6EMod_Id, Sp6EMod_Name, Sp6EMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp6Emod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp6EMod_Id, &Sp6EmodListener);


    valueTreeState.createAndAddParameter(Sp6Cutoff_Id, Sp6Cutoff_Name, Sp6Cutoff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp6Cutoff,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Cutoff_Id, &Sp6CutoffListener);

    valueTreeState.createAndAddParameter(Sp6CutoffMod_Id, Sp6CutoffMod_Name, Sp6CutoffMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6CutoffMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6CutoffMod_Id, &Sp6CutoffListenerMod);

    valueTreeState.createAndAddParameter(Sp6Resonance_Id, Sp6Resonance_Name, Sp6Resonance_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp6Resonance,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6Resonance_Id, &Sp6ResonanceListener);


    valueTreeState.createAndAddParameter(Sp6FilterMode_Id, Sp6FilterMode_Name, Sp6FilterMode_Label,
        NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
        (float)Sp6FilterMode.getIndex(),
        FilterMode::floatToText,
        FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp6FilterMode_Id, &Sp6FilterModusListener);



    valueTreeState.createAndAddParameter(Sp6DelayMode_Id, Sp6DelayMode_Name, Sp6DelayMode_Label,
        NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
        (float)Sp6DelayMode.getIndex(),
        DelayMode::floatToText,
        DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp6DelayMode_Id, &Sp6DelayModeListener);

    valueTreeState.createAndAddParameter(Sp6DelayTime_Id, Sp6DelayTime_Name, Sp6DelayTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp6DelayTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayTime_Id, &Sp6DelayTimeListener);

    valueTreeState.createAndAddParameter(Sp6DelayFeed_Id, Sp6DelayFeed_Name, Sp6DelayFeed_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp6DelayFeed,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayFeed_Id, &Sp6DelayFeedListener);

    valueTreeState.createAndAddParameter(Sp6DelayMix_Id, Sp6DelayMix_Name, Sp6DelayMix_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayMix,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayMix_Id, &Sp6DelayMixListener);

    valueTreeState.createAndAddParameter(Sp6DelayLevel_Id, Sp6DelayLevel_Name, Sp6DelayLevel_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayLevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayLevel_Id, &Sp6DelayLevelListener);

    valueTreeState.createAndAddParameter(Sp6DelayTimeMod_Id, Sp6DelayTimeMod_Name, Sp6DelayTimeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayTimeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayTimeMod_Id, &Sp6DelayTimeListenerMod);

    valueTreeState.createAndAddParameter(Sp6DelayFeedMod_Id, Sp6DelayFeedMod_Name, Sp6DelayFeedMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayFeedMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayFeedMod_Id, &Sp6DelayFeedListenerMod);

    valueTreeState.createAndAddParameter(Sp6DelayMixMod_Id, Sp6DelayMixMod_Name, Sp6DelayMixMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayMixMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayMixMod_Id, &Sp6DelayMixListenerMod);

    valueTreeState.createAndAddParameter(Sp6DelayLevelMod_Id, Sp6DelayLevelMod_Name, Sp6DelayLevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6DelayLevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6DelayLevelMod_Id, &Sp6DelayLevelListenerMod);





    //---------------------------lfo-------------------------


    valueTreeState.createAndAddParameter(Sp6LfoMode_Id, Sp6LfoMode_Name, Sp6LfoMode_Label,
        NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
        (float)Sp6LfoMode.getIndex(),
        LfoMode::floatToText,
        LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp6LfoMode_Id, &Sp6LfoModeListener);

    valueTreeState.createAndAddParameter(Sp6LfoRtr_Id, Sp6LfoRtr_Name, Sp6LfoRtr_Label,
        NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
        (float)Sp6LfoRtrMode.getIndex(),
        LfoRtrMode::floatToText,
        LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp6LfoRtr_Id, &Sp6LfoRtrModeListener);

    valueTreeState.createAndAddParameter(Sp6LfoTime_Id, Sp6LfoTime_Name, Sp6LfoTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6LfoTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6LfoTime_Id, &Sp6LfoTimeListener);

    valueTreeState.createAndAddParameter(Sp6LfoAmp_Id, Sp6LfoAmp_Name, Sp6LfoAmp_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp6LfoAmp,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp6LfoAmp_Id, &Sp6LfoAmpListener);
    //*************************************************************************************************
   //--------------------------------------------7------------------------------------------------
   //**************************************************************************************************


   // waveform: choice out of 4 possibilities, values 0..3
    valueTreeState.createAndAddParameter(Sp7Synthwaveform_Id, Sp7Synthwaveform_Name, Sp7Synthwaveform_Label,
        NormalisableRange<float>(0.0f, (float)(SynthWaveform::kChoices - 1), 1.0f),
        (float)Sp7waveform.getIndex(),
        SynthWaveform::floatToText,
        SynthWaveform::textToFloat);
    valueTreeState.addParameterListener(Sp7Synthwaveform_Id, &Sp7SynthwaveformListener);

    // note number: integer parameter, range 0..127
    valueTreeState.createAndAddParameter(Sp7SynthmidiNoteNumber_Id, Sp7SynthmidiNoteNumber_Name, Sp7SynthmidiNoteNumber_Label,
        NormalisableRange<float>(0.0f, 127.0f, 1.0f),
        (float)Sp7synthmidiNoteNumber,
        [](float value) { return MidiMessage::getMidiNoteName((int)value, true, true, 4); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthmidiNoteNumber_Id, &Sp7SynthnoteNumberListener);

    valueTreeState.createAndAddParameter(Sp7SynthmidiNoteNumberMod_Id, Sp7SynthmidiNoteNumberMod_Name, Sp7SynthmidiNoteNumberMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp7synthmidiNoteNumberMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthmidiNoteNumberMod_Id, &Sp7SynthnoteNumberModListener);

    // level: float parameter, range 0.0-1.0, shown as 0.0-10.0 (scaled x10)
    valueTreeState.createAndAddParameter(Sp7Synthlevel_Id, Sp7Synthlevel_Name, Sp7Synthlevel_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp7synthlevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Synthlevel_Id, &Sp7SynthlevelListener);

    valueTreeState.createAndAddParameter(Sp7SynthlevelMod_Id, Sp7SynthlevelMod_Name, Sp7SynthlevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp7synthlevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthlevelMod_Id, &Sp7SynthlevelModListener);

    valueTreeState.createAndAddParameter(Sp7SynthAttack_Id, Sp7SynthAttack_Name, Sp7SynthAttack_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp7SynthAttackValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthAttack_Id, &Sp7SynthAttackListener);

    valueTreeState.createAndAddParameter(Sp7SynthRelease_Id, Sp7SynthRelease_Name, Sp7SynthRelease_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp7SynthReleaseValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthRelease_Id, &Sp7SynthReleaseListener);

    valueTreeState.createAndAddParameter(Sp7SynthReleaseMod_Id, Sp7SynthReleaseMod_Name, Sp7SynthReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f),
        Sp7SynthReleaseModValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7SynthReleaseMod_Id, &Sp7SynthReleaseModListener);

    // StepperOnOffValue: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp7StepperOnOff_Id, Sp7StepperOnOff_Name, Sp7StepperOnOff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp7StepperOnOffValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp7StepperOnOff_Id, &Sp7StepperOnOffListener);

    valueTreeState.createAndAddParameter(Sp7EngineMode_Id, Sp7EngineMode_Name, Sp7EngineMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp7EngineMode ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp7EngineMode_Id, &Sp7EngineModeListener);


    valueTreeState.createAndAddParameter(Sp7PlayMode_Id, Sp7PlayMode_Name, Sp7PlayMode_Label,
        NormalisableRange<float>(0.0f, (float)(SamplePlayMode::kChoices - 1), 1.0f),
        (float)Sp7PlayMode.getIndex(),
        SamplePlayMode::floatToText,
        SamplePlayMode::textToFloat);
    valueTreeState.addParameterListener(Sp7PlayMode_Id, &Sp7PlayModusListener);

    valueTreeState.createAndAddParameter(Sp7PlayTimeMode_Id, Sp7PlayTimeMode_Name, Sp7PlayTimeMode_Label,
        NormalisableRange<float>(0.0f, (float)(TimeDivMode::kChoices - 1), 1.0f),
        (float)Sp7PlayTimeMode.getIndex(),
        TimeDivMode::floatToText,
        TimeDivMode::textToFloat);
    valueTreeState.addParameterListener(Sp7PlayTimeMode_Id, &Sp7PlayTimeModusListener);


    valueTreeState.createAndAddParameter(Sp7WaveNr_Id, Sp7WaveNr_Name, Sp7WaveNr_Label,
        NormalisableRange<float>(0.0f, 72.0f, 1),
        Sp7Wnr,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7WaveNr_Id, &Sp7WaveNrListener);

    valueTreeState.createAndAddParameter(Sp7PatternStateParas_Id, Sp7PatternStateParas_Name, Sp7PatternStateParas_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp7PatternStateValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp7PatternStateParas_Id, &Sp7PatternStateParasListener);

    valueTreeState.createAndAddParameter(Sp7EnvModeFix_Id, Sp7EnvModeFix_Name, Sp7EnvModeFix_Label,
        NormalisableRange<float>(0.0f, 2.0f, 1.0f),
        Sp7EnvModeFixValue,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7EnvModeFix_Id, &Sp7EnvModeFixListener);

    valueTreeState.createAndAddParameter(Sp7Gate_Id, Sp7Gate_Name, Sp7Gate_Label,
        NormalisableRange<float>(0.0f, 0.99f, 0.001f),
        Sp7Gate,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Gate_Id, &Sp7GateListener);



    valueTreeState.createAndAddParameter(Sp7Pitch_Id, Sp7Pitch_Name, Sp7Pitch_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7Pitch,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Pitch_Id, &Sp7PitchListener);

    valueTreeState.createAndAddParameter(Sp7PitchMod_Id, Sp7PitchMod_Name, Sp7PitchMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.01f),
        Sp7PitchMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7PitchMod_Id, &Sp7PitchModListener);

    valueTreeState.createAndAddParameter(Sp7StartSample_Id, Sp7StartSample_Name, Sp7StartSample_Label,
        NormalisableRange<float>(0.0f, 0.5f, 0.001f),
        Sp7StartSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7StartSample_Id, &Sp7StartListener);


    valueTreeState.createAndAddParameter(Sp7EndSample_Id, Sp7EndSample_Name, Sp7EndSample_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7EndSampel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7EndSample_Id, &Sp7EndListener);

    valueTreeState.createAndAddParameter(Sp7Volume_Id, Sp7Volume_Name, Sp7Volume_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7Volume,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Volume_Id, &Sp7VolumeListener);

    valueTreeState.createAndAddParameter(Sp7VolumeMod_Id, Sp7VolumeMod_Name, Sp7VolumeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7VolumeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7VolumeMod_Id, &Sp7VolumeModListener);

    valueTreeState.createAndAddParameter(Sp7Attack_Id, Sp7Attack_Name, Sp7Attack_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7Attack,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Attack_Id, &Sp7AttackListener);

    valueTreeState.createAndAddParameter(Sp7Release_Id, Sp7Release_Name, Sp7Release_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7Release,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Release_Id, &Sp7ReleaseListener);

    valueTreeState.createAndAddParameter(Sp7ReleaseMod_Id, Sp7ReleaseMod_Name, Sp7ReleaseMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7ReleaseMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7ReleaseMod_Id, &Sp7ReleaseModListener);

    valueTreeState.createAndAddParameter(Sp7EnvMode_Id, Sp7EnvMode_Name, Sp7EnvMode_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp7EnvModeValue ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp7EnvMode_Id, &Sp7EnvModeListener);

    valueTreeState.createAndAddParameter(Sp7EMod_Id, Sp7EMod_Name, Sp7EMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp7Emod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp7EMod_Id, &Sp7EmodListener);


    valueTreeState.createAndAddParameter(Sp7Cutoff_Id, Sp7Cutoff_Name, Sp7Cutoff_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp7Cutoff,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Cutoff_Id, &Sp7CutoffListener);

    valueTreeState.createAndAddParameter(Sp7CutoffMod_Id, Sp7CutoffMod_Name, Sp7CutoffMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7CutoffMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7CutoffMod_Id, &Sp7CutoffListenerMod);

    valueTreeState.createAndAddParameter(Sp7Resonance_Id, Sp7Resonance_Name, Sp7Resonance_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp7Resonance,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7Resonance_Id, &Sp7ResonanceListener);


    valueTreeState.createAndAddParameter(Sp7FilterMode_Id, Sp7FilterMode_Name, Sp7FilterMode_Label,
        NormalisableRange<float>(0.0f, (float)(FilterMode::kChoices - 1), 1.0f),
        (float)Sp7FilterMode.getIndex(),
        FilterMode::floatToText,
        FilterMode::textToFloat);
    valueTreeState.addParameterListener(Sp7FilterMode_Id, &Sp7FilterModusListener);



    valueTreeState.createAndAddParameter(Sp7DelayMode_Id, Sp7DelayMode_Name, Sp7DelayMode_Label,
        NormalisableRange<float>(0.0f, (float)(DelayMode::kChoices - 1), 1.0f),
        (float)Sp7DelayMode.getIndex(),
        DelayMode::floatToText,
        DelayMode::textToFloat);
    valueTreeState.addParameterListener(Sp7DelayMode_Id, &Sp7DelayModeListener);

    valueTreeState.createAndAddParameter(Sp7DelayTime_Id, Sp7DelayTime_Name, Sp7DelayTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp7DelayTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayTime_Id, &Sp7DelayTimeListener);

    valueTreeState.createAndAddParameter(Sp7DelayFeed_Id, Sp7DelayFeed_Name, Sp7DelayFeed_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.0001f),
        Sp7DelayFeed,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayFeed_Id, &Sp7DelayFeedListener);

    valueTreeState.createAndAddParameter(Sp7DelayMix_Id, Sp7DelayMix_Name, Sp7DelayMix_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayMix,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayMix_Id, &Sp7DelayMixListener);

    valueTreeState.createAndAddParameter(Sp7DelayLevel_Id, Sp7DelayLevel_Name, Sp7DelayLevel_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayLevel,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayLevel_Id, &Sp7DelayLevelListener);

    valueTreeState.createAndAddParameter(Sp7DelayTimeMod_Id, Sp7DelayTimeMod_Name, Sp7DelayTimeMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayTimeMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayTimeMod_Id, &Sp7DelayTimeListenerMod);

    valueTreeState.createAndAddParameter(Sp7DelayFeedMod_Id, Sp7DelayFeedMod_Name, Sp7DelayFeedMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayFeedMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayFeedMod_Id, &Sp7DelayFeedListenerMod);

    valueTreeState.createAndAddParameter(Sp7DelayMixMod_Id, Sp7DelayMixMod_Name, Sp7DelayMixMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayMixMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayMixMod_Id, &Sp7DelayMixListenerMod);

    valueTreeState.createAndAddParameter(Sp7DelayLevelMod_Id, Sp7DelayLevelMod_Name, Sp7DelayLevelMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7DelayLevelMod,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7DelayLevelMod_Id, &Sp7DelayLevelListenerMod);





    //---------------------------lfo-------------------------


    valueTreeState.createAndAddParameter(Sp7LfoMode_Id, Sp7LfoMode_Name, Sp7LfoMode_Label,
        NormalisableRange<float>(0.0f, (float)(LfoMode::kChoices - 1), 1.0f),
        (float)Sp7LfoMode.getIndex(),
        LfoMode::floatToText,
        LfoMode::textToFloat);
    valueTreeState.addParameterListener(Sp7LfoMode_Id, &Sp7LfoModeListener);

    valueTreeState.createAndAddParameter(Sp7LfoRtr_Id, Sp7LfoRtr_Name, Sp7LfoRtr_Label,
        NormalisableRange<float>(0.0f, (float)(LfoRtrMode::kChoices - 1), 1.0f),
        (float)Sp7LfoRtrMode.getIndex(),
        LfoRtrMode::floatToText,
        LfoRtrMode::textToFloat);
    valueTreeState.addParameterListener(Sp7LfoRtr_Id, &Sp7LfoRtrModeListener);

    valueTreeState.createAndAddParameter(Sp7LfoTime_Id, Sp7LfoTime_Name, Sp7LfoTime_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7LfoTime,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7LfoTime_Id, &Sp7LfoTimeListener);

    valueTreeState.createAndAddParameter(Sp7LfoAmp_Id, Sp7LfoAmp_Name, Sp7LfoAmp_Label,
        NormalisableRange<float>(0.0f, 1.0f, 0.001f),
        Sp7LfoAmp,
        [](float value) { return String(value); },
        [](const String& text) { return text.getFloatValue(); });
    valueTreeState.addParameterListener(Sp7LfoAmp_Id, &Sp7LfoAmpListener);
}

void PluginParameters::detachControls()
{
    
    //mainParas-----------------------------------------------
    delete MidiCCModeAttachment;
     delete TimerModeAttachment;
   
     delete TimerBpmAttachment;
     delete TimerLatenceAttachment;
     delete mainSqLenghtAttachment;
     delete mainWaveAttachment;
     delete mainPitchAttachment;
     delete mainDelayAttachment;
     delete mainVolumeAttachment;
    delete mainLfoSelectAttachment;
    delete mainLfoPitchAmAttachment;
    delete mainLfoDelayAmAttachment;
    delete mainLfoSpHoldAttachment;
     delete EngineSelectAttachment;


     delete TriggerSelect10Attachment;
    
    delete mainEqModeAttachment;
    delete mainEqBassVAttachment;
    delete mainEqMidVAttachment;
    delete mainEqHighVAttachment;
    
    delete mainBitCrushModeAttachment;
     delete mainBitCrushBitsAttachment;
     delete mainBitCrushMixAttachment;
    delete mainBitCrushDryAttachment;
    
    delete mainLimiterModeAttachment;
    delete mainLimiterThrshAttachment;
    delete mainLimiterGainAttachment;
    
    
    
   //-------------- Sp1------------------
  
    delete Sp1SynthWaveformAttachment;
    delete Sp1SynthNoteNumberAttachment;
    delete Sp1SynthNoteNumberModAttachment;
    delete Sp1SynthLevelAttachment;
    delete Sp1SynthLevelModAttachment;
    delete Sp1SynthAttackAttachment;
    delete Sp1SynthReleaseAttachment;
    delete Sp1SynthReleaseModAttachment;
    delete Sp1StepperOnOffAttachment;
    delete Sp1EngineModeAttachment;
    delete Sp1PlayModeAttachment;
    delete Sp1PlayTimeModeAttachment;
    delete Sp1EngineModulationAttachment;
    delete Sp1WaveNrAttachment;
    delete Sp1PatternStateParasAttachment;
    delete Sp1PitchAttachment;
    delete Sp1PitchModAttachment;
    delete Sp1StartAttachment;
    delete Sp1EndAttachment;
    delete Sp1VolumeAttachment;
    delete Sp1VolumeModAttachment;
    delete Sp1AttackAttachment;
    delete Sp1ReleaseAttachment;
    delete Sp1ReleaseModAttachment;
    delete Sp1EnvModeAttachment;
    delete Sp1EnvModeFixAttachment;
    delete Sp1GateAttachment;
    
    delete Sp1FilterCutAttachment;
    delete Sp1FilterCutModAttachment;
    delete Sp1FilterResAttachment;
    delete Sp1FilterModeAttachment;
   
    
    delete  Sp1DelayModeComboxAttachment;
    delete  Sp1DelayTimeSliderAttachment;
    delete  Sp1DelayFeedSliderAttachment;
    delete  Sp1DelayMixSliderAttachment;
    delete  Sp1DelayLevelSliderAttachment;
    delete  Sp1DelayTimeSliderModAttachment;
    delete  Sp1DelayFeedSliderModAttachment;
    delete  Sp1DelayMixSliderModAttachment;
    delete  Sp1DelayLevelSliderModAttachment;
  
    
    delete Sp1LfoModeAttachment;
    delete Sp1LfoRtrModeAttachment;
    delete Sp1LfoTimeAttachment;
    delete Sp1LfoAmpAttachment;
    
    //-------------- Sp2------------------
    
    delete Sp2SynthWaveformAttachment;
    delete Sp2SynthNoteNumberAttachment;
    delete Sp2SynthNoteNumberModAttachment;
    delete Sp2SynthLevelAttachment;
    delete Sp2SynthLevelModAttachment;
    delete Sp2SynthAttackAttachment;
    delete Sp2SynthReleaseAttachment;
    delete Sp2SynthReleaseModAttachment;
    delete Sp2StepperOnOffAttachment;
    delete Sp2EngineModeAttachment;
    delete Sp2PlayModeAttachment;
    delete Sp2PlayTimeModeAttachment;
    delete Sp2EngineModulationAttachment;
    delete Sp2WaveNrAttachment;
    delete Sp2PatternStateParasAttachment;
    delete Sp2PitchAttachment;
    delete Sp2PitchModAttachment;
    delete Sp2StartAttachment;
    delete Sp2EndAttachment;
    delete Sp2VolumeAttachment;
    delete Sp2VolumeModAttachment;
    delete Sp2AttackAttachment;
    delete Sp2ReleaseAttachment;
    delete Sp2ReleaseModAttachment;
    delete Sp2EnvModeAttachment;
    delete Sp2EnvModeFixAttachment;
    delete Sp2GateAttachment;
    
    delete Sp2FilterCutAttachment;
    delete Sp2FilterCutModAttachment;
    delete Sp2FilterResAttachment;
    delete Sp2FilterModeAttachment;
 
    
    delete  Sp2DelayModeComboxAttachment;
    delete  Sp2DelayTimeSliderAttachment;
    delete  Sp2DelayFeedSliderAttachment;
    delete  Sp2DelayMixSliderAttachment;
    delete  Sp2DelayLevelSliderAttachment;
    delete  Sp2DelayTimeSliderModAttachment;
    delete  Sp2DelayFeedSliderModAttachment;
    delete  Sp2DelayMixSliderModAttachment;
    delete  Sp2DelayLevelSliderModAttachment;
 
    
    delete Sp2LfoModeAttachment;
    delete Sp2LfoRtrModeAttachment;
    delete Sp2LfoTimeAttachment;
    delete Sp2LfoAmpAttachment;

     //-------------- Sp3------------------
    
    delete Sp3SynthWaveformAttachment;
    delete Sp3SynthNoteNumberAttachment;
    delete Sp3SynthNoteNumberModAttachment;
    delete Sp3SynthLevelAttachment;
    delete Sp3SynthLevelModAttachment;
    delete Sp3SynthAttackAttachment;
    delete Sp3SynthReleaseAttachment;
    delete Sp3SynthReleaseModAttachment;
    delete Sp3StepperOnOffAttachment;
    delete Sp3EngineModeAttachment;
    delete Sp3PlayModeAttachment;
    delete Sp3PlayTimeModeAttachment;
    delete Sp3EngineModulationAttachment;
    delete Sp3WaveNrAttachment;
    delete Sp3PatternStateParasAttachment;
    delete Sp3PitchAttachment;
    delete Sp3PitchModAttachment;
    delete Sp3StartAttachment;
    delete Sp3EndAttachment;
    delete Sp3VolumeAttachment;
    delete Sp3VolumeModAttachment;
    delete Sp3AttackAttachment;
    delete Sp3ReleaseAttachment;
    delete Sp3ReleaseModAttachment;
    delete Sp3EnvModeAttachment;
    delete Sp3EnvModeFixAttachment;
    delete Sp3GateAttachment;
    
    delete Sp3FilterCutAttachment;
    delete Sp3FilterCutModAttachment;
    delete Sp3FilterResAttachment;
    delete Sp3FilterModeAttachment;

    
    delete  Sp3DelayModeComboxAttachment;
    delete  Sp3DelayTimeSliderAttachment;
    delete  Sp3DelayFeedSliderAttachment;
    delete  Sp3DelayMixSliderAttachment;
    delete  Sp3DelayLevelSliderAttachment;
    delete  Sp3DelayTimeSliderModAttachment;
    delete  Sp3DelayFeedSliderModAttachment;
    delete  Sp3DelayMixSliderModAttachment;
    delete  Sp3DelayLevelSliderModAttachment;

    
    delete Sp3LfoModeAttachment;
    delete Sp3LfoRtrModeAttachment;
    delete Sp3LfoTimeAttachment;
    delete Sp3LfoAmpAttachment;

    //-------------- Sp4------------------
    
    delete Sp4SynthWaveformAttachment;
    delete Sp4SynthNoteNumberAttachment;
    delete Sp4SynthNoteNumberModAttachment;
    delete Sp4SynthLevelAttachment;
    delete Sp4SynthLevelModAttachment;
    delete Sp4SynthAttackAttachment;
    delete Sp4SynthReleaseAttachment;
    delete Sp4SynthReleaseModAttachment;
    delete Sp4StepperOnOffAttachment;
    delete Sp4EngineModeAttachment;
    delete Sp4PlayModeAttachment;
    delete Sp4PlayTimeModeAttachment;
    delete Sp4EngineModulationAttachment;
    delete Sp4WaveNrAttachment;
    delete Sp4PatternStateParasAttachment;
    delete Sp4PitchAttachment;
    delete Sp4PitchModAttachment;
    delete Sp4StartAttachment;
    delete Sp4EndAttachment;
    delete Sp4VolumeAttachment;
    delete Sp4VolumeModAttachment;
    delete Sp4AttackAttachment;
    delete Sp4ReleaseAttachment;
    delete Sp4ReleaseModAttachment;
    delete Sp4EnvModeAttachment;
    delete Sp4EnvModeFixAttachment;
    delete Sp4GateAttachment;
    
    delete Sp4FilterCutAttachment;
    delete Sp4FilterCutModAttachment;
    delete Sp4FilterResAttachment;
    delete Sp4FilterModeAttachment;
  
    
    delete  Sp4DelayModeComboxAttachment;
    delete  Sp4DelayTimeSliderAttachment;
    delete  Sp4DelayFeedSliderAttachment;
    delete  Sp4DelayMixSliderAttachment;
    delete  Sp4DelayLevelSliderAttachment;
    delete  Sp4DelayTimeSliderModAttachment;
    delete  Sp4DelayFeedSliderModAttachment;
    delete  Sp4DelayMixSliderModAttachment;
    delete  Sp4DelayLevelSliderModAttachment;
  
    
    delete Sp4LfoModeAttachment;
    delete Sp4LfoRtrModeAttachment;
    delete Sp4LfoTimeAttachment;
    delete Sp4LfoAmpAttachment;
    //-------------- Sp5------------------

    delete Sp5SynthWaveformAttachment;
    delete Sp5SynthNoteNumberAttachment;
    delete Sp5SynthNoteNumberModAttachment;
    delete Sp5SynthLevelAttachment;
    delete Sp5SynthLevelModAttachment;
    delete Sp5SynthAttackAttachment;
    delete Sp5SynthReleaseAttachment;
    delete Sp5SynthReleaseModAttachment;
    delete Sp5StepperOnOffAttachment;
    delete Sp5EngineModeAttachment;
    delete Sp5PlayModeAttachment;
    delete Sp5PlayTimeModeAttachment;
    delete Sp5EngineModulationAttachment;
    delete Sp5WaveNrAttachment;
    delete Sp5PatternStateParasAttachment;
    delete Sp5PitchAttachment;
    delete Sp5PitchModAttachment;
    delete Sp5StartAttachment;
    delete Sp5EndAttachment;
    delete Sp5VolumeAttachment;
    delete Sp5VolumeModAttachment;
    delete Sp5AttackAttachment;
    delete Sp5ReleaseAttachment;
    delete Sp5ReleaseModAttachment;
    delete Sp5EnvModeAttachment;
    delete Sp5EnvModeFixAttachment;
    delete Sp5GateAttachment;

    delete Sp5FilterCutAttachment;
    delete Sp5FilterCutModAttachment;
    delete Sp5FilterResAttachment;
    delete Sp5FilterModeAttachment;


    delete  Sp5DelayModeComboxAttachment;
    delete  Sp5DelayTimeSliderAttachment;
    delete  Sp5DelayFeedSliderAttachment;
    delete  Sp5DelayMixSliderAttachment;
    delete  Sp5DelayLevelSliderAttachment;
    delete  Sp5DelayTimeSliderModAttachment;
    delete  Sp5DelayFeedSliderModAttachment;
    delete  Sp5DelayMixSliderModAttachment;
    delete  Sp5DelayLevelSliderModAttachment;


    delete Sp5LfoModeAttachment;
    delete Sp5LfoRtrModeAttachment;
    delete Sp5LfoTimeAttachment;
    delete Sp5LfoAmpAttachment;
    //-------------- Sp6------------------

    delete Sp6SynthWaveformAttachment;
    delete Sp6SynthNoteNumberAttachment;
    delete Sp6SynthNoteNumberModAttachment;
    delete Sp6SynthLevelAttachment;
    delete Sp6SynthLevelModAttachment;
    delete Sp6SynthAttackAttachment;
    delete Sp6SynthReleaseAttachment;
    delete Sp6SynthReleaseModAttachment;
    delete Sp6StepperOnOffAttachment;
    delete Sp6EngineModeAttachment;
    delete Sp6PlayModeAttachment;
    delete Sp6PlayTimeModeAttachment;
    delete Sp6EngineModulationAttachment;
    delete Sp6WaveNrAttachment;
    delete Sp6PatternStateParasAttachment;
    delete Sp6PitchAttachment;
    delete Sp6PitchModAttachment;
    delete Sp6StartAttachment;
    delete Sp6EndAttachment;
    delete Sp6VolumeAttachment;
    delete Sp6VolumeModAttachment;
    delete Sp6AttackAttachment;
    delete Sp6ReleaseAttachment;
    delete Sp6ReleaseModAttachment;
    delete Sp6EnvModeAttachment;
    delete Sp6EnvModeFixAttachment;
    delete Sp6GateAttachment;

    delete Sp6FilterCutAttachment;
    delete Sp6FilterCutModAttachment;
    delete Sp6FilterResAttachment;
    delete Sp6FilterModeAttachment;


    delete  Sp6DelayModeComboxAttachment;
    delete  Sp6DelayTimeSliderAttachment;
    delete  Sp6DelayFeedSliderAttachment;
    delete  Sp6DelayMixSliderAttachment;
    delete  Sp6DelayLevelSliderAttachment;
    delete  Sp6DelayTimeSliderModAttachment;
    delete  Sp6DelayFeedSliderModAttachment;
    delete  Sp6DelayMixSliderModAttachment;
    delete  Sp6DelayLevelSliderModAttachment;


    delete Sp6LfoModeAttachment;
    delete Sp6LfoRtrModeAttachment;
    delete Sp6LfoTimeAttachment;
    delete Sp6LfoAmpAttachment;
    //-------------- Sp7------------------

    delete Sp7SynthWaveformAttachment;
    delete Sp7SynthNoteNumberAttachment;
    delete Sp7SynthNoteNumberModAttachment;
    delete Sp7SynthLevelAttachment;
    delete Sp7SynthLevelModAttachment;
    delete Sp7SynthAttackAttachment;
    delete Sp7SynthReleaseAttachment;
    delete Sp7SynthReleaseModAttachment;
    delete Sp7StepperOnOffAttachment;
    delete Sp7EngineModeAttachment;
    delete Sp7PlayModeAttachment;
    delete Sp7PlayTimeModeAttachment;
    delete Sp7EngineModulationAttachment;
    delete Sp7WaveNrAttachment;
    delete Sp7PatternStateParasAttachment;
    delete Sp7PitchAttachment;
    delete Sp7PitchModAttachment;
    delete Sp7StartAttachment;
    delete Sp7EndAttachment;
    delete Sp7VolumeAttachment;
    delete Sp7VolumeModAttachment;
    delete Sp7AttackAttachment;
    delete Sp7ReleaseAttachment;
    delete Sp7ReleaseModAttachment;
    delete Sp7EnvModeAttachment;
    delete Sp7EnvModeFixAttachment;
    delete Sp7GateAttachment;

    delete Sp7FilterCutAttachment;
    delete Sp7FilterCutModAttachment;
    delete Sp7FilterResAttachment;
    delete Sp7FilterModeAttachment;


    delete  Sp7DelayModeComboxAttachment;
    delete  Sp7DelayTimeSliderAttachment;
    delete  Sp7DelayFeedSliderAttachment;
    delete  Sp7DelayMixSliderAttachment;
    delete  Sp7DelayLevelSliderAttachment;
    delete  Sp7DelayTimeSliderModAttachment;
    delete  Sp7DelayFeedSliderModAttachment;
    delete  Sp7DelayMixSliderModAttachment;
    delete  Sp7DelayLevelSliderModAttachment;


    delete Sp7LfoModeAttachment;
    delete Sp7LfoRtrModeAttachment;
    delete Sp7LfoTimeAttachment;
    delete Sp7LfoAmpAttachment;
}

void PluginParameters::attachControls(
    //MainParas
    ComboBox& MidiCCModeCombo,
    ComboBox& TimerModeCombo,

    Slider& TimerBpmSlider,
    Slider& TimerLatenceSlider,
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
    Slider& TriggerSelect10,

    Slider& mainEqModeTempSlider,
    Slider& mainEqBassVSlider,
    Slider& mainEqMidVSlider,
    Slider& mainEqHighVSlider,
    Slider& mainBitCrushModeSlider,
    Slider& mainBitCrushBitsSlider,
    Slider& mainBitCrushMixSlider,
    Slider& mainBitCrushDrySlider,
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
    Slider& Sp1EnvModeFixButton,
    Button& Sp1EModButton,



    Slider& Sp1CutoffSlider,
    Slider& Sp1CutoffModSlider,
    Slider& Sp1ResonanceSlider,
    ComboBox& Sp1FilterModeCombox,



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
    Slider& Sp2EnvModeFixButton,
    Button& Sp2EModButton,



    Slider& Sp2CutoffSlider,
    Slider& Sp2CutoffModSlider,
    Slider& Sp2ResonanceSlider,
    ComboBox& Sp2FilterModeCombox,



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
    Slider& Sp3EnvModeFixButton,
    Button& Sp3EModButton,

    Slider& Sp3CutoffSlider,
    Slider& Sp3CutoffModSlider,
    Slider& Sp3ResonanceSlider,
    ComboBox& Sp3FilterModeCombox,


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
    Slider& Sp4EnvModeFixButton,
    Button& Sp4EModButton,

    Slider& Sp4CutoffSlider,
    Slider& Sp4CutoffModSlider,
    Slider& Sp4ResonanceSlider,
    ComboBox& Sp4FilterModeCombox,


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
        //----------------------------------4--
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
        Slider& Sp5EnvModeFixButton,
        Button& Sp5EModButton,

        Slider& Sp5CutoffSlider,
        Slider& Sp5CutoffModSlider,
        Slider& Sp5ResonanceSlider,
        ComboBox& Sp5FilterModeCombox,


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
        Slider& Sp6EnvModeFixButton,
        Button& Sp6EModButton,

        Slider& Sp6CutoffSlider,
        Slider& Sp6CutoffModSlider,
        Slider& Sp6ResonanceSlider,
        ComboBox& Sp6FilterModeCombox,


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
            Slider& Sp7EnvModeFixButton,
            Button& Sp7EModButton,

            Slider& Sp7CutoffSlider,
            Slider& Sp7CutoffModSlider,
            Slider& Sp7ResonanceSlider,
            ComboBox& Sp7FilterModeCombox,


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


                                     
                                      )
{
    detachControls();   // destroy existing attachments, if any
    
    //------------------------------Mainparas-------------------
    MidiCCModeAttachment = new ComboBoxAttachment(valueTreeState, MidiCCMode_Id, MidiCCModeCombo);
     TimerModeAttachment = new ComboBoxAttachment(valueTreeState, TimerMode_Id,TimerModeCombo);
     TimerBpmAttachment = new SliderAttachment(valueTreeState,TimerBpm_Id,TimerBpmSlider);
     TimerLatenceAttachment = new SliderAttachment(valueTreeState, TimerLatence_Id, TimerLatenceSlider);
     mainSqLenghtAttachment = new SliderAttachment(valueTreeState,mainSqLenght_Id,mainSqLenghtSlider);
    
    mainWaveAttachment= new SliderAttachment(valueTreeState,mainWave_Id,mainWaveSlider);
     mainPitchAttachment= new SliderAttachment(valueTreeState,mainPitch_Id,mainPitchSlider);
     mainDelayAttachment= new SliderAttachment(valueTreeState,mainDelay_Id,mainDelaySlider);
     mainVolumeAttachment= new SliderAttachment(valueTreeState,mainVolume_Id,mainVolumeSlider);
    
    mainLfoSelectAttachment= new SliderAttachment(valueTreeState,mainLfoSelect_Id,mainLfoSelectSlider);
    mainLfoPitchAmAttachment= new SliderAttachment(valueTreeState,mainLfoPitchAm_Id,mainLfoPitchAmSlider);
    mainLfoDelayAmAttachment= new SliderAttachment(valueTreeState,mainLfoDelayAm_Id,mainLfoDelayAmSlider);
    mainLfoSpHoldAttachment= new ComboBoxAttachment(valueTreeState,mainLfoSpHold_Id,mainLfoShCombo);
    
    
EngineSelectAttachment= new SliderAttachment(valueTreeState, EngineSelect_Id,EngineSelectTempSlider);

    
TriggerSelect10Attachment=new SliderAttachment(valueTreeState, TriggerSelect10_Id,TriggerSelect10);

mainEqModeAttachment = new SliderAttachment(valueTreeState,mainEqMode_Id,mainEqModeTempSlider);
mainEqBassVAttachment = new SliderAttachment(valueTreeState,mainEqBassV_Id,mainEqBassVSlider);
mainEqMidVAttachment = new SliderAttachment(valueTreeState,mainEqMidV_Id,mainEqMidVSlider);
mainEqHighVAttachment = new SliderAttachment(valueTreeState,mainEqHighV_Id,mainEqHighVSlider);
    
mainBitCrushModeAttachment = new SliderAttachment(valueTreeState,mainBitCrushMode_Id,mainBitCrushModeSlider);
mainBitCrushBitsAttachment = new SliderAttachment(valueTreeState,mainBitCrushBits_Id,mainBitCrushBitsSlider);
mainBitCrushMixAttachment = new SliderAttachment(valueTreeState,mainBitCrushMix_Id,mainBitCrushMixSlider);
mainBitCrushDryAttachment = new SliderAttachment(valueTreeState,mainBitCrushDry_Id,mainBitCrushDrySlider);
    
mainLimiterModeAttachment= new SliderAttachment(valueTreeState,mainLimiterMode_Id,mainLimiterModeTempSlider);
mainLimiterThrshAttachment= new SliderAttachment(valueTreeState,mainLimiterThrsh_Id,mainLimiterThrshSlider);
mainLimiterGainAttachment= new SliderAttachment(valueTreeState,mainLimiterGain_Id,mainLimiterGainSlider);
    
  //------------------------------------1-------------------------------------------
Sp1SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp1Synthwaveform_Id, Sp1SynthwaveformCombo);
Sp1SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp1SynthmidiNoteNumber_Id, Sp1SynthnoteNumberSlider);
Sp1SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp1SynthmidiNoteNumberMod_Id, Sp1SynthnoteNumberModSlider);
Sp1SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp1Synthlevel_Id, Sp1SynthlevelSlider);
Sp1SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp1SynthlevelMod_Id, Sp1SynthlevelModSlider);
Sp1SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp1SynthAttack_Id, Sp1SynthattackSlider);
Sp1SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp1SynthRelease_Id, Sp1SynthreleaseSlider);
Sp1SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp1SynthReleaseMod_Id, Sp1SynthreleaseModSlider);
    Sp1StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp1StepperOnOff_Id, Sp1StepperOnOffToggle);
    Sp1EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp1EngineMode_Id, Sp1EngineModeButton);
    
    Sp1PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp1PlayMode_Id,Sp1PlayModusCombo);
    Sp1PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp1PlayTimeMode_Id,Sp1PlayTimeModeCombo);

    Sp1GateAttachment=new SliderAttachment(valueTreeState, Sp1Gate_Id, Sp1GateSlider);
    Sp1WaveNrAttachment= new SliderAttachment(valueTreeState, Sp1WaveNr_Id, Sp1WnrSlider);
    Sp1PatternStateParasAttachment= new ButtonAttachment(valueTreeState, Sp1PatternStateParas_Id, Sp1PatternStateValueSlider);

    Sp1PitchAttachment= new SliderAttachment(valueTreeState, Sp1Pitch_Id, Sp1PichSlider);
    Sp1PitchModAttachment= new SliderAttachment(valueTreeState, Sp1PitchMod_Id, Sp1PichModSlider);
    Sp1StartAttachment=new SliderAttachment(valueTreeState, Sp1StartSample_Id, Sp1StartSlider);
    Sp1EndAttachment=new SliderAttachment(valueTreeState, Sp1EndSample_Id, Sp1EndSlider);
    Sp1VolumeAttachment=new SliderAttachment(valueTreeState, Sp1Volume_Id, Sp1VolumeSlider);
    Sp1VolumeModAttachment=new SliderAttachment(valueTreeState, Sp1VolumeMod_Id, Sp1VolumeModSlider);
    Sp1AttackAttachment=new SliderAttachment(valueTreeState, Sp1Attack_Id, Sp1AttackSlider);
    Sp1ReleaseAttachment=new SliderAttachment(valueTreeState, Sp1Release_Id, Sp1ReleaseSlider);
    Sp1EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp1EnvMode_Id, Sp1EnvModeButton);
    Sp1EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp1EnvModeFix_Id, Sp1EnvModeFixButton);
    Sp1ReleaseModAttachment=new SliderAttachment(valueTreeState, Sp1ReleaseMod_Id, Sp1ReleaseModSlider);
    Sp1EngineModulationAttachment =new ButtonAttachment(valueTreeState, Sp1EMod_Id, Sp1EModButton);
    
    
    
    Sp1FilterCutAttachment=new SliderAttachment(valueTreeState, Sp1Cutoff_Id, Sp1CutoffSlider);
    Sp1FilterCutModAttachment=new SliderAttachment(valueTreeState, Sp1CutoffMod_Id, Sp1CutoffModSlider);
    Sp1FilterResAttachment=new SliderAttachment(valueTreeState, Sp1Resonance_Id, Sp1ResonanceSlider);
    Sp1FilterModeAttachment=new ComboBoxAttachment(valueTreeState, Sp1FilterMode_Id, Sp1FilterModeCombox);
   
        
    
  Sp1DelayModeComboxAttachment=  new ComboBoxAttachment(valueTreeState, Sp1DelayMode_Id, Sp1DelayModeCombox);
  Sp1DelayTimeSliderAttachment=  new SliderAttachment(valueTreeState, Sp1DelayTime_Id, Sp1DelayTimeSlider);
  Sp1DelayFeedSliderAttachment=  new SliderAttachment(valueTreeState, Sp1DelayFeed_Id, Sp1DelayFeedSlider);
  Sp1DelayMixSliderAttachment=  new SliderAttachment(valueTreeState, Sp1DelayMix_Id, Sp1DelayMixSlider);
  Sp1DelayLevelSliderAttachment=  new SliderAttachment(valueTreeState, Sp1DelayLevel_Id, Sp1DelayLevelSlider);
  Sp1DelayTimeSliderModAttachment=  new SliderAttachment(valueTreeState, Sp1DelayTimeMod_Id, Sp1DelayTimeSliderMod);
  Sp1DelayFeedSliderModAttachment= new SliderAttachment(valueTreeState, Sp1DelayFeedMod_Id, Sp1DelayFeedSliderMod);
  Sp1DelayMixSliderModAttachment= new SliderAttachment(valueTreeState, Sp1DelayMixMod_Id, Sp1DelayMixSliderMod);
  Sp1DelayLevelSliderModAttachment= new SliderAttachment(valueTreeState, Sp1DelayLevelMod_Id, Sp1DelayLevelSliderMod);
    

    
   Sp1LfoModeAttachment= new ComboBoxAttachment(valueTreeState, Sp1LfoMode_Id, Sp1LfoModeCombox);
   Sp1LfoRtrModeAttachment= new ComboBoxAttachment(valueTreeState, Sp1LfoRtr_Id, Sp1LfoRtrModeCombo);
   Sp1LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp1LfoTime_Id, Sp1LfoTimeSlider);
   Sp1LfoAmpAttachment= new SliderAttachment(valueTreeState, Sp1LfoAmp_Id, Sp1LfoAmpSlider);
    
    //------------------------------------2-------------------------------------------
    Sp2SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp2Synthwaveform_Id, Sp2SynthwaveformCombo);
    Sp2SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp2SynthmidiNoteNumber_Id, Sp2SynthnoteNumberSlider);
    Sp2SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp2SynthmidiNoteNumberMod_Id, Sp2SynthnoteNumberModSlider);
    Sp2SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp2Synthlevel_Id, Sp2SynthlevelSlider);
    Sp2SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp2SynthlevelMod_Id, Sp2SynthlevelModSlider);
    Sp2SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp2SynthAttack_Id, Sp2SynthattackSlider);
    Sp2SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp2SynthRelease_Id, Sp2SynthreleaseSlider);
    Sp2SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp2SynthReleaseMod_Id, Sp2SynthreleaseModSlider);
    Sp2StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp2StepperOnOff_Id, Sp2StepperOnOffToggle);
    Sp2EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp2EngineMode_Id, Sp2EngineModeButton);
    
    Sp2PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp2PlayMode_Id,Sp2PlayModusCombo);
    Sp2PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp2PlayTimeMode_Id,Sp2PlayTimeModeCombo);
    
    Sp2GateAttachment=new SliderAttachment(valueTreeState, Sp2Gate_Id, Sp2GateSlider);
    Sp2WaveNrAttachment= new SliderAttachment(valueTreeState, Sp2WaveNr_Id, Sp2WnrSlider);
    Sp2PatternStateParasAttachment= new ButtonAttachment(valueTreeState, Sp2PatternStateParas_Id, Sp2PatternStateValueSlider);
    
    Sp2PitchAttachment= new SliderAttachment(valueTreeState, Sp2Pitch_Id, Sp2PichSlider);
    Sp2PitchModAttachment= new SliderAttachment(valueTreeState, Sp2PitchMod_Id, Sp2PichModSlider);
    Sp2StartAttachment=new SliderAttachment(valueTreeState, Sp2StartSample_Id, Sp2StartSlider);
    Sp2EndAttachment=new SliderAttachment(valueTreeState, Sp2EndSample_Id, Sp2EndSlider);
    Sp2VolumeAttachment=new SliderAttachment(valueTreeState, Sp2Volume_Id, Sp2VolumeSlider);
    Sp2VolumeModAttachment=new SliderAttachment(valueTreeState, Sp2VolumeMod_Id, Sp2VolumeModSlider);
    Sp2AttackAttachment=new SliderAttachment(valueTreeState, Sp2Attack_Id, Sp2AttackSlider);
    Sp2ReleaseAttachment=new SliderAttachment(valueTreeState, Sp2Release_Id, Sp2ReleaseSlider);
    Sp2ReleaseModAttachment=new SliderAttachment(valueTreeState, Sp2ReleaseMod_Id, Sp2ReleaseModSlider);
    Sp2EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp2EnvMode_Id, Sp2EnvModeButton);
    Sp2EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp2EnvModeFix_Id, Sp2EnvModeFixButton);
    Sp2EngineModulationAttachment =new ButtonAttachment(valueTreeState, Sp2EMod_Id, Sp2EModButton);
    
    
    Sp2FilterCutAttachment=new SliderAttachment(valueTreeState, Sp2Cutoff_Id, Sp2CutoffSlider);
    Sp2FilterCutModAttachment=new SliderAttachment(valueTreeState, Sp2CutoffMod_Id, Sp2CutoffModSlider);
    Sp2FilterResAttachment=new SliderAttachment(valueTreeState, Sp2Resonance_Id, Sp2ResonanceSlider);
    Sp2FilterModeAttachment=new ComboBoxAttachment(valueTreeState, Sp2FilterMode_Id, Sp2FilterModeCombox);
  
    
    
    Sp2DelayModeComboxAttachment=  new ComboBoxAttachment(valueTreeState, Sp2DelayMode_Id, Sp2DelayModeCombox);
    Sp2DelayTimeSliderAttachment=  new SliderAttachment(valueTreeState, Sp2DelayTime_Id, Sp2DelayTimeSlider);
    Sp2DelayFeedSliderAttachment=  new SliderAttachment(valueTreeState, Sp2DelayFeed_Id, Sp2DelayFeedSlider);
    Sp2DelayMixSliderAttachment=  new SliderAttachment(valueTreeState, Sp2DelayMix_Id, Sp2DelayMixSlider);
    Sp2DelayLevelSliderAttachment=  new SliderAttachment(valueTreeState, Sp2DelayLevel_Id, Sp2DelayLevelSlider);
    Sp2DelayTimeSliderModAttachment=  new SliderAttachment(valueTreeState, Sp2DelayTimeMod_Id, Sp2DelayTimeSliderMod);
    Sp2DelayFeedSliderModAttachment= new SliderAttachment(valueTreeState, Sp2DelayFeedMod_Id, Sp2DelayFeedSliderMod);
    Sp2DelayMixSliderModAttachment= new SliderAttachment(valueTreeState, Sp2DelayMixMod_Id, Sp2DelayMixSliderMod);
    Sp2DelayLevelSliderModAttachment= new SliderAttachment(valueTreeState, Sp2DelayLevelMod_Id, Sp2DelayLevelSliderMod);
    
    
    
    
    Sp2LfoModeAttachment= new ComboBoxAttachment(valueTreeState, Sp2LfoMode_Id, Sp2LfoModeCombox);
    Sp2LfoRtrModeAttachment= new ComboBoxAttachment(valueTreeState, Sp2LfoRtr_Id, Sp2LfoRtrModeCombo);
    Sp2LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp2LfoTime_Id, Sp2LfoTimeSlider);
    Sp2LfoAmpAttachment= new SliderAttachment(valueTreeState, Sp2LfoAmp_Id, Sp2LfoAmpSlider);
    
    //------------------------------------3-------------------------------------------
    Sp3SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp3Synthwaveform_Id, Sp3SynthwaveformCombo);
    Sp3SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp3SynthmidiNoteNumber_Id, Sp3SynthnoteNumberSlider);
    Sp3SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp3SynthmidiNoteNumberMod_Id, Sp3SynthnoteNumberModSlider);
    Sp3SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp3Synthlevel_Id, Sp3SynthlevelSlider);
    Sp3SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp3SynthlevelMod_Id, Sp3SynthlevelModSlider);
    Sp3SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp3SynthAttack_Id, Sp3SynthAttackSlider);
    Sp3SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp3SynthRelease_Id, Sp3SynthReleaseSlider);
    Sp3SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp3SynthReleaseMod_Id, Sp3SynthReleaseModSlider);
    Sp3StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp3StepperOnOff_Id, Sp3StepperOnOffToggle);
    Sp3EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp3EngineMode_Id, Sp3EngineModeButton);
    
    Sp3PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp3PlayMode_Id,Sp3PlayModusCombo);
    Sp3PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp3PlayTimeMode_Id,Sp3PlayTimeModusCombo);
    
    Sp3GateAttachment=new SliderAttachment(valueTreeState, Sp3Gate_Id, Sp3GateSlider);
    Sp3WaveNrAttachment= new SliderAttachment(valueTreeState, Sp3WaveNr_Id, Sp3WnrSlider);
    Sp3PatternStateParasAttachment= new ButtonAttachment(valueTreeState, Sp3PatternStateParas_Id, Sp3PatternStateValueSlider);
    Sp3PitchAttachment= new SliderAttachment(valueTreeState, Sp3Pitch_Id, Sp3PichSlider);
    Sp3PitchModAttachment= new SliderAttachment(valueTreeState, Sp3PitchMod_Id, Sp3PichModSlider);
    Sp3StartAttachment=new SliderAttachment(valueTreeState, Sp3StartSample_Id, Sp3StartSlider);
    Sp3EndAttachment=new SliderAttachment(valueTreeState, Sp3EndSample_Id, Sp3EndSlider);
    Sp3VolumeAttachment=new SliderAttachment(valueTreeState, Sp3Volume_Id, Sp3VolumeSlider);
    Sp3VolumeModAttachment=new SliderAttachment(valueTreeState, Sp3VolumeMod_Id, Sp3VolumeModSlider);
    Sp3AttackAttachment=new SliderAttachment(valueTreeState, Sp3Attack_Id, Sp3AttackSlider);
    Sp3ReleaseAttachment=new SliderAttachment(valueTreeState, Sp3Release_Id, Sp3ReleaseSlider);
    Sp3ReleaseModAttachment=new SliderAttachment(valueTreeState, Sp3ReleaseMod_Id, Sp3ReleaseModSlider);
    Sp3EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp3EnvMode_Id, Sp3EnvModeButton);
    Sp3EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp3EnvModeFix_Id, Sp3EnvModeFixButton);
    Sp3EngineModulationAttachment =new ButtonAttachment(valueTreeState, Sp3EMod_Id, Sp3EModButton);
    
    
    Sp3FilterCutAttachment=new SliderAttachment(valueTreeState, Sp3Cutoff_Id, Sp3CutoffSlider);
    Sp3FilterCutModAttachment=new SliderAttachment(valueTreeState, Sp3CutoffMod_Id, Sp3CutoffModSlider);
    Sp3FilterResAttachment=new SliderAttachment(valueTreeState, Sp3Resonance_Id, Sp3ResonanceSlider);
    Sp3FilterModeAttachment=new ComboBoxAttachment(valueTreeState, Sp3FilterMode_Id, Sp3FilterModeCombox);
    
    
    
    Sp3DelayModeComboxAttachment=  new ComboBoxAttachment(valueTreeState, Sp3DelayMode_Id, Sp3DelayModeCombox);
    Sp3DelayTimeSliderAttachment=  new SliderAttachment(valueTreeState, Sp3DelayTime_Id, Sp3DelayTimeSlider);
    Sp3DelayFeedSliderAttachment=  new SliderAttachment(valueTreeState, Sp3DelayFeed_Id, Sp3DelayFeedSlider);
    Sp3DelayMixSliderAttachment=  new SliderAttachment(valueTreeState, Sp3DelayMix_Id, Sp3DelayMixSlider);
    Sp3DelayLevelSliderAttachment=  new SliderAttachment(valueTreeState, Sp3DelayLevel_Id, Sp3DelayLevelSlider);
    Sp3DelayTimeSliderModAttachment=  new SliderAttachment(valueTreeState, Sp3DelayTimeMod_Id, Sp3DelayTimeModSlider);
    Sp3DelayFeedSliderModAttachment= new SliderAttachment(valueTreeState, Sp3DelayFeedMod_Id, Sp3DelayFeedModSlider);
    Sp3DelayMixSliderModAttachment= new SliderAttachment(valueTreeState, Sp3DelayMixMod_Id, Sp3DelayMixModSlider);
    Sp3DelayLevelSliderModAttachment= new SliderAttachment(valueTreeState, Sp3DelayLevelMod_Id, Sp3DelayLevelModSlider);
    
    
    
    
    Sp3LfoModeAttachment= new ComboBoxAttachment(valueTreeState, Sp3LfoMode_Id, Sp3LfoModeCombox);
    Sp3LfoRtrModeAttachment= new ComboBoxAttachment(valueTreeState, Sp3LfoRtr_Id, Sp3LfoRtrModeButton);
    Sp3LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp3LfoTime_Id, Sp3LfoTimeSlider);
    Sp3LfoAmpAttachment= new SliderAttachment(valueTreeState, Sp3LfoAmp_Id, Sp3LfoAmpSlider);

    //------------------------------------4-------------------------------------------
    Sp4SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp4Synthwaveform_Id, Sp4SynthwaveformCombo);
    Sp4SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp4SynthmidiNoteNumber_Id, Sp4SynthnoteNumberSlider);
    Sp4SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp4SynthmidiNoteNumberMod_Id, Sp4SynthnoteNumberModSlider);
    Sp4SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp4Synthlevel_Id, Sp4SynthlevelSlider);
    Sp4SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp4SynthlevelMod_Id, Sp4SynthlevelModSlider);
    Sp4SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp4SynthAttack_Id, Sp4SynthAttackSlider);
    Sp4SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp4SynthRelease_Id, Sp4SynthReleaseSlider);
    Sp4SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp4SynthReleaseMod_Id, Sp4SynthReleaseModSlider);
    Sp4StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp4StepperOnOff_Id, Sp4StepperOnOffToggle);
    Sp4EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp4EngineMode_Id, Sp4EngineModeButton);
    
    Sp4PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp4PlayMode_Id,Sp4PlayModusCombo);
    Sp4PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp4PlayTimeMode_Id,Sp4PlayTimeModusCombo);
    
    Sp4GateAttachment=new SliderAttachment(valueTreeState, Sp4Gate_Id, Sp4GateSlider);
    Sp4WaveNrAttachment= new SliderAttachment(valueTreeState, Sp4WaveNr_Id, Sp4WnrSlider);
    Sp4PatternStateParasAttachment= new ButtonAttachment(valueTreeState, Sp4PatternStateParas_Id, Sp4PatternStateValueSlider);
    Sp4PitchAttachment= new SliderAttachment(valueTreeState, Sp4Pitch_Id, Sp4PichSlider);
    Sp4PitchModAttachment= new SliderAttachment(valueTreeState, Sp4PitchMod_Id, Sp4PichModSlider);
    Sp4StartAttachment=new SliderAttachment(valueTreeState, Sp4StartSample_Id, Sp4StartSlider);
    Sp4EndAttachment=new SliderAttachment(valueTreeState, Sp4EndSample_Id, Sp4EndSlider);
    Sp4VolumeAttachment=new SliderAttachment(valueTreeState, Sp4Volume_Id, Sp4VolumeSlider);
    Sp4VolumeModAttachment=new SliderAttachment(valueTreeState, Sp4VolumeMod_Id, Sp4VolumeModSlider);
    Sp4AttackAttachment=new SliderAttachment(valueTreeState, Sp4Attack_Id, Sp4AttackSlider);
    Sp4ReleaseAttachment=new SliderAttachment(valueTreeState, Sp4Release_Id, Sp4ReleaseSlider);
    Sp4ReleaseModAttachment=new SliderAttachment(valueTreeState, Sp4ReleaseMod_Id, Sp4ReleaseModSlider);
    Sp4EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp4EnvMode_Id, Sp4EnvModeButton);
    Sp4EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp4EnvModeFix_Id, Sp4EnvModeFixButton);
    Sp4EngineModulationAttachment =new ButtonAttachment(valueTreeState, Sp4EMod_Id, Sp4EModButton);
    
    
    Sp4FilterCutAttachment=new SliderAttachment(valueTreeState, Sp4Cutoff_Id, Sp4CutoffSlider);
    Sp4FilterCutModAttachment=new SliderAttachment(valueTreeState, Sp4CutoffMod_Id, Sp4CutoffModSlider);
    Sp4FilterResAttachment=new SliderAttachment(valueTreeState, Sp4Resonance_Id, Sp4ResonanceSlider);
    Sp4FilterModeAttachment=new ComboBoxAttachment(valueTreeState, Sp4FilterMode_Id, Sp4FilterModeCombox);
   
    
    
    Sp4DelayModeComboxAttachment=  new ComboBoxAttachment(valueTreeState, Sp4DelayMode_Id, Sp4DelayModeCombox);
    Sp4DelayTimeSliderAttachment=  new SliderAttachment(valueTreeState, Sp4DelayTime_Id, Sp4DelayTimeSlider);
    Sp4DelayFeedSliderAttachment=  new SliderAttachment(valueTreeState, Sp4DelayFeed_Id, Sp4DelayFeedSlider);
    Sp4DelayMixSliderAttachment=  new SliderAttachment(valueTreeState, Sp4DelayMix_Id, Sp4DelayMixSlider);
    Sp4DelayLevelSliderAttachment=  new SliderAttachment(valueTreeState, Sp4DelayLevel_Id, Sp4DelayLevelSlider);
    Sp4DelayTimeSliderModAttachment=  new SliderAttachment(valueTreeState, Sp4DelayTimeMod_Id, Sp4DelayTimeModSlider);
    Sp4DelayFeedSliderModAttachment= new SliderAttachment(valueTreeState, Sp4DelayFeedMod_Id, Sp4DelayFeedModSlider);
    Sp4DelayMixSliderModAttachment= new SliderAttachment(valueTreeState, Sp4DelayMixMod_Id, Sp4DelayMixModSlider);
    Sp4DelayLevelSliderModAttachment= new SliderAttachment(valueTreeState, Sp4DelayLevelMod_Id, Sp4DelayLevelModSlider);
    
    
    
    
    Sp4LfoModeAttachment= new ComboBoxAttachment(valueTreeState, Sp4LfoMode_Id, Sp4LfoModeCombox);
    Sp4LfoRtrModeAttachment= new ComboBoxAttachment(valueTreeState, Sp4LfoRtr_Id, Sp4LfoRtrModeButton);
    Sp4LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp4LfoTime_Id, Sp4LfoTimeSlider);
    Sp4LfoAmpAttachment= new SliderAttachment(valueTreeState, Sp4LfoAmp_Id, Sp4LfoAmpSlider);

    //------------------------------------5-------------------------------------------
    Sp5SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp5Synthwaveform_Id, Sp5SynthwaveformCombo);
    Sp5SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp5SynthmidiNoteNumber_Id, Sp5SynthnoteNumberSlider);
    Sp5SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp5SynthmidiNoteNumberMod_Id, Sp5SynthnoteNumberModSlider);
    Sp5SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp5Synthlevel_Id, Sp5SynthlevelSlider);
    Sp5SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp5SynthlevelMod_Id, Sp5SynthlevelModSlider);
    Sp5SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp5SynthAttack_Id, Sp5SynthAttackSlider);
    Sp5SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp5SynthRelease_Id, Sp5SynthReleaseSlider);
    Sp5SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp5SynthReleaseMod_Id, Sp5SynthReleaseModSlider);
    Sp5StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp5StepperOnOff_Id, Sp5StepperOnOffToggle);
    Sp5EngineModeAttachment = new ButtonAttachment(valueTreeState, Sp5EngineMode_Id, Sp5EngineModeButton);

    Sp5PlayModeAttachment = new ComboBoxAttachment(valueTreeState, Sp5PlayMode_Id, Sp5PlayModusCombo);
    Sp5PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState, Sp5PlayTimeMode_Id, Sp5PlayTimeModusCombo);

    Sp5GateAttachment = new SliderAttachment(valueTreeState, Sp5Gate_Id, Sp5GateSlider);
    Sp5WaveNrAttachment = new SliderAttachment(valueTreeState, Sp5WaveNr_Id, Sp5WnrSlider);
    Sp5PatternStateParasAttachment = new ButtonAttachment(valueTreeState, Sp5PatternStateParas_Id, Sp5PatternStateValueSlider);
    Sp5PitchAttachment = new SliderAttachment(valueTreeState, Sp5Pitch_Id, Sp5PichSlider);
    Sp5PitchModAttachment = new SliderAttachment(valueTreeState, Sp5PitchMod_Id, Sp5PichModSlider);
    Sp5StartAttachment = new SliderAttachment(valueTreeState, Sp5StartSample_Id, Sp5StartSlider);
    Sp5EndAttachment = new SliderAttachment(valueTreeState, Sp5EndSample_Id, Sp5EndSlider);
    Sp5VolumeAttachment = new SliderAttachment(valueTreeState, Sp5Volume_Id, Sp5VolumeSlider);
    Sp5VolumeModAttachment = new SliderAttachment(valueTreeState, Sp5VolumeMod_Id, Sp5VolumeModSlider);
    Sp5AttackAttachment = new SliderAttachment(valueTreeState, Sp5Attack_Id, Sp5AttackSlider);
    Sp5ReleaseAttachment = new SliderAttachment(valueTreeState, Sp5Release_Id, Sp5ReleaseSlider);
    Sp5ReleaseModAttachment = new SliderAttachment(valueTreeState, Sp5ReleaseMod_Id, Sp5ReleaseModSlider);
    Sp5EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp5EnvMode_Id, Sp5EnvModeButton);
    Sp5EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp5EnvModeFix_Id, Sp5EnvModeFixButton);
    Sp5EngineModulationAttachment = new ButtonAttachment(valueTreeState, Sp5EMod_Id, Sp5EModButton);


    Sp5FilterCutAttachment = new SliderAttachment(valueTreeState, Sp5Cutoff_Id, Sp5CutoffSlider);
    Sp5FilterCutModAttachment = new SliderAttachment(valueTreeState, Sp5CutoffMod_Id, Sp5CutoffModSlider);
    Sp5FilterResAttachment = new SliderAttachment(valueTreeState, Sp5Resonance_Id, Sp5ResonanceSlider);
    Sp5FilterModeAttachment = new ComboBoxAttachment(valueTreeState, Sp5FilterMode_Id, Sp5FilterModeCombox);



    Sp5DelayModeComboxAttachment = new ComboBoxAttachment(valueTreeState, Sp5DelayMode_Id, Sp5DelayModeCombox);
    Sp5DelayTimeSliderAttachment = new SliderAttachment(valueTreeState, Sp5DelayTime_Id, Sp5DelayTimeSlider);
    Sp5DelayFeedSliderAttachment = new SliderAttachment(valueTreeState, Sp5DelayFeed_Id, Sp5DelayFeedSlider);
    Sp5DelayMixSliderAttachment = new SliderAttachment(valueTreeState, Sp5DelayMix_Id, Sp5DelayMixSlider);
    Sp5DelayLevelSliderAttachment = new SliderAttachment(valueTreeState, Sp5DelayLevel_Id, Sp5DelayLevelSlider);
    Sp5DelayTimeSliderModAttachment = new SliderAttachment(valueTreeState, Sp5DelayTimeMod_Id, Sp5DelayTimeModSlider);
    Sp5DelayFeedSliderModAttachment = new SliderAttachment(valueTreeState, Sp5DelayFeedMod_Id, Sp5DelayFeedModSlider);
    Sp5DelayMixSliderModAttachment = new SliderAttachment(valueTreeState, Sp5DelayMixMod_Id, Sp5DelayMixModSlider);
    Sp5DelayLevelSliderModAttachment = new SliderAttachment(valueTreeState, Sp5DelayLevelMod_Id, Sp5DelayLevelModSlider);




    Sp5LfoModeAttachment = new ComboBoxAttachment(valueTreeState, Sp5LfoMode_Id, Sp5LfoModeCombox);
    Sp5LfoRtrModeAttachment = new ComboBoxAttachment(valueTreeState, Sp5LfoRtr_Id, Sp5LfoRtrModeButton);
    Sp5LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp5LfoTime_Id, Sp5LfoTimeSlider);
    Sp5LfoAmpAttachment = new SliderAttachment(valueTreeState, Sp5LfoAmp_Id, Sp5LfoAmpSlider);

    //------------------------------------6-------------------------------------------
    Sp6SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp6Synthwaveform_Id, Sp6SynthwaveformCombo);
    Sp6SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp6SynthmidiNoteNumber_Id, Sp6SynthnoteNumberSlider);
    Sp6SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp6SynthmidiNoteNumberMod_Id, Sp6SynthnoteNumberModSlider);
    Sp6SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp6Synthlevel_Id, Sp6SynthlevelSlider);
    Sp6SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp6SynthlevelMod_Id, Sp6SynthlevelModSlider);
    Sp6SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp6SynthAttack_Id, Sp6SynthAttackSlider);
    Sp6SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp6SynthRelease_Id, Sp6SynthReleaseSlider);
    Sp6SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp6SynthReleaseMod_Id, Sp6SynthReleaseModSlider);
    Sp6StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp6StepperOnOff_Id, Sp6StepperOnOffToggle);
    Sp6EngineModeAttachment = new ButtonAttachment(valueTreeState, Sp6EngineMode_Id, Sp6EngineModeButton);

    Sp6PlayModeAttachment = new ComboBoxAttachment(valueTreeState, Sp6PlayMode_Id, Sp6PlayModusCombo);
    Sp6PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState, Sp6PlayTimeMode_Id, Sp6PlayTimeModusCombo);

    Sp6GateAttachment = new SliderAttachment(valueTreeState, Sp6Gate_Id, Sp6GateSlider);
    Sp6WaveNrAttachment = new SliderAttachment(valueTreeState, Sp6WaveNr_Id, Sp6WnrSlider);
    Sp6PatternStateParasAttachment = new ButtonAttachment(valueTreeState, Sp6PatternStateParas_Id, Sp6PatternStateValueSlider);
    Sp6PitchAttachment = new SliderAttachment(valueTreeState, Sp6Pitch_Id, Sp6PichSlider);
    Sp6PitchModAttachment = new SliderAttachment(valueTreeState, Sp6PitchMod_Id, Sp6PichModSlider);
    Sp6StartAttachment = new SliderAttachment(valueTreeState, Sp6StartSample_Id, Sp6StartSlider);
    Sp6EndAttachment = new SliderAttachment(valueTreeState, Sp6EndSample_Id, Sp6EndSlider);
    Sp6VolumeAttachment = new SliderAttachment(valueTreeState, Sp6Volume_Id, Sp6VolumeSlider);
    Sp6VolumeModAttachment = new SliderAttachment(valueTreeState, Sp6VolumeMod_Id, Sp6VolumeModSlider);
    Sp6AttackAttachment = new SliderAttachment(valueTreeState, Sp6Attack_Id, Sp6AttackSlider);
    Sp6ReleaseAttachment = new SliderAttachment(valueTreeState, Sp6Release_Id, Sp6ReleaseSlider);
    Sp6ReleaseModAttachment = new SliderAttachment(valueTreeState, Sp6ReleaseMod_Id, Sp6ReleaseModSlider);
    Sp6EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp6EnvMode_Id, Sp6EnvModeButton);
    Sp6EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp6EnvModeFix_Id, Sp6EnvModeFixButton);
    Sp6EngineModulationAttachment = new ButtonAttachment(valueTreeState, Sp6EMod_Id, Sp6EModButton);


    Sp6FilterCutAttachment = new SliderAttachment(valueTreeState, Sp6Cutoff_Id, Sp6CutoffSlider);
    Sp6FilterCutModAttachment = new SliderAttachment(valueTreeState, Sp6CutoffMod_Id, Sp6CutoffModSlider);
    Sp6FilterResAttachment = new SliderAttachment(valueTreeState, Sp6Resonance_Id, Sp6ResonanceSlider);
    Sp6FilterModeAttachment = new ComboBoxAttachment(valueTreeState, Sp6FilterMode_Id, Sp6FilterModeCombox);



    Sp6DelayModeComboxAttachment = new ComboBoxAttachment(valueTreeState, Sp6DelayMode_Id, Sp6DelayModeCombox);
    Sp6DelayTimeSliderAttachment = new SliderAttachment(valueTreeState, Sp6DelayTime_Id, Sp6DelayTimeSlider);
    Sp6DelayFeedSliderAttachment = new SliderAttachment(valueTreeState, Sp6DelayFeed_Id, Sp6DelayFeedSlider);
    Sp6DelayMixSliderAttachment = new SliderAttachment(valueTreeState, Sp6DelayMix_Id, Sp6DelayMixSlider);
    Sp6DelayLevelSliderAttachment = new SliderAttachment(valueTreeState, Sp6DelayLevel_Id, Sp6DelayLevelSlider);
    Sp6DelayTimeSliderModAttachment = new SliderAttachment(valueTreeState, Sp6DelayTimeMod_Id, Sp6DelayTimeModSlider);
    Sp6DelayFeedSliderModAttachment = new SliderAttachment(valueTreeState, Sp6DelayFeedMod_Id, Sp6DelayFeedModSlider);
    Sp6DelayMixSliderModAttachment = new SliderAttachment(valueTreeState, Sp6DelayMixMod_Id, Sp6DelayMixModSlider);
    Sp6DelayLevelSliderModAttachment = new SliderAttachment(valueTreeState, Sp6DelayLevelMod_Id, Sp6DelayLevelModSlider);




    Sp6LfoModeAttachment = new ComboBoxAttachment(valueTreeState, Sp6LfoMode_Id, Sp6LfoModeCombox);
    Sp6LfoRtrModeAttachment = new ComboBoxAttachment(valueTreeState, Sp6LfoRtr_Id, Sp6LfoRtrModeButton);
    Sp6LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp6LfoTime_Id, Sp6LfoTimeSlider);
    Sp6LfoAmpAttachment = new SliderAttachment(valueTreeState, Sp6LfoAmp_Id, Sp6LfoAmpSlider);

    //------------------------------------7-------------------------------------------
    Sp7SynthWaveformAttachment = new ComboBoxAttachment(valueTreeState, Sp7Synthwaveform_Id, Sp7SynthwaveformCombo);
    Sp7SynthNoteNumberAttachment = new SliderAttachment(valueTreeState, Sp7SynthmidiNoteNumber_Id, Sp7SynthnoteNumberSlider);
    Sp7SynthNoteNumberModAttachment = new SliderAttachment(valueTreeState, Sp7SynthmidiNoteNumberMod_Id, Sp7SynthnoteNumberModSlider);
    Sp7SynthLevelAttachment = new SliderAttachment(valueTreeState, Sp7Synthlevel_Id, Sp7SynthlevelSlider);
    Sp7SynthLevelModAttachment = new SliderAttachment(valueTreeState, Sp7SynthlevelMod_Id, Sp7SynthlevelModSlider);
    Sp7SynthAttackAttachment = new SliderAttachment(valueTreeState, Sp7SynthAttack_Id, Sp7SynthAttackSlider);
    Sp7SynthReleaseAttachment = new SliderAttachment(valueTreeState, Sp7SynthRelease_Id, Sp7SynthReleaseSlider);
    Sp7SynthReleaseModAttachment = new SliderAttachment(valueTreeState, Sp7SynthReleaseMod_Id, Sp7SynthReleaseModSlider);
    Sp7StepperOnOffAttachment = new ButtonAttachment(valueTreeState, Sp7StepperOnOff_Id, Sp7StepperOnOffToggle);
    Sp7EngineModeAttachment = new ButtonAttachment(valueTreeState, Sp7EngineMode_Id, Sp7EngineModeButton);

    Sp7PlayModeAttachment = new ComboBoxAttachment(valueTreeState, Sp7PlayMode_Id, Sp7PlayModusCombo);
    Sp7PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState, Sp7PlayTimeMode_Id, Sp7PlayTimeModusCombo);

    Sp7GateAttachment = new SliderAttachment(valueTreeState, Sp7Gate_Id, Sp7GateSlider);
    Sp7WaveNrAttachment = new SliderAttachment(valueTreeState, Sp7WaveNr_Id, Sp7WnrSlider);
    Sp7PatternStateParasAttachment = new ButtonAttachment(valueTreeState, Sp7PatternStateParas_Id, Sp7PatternStateValueSlider);
    Sp7PitchAttachment = new SliderAttachment(valueTreeState, Sp7Pitch_Id, Sp7PichSlider);
    Sp7PitchModAttachment = new SliderAttachment(valueTreeState, Sp7PitchMod_Id, Sp7PichModSlider);
    Sp7StartAttachment = new SliderAttachment(valueTreeState, Sp7StartSample_Id, Sp7StartSlider);
    Sp7EndAttachment = new SliderAttachment(valueTreeState, Sp7EndSample_Id, Sp7EndSlider);
    Sp7VolumeAttachment = new SliderAttachment(valueTreeState, Sp7Volume_Id, Sp7VolumeSlider);
    Sp7VolumeModAttachment = new SliderAttachment(valueTreeState, Sp7VolumeMod_Id, Sp7VolumeModSlider);
    Sp7AttackAttachment = new SliderAttachment(valueTreeState, Sp7Attack_Id, Sp7AttackSlider);
    Sp7ReleaseAttachment = new SliderAttachment(valueTreeState, Sp7Release_Id, Sp7ReleaseSlider);
    Sp7ReleaseModAttachment = new SliderAttachment(valueTreeState, Sp7ReleaseMod_Id, Sp7ReleaseModSlider);
    Sp7EnvModeAttachment = new ButtonAttachment(valueTreeState, Sp7EnvMode_Id, Sp7EnvModeButton);
    Sp7EnvModeFixAttachment = new SliderAttachment(valueTreeState, Sp7EnvModeFix_Id, Sp7EnvModeFixButton);
    Sp7EngineModulationAttachment = new ButtonAttachment(valueTreeState, Sp7EMod_Id, Sp7EModButton);


    Sp7FilterCutAttachment = new SliderAttachment(valueTreeState, Sp7Cutoff_Id, Sp7CutoffSlider);
    Sp7FilterCutModAttachment = new SliderAttachment(valueTreeState, Sp7CutoffMod_Id, Sp7CutoffModSlider);
    Sp7FilterResAttachment = new SliderAttachment(valueTreeState, Sp7Resonance_Id, Sp7ResonanceSlider);
    Sp7FilterModeAttachment = new ComboBoxAttachment(valueTreeState, Sp7FilterMode_Id, Sp7FilterModeCombox);



    Sp7DelayModeComboxAttachment = new ComboBoxAttachment(valueTreeState, Sp7DelayMode_Id, Sp7DelayModeCombox);
    Sp7DelayTimeSliderAttachment = new SliderAttachment(valueTreeState, Sp7DelayTime_Id, Sp7DelayTimeSlider);
    Sp7DelayFeedSliderAttachment = new SliderAttachment(valueTreeState, Sp7DelayFeed_Id, Sp7DelayFeedSlider);
    Sp7DelayMixSliderAttachment = new SliderAttachment(valueTreeState, Sp7DelayMix_Id, Sp7DelayMixSlider);
    Sp7DelayLevelSliderAttachment = new SliderAttachment(valueTreeState, Sp7DelayLevel_Id, Sp7DelayLevelSlider);
    Sp7DelayTimeSliderModAttachment = new SliderAttachment(valueTreeState, Sp7DelayTimeMod_Id, Sp7DelayTimeModSlider);
    Sp7DelayFeedSliderModAttachment = new SliderAttachment(valueTreeState, Sp7DelayFeedMod_Id, Sp7DelayFeedModSlider);
    Sp7DelayMixSliderModAttachment = new SliderAttachment(valueTreeState, Sp7DelayMixMod_Id, Sp7DelayMixModSlider);
    Sp7DelayLevelSliderModAttachment = new SliderAttachment(valueTreeState, Sp7DelayLevelMod_Id, Sp7DelayLevelModSlider);




    Sp7LfoModeAttachment = new ComboBoxAttachment(valueTreeState, Sp7LfoMode_Id, Sp7LfoModeCombox);
    Sp7LfoRtrModeAttachment = new ComboBoxAttachment(valueTreeState, Sp7LfoRtr_Id, Sp7LfoRtrModeButton);
    Sp7LfoTimeAttachment = new SliderAttachment(valueTreeState, Sp7LfoTime_Id, Sp7LfoTimeSlider);
    Sp7LfoAmpAttachment = new SliderAttachment(valueTreeState, Sp7LfoAmp_Id, Sp7LfoAmpSlider);
    
   
}

void PluginParameters::putToXml(XmlElement& xml)
{
    // Set XML attributes based on working parameter values
    /*
    //mainParas----------------------------------------------------
    xml.setAttribute(waveform_Name, waveform.name());
    xml.setAttribute(midiNoteNumber_Name, midiNoteNumber);
    xml.setAttribute(level_Name, level);
    xml.setAttribute(StepperOnOffValue_Name, StepperOnOffValue);

    
     //Sampler---------------------------------------------------------
    
      xml.setAttribute(Sp1PlayMode_Name, SpPlayMode.name());
      xml.setAttribute(Sp1Pitch_Name, Sp1Pitch);
      xml.setAttribute(Sp1StartSample_Name, Sp1StartSampel);
      xml.setAttribute(Sp1EndSample_Name, Sp1EndSampel);

    */
    
    
    
}

void PluginParameters::getFromXml(XmlElement* pXml)
{
    // Set parameters based on XML attributes
    // Parameter listeners will propagate to working values

    //mainParas----------------------------------------------------
    
    /*
    SynthWaveform wf;
    wf.setFromName(pXml->getStringAttribute(waveform_Name));
    valueTreeState.getParameterAsValue(waveform_Id).setValue(wf.getIndex());

    int nn = pXml->getIntAttribute(midiNoteNumber_Name);
    valueTreeState.getParameterAsValue(midiNoteNumber_Id).setValue(nn);

    float lvl = (float)pXml->getDoubleAttribute(level_Name);
    valueTreeState.getParameterAsValue(level_Id).setValue(lvl);

    int isStepperOnOffValue = pXml->getBoolAttribute(StepperOnOffValue_Name) ? 1 : 0;
    valueTreeState.getParameterAsValue(StepperOnOffValue_Id).setValue(isStepperOnOffValue);
    

    //Sampler---------------------------------------------------------
    SamplePlayMode spm;
    spm.setFromName(pXml->getStringAttribute(Sp1PlayMode_Name));
    valueTreeState.getParameterAsValue(Sp1PlayMode_Id).setValue(spm.getIndex());
    
    float ps1 = (float)pXml->getDoubleAttribute(Sp1Pitch_Name);
    valueTreeState.getParameterAsValue(Sp1Pitch_Id).setValue(ps1);
    
    float pSts1 = (float)pXml->getDoubleAttribute(Sp1StartSample_Name);
    valueTreeState.getParameterAsValue(Sp1StartSample_Id).setValue(pSts1);
    
    float pEts1 = (float)pXml->getDoubleAttribute(Sp1EndSample_Name);
    valueTreeState.getParameterAsValue(Sp1EndSample_Id).setValue(pEts1);


    */
    
    
    
}
