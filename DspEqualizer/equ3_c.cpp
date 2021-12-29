
#include "equ3_c.h"
#define SampleRate                     (44100.0)

boolean_T equ3_cModelClass::isequal(real_T varargin_1, real_T varargin_2)
{
  boolean_T p;
  boolean_T p_0;

  // Start for'<Root>/Parametric EQ Filter' incorporates:
  //   '<Root>/Parametric EQ Filter1'
  //   '<Root>/Parametric EQ Filter2'
    


  p = false;
  p_0 = true;
  if (!(varargin_1 == varargin_2)) {
    p_0 = false;
  }

  if (p_0) {
    p = true;
  }

  // End of Start for  '<Root>/Parametric EQ Filter'
  return p;
}


// Model step function
void equ3_cModelClass::step(double in, double& out,int*rout)
{


  real_T rtb_ParametricEQFilter2_0;
  real_T rtb_ParametricEQFilter1_0;
  boolean_T flag;
  dsp_ParametricEQFilter *obj;
  real_T GdB;
  real_T CF;
  real_T G3dB;
  real_T Gcf;
  real_T z1;
  real_T p3dB;

    float bassfrequency=20;
    float bassresonance=100;
    float bassamp=0;
    float midfrequency=5000;
    float midresonance=100;
    float midamp=0;
    float highfrequency=10000;
    float highresonance=100;
    float highamp=0;
    
    if(EqMode>0){
        
        bassfrequency=20+(bassf*800);
        bassresonance= 10+bassq*5000;
        bassamp=-20+(bassv*40);
        midfrequency=1000+(midf*5000);
        midresonance= 10+(midq*15000);
        midamp=-20+(midv*40);
        highfrequency=7000+(highf*10000);
        highresonance= 10+(highq*20000);
        highamp=-20+(highv*40);
    }
    rout[6]=bassamp;


  GdB = rtDWork.obj.Bandwidth;
  if (!isequal(GdB, bassresonance)) {
    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.Bandwidth = bassresonance;
  }

  GdB = rtDWork.obj.CenterFrequency;
  if (!isequal(GdB, bassfrequency)) {
    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.CenterFrequency = bassfrequency;
  }

  if (!isequal(rtDWork.obj.PeakGaindB, bassamp)) {
    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.PeakGaindB = bassamp;
  }

  obj = &rtDWork.obj;
  if (rtDWork.obj.TunablePropsChanged) {
    rtDWork.obj.TunablePropsChanged = false;
    rtDWork.obj.privReferenceGain = 1.0;
    GdB = rtDWork.obj.PeakGaindB;
    rtDWork.obj.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = GdB;
  }

  if (obj->NotchPeakFilterObj.isInitialized != 1) {
    obj->NotchPeakFilterObj.isSetupComplete = false;
    obj->NotchPeakFilterObj.isInitialized = 1;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
    obj->NotchPeakFilterObj.NumChannels = 1;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
    obj->NotchPeakFilterObj.isSetupComplete = true;
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
  }

  if (obj->NotchPeakFilterObj.TunablePropsChanged) {
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
  }

  G3dB = obj->NotchPeakFilterObj.privBandwidthCoefficient;
  Gcf = obj->NotchPeakFilterObj.privCenterFrequencyCoefficient;
  z1 = obj->NotchPeakFilterObj.States[0];
  GdB = obj->NotchPeakFilterObj.States[1];
  CF = 0.5 * in;
  p3dB = (CF - z1) * G3dB;
  G3dB = CF + p3dB;
  Gcf *= G3dB - GdB;
  z1 += p3dB;
  obj->NotchPeakFilterObj.States[0] = Gcf + GdB;
  obj->NotchPeakFilterObj.States[1] = G3dB + Gcf;

  // MATLABSystem: '<Root>/Parametric EQ Filter2'
  rtb_ParametricEQFilter2_0 = ((CF + z1) * rtDWork.obj.privReferenceGain) + ((CF
    - z1) * rtDWork.obj.privPeakGain);

  // Start for : '<Root>/Parametric EQ Filter1' incorporates:
  //   Inport: '<Root>/In1'

  GdB = rtDWork.obj_m.Bandwidth;
  if (!isequal(GdB, midresonance)) {
    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.Bandwidth = midresonance;
  }

  GdB = rtDWork.obj_m.CenterFrequency;
  if (!isequal(GdB, midfrequency)) {
    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.CenterFrequency = midfrequency;
  }

  if (!isequal(rtDWork.obj_m.PeakGaindB, midamp)) {
    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.PeakGaindB = midamp;
  }

  obj = &rtDWork.obj_m;
  if (rtDWork.obj_m.TunablePropsChanged) {
    rtDWork.obj_m.TunablePropsChanged = false;
    rtDWork.obj_m.privReferenceGain = 1.0;
    GdB = rtDWork.obj_m.PeakGaindB;
    rtDWork.obj_m.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_m.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_m.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = GdB;
  }

  if (obj->NotchPeakFilterObj.isInitialized != 1) {
    obj->NotchPeakFilterObj.isSetupComplete = false;
    obj->NotchPeakFilterObj.isInitialized = 1;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
    obj->NotchPeakFilterObj.NumChannels = 1;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
    obj->NotchPeakFilterObj.isSetupComplete = true;
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
  }

  if (obj->NotchPeakFilterObj.TunablePropsChanged) {
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
  }

  G3dB = obj->NotchPeakFilterObj.privBandwidthCoefficient;
  Gcf = obj->NotchPeakFilterObj.privCenterFrequencyCoefficient;
  z1 = obj->NotchPeakFilterObj.States[0];
  GdB = obj->NotchPeakFilterObj.States[1];
  CF = 0.5 * in;
  p3dB = (CF - z1) * G3dB;
  G3dB = CF + p3dB;
  Gcf *= G3dB - GdB;
  z1 += p3dB;
  obj->NotchPeakFilterObj.States[0] = Gcf + GdB;
  obj->NotchPeakFilterObj.States[1] = G3dB + Gcf;

  // '<Root>/Parametric EQ Filter1'
  rtb_ParametricEQFilter1_0 = ((CF + z1) * rtDWork.obj_m.privReferenceGain) +
    ((CF - z1) * rtDWork.obj_m.privPeakGain);

  // Start for  '<Root>/Parametric EQ Filter' incorporates:
  //   Inport: '<Root>/In1'

  GdB = rtDWork.obj_j.Bandwidth;
  if (!isequal(GdB, highresonance)) {
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.Bandwidth = highresonance;
  }

  GdB = rtDWork.obj_j.CenterFrequency;
  if (!isequal(GdB, highfrequency)) {
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.CenterFrequency = highfrequency;
  }

  if (!isequal(rtDWork.obj_j.PeakGaindB, highamp)) {
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.PeakGaindB = highamp;
  }

  obj = &rtDWork.obj_j;
  if (rtDWork.obj_j.TunablePropsChanged) {
    rtDWork.obj_j.TunablePropsChanged = false;
    rtDWork.obj_j.privReferenceGain = 1.0;
    GdB = rtDWork.obj_j.PeakGaindB;
    rtDWork.obj_j.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_j.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_j.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = GdB;
  }

  if (obj->NotchPeakFilterObj.isInitialized != 1) {
    obj->NotchPeakFilterObj.isSetupComplete = false;
    obj->NotchPeakFilterObj.isInitialized = 1;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
    obj->NotchPeakFilterObj.NumChannels = 1;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
    obj->NotchPeakFilterObj.isSetupComplete = true;
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    obj->NotchPeakFilterObj.States[0] = 0.0;
    obj->NotchPeakFilterObj.States[1] = 0.0;
  }

  if (obj->NotchPeakFilterObj.TunablePropsChanged) {
    obj->NotchPeakFilterObj.TunablePropsChanged = false;
    GdB = obj->NotchPeakFilterObj.Bandwidth;
    CF = obj->NotchPeakFilterObj.CenterFrequency;
    obj->NotchPeakFilterObj.privBandwidthCoefficient = (2.0 / (std::tan((GdB *
      3.1415926535897931) / SampleRate) + 1.0)) - 1.0;
    obj->NotchPeakFilterObj.privCenterFrequencyCoefficient = -std::cos(((2.0 *
      CF) / SampleRate) * 3.1415926535897931);
  }

  G3dB = obj->NotchPeakFilterObj.privBandwidthCoefficient;
  Gcf = obj->NotchPeakFilterObj.privCenterFrequencyCoefficient;
  z1 = obj->NotchPeakFilterObj.States[0];
  GdB = obj->NotchPeakFilterObj.States[1];
  CF = 0.5 * in;
  p3dB = (CF - z1) * G3dB;
  G3dB = CF + p3dB;
  Gcf *= G3dB - GdB;
  z1 += p3dB;
  obj->NotchPeakFilterObj.States[0] = Gcf + GdB;
  obj->NotchPeakFilterObj.States[1] = G3dB + Gcf;

  //  '<Root>/Parametric EQ Filter'
  GdB = ((CF + z1) * rtDWork.obj_j.privReferenceGain) + ((CF - z1) *
    rtDWork.obj_j.privPeakGain);

  // Outport: '<Root>/Out1' incorporates:

  //   Sum: '<Root>/Sum'
if (EqMode == 0) { out = in; }
    if (EqMode > 0)
 out = ((rtb_ParametricEQFilter2_0 + rtb_ParametricEQFilter1_0) + GdB)/3;
}

