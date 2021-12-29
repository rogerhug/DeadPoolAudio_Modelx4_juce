
#ifndef RTW_HEADER_limiter_c_h_
#define RTW_HEADER_limiter_c_h_
#include "rtwtypes.h"
#include <cmath>
#include <math.h>
#include <string.h>
#ifndef limiter_c_COMMON_INCLUDES_
# define limiter_c_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // limiter_c_COMMON_INCLUDES_

// Macros for accessing real-time model data structure
#ifndef typedef_audio_simulink_DynamicRangeLimi
#define typedef_audio_simulink_DynamicRangeLimi

typedef struct {

  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  real_T pSampleRateInherit;
  real_T Threshold;
  real_T AttackTime;
  real_T ReleaseTime;
  real_T pNumChannels;
  real_T pAlphaA;
  real_T pAlphaR;
  real_T pLevelDetectionState;
  real_T MakeUpGain;
  real_T KneeWidth;
  real_T pMakeUpGain;
  real_T pAutoMakeUpGain;
} audio_DynamicRangeLimi;

#endif                                 //typedef_audio_simulink_DynamicRangeLimi

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  audio_DynamicRangeLimi obj; // '<Root>/Limiter'
} D_Work_lim;


// Class declaration for model limiter_c
class limiter_cModelClass {
  // public data and function members
 public:

  // model initialize function
  void initialize();
    void setLimiterMode(int s) {
        limiterMode=s;
        if(s==1){mAttack=0.1;mRelease=0.2;mKneewith=0;}
        if(s==2){mAttack=0.25;mRelease=0.5;mKneewith=2;}
        
    }
    void setLimiterThrsh(float t){mThrsh=-12+(t*24);}
    void setLimiterGain(float g) {mGain=-24+(g*48);}
  // model step function
  void step(double in, double& out);

  // Constructor
  limiter_cModelClass();

  // Destructor
  ~limiter_cModelClass();

  // private data and function members
 private:
  // Block signals and states
  D_Work_lim rtDWork;
    int limiterMode;
    float mThrsh;
    float mGain;
    
    float mKneewith;
    float mAttack;
    float mRelease;

  // private member function(s) for subsystem '<Root>'
  void power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
      int32_T y_size[2]);
  void CompressorBase_computeAutoMakeU(audio_DynamicRangeLimi* obj);

};



#endif                                 // RTW_HEADER_limiter_c_h_

