
#include "limiter_c.h"

void limiter_cModelClass::power(const real_T a_data[], const int32_T a_size[2],
    real_T y_data[], int32_T y_size[2])
{
    real_T b_z1_data;
    int32_T loop_ub;
    loop_ub = a_size[1] - 1;
    if (0 <= loop_ub) {
        memcpy(&b_z1_data, &y_data[0], (loop_ub + 1) * (sizeof(real_T)));
    }

    if (1 <= a_size[1]) {
        b_z1_data = a_data[0] * a_data[0];
    }

    y_size[0] = 1;
    y_size[1] = a_size[1];
    loop_ub = a_size[1] - 1;
    if (0 <= loop_ub) {
        memcpy(&y_data[0], &b_z1_data, (loop_ub + 1) * (sizeof(real_T)));
    }
}

void limiter_cModelClass::CompressorBase_computeAutoMakeU
(audio_DynamicRangeLimi* obj)
{
    real_T yG;
    boolean_T ind3;
    real_T c_data;
    real_T d;
    int32_T b_trueCount;
    int32_T c_i;
    real_T y;
    real_T tmp_data;
    real_T tmp_data_0;
    int32_T tmp_size[2];
    int32_T tmp_size_0[2];
    d = 0.0;
    if (((0.0 - obj->Threshold) * 2.0) > obj->KneeWidth) {
        d = obj->Threshold;
    }

    yG = d;
    if (obj->KneeWidth != 0.0) {
        ind3 = ((std::abs(0.0 - obj->Threshold) * 2.0) <= obj->KneeWidth);
        b_trueCount = 0;
        if (ind3) {
            for (c_i = 0; c_i < 1; c_i++) {
                b_trueCount++;
            }
        }

        yG = obj->KneeWidth / 2.0;
        y = 2.0 * obj->KneeWidth;
        tmp_size[0] = 1;
        tmp_size[1] = b_trueCount;
        for (c_i = 0; c_i < b_trueCount; c_i++) {
            tmp_data = (0.0 - obj->Threshold) + yG;
        }

        power(&tmp_data, tmp_size, &tmp_data_0, tmp_size_0);
        b_trueCount = tmp_size_0[0] * tmp_size_0[1];
        for (c_i = 0; c_i < b_trueCount; c_i++) {
            c_data = tmp_data_0 / y;
        }

        if (ind3) {
            for (c_i = 0; c_i < 1; c_i++) {
                d = 0.0 - c_data;
            }
        }

        yG = d;
    }

    obj->pAutoMakeUpGain = -yG;
}

