
#include "echogenerator.h"
#define SampleRate                     (44100.0)

boolean_T echogeneratorModelClass::isequal(real_T varargin_1, real_T varargin_2)
{
  boolean_T p;
  boolean_T p_0;
  p = false;
  p_0 = true;
  if (!(varargin_1 == varargin_2)) {
    p_0 = false;
  }

  if (p_0) {
    p = true;
  }

  return p;
}


void echogeneratorModelClass::step(double in,double*out)
{
	if (dMode.getIndex() == 0) {  *out = in;}


  boolean_T flag;
  audioexample_Echo *obj;
  real_T mix;
  audioexample_DelayFilter *obj_0;
  real_T UpperBound;
  real_T LowerBound;
  real_T Offset;
  real_T IntOffset;
  real_T FloatOffset;
  real_T NewOffset1;
  real_T b;
  int32_T i;
  real_T FloatOffset_tmp;
    
    
    int fixTime = 120;
    int srate = SAMPLERATEDELAY;;
    int sync = dTime * 6;
    if (sync > 6) { sync = 6; }
   

    double mdMix = ((dMix * dMixMain)*dmainMixMod);
    double bpmDiv = 120 / (double)fixTime;

  //---------------------------sync
  if (dMode.getIndex()  == 1) {

	  if(sync==0){    dTime = 0.0625*bpmDiv;}
	  if (sync == 1) { dTime = 0.125*bpmDiv; }
	  if (sync == 2) { dTime = 0.25*bpmDiv; }
	  if (sync == 3) { dTime = 0.5*bpmDiv; }
	  if (sync == 4) { dTime = 0.625*bpmDiv; }
	  if (sync == 5) { dTime = 0.75*bpmDiv; }
	  if (sync == 6) { dTime = 1*bpmDiv; }

	
  }
//--------------------------------free------------------------------

  if (dMode.getIndex()  == 2) { srate = SAMPLERATEDELAY/4.41; }
 //------------------------------flange---------------------- -----

  if (dMode.getIndex()  == 3) { srate = 4100; }

  //-----------------------------chorus----------------------------
  if (dMode.getIndex()  == 4) { srate = 2050;}
  if (dMode.getIndex() == 5) { srate = 1025; }

  if (!isequal(rtDW.obj.Delay, dTime)) {    //--------------------d-time
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.Delay = SmDTime.Process(dTime);                  //-------------""
  }

  if (!isequal(rtDW.obj.Gain, dLevel)) {
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.Gain = dLevel;
  }


 

  if (!isequal(rtDW.obj.FeedbackLevel, dFeed)) {
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.FeedbackLevel = dFeed;
  }

 
  if (!isequal(rtDW.obj.WetDryMix, mdMix)) {
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.WetDryMix = SmDMix.Process(mdMix);
  }

  obj = &rtDW.obj;
  if (rtDW.obj.TunablePropsChanged) {
    rtDW.obj.TunablePropsChanged = true;
	rtDW.obj.pDelayInSamples = rtDW.obj.Delay * srate;// SampleRate;
    mix = rtDW.obj.FeedbackLevel;
    obj->pDelay.FeedbackLevel = mix;
    rtDW.obj.pGain = rtDW.obj.Gain;
    rtDW.obj.pWetDryMix = rtDW.obj.WetDryMix;
  }

  obj_0 = &rtDW.obj.pDelay;
  mix = rtDW.obj.pDelayInSamples;
  if (obj->pDelay.isInitialized != 1) {
    obj->pDelay.isSetupComplete = false;
    obj->pDelay.isInitialized = 1;
    obj->pDelay.NumChannels = 1.0;
    obj->pDelay.isSetupComplete = true;
    for (i = 0; i < 192000; i++) {
      obj->pDelay.DelayLine[i] = 0.0;
    }

    obj->pDelay.WriteIndex = 0.0;
    obj->pDelay.ReadIndex = 0.0;
    obj->pDelay.FeedbackValue = 0.0;
  }

  FloatOffset = 0.0;
  UpperBound = 1.0;
  LowerBound = 192000.0;
  Offset = obj->pDelay.WriteIndex;
  b = obj->pDelay.NumChannels;
  for (i = 0; i < (int32_T)b; i++) {
    FloatOffset_tmp = UpperBound + Offset;
    obj_0->WriteIndex = FloatOffset_tmp;
    obj_0->ReadIndex = FloatOffset_tmp;
	obj_0->DelayLine[(int32_T)obj_0->WriteIndex - 1] = obj_0->FeedbackLevel *
		obj_0->FeedbackValue + in;
    if (mix > 0.0) {
      IntOffset = std::floor(mix);
      FloatOffset = mix - IntOffset;
    } else {
      IntOffset = 0.0;
      FloatOffset = 0.0;
    }

    obj_0->ReadIndex -= IntOffset;
    if (obj_0->ReadIndex >= UpperBound) {
      if (obj_0->ReadIndex > UpperBound) {
        FloatOffset_tmp = (1.0 - FloatOffset) * obj_0->DelayLine[(int32_T)
          obj_0->ReadIndex - 1];
        FloatOffset = obj_0->DelayLine[(int32_T)(obj_0->ReadIndex - 1.0) - 1] *
          FloatOffset + FloatOffset_tmp;
        obj_0->FeedbackValue = FloatOffset;
      } else {
        FloatOffset_tmp = (1.0 - FloatOffset) * obj_0->DelayLine[(int32_T)
          obj_0->ReadIndex - 1];
        FloatOffset = obj_0->DelayLine[(int32_T)LowerBound - 1] * FloatOffset +
          FloatOffset_tmp;
        obj_0->FeedbackValue = FloatOffset;
      }

      FloatOffset_tmp = obj_0->ReadIndex + IntOffset;
      obj_0->ReadIndex = FloatOffset_tmp;
    } else {
      NewOffset1 = obj_0->ReadIndex - UpperBound;
      NewOffset1 = std::abs(NewOffset1);
      obj_0->ReadIndex = UpperBound;
      FloatOffset_tmp = obj_0->ReadIndex + IntOffset;
      obj_0->ReadIndex = FloatOffset_tmp - NewOffset1;
      NewOffset1 = LowerBound - NewOffset1;
      IntOffset = NewOffset1 - 1.0;
      if (NewOffset1 - 1.0 <= 0.0) {
        IntOffset = LowerBound;
      }

      FloatOffset = obj_0->DelayLine[(int32_T)IntOffset - 1] * FloatOffset +
        (1.0 - FloatOffset) * obj_0->DelayLine[(int32_T)NewOffset1 - 1];
      obj_0->FeedbackValue = FloatOffset;
    }

    if (obj_0->WriteIndex < LowerBound) {
      obj_0->WriteIndex++;
    } else {
      obj_0->WriteIndex = UpperBound;
    }

    if (obj_0->ReadIndex < LowerBound) {
      obj_0->ReadIndex++;
    } else {
      obj_0->ReadIndex = UpperBound;
    }

    UpperBound = LowerBound + 1.0;
    LowerBound += 192000.0;
  }

  if (obj->pDelay.NumChannels > 1.0) {
    obj->pDelay.WriteIndex -= UpperBound - 192000.0;
    obj->pDelay.ReadIndex -= UpperBound - 192000.0;
  } else {
    obj->pDelay.WriteIndex--;
    obj->pDelay.ReadIndex--;
  }

  mix = obj->pWetDryMix;

  // Outport: '<Root>/Out1' incorporates:
  if(dMode.getIndex()>0)
  *out = (1.0 - mix) * in + obj->pGain * FloatOffset * mix;

}


