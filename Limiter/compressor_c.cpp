//

#include "compressor_c.h"



// Model step function
void compressor_cModelClass::step(double in, double thrs, double rat, double knee, double att, double rel, double makeup, double& out)
{
  boolean_T p;
  audio_DynamicRangeComp *obj;
  real_T Fs;
  real_T W;
  real_T R;
  real_T T;
  boolean_T ind3;
  real_T c_data;
  real_T d_data;
  real_T e;
  int32_T trueCount;
  int32_T i;
  real_T a_data;
  real_T b_z1_data;
  real_T alphaA;
  int32_T i_0;
  real_T tmp;

  // Start for '<Root>/Compressor'
  Fs = rtDWork.obj.Ratio;

  //  '<Root>/Compressor'
  ind3 = false;
  p = true;
  if (!(Fs == rat)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.Ratio = rat;
  }

  // Start for '<Root>/Compressor'
  Fs = rtDWork.obj.Threshold;

  //  '<Root>/Compressor'
  ind3 = false;
  p = true;
  if (!(Fs == thrs)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.Threshold = thrs;
  }

  // Start for  '<Root>/Compressor'
  Fs = rtDWork.obj.KneeWidth;

  // '<Root>/Compressor'
  ind3 = false;
  p = true;
  if (!(Fs == knee)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.KneeWidth = knee;
  }

  // Start for  '<Root>/Compressor'
  Fs = rtDWork.obj.AttackTime;

  // '<Root>/Compressor'
  ind3 = false;
  p = true;
  if (!(Fs == att)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.AttackTime = att;
  }

  // Start for  '<Root>/Compressor'
  Fs = rtDWork.obj.ReleaseTime;

  //  '<Root>/Compressor'
  ind3 = false;
  p = true;
  if (!(Fs == rel)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.ReleaseTime = rel;
  }

  // Start for  '<Root>/Compressor'
  Fs = rtDWork.obj.MakeUpGain;

  //  '<Root>/Compressor' incorporates:
  //   Inport: '<Root>/u'

  ind3 = false;
  p = true;
  if (!(Fs == makeup)) {
    p = false;
  }

  if (p) {
    ind3 = true;
  }

  if (!ind3) {
    ind3 = (rtDWork.obj.isInitialized == 1);
    if (ind3) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.MakeUpGain = makeup;
  }

  obj = &rtDWork.obj;
  if (rtDWork.obj.TunablePropsChanged) {
    rtDWork.obj.TunablePropsChanged = false;
    Fs = rtDWork.obj.pSampleRateInherit;
    if (rtDWork.obj.AttackTime != 0.0) {
      W = rtDWork.obj.AttackTime * Fs;
      rtDWork.obj.pAlphaA = std::exp(-2.1972245773362196 / W);
    } else {
      rtDWork.obj.pAlphaA = 0.0;
    }

    if (rtDWork.obj.ReleaseTime != 0.0) {
      W = rtDWork.obj.ReleaseTime * Fs;
      rtDWork.obj.pAlphaR = std::exp(-2.1972245773362196 / W);
    } else {
      rtDWork.obj.pAlphaR = 0.0;
    }

    rtDWork.obj.pMakeUpGain = rtDWork.obj.MakeUpGain;
  }

  Fs = std::abs(in);
  if (!(Fs > 2.2204460492503131E-16)) {
    Fs = 2.2204460492503131E-16;
  }

  Fs = 20.0 * std::log10(Fs);
  W = rtDWork.obj.KneeWidth;
  R = rtDWork.obj.Ratio;
  T = rtDWork.obj.Threshold;
  trueCount = 0;
  alphaA = Fs - T;
  tmp = alphaA * 2.0;
  if (tmp > W) {
    for (i = 0; i < 1; i++) {
      trueCount++;
    }
  }

  i = trueCount - 1;
  for (i_0 = 0; i_0 <= i; i_0++) {
    d_data = alphaA / R;
  }

  e = Fs;
  if (tmp > W) {
    for (i = 0; i < 1; i++) {
      e = T + d_data;
    }
  }

  T = e;
  if (W != 0.0) {
    ind3 = ((std::abs(alphaA) * 2.0) <= W);
    trueCount = 0;
    if (ind3) {
      for (i = 0; i < 1; i++) {
        trueCount++;
      }
    }

    out = 1.0 / R;
    R = W / 2.0;
    i = trueCount - 1;
    for (i_0 = 0; i_0 <= i; i_0++) {
      a_data = alphaA + R;
    }

    i = trueCount - 1;
    if (0 <= i) {
      memcpy(&b_z1_data, &d_data, (i + 1) * (sizeof(real_T)));
    }

    if (1 <= trueCount) {
      b_z1_data = a_data * a_data;
    }

    R = 2.0 * W;
    i = trueCount - 1;
    for (i_0 = 0; i_0 <= i; i_0++) {
      c_data = ((out - 1.0) * b_z1_data) / R;
    }

    d_data = e;
    if (ind3) {
      for (i = 0; i < 1; i++) {
        d_data = Fs + c_data;
      }
    }

    T = d_data;
  }

  Fs = T - Fs;
  W = obj->pLevelDetectionState;
  alphaA = obj->pAlphaA;
  R = obj->pAlphaR;
  if (Fs <= W) {
    Fs = ((1.0 - alphaA) * Fs) + (alphaA * W);
  } else {
    Fs = ((1.0 - R) * Fs) + (R * W);
  }

  obj->pLevelDetectionState = Fs;
  Fs += obj->pMakeUpGain;



  out = pow(10.0, Fs / 20.0) * in;
}

