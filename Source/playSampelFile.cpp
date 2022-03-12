/*
  ==============================================================================

    playSampelFile.cpp
    Created: 17 May 2021 6:41:07pm
    Author:  Roger Hug

  ==============================================================================
*/

#include "playSampelFile.h"
#include <math.h>
#include <algorithm>

#include "../resampler/resample.cpp"

AudioSample::AudioSample()

{
  
    steppdelay = 0;
    steppcut = 0;
    waveSize=SAMPLERATEAUDIO;
    ArOn = false;
    data1 = 0;
    data2 = 0;

    EnvAttack.resize(SAMPLERATEAUDIO);
    EnvRelease.resize(SAMPLERATEAUDIO);
    EnvReleaseMono.resize(SAMPLERATEAUDIO);
    for (int i = 0; i < SAMPLERATEAUDIO; i++)
    {
        EnvAttack[i] =    (i / (double)SAMPLERATEAUDIO)-1 ;
        EnvRelease[i] = 1-(i / (double)SAMPLERATEAUDIO);
        EnvReleaseMono[i] = 1-(i / ((double)SAMPLERATEAUDIO));
        mAudioToResample[i] = sin(i/(double)SAMPLERATEAUDIO *2);
        mAudioToResample2[i] = sin(i / (double)SAMPLERATEAUDIO * 2*0.3217*4);
        

        
    }
    EnvAttackSynth.resize(SAMPLERATESYNTH);
    EnvReleaseSynth.resize(SAMPLERATESYNTH);
    for (int i = 0; i < SAMPLERATESYNTH; i++)
    {
        EnvAttackSynth[i] = (i / (double)SAMPLERATESYNTH) - 1;
        EnvReleaseSynth[i] = 1 - (i / (double)SAMPLERATESYNTH);

    }
    for(int i=0;i< MAX_VOICES;i++)
    {
        mSampelIndxPoly[i]=1920000;
        mSampelIndxPolyEnvA[i]=SAMPLERATEAUDIO -5;
        mSampelIndxPolyEnvR[i]= SAMPLERATEAUDIO -5;
  
    }



    mSampelIndxMonoEnvR=0;
    mSampeleMonoEnd=0;
    // WDL_Resampler::SetMode arguments are bool interp, int filtercnt, bool sinc, int sinc_size, int sinc_interpsize
    // sinc mode will get better results, but will use more cpu
    // todo: explain arguments
    mResampler.SetMode(true, 0, false, 0, 0);
    mResampler.SetFilterParms();
    // set it output driven
    mResampler.SetFeedMode(false);
    // set input and output samplerates
    mResampler.SetRates(SAMPLERATEAUDIO, SAMPLERATEAUDIO);
    mSampleIndx = 0;
    mResampler.Reset();
    

    filterDsLp= new discretFilterModelClass();
    filterDsLp->initialize();
    echo =new echogeneratorModelClass();
    echo->initialize();
    comp.initialize();
   
}

AudioSample::~AudioSample() {
    
    
}

