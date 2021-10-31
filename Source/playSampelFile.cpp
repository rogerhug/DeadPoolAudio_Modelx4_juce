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


    waveSize=SAMPLERATE;
    ArOn = false;
    data1 = 0;
    data2 = 0;

    EnvAttack.resize(SAMPLERATE);
    EnvRelease.resize(SAMPLERATE);
    EnvReleaseMono.resize(SAMPLERATE);
    for (int i = 0; i < SAMPLERATE; i++)
    {
        EnvAttack[i] =    (i / (double)SAMPLERATE)-1 ;
        EnvRelease[i] = 1-(i / (double)SAMPLERATE);
        EnvReleaseMono[i] = 1-(i / ((double)SAMPLERATE));
        mAudioToResample[i] = sin(i/(double)SAMPLERATE*2);
        mAudioToResample2[i] = sin(i / (double)SAMPLERATE * 2*0.3217*4);
        

        
    }
   
   
    for(int i=0;i< MAX_VOICES;i++)
    {
        mSampelIndxPoly[i]=0;
        mSampelIndxPolyEnvA[i]=SAMPLERATE-5;
        mSampelIndxPolyEnvR[i]= SAMPLERATE-5;
  
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
    mResampler.SetRates(SAMPLERATE, SAMPLERATE);
    mSampleIndx = 0;
    mResampler.Reset();
    

    filterDsLp= new discretFilterModelClass();
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
void AudioSample::processAudioSampel(const int *trigger,double*out,int nFrames,int *readout)
{
 
    const int lenghtMod=(mp.mSampleEnd* getWaveSize());

    const int startMod=mp.mSampleStart* getWaveSize();
    const int Pitch =(1+(mp.mSamplePitch*mp.mSamplePitchM)*1-((oscillator.getSampleLfo()*mp.mSamplePitchMod)+mp.mMainSamplePitchMod))* getWaveSize();
    double Level= (mp.mSampelVolume * mp.mSampelVolumeM)*(1-(oscillator.getSampleLfo()*mp.mSampelVolumeMod)*0.551112341234);
    const int rateSQ=trigger[2];
    mResampler.SetRates(getWaveSize(),Pitch);
    int numSamples = mResampler.ResamplePrepare(nFrames,1,&resampledAudio);


    const int pCount=trigger[0];
    const int Trigger=trigger[1];
    double rtimeA=0;
    double rtimeR=0;
    const int AttackMod=(1-mp.mSpAttack)*SAMPLERATE;
    const int ReleaseMod=(1-(mp.mSpRelease))*SAMPLERATE;

if(trigger[3]==0 && mp.mSpLfoRtrMode>0)
{
    oscillator.retriglfo(true);

}
    
   
    readout[0]=Trigger;
    readout[1]=pCount;

    for (int s = 0; s < numSamples; s++)
    {   mSampleIndx++;
        mSampelIndxMonoEnvR++;
         
        if(mp.mSamplePlayMode==2 &&  mp.mEngineMode==false  ){
            
    if (Trigger>0){
        mSampeleMonoEnd=mSampleIndx;
        mSampelIndxMonoEnvR = 0;
        
        if (mSampleIndx >= lenghtMod-1)
            mSampleIndx = startMod;
        resampledAudio[s] = mAudioToResample[mSampleIndx];

    }
    else
    {
        mSampelIndxMonoEnvR = waveSize;
        resampledAudio[s] = (mAudioToResample[mSampeleMonoEnd]);
        
    }
 
            
                
         rtimeR=EnvReleaseMono[mSampelIndxMonoEnvR];
            //  readout[0]=rtimeR*1000;
           
          
        }
    
    if(mp.mSamplePlayMode==1 && mp.mEngineMode==false)
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
               
                if (mSampelIndxPolyEnvA[c] >= SAMPLERATE - 2)
                {
                    mSampelIndxPolyEnvA[c] = SAMPLERATE - 1;
                }

                if (mSampelIndxPolyEnvR[c] >= SAMPLERATE - 2)
                {
                    mSampelIndxPolyEnvR[c] = SAMPLERATE - 1;
                }
              
              

                if (Trigger > 0 && mSampelIndxPolyEnvR[pCount] >= getWaveSize() - 2)
                {
                    mSampelIndxPolyEnvR[pCount] = ReleaseMod;
                }

                if (Trigger > 0 && mSampelIndxPolyEnvA[pCount] >= getWaveSize() - 2)
                {
                    mSampelIndxPolyEnvA[pCount] = AttackMod;
                }

            rtimeA = mp.SampelAttack(mSampelIndxPolyEnvA, EnvAttack.data())+1;
            rtimeR = mp.SampelRelease(mSampelIndxPolyEnvR, EnvRelease.data());
            }

            if (ArOn == false) {   rtimeA = 1.0; rtimeR = 1.0;     }

      
    
   if (Trigger>0 && mSampelIndxPoly[pCount]>= getWaveSize() -2){ mSampelIndxPoly[pCount] = startMod;}
     

   
   if (mSampelIndxPoly[c]>= getWaveSize()){ mSampelIndxPoly[c] = getWaveSize() -1;  }

        
            resampledAudio[s] = (mAudioToResample[mSampelIndxPoly[0]]
                                +mAudioToResample[mSampelIndxPoly[1]]
                                +mAudioToResample[mSampelIndxPoly[2]]
                                +mAudioToResample[mSampelIndxPoly[3]]
                                +mAudioToResample[mSampelIndxPoly[4]]
                                +mAudioToResample[mSampelIndxPoly[5]]
                                +mAudioToResample[mSampelIndxPoly[6]]
                                +mAudioToResample[mSampelIndxPoly[7]]
                                +mAudioToResample[mSampelIndxPoly[8]]
                                +mAudioToResample[mSampelIndxPoly[9]]
                                +mAudioToResample[mSampelIndxPoly[10]]
                                +mAudioToResample[mSampelIndxPoly[11]]
                                +mAudioToResample[mSampelIndxPoly[12]]
                                +mAudioToResample[mSampelIndxPoly[13]]
                                +mAudioToResample[mSampelIndxPoly[14]]
                                +mAudioToResample[mSampelIndxPoly[15]]
                                 
                             );
       
            data1 = mSampelIndxPolyEnvR[0];
            data2 = rtimeR;
        
    }
        
    }
   
    }
  
    
    if (mResampler.ResampleOut(out, numSamples,nFrames, 1) != nFrames)
    {
        //failed somehow
        memset(out, 0 , nFrames * sizeof(double));
    }
    for(int i=0;i<nFrames;i++)
    {
        if(mp.mSamplePlayMode==1)
        {

        out[i] *= ((rtimeA * rtimeR) * Level);

        }
    if(mp.mSamplePlayMode==2)
    {
        out[i]*=SmootherSynth.Process(Level);
    }
    }
}