// Model initialize function
void equ3_cModelClass::initialize()
{
  {
    boolean_T flag;
   dsp_ParametricEQFilter *obj;
    real_T cf;
    real_T GdB;

    rtDWork.obj.isInitialized = 0;
    rtDWork.obj.NumChannels = -1;

    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.Bandwidth = 2205.0;
    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.CenterFrequency = 225.0;
    flag = (rtDWork.obj.isInitialized == 1);
    if (flag) {
      rtDWork.obj.TunablePropsChanged = true;
    }

    rtDWork.obj.PeakGaindB = 8.0206;
    obj = &rtDWork.obj;
    rtDWork.obj.isSetupComplete = false;
    rtDWork.obj.isInitialized = 1;
    GdB = rtDWork.obj.Bandwidth;
    cf = rtDWork.obj.CenterFrequency;
    obj->NotchPeakFilterObj.isInitialized = 0;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.CenterFrequency = cf;
    obj->NotchPeakFilterObj.NumChannels = -1;

    rtDWork.obj.privReferenceGain = 1.0;
    GdB = rtDWork.obj.PeakGaindB;
    rtDWork.obj.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    cf = rtDWork.obj.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = cf;
    rtDWork.obj.NumChannels = 1;
    rtDWork.obj.isSetupComplete = true;
    rtDWork.obj.TunablePropsChanged = false;

    rtDWork.obj_m.isInitialized = 0;
    rtDWork.obj_m.NumChannels = -1;

    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.Bandwidth = 2205.0;
    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.CenterFrequency = 11025.0;
    flag = (rtDWork.obj_m.isInitialized == 1);
    if (flag) {
      rtDWork.obj_m.TunablePropsChanged = true;
    }

    rtDWork.obj_m.PeakGaindB = 6.0206;
    obj = &rtDWork.obj_m;
    rtDWork.obj_m.isSetupComplete = false;
    rtDWork.obj_m.isInitialized = 1;
    GdB = rtDWork.obj_m.Bandwidth;
    cf = rtDWork.obj_m.CenterFrequency;
    obj->NotchPeakFilterObj.isInitialized = 0;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.CenterFrequency = cf;
    obj->NotchPeakFilterObj.NumChannels = -1;

    rtDWork.obj_m.privReferenceGain = 1.0;
    GdB = rtDWork.obj_m.PeakGaindB;
    rtDWork.obj_m.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_m.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    cf = rtDWork.obj_m.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = cf;
    rtDWork.obj_m.NumChannels = 1;
    rtDWork.obj_m.isSetupComplete = true;
    rtDWork.obj_m.TunablePropsChanged = false;


    rtDWork.obj_j.isInitialized = 0;
    rtDWork.obj_j.NumChannels = -1;
  //  rtDWork.obj_j.matlabCodegenIsDeleted = false;
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.Bandwidth = 2205.0;
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.CenterFrequency = 22025.0;
    flag = (rtDWork.obj_j.isInitialized == 1);
    if (flag) {
      rtDWork.obj_j.TunablePropsChanged = true;
    }

    rtDWork.obj_j.PeakGaindB = 9.0206;
    obj = &rtDWork.obj_j;
    rtDWork.obj_j.isSetupComplete = false;
    rtDWork.obj_j.isInitialized = 1;
    GdB = rtDWork.obj_j.Bandwidth;
    cf = rtDWork.obj_j.CenterFrequency;
    obj->NotchPeakFilterObj.isInitialized = 0;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    obj->NotchPeakFilterObj.CenterFrequency = cf;
    obj->NotchPeakFilterObj.NumChannels = -1;

    rtDWork.obj_j.privReferenceGain = 1.0;
    GdB = rtDWork.obj_j.PeakGaindB;
    rtDWork.obj_j.privPeakGain = pow(10.0, GdB / 20.0);
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    GdB = rtDWork.obj_j.Bandwidth;
    obj->NotchPeakFilterObj.Bandwidth = GdB;
    flag = (obj->NotchPeakFilterObj.isInitialized == 1);
    if (flag) {
      obj->NotchPeakFilterObj.TunablePropsChanged = true;
    }

    cf = rtDWork.obj_j.CenterFrequency;
    obj->NotchPeakFilterObj.CenterFrequency = cf;
    rtDWork.obj_j.NumChannels = 1;
    rtDWork.obj_j.isSetupComplete = true;
    rtDWork.obj_j.TunablePropsChanged = false;

    // Start for  '<Root>/Parametric EQ Filter2'
    if (rtDWork.obj.NotchPeakFilterObj.isInitialized == 1) {
      rtDWork.obj.NotchPeakFilterObj.States[0] = 0.0;
      rtDWork.obj.NotchPeakFilterObj.States[1] = 0.0;
    }

    // Start for MATLABSystem: '<Root>/Parametric EQ Filter1'
    if (rtDWork.obj_m.NotchPeakFilterObj.isInitialized == 1) {
      rtDWork.obj_m.NotchPeakFilterObj.States[0] = 0.0;
      rtDWork.obj_m.NotchPeakFilterObj.States[1] = 0.0;
    }

    // Start for : '<Root>/Parametric EQ Filter'
    if (rtDWork.obj_j.NotchPeakFilterObj.isInitialized == 1) {
      rtDWork.obj_j.NotchPeakFilterObj.States[0] = 0.0;
      rtDWork.obj_j.NotchPeakFilterObj.States[1] = 0.0;
    }
  }
}

// Constructor
equ3_cModelClass::equ3_cModelClass()
{
    bassf=0.1;
    bassq=03;
    bassv=0;;
    
    midf=0.1;
    midq=03;
    midv=0;;
    
    highf=0.1;
    highq=03;
    bassv=0;;
}

// Destructor
equ3_cModelClass::~equ3_cModelClass()
{
  // Currently there is no destructor body generated.
}

