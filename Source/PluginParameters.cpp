
#include "PluginParameters.h"

// Names are symbolic names used to tag AudioParameter objects and XML attributes
// Labels are human-friendly identifiers for use in GUIs



//--------------Mainparas--------------------------------
const String PluginParameters::TimerMode_Id = "timermode";
const String PluginParameters::TimerMode_Name = TRANS("Timermode");
const String PluginParameters::TimerMode_Label;


const String PluginParameters::TimerBpm_Id = "timerbpm";
const String PluginParameters::TimerBpm_Name = TRANS("Timerbpm");
const String PluginParameters::TimerBpm_Label;

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

const String PluginParameters::Sp1SynthModPos_Id = "Sp1SynthModPos";
const String PluginParameters::Sp1SynthModPos_Name = TRANS("Sp1SynthModPos");
const String PluginParameters::Sp1SynthModPos_Label;

const String PluginParameters::Sp1EngineMode_Id = "sp1emode";
const String PluginParameters::Sp1EngineMode_Name = TRANS("Sp1Emode");
const String PluginParameters::Sp1EngineMode_Label;



const String PluginParameters::Sp1WaveNr_Id = "sp1WaveNr";
const String PluginParameters::Sp1WaveNr_Name = TRANS("Sp1Wav");
const String PluginParameters::Sp1WaveNr_Label;

const String PluginParameters::Sp1WaveNrMod_Id = "sp1WaveNrMod";
const String PluginParameters::Sp1WaveNrMod_Name = TRANS("Sp1WavNrMod");
const String PluginParameters::Sp1WaveNrMod_Label;


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

const String PluginParameters::Sp2SynthModPos_Id = "Sp2SynthModPos";
const String PluginParameters::Sp2SynthModPos_Name = TRANS("Sp2SynthModPos");
const String PluginParameters::Sp2SynthModPos_Label;

const String PluginParameters::Sp2EngineMode_Id = "Sp2emode";
const String PluginParameters::Sp2EngineMode_Name = TRANS("Sp2Emode");
const String PluginParameters::Sp2EngineMode_Label;



const String PluginParameters::Sp2WaveNr_Id = "Sp2WaveNr";
const String PluginParameters::Sp2WaveNr_Name = TRANS("Sp2Wav");
const String PluginParameters::Sp2WaveNr_Label;

const String PluginParameters::Sp2WaveNrMod_Id = "sp2WaveNrMod";
const String PluginParameters::Sp2WaveNrMod_Name = TRANS("Sp2WavNrMod");
const String PluginParameters::Sp2WaveNrMod_Label;


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

const String PluginParameters::Sp3SynthModPos_Id = "Sp3SynthModPos";
const String PluginParameters::Sp3SynthModPos_Name = TRANS("Sp3SynthModPos");
const String PluginParameters::Sp3SynthModPos_Label;

const String PluginParameters::Sp3EngineMode_Id = "Sp3emode";
const String PluginParameters::Sp3EngineMode_Name = TRANS("Sp3Emode");
const String PluginParameters::Sp3EngineMode_Label;



const String PluginParameters::Sp3WaveNr_Id = "Sp3WaveNr";
const String PluginParameters::Sp3WaveNr_Name = TRANS("Sp3Wav");
const String PluginParameters::Sp3WaveNr_Label;

const String PluginParameters::Sp3WaveNrMod_Id = "sp3WaveNrMod";
const String PluginParameters::Sp3WaveNrMod_Name = TRANS("Sp3WavNrMod");
const String PluginParameters::Sp3WaveNrMod_Label;


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


//-------------Sampler4Paras-----------------------------
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

const String PluginParameters::Sp4SynthModPos_Id = "Sp4SynthModPos";
const String PluginParameters::Sp4SynthModPos_Name = TRANS("Sp4SynthModPos");
const String PluginParameters::Sp4SynthModPos_Label;

const String PluginParameters::Sp4EngineMode_Id = "Sp4emode";
const String PluginParameters::Sp4EngineMode_Name = TRANS("Sp4Emode");
const String PluginParameters::Sp4EngineMode_Label;