void AudioSample::processSynthSampel(const int *trigger, double *Out, int nFrames, int *readout)
{
  
    float level = (mp.mSynthLevel*(1-(oscillator.getSampleLfo())*mp.mSynthLevelMod))*0.25;

    
    const int pCount=trigger[0];
    const int Trigger=trigger[1];
    const int size=SAMPLERATE;
    const int AttackMod=(1-mp.mSynthAttack)*size;
    const int ReleaseMod=(1-mp.mSynthRelease)*size;
 
    double rtimeA=0;
    double rtimeR=0;

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

            if (mSampelIndxPolyEnvA[c] >= SAMPLERATE - 2)
            {
                mSampelIndxPolyEnvA[c] = SAMPLERATE - 1;
            }

            if (mSampelIndxPolyEnvR[c] >= SAMPLERATE - 2)
            {
                mSampelIndxPolyEnvR[c] = SAMPLERATE - 1;
            }



            if (Trigger > 0 && mSampelIndxPolyEnvR[pCount] >= SAMPLERATE - 2)
            {
                mSampelIndxPolyEnvR[pCount] = ReleaseMod;
            }

            if (Trigger > 0 && mSampelIndxPolyEnvA[pCount] >= SAMPLERATE - 2)
            {
                mSampelIndxPolyEnvA[pCount] = AttackMod;
            }




            rtimeA = mp.SampelAttack(mSampelIndxPolyEnvA, EnvAttack.data()) + 1;

            rtimeR = mp.SampelRelease(mSampelIndxPolyEnvR, EnvRelease.data());
        }

        if (ArOn == false) { 
            if (Trigger > 0 )
            rtimeA = 1.0; rtimeR = 1.0; }
                                                              
        
                                                                                                                                                                           }
     Out[s] = (oscillator.getSample() *SmootherSynth.Process(rtimeA*rtimeR)*level);
  
    }

    }
                                      
    else
        memset(Out,0,nFrames*sizeof(double));
        
}

void AudioSample::processOut(const int *trigger, double *Out, int nFrames, int *readout)
{
    
    filterDsLp->cutofflfo(oscillator.getSampleLfo());
    echo->lfoMod(oscillator.getSampleLfo());


    
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
         comp.step(Out[s], 0, 1, 1, 0.15, 0.35, -0.25, Out[s]);
    }
        
        
        
    }
    else
        memset(Out,0,nFrames*sizeof(double));
     
    
}







