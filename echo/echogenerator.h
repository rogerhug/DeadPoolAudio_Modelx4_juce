
#ifndef RTW_HEADER_echogenerator_h_
#define RTW_HEADER_echogenerator_h_
#include "rtwtypes.h"
#include <cmath>
#include <string.h>
#ifndef echogenerator_COMMON_INCLUDES_
# define echogenerator_COMMON_INCLUDES_
#include "rtwtypes.h"
#include"../Source/Eutils.h"
#endif                                 // echogenerator_COMMON_INCLUDES_


#define SAMPLERATEDELAY 44100

class DParamSmooth
{
public:
    DParamSmooth() { a = 0.99; b = 1. - a; z = 0.; };
    ~DParamSmooth() {};
    inline double Process(double in) { z = (in * b) + (z * a); return z; }
private:
    double a, b, z;
};

// Macros for accessing real-time model data structure
#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct {
  uint32_T f1[8];
} cell_wrap;

#endif                                 //typedef_cell_wrap

#ifndef typedef_audioexample_DelayFilter
#define typedef_audioexample_DelayFilter

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize[2];
  real_T FeedbackLevel;
  real_T NumChannels;
  real_T WriteIndex;
  real_T ReadIndex;
  real_T DelayLine[192000];
  real_T FeedbackValue;
} audioexample_DelayFilter;

#endif                                 //typedef_audioexample_DelayFilter

#ifndef typedef_audioexample_Echo
#define typedef_audioexample_Echo

typedef struct {

  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap inputVarSize;
  real_T Delay;
  real_T Gain;
  real_T FeedbackLevel;
  real_T WetDryMix;
  real_T pDelayInSamples;
  audioexample_DelayFilter pDelay;
  real_T pGain;
  real_T pWetDryMix;
} audioexample_Echo;

#endif                                 //typedef_audioexample_Echo

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  audioexample_Echo obj;               // '<Root>/Echo'
} DW_ECHO;



// Class declaration for model echogenerator
class echogeneratorModelClass {
  // public data and function members
 public:


  // model initialize function
  void initialize();

  // model step function
  void step(double in,double*out);

  // Constructor
  echogeneratorModelClass();

  // Destructor
  ~echogeneratorModelClass();
    //-------parameters----------
    DelayMode dMode;
    void setDelayTime(double t){dTime=(t);dTimeM=(t);}
    void setDelayTimeMod(double tm){dTimeMod=(tm);}
    void setDelayLevel(double l){dLevel=(l);dLevelM=(l);}
    void setDelayLevelMod(double lm){dLevelMod=(lm);}
    void setDelayFeed(double f){dFeed=f;dFeedM=f;}
    void setDelayFeedMod(double fm){dFeedMod=fm;}
    double shmainMix;
    void setDelayMixMain(double m) { dMixMain = m; }
    void setDelayMix(double m) { dMix = m; dMix_t = m; }
    void setDelayMixMod(double md){dMixMod=md;}
    double phaseMixLfo;
    double phaseMixLfoB;
    double getDelayTime() { return dTime; }
    double getDelayFeed() { return dFeed; }
    double getDelayLevel() { return dLevel; }
    int getDelayMode() { return dMode.getIndex(); }
    //--------main-modulation-------------
    void setmainMixMod(double p,double m){
        
        if(m>0.1){
      
        dmainMixMod = 1-(p*0.5)-0.5;
        }
        else
            dmainMixMod = 1;
        
       
        
    }
    double getmainMixDelay(){return dmainMixMod;}
    //----parameterModulation------
     void lfoMod(double p)
    {
         double mixphase = 1 - (p * dMixMod);

        if(dTimeMod>0.1){  dTime = dTimeM* 1-(p*dTimeMod);}
        else{ dTime =dTimeM;}
        if(dLevelMod>0.1){ dLevel= dLevelM*1-(p*dLevelMod);}
        else{dLevel= dLevelM;}
        if(dFeedMod>0.1){ dFeed = dFeedM* 1-(p*dFeedMod);}
        else{dFeed = dFeedM;}
        
        
        if (dMixMod > 0.1) { dMix = dMix_t*mixphase; }
        else { dMix = dMix; }
       
        
        
    }
    
    
    
    // private data and function members
 private:
  // Block signals and states
  DW_ECHO rtDW;
    DParamSmooth SmDlevel,SmDTime,SmDMix;
    double dTime;
     double dTimeM;
    double dTimeMod;
    double dLevel;
    double dLevelM;
    double dLevelMod;
    double dFeed;
    double dFeedM;
    double dFeedMod;
    double dMix;
    double dMixM;
    double dMix_t;
    double dMixMod;
    double dMixMain;
    double dmainMixMod;
    double dmainMixModS;
  // private member function(s) for subsystem '<Root>'
  boolean_T isequal(real_T varargin_1, real_T varargin_2);

};


#endif                                 // RTW_HEADER_echogenerator_h_