const String PluginParameters::Sp4WaveNr_Id = "Sp4WaveNr";
const String PluginParameters::Sp4WaveNr_Name = TRANS("Sp4Wav");
const String PluginParameters::Sp4WaveNr_Label;

const String PluginParameters::Sp4WaveNrMod_Id = "sp4WaveNrMod";
const String PluginParameters::Sp4WaveNrMod_Name = TRANS("Sp4WavNrMod");
const String PluginParameters::Sp4WaveNrMod_Label;


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



PluginParameters::PluginParameters(AudioProcessorValueTreeState& vts)
    : valueTreeState(vts)

//------------mainattachment------------


,TimerModeAttachment(nullptr)
,TimerBpmAttachment(nullptr)
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
,Sp1SynthModPosAttachment(nullptr)

,Sp1PlayModeAttachment(nullptr)
,Sp1PlayTimeModeAttachment(nullptr)
,Sp1EngineModeAttachment(nullptr)
,Sp1EngineModulationAttachment(nullptr)
,Sp1WaveNrAttachment(nullptr)
,Sp1WaveNrModAttachment(nullptr)
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
,Sp2SynthModPosAttachment(nullptr)

,Sp2PlayModeAttachment(nullptr)
,Sp2PlayTimeModeAttachment(nullptr)
,Sp2EngineModeAttachment(nullptr)
,Sp2EngineModulationAttachment(nullptr)
,Sp2WaveNrAttachment(nullptr)
,Sp2WaveNrModAttachment(nullptr)
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
,Sp3SynthModPosAttachment(nullptr)

,Sp3PlayModeAttachment(nullptr)
,Sp3PlayTimeModeAttachment(nullptr)
,Sp3EngineModeAttachment(nullptr)
,Sp3EngineModulationAttachment(nullptr)
,Sp3WaveNrAttachment(nullptr)
,Sp3WaveNrModAttachment(nullptr)
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
,Sp4SynthModPosAttachment(nullptr)

,Sp4PlayModeAttachment(nullptr)
,Sp4PlayTimeModeAttachment(nullptr)
,Sp4EngineModeAttachment(nullptr)
,Sp4EngineModulationAttachment(nullptr)
,Sp4WaveNrAttachment(nullptr)
,Sp4WaveNrModAttachment(nullptr)
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





//--------------mainparas----------------


,TimeModeListener(TimerModeV)
,TimeBpmListener(TimerBpm)
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
,Sp1SynthModPosListener(loud)

,Sp1EngineModeListener(Sp1EngineMode)
,Sp1PlayModusListener(SpPlayMode)
,Sp1PlayTimeModusListener(Sp1PlayTimeMode)
,Sp1GateListener(Sp1Gate)
,Sp1WaveNrListener(Sp1Wnr)
,Sp1WaveNrModListener(Sp1WnrMod)
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
,Sp2SynthModPosListener(Sp2loud)
,Sp2EngineModeListener(Sp2EngineMode)

,Sp2PlayModusListener(SpPlayMode)
,Sp2PlayTimeModusListener(Sp2PlayTimeMode)
,Sp2GateListener(Sp2Gate)
,Sp2WaveNrListener(Sp2Wnr)
,Sp2WaveNrModListener(Sp2WnrMod)
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
,Sp3SynthModPosListener(Sp3loud)
,Sp3EngineModeListener(Sp3EngineMode)

,Sp3PlayModusListener(SpPlayMode)
,Sp3PlayTimeModusListener(Sp3PlayTimeMode)
,Sp3GateListener(Sp3Gate)
,Sp3WaveNrListener(Sp3Wnr)
,Sp3WaveNrModListener(Sp3WnrMod)
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
,Sp4SynthModPosListener(Sp4loud)
,Sp4EngineModeListener(Sp4EngineMode)

,Sp4PlayModusListener(SpPlayMode)
,Sp4PlayTimeModusListener(Sp4PlayTimeMode)
,Sp4GateListener(Sp4Gate)
,Sp4WaveNrListener(Sp4Wnr)
,Sp4WaveNrModListener(Sp4WnrMod)
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




