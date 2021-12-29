
#ifndef RTW_HEADER_discretFilter_h_
#define RTW_HEADER_discretFilter_h_
#ifndef discretFilter_COMMON_INCLUDES_
# define discretFilter_COMMON_INCLUDES_
#include "rtwtypes.h"
#include"../Source/Eutils.h"
#endif                                 // discretFilter_COMMON_INCLUDES_

class FParamSmooth
{
public:
    FParamSmooth() { a = 0.99; b = 1. - a; z = 0.; };
    ~FParamSmooth() {};
    inline double Process(double in) { z = (in * b) + (z * a); return z; }
private:
    double a, b, z;
};
// Block signals and states (default storage) for system '<Root>'
typedef struct {
  real_T Filter_FILT_STATES[8];        // '<Root>/Filter'
} D_WorkLp2;


// Class declaration for model discretFilter
class discretFilterModelClass {
  // public data and function members
 public:
  // External inputs
 

  // model initialize function
  void initialize();

  // model step function
  void setcutoff(double c)  { cutoff=(c);cutoffM=c; }
  void setCutoffMod(double m){cutoffMod=m;}
  void setResonance(double r){resonance=r;}
  void cutofflfo(double p){
      if(cutoffMod>0.1){
      cutoff= cutoffM* 1-(SmCut1.Process(p*cutoffMod));
      }
      else
          cutoff=cutoffM;
  }
  void step(double in,double &out);

  // Constructor
  discretFilterModelClass();

  // Destructor
  ~discretFilterModelClass();

  
    FilterMode fmode;
 private:
  // Block signals and states
    D_WorkLp2 rtDWork;
    FParamSmooth SmCut,SmCut1,SmLevel;
    double cutoff;
    double cutoffMod;
    double cutoffM;
    double resonance;

};



#endif                                 // RTW_HEADER_discretFilter_h_


