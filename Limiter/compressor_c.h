
#ifndef RTW_HEADER_compressor_c_h_
#define RTW_HEADER_compressor_c_h_
#include "rtwtypes.h"
#include <cmath>
#include <math.h>
#include <string.h>
#ifndef compressor_c_COMMON_INCLUDES_
# define compressor_c_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // compressor_c_COMMON_INCLUDES_

// Macros for accessing real-time model data structure
#ifndef typedef_audio_DynamicRangeComp
#define typedef_audio__DynamicRangeComp

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
  real_T Ratio;
} audio_DynamicRangeComp;

#endif                                 //typedef_audio_simulink_DynamicRangeComp

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  audio_DynamicRangeComp obj; // '<Root>/Compressor'
} D_Work_comp;

// External inputs (root inport signals with default storage)

// Class declaration for model compressor_c
class compressor_cModelClass {
  // public data and function members
 public:
	 void setThrs(double t) { m_Thrshold = t * 66 - 60; }
	 void setRatio(double t) { m_Ratio = t*50; }
	 void setKnee(double t) { m_Knee = t*20+1; }
	 void setAttack(double t) { m_Attack = t; }
	 void setRelease(double t) { m_Release = t; }
	 void setMakeUp(double t) { m_MakeUp = t*40-20; }

  // model initialize function
  void initialize();

  // model step function
  void step(double in, double &out);

  // Constructor
  compressor_cModelClass();

  // Destructor
  ~compressor_cModelClass();

  // private data and function members
 private:
  // Block signals and states
  D_Work_comp rtDWork;
  double m_Thrshold;
  double m_Ratio;
  double m_Knee;
  double m_Attack;
  double m_Release;
  double m_MakeUp;
 


};



#endif                                 // RTW_HEADER_compressor_c_h_