void AudioSample::reset() {
    


}
inline double fastClipSp(double x, double low, double high)
{
    double x1 = fabs(x - low);
    double x2 = fabs(x - high);
    x = x1 + low + high - x2;

    return x * 0.5;
}
inline double minmaxSPPitch(double a) {
    double result = 0; result = a;
    if (result > 4) { result = 4; }
    if (result < 0.5) { result = 0.5; }
    return result;
}
void AudioSample::processAudioSampel(const int *trigger,double*out,int nFrames,int *readout)
{
 
    const int lenghtMod=(mp.mSampleEnd* getWaveSize());

    const int startMod=0.1+mp.mSampleStart* getWaveSize();


    double PitchIn = ((double)mp.mSamplePitch * 4) * 1 - (mp.mSamplePitchStepperMod - 0.5 * 0.5)
        * 1 - (oscillator.getSampleLfo() * mp.mSamplePitchLfoMod);
    PitchIn *= ((double)mp.mSamplePitchMain ) * (mp.mMainSamplePitchMod);

    const int Pitch = minmaxSPPitch(PitchIn)* getWaveSize();


    double Level =        (((double)mp.mSampelVolume)*
                          (1 - (oscillator.getSampleLfo() * mp.mSampelVolumeMod)))* mp.mSampelVolumeM;
    if (mp.mSampleStepperOn==true && mp.mSampleStepperMode == 4) {  Level *= mp.mStepperVolume; }



    const int rateSQ=trigger[2];
    mResampler.SetRates(getWaveSize(),Pitch);
    int numSamples = mResampler.ResamplePrepare(nFrames,1,&resampledAudio);


    const int pCount=trigger[0];
    const int Trigger=trigger[1];
    mp.triggerOn(Trigger);
    double rtimeA=0;
    double rtimeR=0;
    const int AttackMod=(1-mp.mSpAttack)* getWaveSize();
    const int ReleaseMod=(1-(mp.mSpRelease))* getWaveSize()*4;

if(trigger[3]==0 && mp.mSpLfoRtrMode>0)
{
    oscillator.retriglfo(true);

}
    
   
 //  readout[0]=Trigger;
 //   readout[1]=pCount;
for (int s = 0; s < numSamples; s++)
{
    mSampleIndx++;
    mSampelIndxMonoEnvR++;

    if (mp.mSamplePlayMode == 2 && mp.mEngineMode == false) {

        if (Trigger > 0) {
            mSampeleMonoEnd = mSampleIndx;
            mSampelIndxMonoEnvR = 0;

            if (mSampleIndx >= lenghtMod - 1)
                mSampleIndx = startMod;
            resampledAudio[s] = mAudioToResample[mSampleIndx];

        }
        else
        {
            mSampelIndxMonoEnvR = waveSize;
            resampledAudio[s] = (mAudioToResample[mSampeleMonoEnd]);

        }



        rtimeR = EnvReleaseMono[mSampelIndxMonoEnvR];
        //  readout[0]=rtimeR*1000;


    }

    if (mp.mSamplePlayMode == 1 && mp.mEngineMode == false)
    {

        for (int c = 0; c < MAX_VOICES; c++)
        {
            mSampelIndxPoly[c]++;

           
            if (ArOn == true)// envelope
            {

                //  mSampelIndxPolyEnvA[c]= SAMPLERATE-5;
               //   mSampelIndxPolyEnvR[c] = SAMPLERATE-5;

                mSampelIndxPolyEnvA[c]++;// = SAMPLERATE;
                mSampelIndxPolyEnvR[c]++;// = SAMPLERATE;

                if (mSampelIndxPolyEnvA[c] >= SAMPLERATEAUDIO - 2)
                {
                    mSampelIndxPolyEnvA[c] = SAMPLERATEAUDIO - 1;
                }

                if (mSampelIndxPolyEnvR[c] >= SAMPLERATEAUDIO - 2)
                {
                    mSampelIndxPolyEnvR[c] = SAMPLERATEAUDIO - 1;
                }



                if (Trigger > 0 && mSampelIndxPolyEnvR[pCount] >= getWaveSize() - 2)
                {
                    mSampelIndxPolyEnvR[pCount] = ReleaseMod;
                }

                if (Trigger > 0 && mSampelIndxPolyEnvA[pCount] >= getWaveSize() - 2)
                {
                    mSampelIndxPolyEnvA[pCount] = AttackMod;
                }

                rtimeA = mp.SampelAttack(mSampelIndxPolyEnvA, EnvAttack.data()) + 1;
                rtimeR = mp.SampelRelease(mSampelIndxPolyEnvR, EnvRelease.data());
            }
            int stpoint = 3000;
            int enpoint = getWaveSize();
            if (ArOn == false) {
                rtimeA = 1.0; rtimeR = 1.0; stpoint *= mp.mSpAttack; enpoint *= mp.mSpRelease;
            }



            if (Trigger > 0 && mSampelIndxPoly[pCount] >= enpoint - 2) { mSampelIndxPoly[pCount] = numSamples+stpoint; }



            if (mSampelIndxPoly[c] >= getWaveSize()) { mSampelIndxPoly[c] = getWaveSize() - 1; }


            resampledAudio[s] = (mAudioToResample[mSampelIndxPoly[0]]
                + mAudioToResample[mSampelIndxPoly[1]]
                + mAudioToResample[mSampelIndxPoly[2]]
                + mAudioToResample[mSampelIndxPoly[3]]
                + mAudioToResample[mSampelIndxPoly[4]]
                + mAudioToResample[mSampelIndxPoly[5]]
                + mAudioToResample[mSampelIndxPoly[6]]
                + mAudioToResample[mSampelIndxPoly[7]]
                + mAudioToResample[mSampelIndxPoly[8]]
                + mAudioToResample[mSampelIndxPoly[9]]
                + mAudioToResample[mSampelIndxPoly[10]]
                + mAudioToResample[mSampelIndxPoly[11]]
                + mAudioToResample[mSampelIndxPoly[12]]
                + mAudioToResample[mSampelIndxPoly[13]]
                + mAudioToResample[mSampelIndxPoly[14]]
                + mAudioToResample[mSampelIndxPoly[15]]

                );

            //   data1 = mSampelIndxPolyEnvR[0];
            //   data2 = rtimeR;

        }

    }

}

        if (mResampler.ResampleOut(out, numSamples, nFrames, 1) != nFrames)
        {
            //failed somehow
            memset(out, 0, nFrames * sizeof(double));
        }
        for (int i = 0; i < nFrames; i++)
        {
            if (mp.mSamplePlayMode == 1)
            {

                 out[i] *= ((rtimeA * rtimeR) * Level);
               // out[i] *= SmootherSynth.Process(Level);

            }
            if (mp.mSamplePlayMode == 2)
            {
                out[i] *= SmootherSynth.Process(Level);
            }


        }

    }