{
    

    // Set default values of working values
    //-----------------Mainparas------------------
    TimerModeV.setIndex(0);
    TimerBpm=120;
    mainSqLenghtValue=16;
    mainWaveValue=10;
    mainPitchValue=1;
    mainDelayValue=0.05;
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
    loud = true;
    Sp1synthmidiNoteNumber = 60;
    Sp1synthmidiNoteNumberMod = 0;
    Sp1SynthReleaseValue=0.2;
    Sp1SynthReleaseModValue=0.0;
    Sp1SynthAttackValue=0.2;
    Sp1EngineMode=true;
 
    Sp1Wnr=5;
    Sp1WnrMod=true;
    Sp1Gate=0.5;
    Sp1Pitch=2.0;
    Sp1PitchMod=0.0f;
    Sp1StartSampel=0;
    Sp1EndSampel=1;
    Sp1Volume=0.7;
    Sp1Emod=true;
    Sp1VolumeMod=0.0;
    Sp1Attack=0.1;
    Sp1Release=0.4;
    Sp1ReleaseMod=0.0;
    Sp1EnvModeValue = false;
    Sp1EnvModeFixValue = 1;
    Sp1Cutoff=0.95;
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
    Sp2loud = true;
    Sp2synthmidiNoteNumber = 60;
    Sp2synthmidiNoteNumberMod = 0;
    Sp2SynthReleaseValue=0.2;
    Sp2SynthReleaseModValue=0.0;
    Sp2SynthAttackValue=0.2;
    Sp2EngineMode=true;
    
    Sp2Wnr=5;
    Sp2WnrMod=true;
    Sp2Gate=0.5;
    Sp2Pitch=2.0;
    Sp2PitchMod=0.0f;
    Sp2StartSampel=0;
    Sp2EndSampel=1;
    Sp2Volume=0.7;
    Sp2Emod=true;
    Sp2VolumeMod=0.0;
    Sp2Attack=0.1;
    Sp2Release=0.3;
    Sp2ReleaseMod=0.0;
    Sp2EnvModeValue = false;
    Sp2EnvModeFixValue = 1;
    Sp2Cutoff=0.95;
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
    Sp2LfoTime=0.125;
    Sp2LfoAmp=0.3;

//----------------Engine3----------------------
    
    
    // waveform already defaults to "Sine"
    
    Sp3PlayMode.setIndex(1);
    Sp3PlayTimeMode.setIndex(7);
    Sp3synthlevel = 0.2f;
    Sp3synthlevelMod = 0.0f;
    Sp3loud = true;
    Sp3synthmidiNoteNumber = 60;
    Sp3synthmidiNoteNumberMod = 0;
    Sp3SynthReleaseValue=0.2;
    Sp3SynthReleaseModValue=0.0;
    Sp3SynthAttackValue=0.2;
    Sp3EngineMode=true;
    
    Sp3Wnr=5;
    Sp3WnrMod=true;
    Sp3Gate=0.5;
    Sp3Pitch=2.0;
    Sp3PitchMod=0.0f;
    Sp3StartSampel=0;
    Sp3EndSampel=1;
    Sp3Volume=0.7;
    Sp3Emod=true;
    Sp3VolumeMod=0.0;
    Sp3Attack=0.1;
    Sp3Release=0.9;
    Sp3ReleaseMod=0.0;
    Sp3EnvModeValue = false;
    Sp3EnvModeFixValue = 1;
    Sp3Cutoff=0.95;
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
    Sp3LfoTime=0.33;
    Sp3LfoAmp=0.3;

    //----------------Engine4----------------------
    
    
    // waveform already defaults to "Sine"
    
    Sp4PlayMode.setIndex(1);
    Sp4PlayTimeMode.setIndex(7);
    Sp4synthlevel = 0.2f;
    Sp4synthlevelMod = 0.0f;
    Sp4loud = true;
    Sp4synthmidiNoteNumber = 60;
    Sp4synthmidiNoteNumberMod = 0;
    Sp4SynthReleaseValue=0.2;
    Sp4SynthReleaseModValue=0.0;
    Sp4SynthAttackValue=0.2;
    Sp4EngineMode=true;
    
    Sp4Wnr=5;
    Sp4WnrMod=true;
    Sp4Gate=0.5;
    Sp4Pitch=2.0;
    Sp4PitchMod=0.0f;
    Sp4StartSampel=0;
    Sp4EndSampel=1;
    Sp4Volume=0.7;
    Sp4Emod=true;
    Sp4VolumeMod=0.0;
    Sp4Attack=0.1;
    Sp4Release=0.3;
    Sp4ReleaseMod=0.0;
    Sp4EnvModeValue = false;
    Sp4EnvModeFixValue = 1;
    Sp4Cutoff=0.95;
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
    Sp4LfoTime=0.5;
    Sp4LfoAmp=0.6;
}

