
#ifndef RTW_HEADER_equ3_c_h_
#define RTW_HEADER_equ3_c_h_
#include "rtwtypes.h"
#include <cmath>
#include <math.h>
#ifndef equ3_c_COMMON_INCLUDES_
# define equ3_c_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // equ3_c_COMMON_INCLUDES_

// Macros for accessing real-time model data structure
#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 //typedef_cell_wrap

#ifndef typedef_dsp_NotchPeakFilter
#define typedef_dsp_NotchPeakFilter

typedef struct {

  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  real_T Bandwidth;
  real_T CenterFrequency;
  real_T privBandwidthCoefficient;
  real_T privCenterFrequencyCoefficient;
  int32_T NumChannels;
  real_T States[2];
} dsp_NotchPeakFilter;

#endif                                 //typedef_dsp_NotchPeakFilter

#ifndef typedef_dsp_simulink_ParametricEQFilter
#define typedef_dsp_simulink_ParametricEQFilter

typedef struct {

  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  real_T Bandwidth;
  real_T CenterFrequency;
  real_T PeakGaindB;
  dsp_NotchPeakFilter NotchPeakFilterObj;
  real_T privReferenceGain;
  real_T privPeakGain;
  int32_T NumChannels;
} dsp_ParametricEQFilter;

#endif                               

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  dsp_ParametricEQFilter obj; // '<Root>/Parametric EQ Filter2'
  dsp_ParametricEQFilter obj_m;// '<Root>/Parametric EQ Filter1'
  dsp_ParametricEQFilter obj_j;// '<Root>/Parametric EQ Filter'
} D_Work_eq3;


// Class declaration for model equ3_c
class equ3_cModelClass {
  // public data and function members
 public:

  // model initialize function
  void initialize();

   void setEqMode(int m)
    {
        EqMode=m;
        if(EqMode==1){
              bassf=0.1;bassq=0.9;
              midf= 0.2; midq=0.3;
              highf=0.9;highq=0.5;
                }
        if(EqMode==2){
            bassf=0.8;bassq=0.2;
            midf= 0.9; midq=0.8;
            highf=0.2;highq=0.5;
        }
        if(EqMode==3){
            bassf=0.3;bassq=0.6;
            midf= 0.4; midq=0.2;
            highf=0.5;highq=0.9;
        }
        
        
    }
    
    void setBassF(float f){bassf=f;}
    void setBassQ(float q){bassq=q;}
    void setBassV(float v){bassv=v;}
    
    void setMidF(float f){midf=f;}
    void setMidQ(float q){midq=q;}
    void setMidV(float v){midv=v;}
    
    void setHighF(float f){highf=f;}
    void setHighQ(float q){highq=q;}
    void setHighV(float v){highv=v;}
    
    double getPara(){return bassf;}

  // model step function
  void step(double in, double& out,int*rout);

  // Constructor
  equ3_cModelClass();

  // Destructor
  ~equ3_cModelClass();

  // private data and function members
 private:
  // Block signals and states
  D_Work_eq3 rtDWork;
    int EqMode;
    float bassf;
    float bassq;
    float bassv;
    
    float midf;
    float midq;
    float midv;
    
    float highf;
    float highq;
    float highv;
  // private member function(s) for subsystem '<Root>'
  boolean_T isequal(real_T varargin_1, real_T varargin_2);

};



#endif                                 // RTW_HEADER_equ3_c_h_


