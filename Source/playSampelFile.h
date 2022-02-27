/*
  ==============================================================================

    playSampelFile.h
    Created: 17 May 2021 6:41:07pm
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once


#include <JuceHeader.h>
#include"../resampler/resample.h"
#include"../filter/discretFilter.h"
#include"LfoGen.h"
#include"../synth/SynthOscillator.h"
#include"../synth/SynthWaveform.h"
#include"../echo/echogenerator.h"
#include"../Limiter/compressor_c.h"

#define SAMPLERATEAUDIO 88200
#define SAMPLERATESYNTH 22050
#define TABELSIZELFO 512
#define MAX_VOICES 16

class CParamSmooth
{
public:
    CParamSmooth() { a = 0.99; b = 1. - a; z = 0.; };
    ~CParamSmooth() {};
    inline double Process(double in) { z = (in * b) + (z * a); return z; }
private:
    double a, b, z;
};


struct ParasEng
{
    bool mEngineMode;
    float para1;
    int mTimeMode;
    bool trOn;
    //--------------synth-----
    int mSynthWaveForm;
    int mSynthLoud;
    int mSynthFrequency;
    float mSynthLevel;
    float mSynthLevelMod;
    float mSynthAttack;
    float mSynthRelease;
    float mSynthReleaseMod;
    
    //--------------audio------
    int stepperWave;
    int mSp1CountPolyNote;
    float mSqGate;
    int mSamplePlayMode;
    int mSampleSize;
    int mSampleN;
    float mSampelNMod;
    float mSamplePitch;
    float mSamplePitchMain;
    float mSamplePitchLfoMod;
    bool mSampleStepperOn;
    int mSampleStepperMode;
    float mSamplePitchStepperMod;
    float mMainSamplePitchMod;
    double mSampleStart;
    double mSampleEnd;
    float mSampelVolume;
    float mSampelVolumeM;
    float mSampelVolumeMod;
    float mSpAttack;
    float mSpRelease;
    int playheadPoly[128];
    
    double mSpLfoRate;
    double mSpLfoAmp;
    int mSpLfoMode;
    int mSpLfoRtrMode;
    bool mSpLfoRtr;
    double mSpLfoPhase1;
    
    int mtimeRate;
    int mCounts;
    double mStepperVolume;
    ParasEng()
    {
        trOn = false;
        mEngineMode=false;
        para1=0.0f;
        mTimeMode = 7;
        mMainSamplePitchMod=1;
        //---synth---
        stepperWave = 6;
        mSynthWaveForm=0;
        mSynthLoud=0;
        mSynthFrequency=60;
        mSynthLevel=0.5;
        mSynthLevelMod=0.0;
        mSynthAttack=0.2;
        mSynthRelease=0.5;
        mSynthReleaseMod=0.0;

        mSampleStepperOn = false;
        mSampleStepperMode = 0;
       //   audio----

        mSp1CountPolyNote=0;
        mSqGate=0.2;
        mtimeRate=0;
        mCounts=0;
        mSampleSize=44100;
        mSampleN=1;
        mSampelNMod=0.0;
        mSamplePitch=1;
        mSamplePitchMain=0.0;
        mSamplePitchLfoMod=0;
        mSamplePitchStepperMod = 1;
        mSampleStart=0;
        mSampleEnd=1;
        mSampelVolume=0.7;
        mSampelVolumeM=0.5;
        mSampelVolumeMod=0.0;
        mSpAttack=0.1;
        mSpRelease=0.9;
        mSamplePlayMode=2;
        mSpLfoRate=0.5;
        mSpLfoAmp=0.0;
        mSpLfoMode=0;
        mSpLfoPhase1=0;
        mSpLfoRtr=false;
        mSpLfoRtrMode=0;
        mStepperVolume = 0;
        for (int i = 0; i < 128; i++)
        {
            playheadPoly[i] = 0;
            
        }
      
    }
    void setStepperVolume(double v)
    {
        mStepperVolume = v;

    }
    double SampelAttack(int*idxc,double*in)
    {
        double r;
        
        r =in[idxc[0]]+in[idxc[1]]+in[idxc[2]]+in[idxc[3]]
        +in[idxc[4]]+in[idxc[5]]+in[idxc[6]]+in[idxc[7]]
        +in[idxc[8]]+in[idxc[9]]+in[idxc[10]]+in[idxc[11]]
        +in[idxc[12]]+in[idxc[13]]+in[idxc[14]]+in[idxc[15]];
  
        return r;
        
    }
    double SampelRelease(int*idxc,double*in)
    {
        double r;
   
        r =in[idxc[0]]+in[idxc[1]]+in[idxc[2]]+in[idxc[3]]
        +in[idxc[4]]+in[idxc[5]]+in[idxc[6]]+in[idxc[7]]
        +in[idxc[8]]+in[idxc[9]]+in[idxc[10]]+in[idxc[11]]
        +in[idxc[12]]+in[idxc[13]]+in[idxc[14]]+in[idxc[15]];
    
     
        return r;
       
    }
    void PichStepper(double in)
    {
        mSamplePitchStepperMod = in;
    }
    double PitchDef()
    {
        
        return mMainSamplePitchMod;
    }

    void setStepperWave(double n)
    {

        stepperWave = n;

    }
    void triggerOn(const int i) {
        if (i == 0) { trOn = false; }
        if (i == 1) { trOn = true; }
        
    }
    bool setStepperWaveCheck(int in,int check)
    {
        if(trOn==true && in == check){
        
            return false;
        }

        if (trOn == true && in != check) {

            return true;
        }
        if (trOn == false) {

            return false;
        }
        else
        return false;
    }
   
private:

};



class AudioSample
{
public:
    AudioSample();
    ~AudioSample();
    void reset();

    void processAudioSampel(const int *trigger,double*Out,int nFrames, int *readout);
    void processSynthSampel(const int *trigger,double*Out,int nFrames, int *readout);
    void processOut(const int *triggerP,double*Out,int nFrames, int *readout);
    WDL_ResampleSample mAudioToResample2[SAMPLERATEAUDIO];
    void setAr(bool o) { ArOn = o;; }
    void loadfile(int size)
    {
       memcpy(mAudioToResample, mAudioToResample2,size*sizeof(double));
        waveSize=size;
    }
   
    double getDataD() { return data1; }
    double getDataD2() { return data2; }

    const int getWaveSize() { return waveSize; }
    void resetCounts(int s) {
        for(int c=0;c<MAX_VOICES;c++)
            mSampelIndxPoly[c] = s - 1; 
    }

    int waveSize;
    ParasEng mp;
    discretFilterModelClass*filterDsLp;
    SynthOscillator oscillator;
    echogeneratorModelClass *echo;
    compressor_cModelClass comp;
private:
    double data1;
    double data2;
    bool ArOn;
    int mSampleIndx;
    int mSampelIndxMonoEnvR;
    int mSampeleMonoEnd;
    int mSampelIndxPoly[MAX_VOICES];
    int mSampelIndxPolyEnvA[MAX_VOICES];
    int mSampelIndxPolyEnvR[MAX_VOICES];
    WDL_Resampler mResampler;
    WDL_ResampleSample *resampledAudio=NULL;
    WDL_ResampleSample mAudioToResample[SAMPLERATEAUDIO];

    std::vector<double> EnvAttack;
    std::vector<double> EnvRelease;
    std::vector<double> EnvReleaseMono;

    std::vector<double> EnvAttackSynth;
    std::vector<double> EnvReleaseSynth;

    CParamSmooth SmootherSynth, SmootherSynthLevel, SmootherFilter , SmSpEnd ,SmSpVolume;



};