void PluginParameters::createAllParameters()
{
 //------------------------------Mainparas-----------------------------------
    
    valueTreeState.createAndAddParameter(TimerMode_Id, TimerMode_Name, TimerMode_Label,
                                         NormalisableRange<float>(0.0f, (float)(TimeMode::kChoices - 1), 1.0f),
                                         (float)TimerModeV.getIndex(),
                                         TimeMode::floatToText,
                                         TimeMode::textToFloat);
    valueTreeState.addParameterListener(TimerMode_Id, &TimeModeListener);
    

    
    valueTreeState.createAndAddParameter(TimerBpm_Id, TimerBpm_Name, TimerBpm_Label,
                                        NormalisableRange<float>(0.10f, 180.0f, 1),
                                         TimerBpm,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(TimerBpm_Id, &TimeBpmListener);
    
    
    valueTreeState.createAndAddParameter(mainSqLenght_Id, mainSqLenght_Name, mainSqLenght_Label,
                                         NormalisableRange<float>(2.0f, 16.0f, 1),
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
                                         NormalisableRange<float>(0.2f, 1.0f, 0.001),
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
                                         NormalisableRange<float>(0.0f, 3.0f, 1.0f),
                                         EngineSelectValue,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(EngineSelect_Id, &EngineSelectListener);
    



    
    valueTreeState.createAndAddParameter(TriggerSelect10_Id, TriggerSelect10_Name, TriggerSelect10_Label,
                                         NormalisableRange<float>(0, 10,1),
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

    // loud: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp1SynthModPos_Id, Sp1SynthModPos_Name, Sp1SynthModPos_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        loud ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp1SynthModPos_Id, &Sp1SynthModPosListener);
    
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
   
    valueTreeState.createAndAddParameter(Sp1WaveNrMod_Id, Sp1WaveNrMod_Name, Sp1WaveNrMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp1WnrMod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
                                   
    valueTreeState.addParameterListener(Sp1WaveNrMod_Id, &Sp1WaveNrModListener);
    
    
    valueTreeState.createAndAddParameter(Sp1Gate_Id, Sp1Gate_Name, Sp1Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.01f),
                                         Sp1Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp1Gate_Id, &Sp1GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp1Pitch_Id, Sp1Pitch_Name, Sp1Pitch_Label,
                                         NormalisableRange<float>(1.0f, 3.0f, 0.01f),
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
    
    // loud: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp2SynthModPos_Id, Sp2SynthModPos_Name, Sp2SynthModPos_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp2loud ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp2SynthModPos_Id, &Sp2SynthModPosListener);
    
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
    
    valueTreeState.createAndAddParameter(Sp2WaveNrMod_Id, Sp2WaveNrMod_Name, Sp2WaveNrMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp2WnrMod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp2WaveNrMod_Id, &Sp2WaveNrModListener);
    
    valueTreeState.createAndAddParameter(Sp2Gate_Id, Sp2Gate_Name, Sp2Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.001f),
                                         Sp2Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp2Gate_Id, &Sp2GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp2Pitch_Id, Sp2Pitch_Name, Sp2Pitch_Label,
                                         NormalisableRange<float>(1.0f, 3.0f, 0.001f),
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
    
    // loud: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp3SynthModPos_Id, Sp3SynthModPos_Name, Sp3SynthModPos_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp3loud ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp3SynthModPos_Id, &Sp3SynthModPosListener);
    
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
    
    valueTreeState.createAndAddParameter(Sp3WaveNrMod_Id, Sp3WaveNrMod_Name, Sp3WaveNrMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp3WnrMod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp3WaveNrMod_Id, &Sp3WaveNrModListener);
    
    valueTreeState.createAndAddParameter(Sp3Gate_Id, Sp3Gate_Name, Sp3Gate_Label,
                                         NormalisableRange<float>(0.0f, 0.99f, 0.001f),
                                         Sp3Gate,
                                         [](float value) { return String(value); },
                                         [](const String& text) { return text.getFloatValue(); } );
    valueTreeState.addParameterListener(Sp3Gate_Id, &Sp3GateListener);
    
    
    
    valueTreeState.createAndAddParameter(Sp3Pitch_Id, Sp3Pitch_Name, Sp3Pitch_Label,
                                         NormalisableRange<float>(1.0f, 3.0f, 0.001f),
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
    
    // loud: boolean parameter, range 0.0-1.0, show as "yes" or "no"
    valueTreeState.createAndAddParameter(Sp4SynthModPos_Id, Sp4SynthModPos_Name, Sp4SynthModPos_Label,
                                         NormalisableRange<float>(0.0f, 1.0f, 1.0f),
                                         Sp4loud ? 1.0f : 0.0f,
                                         [](float value) { return value < 0.5f ? "no" : "yes"; },
                                         [](const String& text) { return text == "yes" ? 1.0f : 0.0f; } );
    valueTreeState.addParameterListener(Sp4SynthModPos_Id, &Sp4SynthModPosListener);
    
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
    
    valueTreeState.createAndAddParameter(Sp4WaveNrMod_Id, Sp4WaveNrMod_Name, Sp4WaveNrMod_Label,
        NormalisableRange<float>(0.0f, 1.0f, 1.0f),
        Sp4WnrMod ? 1.0f : 0.0f,
        [](float value) { return value < 0.5f ? "no" : "yes"; },
        [](const String& text) { return text == "yes" ? 1.0f : 0.0f; });
    valueTreeState.addParameterListener(Sp4WaveNrMod_Id, &Sp4WaveNrModListener);
    
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
                                         NormalisableRange<float>(1.0f, 4.0f, 0.001f),
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
    
    
}

void PluginParameters::detachControls()
{
    
    //mainParas-----------------------------------------------
      delete TimerModeAttachment;
     delete TimerBpmAttachment;
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
    delete Sp1SynthModPosAttachment;
    delete Sp1EngineModeAttachment;
    delete Sp1PlayModeAttachment;
    delete Sp1PlayTimeModeAttachment;
    delete Sp1EngineModulationAttachment;
    delete Sp1WaveNrAttachment;
    delete Sp1WaveNrModAttachment;
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
    delete Sp2SynthModPosAttachment;
    delete Sp2EngineModeAttachment;
    delete Sp2PlayModeAttachment;
    delete Sp2PlayTimeModeAttachment;
    delete Sp2EngineModulationAttachment;
    delete Sp2WaveNrAttachment;
    delete Sp2WaveNrModAttachment;
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
    delete Sp3SynthModPosAttachment;
    delete Sp3EngineModeAttachment;
    delete Sp3PlayModeAttachment;
    delete Sp3PlayTimeModeAttachment;
    delete Sp3EngineModulationAttachment;
    delete Sp3WaveNrAttachment;
    delete Sp3WaveNrModAttachment;
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
    delete Sp4SynthModPosAttachment;
    delete Sp4EngineModeAttachment;
    delete Sp4PlayModeAttachment;
    delete Sp4PlayTimeModeAttachment;
    delete Sp4EngineModulationAttachment;
    delete Sp4WaveNrAttachment;
    delete Sp4WaveNrModAttachment;
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
}

void PluginParameters::attachControls(
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
    Slider& Sp4LfoAmpSlider
                                     
                                      )
{
    detachControls();   // destroy existing attachments, if any
    
    //------------------------------Mainparas-------------------
     TimerModeAttachment = new ComboBoxAttachment(valueTreeState, TimerMode_Id,TimerModeCombo);
     TimerBpmAttachment = new SliderAttachment(valueTreeState,TimerBpm_Id,TimerBpmSlider);
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
    Sp1SynthModPosAttachment = new ButtonAttachment(valueTreeState, Sp1SynthModPos_Id, Sp1SynthModPosToggle);
    Sp1EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp1EngineMode_Id, Sp1EngineModeButton);
    
    Sp1PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp1PlayMode_Id,Sp1PlayModusCombo);
    Sp1PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp1PlayTimeMode_Id,Sp1PlayTimeModeCombo);

    Sp1GateAttachment=new SliderAttachment(valueTreeState, Sp1Gate_Id, Sp1GateSlider);
    Sp1WaveNrAttachment= new SliderAttachment(valueTreeState, Sp1WaveNr_Id, Sp1WnrSlider);
    Sp1WaveNrModAttachment= new ButtonAttachment(valueTreeState, Sp1WaveNrMod_Id, Sp1WnrModSlider);

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
    Sp2SynthModPosAttachment = new ButtonAttachment(valueTreeState, Sp2SynthModPos_Id, Sp2SynthModPosToggle);
    Sp2EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp2EngineMode_Id, Sp2EngineModeButton);
    
    Sp2PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp2PlayMode_Id,Sp2PlayModusCombo);
    Sp2PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp2PlayTimeMode_Id,Sp2PlayTimeModeCombo);
    
    Sp2GateAttachment=new SliderAttachment(valueTreeState, Sp2Gate_Id, Sp2GateSlider);
    Sp2WaveNrAttachment= new SliderAttachment(valueTreeState, Sp2WaveNr_Id, Sp2WnrSlider);
    Sp2WaveNrModAttachment= new ButtonAttachment(valueTreeState, Sp2WaveNrMod_Id, Sp2WnrModSlider);
    
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
    Sp3SynthModPosAttachment = new ButtonAttachment(valueTreeState, Sp3SynthModPos_Id, Sp3SynthModPosToggle);
    Sp3EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp3EngineMode_Id, Sp3EngineModeButton);
    
    Sp3PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp3PlayMode_Id,Sp3PlayModusCombo);
    Sp3PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp3PlayTimeMode_Id,Sp3PlayTimeModusCombo);
    
    Sp3GateAttachment=new SliderAttachment(valueTreeState, Sp3Gate_Id, Sp3GateSlider);
    Sp3WaveNrAttachment= new SliderAttachment(valueTreeState, Sp3WaveNr_Id, Sp3WnrSlider);
    Sp3WaveNrModAttachment= new ButtonAttachment(valueTreeState, Sp3WaveNrMod_Id, Sp3WnrModSlider);
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
    Sp4SynthModPosAttachment = new ButtonAttachment(valueTreeState, Sp4SynthModPos_Id, Sp4SynthModPosToggle);
    Sp4EngineModeAttachment= new ButtonAttachment(valueTreeState, Sp4EngineMode_Id, Sp4EngineModeButton);
    
    Sp4PlayModeAttachment = new ComboBoxAttachment(valueTreeState,Sp4PlayMode_Id,Sp4PlayModusCombo);
    Sp4PlayTimeModeAttachment = new ComboBoxAttachment(valueTreeState,Sp4PlayTimeMode_Id,Sp4PlayTimeModusCombo);
    
    Sp4GateAttachment=new SliderAttachment(valueTreeState, Sp4Gate_Id, Sp4GateSlider);
    Sp4WaveNrAttachment= new SliderAttachment(valueTreeState, Sp4WaveNr_Id, Sp4WnrSlider);
    Sp4WaveNrModAttachment= new ButtonAttachment(valueTreeState, Sp4WaveNrMod_Id, Sp4WnrModSlider);
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
    
   
}

void PluginParameters::putToXml(XmlElement& xml)
{
    // Set XML attributes based on working parameter values
    /*
    //mainParas----------------------------------------------------
    xml.setAttribute(waveform_Name, waveform.name());
    xml.setAttribute(midiNoteNumber_Name, midiNoteNumber);
    xml.setAttribute(level_Name, level);
    xml.setAttribute(loud_Name, loud);

    
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

    int isLoud = pXml->getBoolAttribute(loud_Name) ? 1 : 0;
    valueTreeState.getParameterAsValue(loud_Id).setValue(isLoud);
    

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