void AudioSample::processSynthSampel(const int *trigger, double *Out, int nFrames, int *readout)
{
  
    float level = (mp.mSynthLevel * (1 - (oscillator.getSampleLfo()) * mp.mSynthLevelMod))*0.5 ;
   
    if (mp.mSampleStepperOn == true && mp.mSampleStepperMode == 4) {  level *= mp.mStepperVolume;  }
   
    //   data2 = rtimeR;
    const int pCount=trigger[0];
    const int Trigger=trigger[1];
    const int size=SAMPLERATESYNTH;
    const int AttackMod=(0.75-(mp.mSynthAttack*0.72))*size;
    const int ReleaseMod=(0.875-(mp.mSynthRelease*0.87))*size;



   
    
 //data2 = oscillator.getSample();
    double rtimeA=0;
    double rtimeR=0;
  // data1 = mp.mEngineMode;
  // data2 = rtimeR;
//    readout[0]=Trigger;
//    readout[0]=pCount;
    oscillator.frequencylfoMod(oscillator.getSampleLfo());
    if(trigger[3]==0 && mp.mSpLfoRtrMode>0)
    {
        oscillator.retriglfo(true);
        
    }

    if(mp.mSamplePlayMode>0 && mp.mEngineMode==true){
        
        
    for (int s = 0; s < nFrames; s++)
    {

    for (int c = 0; c < MAX_VOICES; c++)
    {
        
        
        if (ArOn == true)//  envelope
        {

            mSampelIndxPolyEnvA[c]++;
            mSampelIndxPolyEnvR[c]++;

            if (mSampelIndxPolyEnvA[c] >= SAMPLERATESYNTH - 2)
            {
                mSampelIndxPolyEnvA[c] = SAMPLERATESYNTH - 1;
            }

            if (mSampelIndxPolyEnvR[c] >= SAMPLERATESYNTH - 2)
            {
                mSampelIndxPolyEnvR[c] = SAMPLERATESYNTH - 1;
            }



            if (Trigger > 0 && mSampelIndxPolyEnvR[pCount] >= SAMPLERATESYNTH - 2)
            {
                mSampelIndxPolyEnvR[pCount] = ReleaseMod;
            }

            if (Trigger > 0 && mSampelIndxPolyEnvA[pCount] >= SAMPLERATESYNTH - 2)
            {
                mSampelIndxPolyEnvA[pCount] = AttackMod;
            }




            rtimeA = mp.SampelAttack(mSampelIndxPolyEnvA, EnvAttackSynth.data()) + 1;

            rtimeR = mp.SampelRelease(mSampelIndxPolyEnvR, EnvReleaseSynth.data());
        }

        if (ArOn == false) { 
            if (Trigger > 0 )
            rtimeA = 1.0; rtimeR = 1.0; }
                                                              
        
           
    }
     Out[s] = (oscillator.getSample() *SmootherSynth.Process(rtimeA*rtimeR)*(level));


    
    }
 
    }
                                      
    else
        memset(Out,0,nFrames*sizeof(double));
        
}

void AudioSample::processOut(const int *trigger, double *Out, int nFrames, int *readout)
{
    /*
    filterDsLp->cutofflfo(oscillator.getSampleLfo());
    if (mp.mSampleStepperMode == 2) { filterDsLp->cutoffStepper(steppcut); }
    echo->lfoMod(oscillator.getSampleLfo());
    if (mp.mSampleStepperMode == 3) { echo->delayStepper(steppdelay); }
    */

    
    if(mp.mSamplePlayMode>0)
    {
    if(mp.mEngineMode==false)
    {
        processAudioSampel(trigger, Out,nFrames, readout);
    }
    if(mp.mEngineMode==true)
    {
        processSynthSampel(trigger, Out,nFrames, readout);
    }
    for(int s=0;s<nFrames;s++)
    {
  
         filterDsLp->step(Out[s],Out[s]);
         echo->step(Out[s],&Out[s]);
         comp.step(Out[s], -5, 4, 1, 2.15, 0.55, -0.25, Out[s]);
        // data2 = oscillator.getSample();
        
    }
        
        
        
    }
    else
        memset(Out,0,nFrames*sizeof(double));
     
    
}