void echogeneratorModelClass::initialize()
{
   // dMode.setIndex(0);
  {
    boolean_T flag;
    audioexample_Echo *obj;
    real_T varargin_4;

   
    rtDW.obj.isInitialized = 0;
 
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.Delay = 0.111;
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.Gain = 0.399;
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.FeedbackLevel = 0.222;
    flag = (rtDW.obj.isInitialized == 1);
    if (flag) {
      rtDW.obj.TunablePropsChanged = true;
    }

    rtDW.obj.WetDryMix = 0.555;
    obj = &rtDW.obj;
    rtDW.obj.isSetupComplete = false;
    rtDW.obj.isInitialized = 1;
    varargin_4 = rtDW.obj.FeedbackLevel;
    obj->pDelay.isInitialized = 0;
    obj->pDelay.FeedbackLevel = varargin_4;
    obj->pDelay.NumChannels = -1.0;
    rtDW.obj.pDelayInSamples = rtDW.obj.Delay * SampleRate;
    varargin_4 = rtDW.obj.FeedbackLevel;
    obj->pDelay.FeedbackLevel = varargin_4;
    rtDW.obj.pGain = rtDW.obj.Gain;
    rtDW.obj.pWetDryMix = rtDW.obj.WetDryMix;
    obj->pDelay.isSetupComplete = false;
    obj->pDelay.isInitialized = 1;
    obj->pDelay.NumChannels = 1.0;
    obj->pDelay.isSetupComplete = true;
    rtDW.obj.isSetupComplete = true;
    rtDW.obj.TunablePropsChanged = false;


    if (rtDW.obj.pDelay.isInitialized == 1) {
      memset(&rtDW.obj.pDelay.DelayLine[0], 0, 192000U * sizeof(real_T));
      rtDW.obj.pDelay.WriteIndex = 0.0;
      rtDW.obj.pDelay.ReadIndex = 0.0;
      rtDW.obj.pDelay.FeedbackValue = 0.0;
    }

  }
}

// Constructor
echogeneratorModelClass::echogeneratorModelClass()
{

    dTime = 0;
    dTimeM = 0;
    dTimeMod = 0;
    dLevel=0;
    dLevelM=0;
    dLevelMod=0;
    dFeed=0;
    dFeedM=0;
    dFeedMod=0;
    dMix=0;
    dMixM=0;
    dMixMod=0;
    dmainMixMod = 1;
    dStepperMix = 0;
}

// Destructor
echogeneratorModelClass::~echogeneratorModelClass()
{
  // Currently there is no destructor body generated.
}