// Model step function
void limiter_cModelClass::step(double in, double& out)
{
    boolean_T p;
    audio_DynamicRangeLimi* obj;
    real_T Fs;
    real_T W;
    real_T T;
    boolean_T ind3;
    real_T c_data;
    real_T d;
    int32_T b_trueCount;
    int32_T c_i;
    real_T y_data;
    real_T a_data;
    real_T b_z1_data;
    real_T alphaA;
    int32_T i;



    real_T xDB;
    real_T yG;
    real_T xDB_data;
    real_T tmp_data;
    int32_T xDB_size[2];
    int32_T tmp_size[2];
    real_T tmp;
 if (limiterMode == 0) { out = in; }

    // Start for '<Root>/Limiter'
    Fs = rtDWork.obj.Threshold;
    if (limiterMode == 1||limiterMode == 2) {

        ind3 = false;
        p = true;
        if (!(Fs == mThrsh)) {
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

            rtDWork.obj.Threshold = mThrsh;
        }

        // Start for  '<Root>/Limiter'
        Fs = rtDWork.obj.KneeWidth;

        // MATLABSystem: '<Root>/Limiter'
        ind3 = false;
        p = true;
        if (!(Fs == mKneewith)) {
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

            rtDWork.obj.KneeWidth = mKneewith;
        }

        // Start for  '<Root>/Limiter'
        Fs = rtDWork.obj.AttackTime;

        // MATLABSystem: '<Root>/Limiter'
        ind3 = false;
        p = true;
        if (!(Fs == mAttack)) {
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

            rtDWork.obj.AttackTime = mAttack;
        }

        // Start for '<Root>/Limiter'
        Fs = rtDWork.obj.ReleaseTime;

        //  '<Root>/Limiter'
        ind3 = false;
        p = true;
        if (!(Fs == mRelease)) {
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

            rtDWork.obj.ReleaseTime = mRelease;
        }

        // Start for  '<Root>/Limiter'
        Fs = rtDWork.obj.MakeUpGain;

        // '<Root>/Limiter' incorporates:
        //   Inport: '<Root>/u'

        ind3 = false;
        p = true;
        if (!(Fs == mGain)) {
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

            rtDWork.obj.MakeUpGain = mGain;
        }

        obj = &rtDWork.obj;
        if (rtDWork.obj.TunablePropsChanged) {
            rtDWork.obj.TunablePropsChanged = false;
            Fs = rtDWork.obj.pSampleRateInherit;
            if (rtDWork.obj.AttackTime != 0.0) {
                W = rtDWork.obj.AttackTime * Fs;
                rtDWork.obj.pAlphaA = std::exp(-2.1972245773362196 / W);
            }
            else {
                rtDWork.obj.pAlphaA = 0.0;
            }

            if (rtDWork.obj.ReleaseTime != 0.0) {
                W = rtDWork.obj.ReleaseTime * Fs;
                rtDWork.obj.pAlphaR = std::exp(-2.1972245773362196 / W);
            }
            else {
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
        T = rtDWork.obj.Threshold;
        d = Fs;
        alphaA = Fs - T;
        if ((alphaA * 2.0) > W) {
            d = T;
        }

        T = d;
        if (W != 0.0) {
            ind3 = ((std::abs(alphaA) * 2.0) <= W);
            b_trueCount = 0;
            if (ind3) {
                for (c_i = 0; c_i < 1; c_i++) {
                    b_trueCount++;
                }
            }

            out = W / 2.0;
            c_i = b_trueCount - 1;
            for (i = 0; i <= c_i; i++) {
                a_data = alphaA + out;
            }

            c_i = b_trueCount - 1;
            if (0 <= c_i) {
                memcpy(&b_z1_data, &y_data, (c_i + 1) * (sizeof(real_T)));
            }

            if (1 <= b_trueCount) {
                b_z1_data = a_data * a_data;
            }

            out = 2.0 * W;
            c_i = b_trueCount - 1;
            for (i = 0; i <= c_i; i++) {
                c_data = b_z1_data / out;
            }

            if (ind3) {
                for (c_i = 0; c_i < 1; c_i++) {
                    d = Fs - c_data;
                }
            }

            T = d;
        }

        Fs = T - Fs;
        W = obj->pLevelDetectionState;
        alphaA = obj->pAlphaA;
        T = obj->pAlphaR;
        if (Fs <= W) {
            Fs = ((1.0 - alphaA) * Fs) + (alphaA * W);
        }
        else {
            Fs = ((1.0 - T) * Fs) + (T * W);
        }

        obj->pLevelDetectionState = Fs;
        Fs += obj->pMakeUpGain;

        out = pow(10.0, Fs / 20.0) * in;
    }

    if (limiterMode == 3) {
        ind3 = false;
        p = true;
        if (!(rtDWork.obj.Threshold == mThrsh)) {
            p = false;
        }

        if (p) {
            ind3 = true;
        }

        if (!ind3) {
            if (rtDWork.obj.isInitialized == 1) {
                rtDWork.obj.TunablePropsChanged = true;
            }

            rtDWork.obj.Threshold = mThrsh;
        }

        ind3 = false;
        p = true;
        if (!(rtDWork.obj.KneeWidth == mKneewith)) {
            p = false;
        }

        if (p) {
            ind3 = true;
        }

        if (!ind3) {
            if (rtDWork.obj.isInitialized == 1) {
                rtDWork.obj.TunablePropsChanged = true;
            }

            rtDWork.obj.KneeWidth = mKneewith;
        }

        ind3 = false;
        p = true;
        if (!(rtDWork.obj.AttackTime == mAttack)) {
            p = false;
        }

        if (p) {
            ind3 = true;
        }

        if (!ind3) {
            if (rtDWork.obj.isInitialized == 1) {
                rtDWork.obj.TunablePropsChanged = true;
            }

            rtDWork.obj.AttackTime = mAttack;
        }

        ind3 = false;
        p = true;
        if (!(rtDWork.obj.ReleaseTime == mRelease)) {
            p = false;
        }

        if (p) {
            ind3 = true;
        }

        if (!ind3) {
            if (rtDWork.obj.isInitialized == 1) {
                rtDWork.obj.TunablePropsChanged = true;
            }

            rtDWork.obj.ReleaseTime = mRelease;
        }

        if (rtDWork.obj.TunablePropsChanged) {
            rtDWork.obj.TunablePropsChanged = false;
            if (rtDWork.obj.AttackTime != 0.0) {
                rtDWork.obj.pAlphaA = std::exp(-2.1972245773362196 /
                    (rtDWork.obj.AttackTime * rtDWork.obj.pSampleRateInherit));
            }
            else {
                rtDWork.obj.pAlphaA = 0.0;
            }

            if (rtDWork.obj.ReleaseTime != 0.0) {
                rtDWork.obj.pAlphaR = std::exp(-2.1972245773362196 /
                    (rtDWork.obj.ReleaseTime * rtDWork.obj.pSampleRateInherit));
            }
            else {
                rtDWork.obj.pAlphaR = 0.0;
            }

            CompressorBase_computeAutoMakeU(&rtDWork.obj);
        }

        xDB = std::abs(in);
        if (!(xDB > 2.2204460492503131E-16)) {
            xDB = 2.2204460492503131E-16;
        }

        xDB = 20.0 * std::log10(xDB);
        d = xDB;
        tmp = xDB - rtDWork.obj.Threshold;
        if ((tmp * 2.0) > rtDWork.obj.KneeWidth) {
            for (i = 0; i < 1; i++) {
                d = rtDWork.obj.Threshold;
            }
        }

        yG = d;
        if (rtDWork.obj.KneeWidth != 0.0) {
            ind3 = ((std::abs(tmp) * 2.0) <= rtDWork.obj.KneeWidth);
            i = 0;
            if (ind3) {
                for (c_i = 0; c_i < 1; c_i++) {
                    i++;
                }
            }

            out = rtDWork.obj.KneeWidth / 2.0;
            yG = 2.0 * rtDWork.obj.KneeWidth;
            xDB_size[0] = 1;
            xDB_size[1] = i;
            for (c_i = 0; c_i < i; c_i++) {
                xDB_data = tmp + out;
            }

            power(&xDB_data, xDB_size, &tmp_data, tmp_size);
            i = tmp_size[0] * tmp_size[1];
            for (c_i = 0; c_i < i; c_i++) {
                c_data = tmp_data / yG;
            }

            if (ind3) {
                for (c_i = 0; c_i < 1; c_i++) {
                    d = xDB - c_data;
                }
            }

            yG = d;
        }

        xDB = yG - xDB;
        if (xDB <= rtDWork.obj.pLevelDetectionState) {
            xDB = ((1.0 - rtDWork.obj.pAlphaA) * xDB) + (rtDWork.obj.pAlphaA *
                rtDWork.obj.pLevelDetectionState);
        }
        else {
            xDB = ((1.0 - rtDWork.obj.pAlphaR) * xDB) + (rtDWork.obj.pAlphaR *
                rtDWork.obj.pLevelDetectionState);
        }

        rtDWork.obj.pLevelDetectionState = xDB;

 

        out = pow(10.0, (xDB + rtDWork.obj.pAutoMakeUpGain) / 20.0) *
            in;
    }
}
// Model initialize function
void limiter_cModelClass::initialize()
{
  // Start for  '<Root>/Limiter'

  rtDWork.obj.pNumChannels = -1.0;
  rtDWork.obj.pSampleRateInherit = -1.0;
  rtDWork.obj.isInitialized = 0;

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

  rtDWork.obj.AttackTime = 0.0;
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

  // End of Start for  '<Root>/Limiter'

  // InitializeConditions for MATLABSystem: '<Root>/Limiter'
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

  // End of InitializeConditions for  '<Root>/Limiter'
}

// Constructor
limiter_cModelClass::limiter_cModelClass()
{
    mKneewith=2;
    mAttack=0.25;
    mRelease=0.25;
}

// Destructor
limiter_cModelClass::~limiter_cModelClass()
{
  // Currently there is no destructor body generated.
}