// Model initialize function
void compressor_cModelClass::initialize()
{
  // Start for  '<Root>/Compressor'

  rtDWork.obj.pNumChannels = -1.0;
  rtDWork.obj.pSampleRateInherit = -1.0;
  rtDWork.obj.isInitialized = 0;

  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.Ratio = 5.0;
  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.Threshold = -10.0;
  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.KneeWidth = 0.0;
  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.AttackTime = 0.05;
  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.ReleaseTime = 0.2;
  if (rtDWork.obj.isInitialized == 1) {
    rtDWork.obj.TunablePropsChanged = true;
  }

  rtDWork.obj.MakeUpGain = 0.0;
  rtDWork.obj.isSetupComplete = false;
  rtDWork.obj.isInitialized = 1;
  rtDWork.obj.pSampleRateInherit = 1000.0;
  rtDWork.obj.pLevelDetectionState = 0.0;
  if (rtDWork.obj.AttackTime != 0.0) {
    rtDWork.obj.pAlphaA = std::exp(-2.1972245773362196 / (rtDWork.obj.AttackTime
      * rtDWork.obj.pSampleRateInherit));
  } else {
    rtDWork.obj.pAlphaA = 0.0;
  }

  if (rtDWork.obj.ReleaseTime != 0.0) {
    rtDWork.obj.pAlphaR = std::exp(-2.1972245773362196 /
      (rtDWork.obj.ReleaseTime * rtDWork.obj.pSampleRateInherit));
  } else {
    rtDWork.obj.pAlphaR = 0.0;
  }

  rtDWork.obj.pNumChannels = 1.0;
  rtDWork.obj.pMakeUpGain = rtDWork.obj.MakeUpGain;
  rtDWork.obj.isSetupComplete = true;
  rtDWork.obj.TunablePropsChanged = false;

  // End of Start for '<Root>/Compressor'

  // InitializeConditions for MATLABSystem: '<Root>/Compressor'
  rtDWork.obj.pLevelDetectionState = 0.0;
  if (rtDWork.obj.AttackTime != 0.0) {
    rtDWork.obj.pAlphaA = std::exp(-2.1972245773362196 / (rtDWork.obj.AttackTime
      * rtDWork.obj.pSampleRateInherit));
  } else {
    rtDWork.obj.pAlphaA = 0.0;
  }

  if (rtDWork.obj.ReleaseTime != 0.0) {
    rtDWork.obj.pAlphaR = std::exp(-2.1972245773362196 /
      (rtDWork.obj.ReleaseTime * rtDWork.obj.pSampleRateInherit));
  } else {
    rtDWork.obj.pAlphaR = 0.0;
  }


}

// Constructor
compressor_cModelClass::compressor_cModelClass()
{
}

// Destructor
compressor_cModelClass::~compressor_cModelClass()
{
  // Currently there is no destructor body generated.
}

