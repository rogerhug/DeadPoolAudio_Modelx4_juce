/* Copyright (c) 2017-2018 Shane D. Dunne

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#pragma once
#include "SynthWaveform.h"
#include"../synth/noise.h"
#include"../Source/LfoGen.h"
#define TABELSIZE  1024

class OscParamSmooth
{
public:
    OscParamSmooth() { a = 0.99; b = 1. - a; z = 0.; };
    ~OscParamSmooth() {};
    inline double Process(double in) { z = (in * b) + (z * a); return z; }

private:
    double a, b, z;
};

class SynthOscillator
{
private:
    OscParamSmooth smPitch;
    bool nState;
    // -------------synth---------------
    CWTOsc* mOscWhitenoise;
    CWTOsc* mOscBluenoise;
    CWTOsc* mOscPinknoise;
    CWTOsc* mOscPurplenoise;
    CWTOscState mOsc1_ctx;
    noiseModelClass Bluenoise;
 
    double phase;           // [0.0, 1.0]
    double phaseDelta;
    double phaseDeltaM;     // cycles per sample (fraction)
    
    double phasemodOsc;
    double phasemodOscAm;
    double phaseM;
    std::vector<double> mBufferOscSine;
    std::vector<double> mBufferOscSaw;
    std::vector<double> mBufferOscSquare;
    std::vector<double> mBufferOscTri;
    

    std::vector<double> mBufferWhiteNoise;
    std::vector<double> mBufferBlueNoise;
    std::vector<double> mBufferPinkNoise;
    std::vector<double> mBufferPurpleNoise;
    
    //--------------LFO--------------------
    double phaseLfoTMainSH;
    double phaseDeltaLfoTimerCountMainSH;

    double phaseLfo;           // [0.0, 1.0]
    double phaseDeltaLfo;  
    double phaseDeltaLfoTimerCount1;
    double phaseLfoT1;
    double phaseDeltaLfoTimerCount2;
    double phaseLfoT2;
    double phaseDeltaLfoTimerCount3;
    double phaseLfoT3;
    double phaseDeltaLfoTimerCount4;
    double phaseLfoT4;
    double phaseDeltaLfoTimerCount5;
    double phaseLfoT5;
    double phaseDeltaLfoTimerCount6;
    double phaseLfoT6;
    double phaseDeltaLfoTimerCount7;
    double phaseLfoT7;
    double phaseDeltaLfoTimerRate;     // cycles per sample (fraction)
    double phaseAmLfo;
    double mainPitch;
    double mainPhasePitch;
    double stepperPitch;
    double mLfoTimeMainMode;

    double phaseDeltaTimerCountPreset;
    double phaseLfoTPreset;
    
public:
    SynthOscillator() : phase(0), phaseDelta(0),phaseDeltaM(0),phaseLfo(0)
    ,phaseDeltaLfo(0),phaseAmLfo(0),phasemodOsc(0),phasemodOscAm(0) {
        
        Bluenoise.initialize();
        
        mainPhasePitch=1;
        mBufferWhiteNoise.resize(TABELSIZE);
        mBufferBlueNoise.resize(TABELSIZE);
        mBufferPinkNoise.resize(TABELSIZE);
        mBufferPurpleNoise.resize(TABELSIZE);
     
        
        mBufferOscSine.resize(TABELSIZE);
        mBufferOscSaw.resize(TABELSIZE);
        mBufferOscSquare.resize(TABELSIZE);
        mBufferOscTri.resize(TABELSIZE);
        
        Bluenoise.step(mBufferWhiteNoise.data(), mBufferBlueNoise.data()
                       , mBufferPinkNoise.data(), mBufferPurpleNoise.data());
        for (int i = 0; i < TABELSIZE; i++)
        {
          mOscWhitenoise=  new CWTOsc(mBufferWhiteNoise.data(),TABELSIZE);
          mOscBluenoise=  new CWTOsc(mBufferBlueNoise.data(),TABELSIZE);
          mOscPinknoise=  new CWTOsc(mBufferPinkNoise.data(),TABELSIZE);
          mOscPurplenoise=  new CWTOsc(mBufferPurpleNoise.data(),TABELSIZE);
        }
        mLfoTimeMainMode = 0;
        phaseDeltaLfoTimerCountMainSH = 0;
        phaseLfoTMainSH = 0;
        phaseDeltaLfoTimerCount1 = 0;
        phaseLfoT1 = 0;
        phaseDeltaLfoTimerCount2 = 0;
        phaseLfoT2 = 0;
        phaseDeltaLfoTimerCount3 = 0;
        phaseLfoT3 = 0;
        phaseDeltaLfoTimerCount4 = 0;
        phaseLfoT4 = 0;
        phaseDeltaLfoTimerCount5 = 0;
        phaseLfoT5 = 0;
        phaseDeltaLfoTimerCount6 = 0;
        phaseLfoT6 = 0;
        phaseDeltaLfoTimerCount7 = 0;
        phaseLfoT7 = 0;
        stepperPitch = 0;
        mainPitch = 0;
        phaseDeltaTimerCountPreset = 0;
        phaseLfoTPreset = 0;
    }
    
    void setWaveform(SynthWaveform wf) { waveform = wf; }
    void setWaveformLfo(LfoMode wfl) { WaveformLfo = wfl; }
    void setMainPitch(double mp) { mainPitch = mp; }
    void setLfoMainPitchSynth(double m) { mainPhasePitch = m; }
    void setStepperPitch(double st) { stepperPitch = st; }
    void setFrequency(double cyclesPerSample) {
        phaseDelta = MidiMessage::getMidiNoteInHertz(cyclesPerSample) / 44100;
        mOsc1_ctx.mPhaseIncr = (1. / 44100) * ((phaseDelta+0.1)*44.1) ;
        phaseDeltaM=MidiMessage::getMidiNoteInHertz(cyclesPerSample) / 44100;
    }
    
    void setFrequencyMod(double m){phasemodOscAm=m*0.4;}
    void frequencylfoMod(double p){ 
        phaseDelta=(phaseDeltaM*(1-(p*phasemodOscAm))); }

    

    void setFrequencyLfo(double cyclesPerSample){
        phaseDeltaLfo = cyclesPerSample / 440.1;
       
    }
    void setFrequencyLfoStepper(double s){
    
        phaseDeltaLfo *= s;
    }
    void setLfoAmp(double am){ phaseAmLfo=am; }
    void retriglfo(bool t)
    {
        if(t==true)
            phaseLfo=0;
        t=false;
    }
    double SampelholdValue(bool t)
    {
        double hold=0;
        if(t==true)
        {
            hold=phaseLfo;
        }
        
        return hold;
        t=false;
        
    }
    void resetTimer()
    {
        phaseLfoT1 = 0;
        phaseLfoT2 = 0;
        phaseLfoT3 = 0;
        phaseLfoT4 = 0;
        phaseLfoT5 = 0;
        phaseLfoT6 = 0;
        phaseLfoT7 = 0;
    }
    SynthWaveform waveform;
    LfoMode WaveformLfo;
    double getSample ();
    double getSampleLfo ();

    //****************************Timers***************************
    void setWaveformLfoTime(int wf) { mLfoTimeMainMode = wf; }
    void setPhaseReset(int i) {
        /*
        if (i == 0) { phaseLfoT1 = 0; }
        if (i == 1) { phaseLfoT2 = 0; }
        if (i == 2) { phaseLfoT3 = 0; }
        if (i == 3) { phaseLfoT4 = 0; }
        if (i == 4) { phaseLfoT5 = 0; }
        if (i == 5) { phaseLfoT6 = 0; }
        if (i == 6) { phaseLfoT7 = 0; }

       */
     


    } void setFrequencyLfoTimerMainSH(double cyclesPerSample) {
        phaseDeltaLfoTimerCountMainSH = cyclesPerSample / 44100;
    }
    double getSampleTimeCountMainSH();


    void setFrequencyLfoTimer1(double cyclesPerSample) {
        phaseDeltaLfoTimerCount1 = cyclesPerSample / 44100;
         }
    double getSampleTimeCount1();
    void setFrequencyLfoTimer2(double cyclesPerSample) {
        phaseDeltaLfoTimerCount2 = cyclesPerSample / 44100;
    }
   double getSampleTimeCount2();

   void setFrequencyLfoTimer3(double cyclesPerSample) {
       phaseDeltaLfoTimerCount3 = cyclesPerSample / 44100;
   }
  double getSampleTimeCount3();

  void setFrequencyLfoTimer4(double cyclesPerSample) {
      phaseDeltaLfoTimerCount4 = cyclesPerSample / 44100;
  }
  double getSampleTimeCount4();

  void setFrequencyLfoTimer5(double cyclesPerSample) {
      phaseDeltaLfoTimerCount5 = cyclesPerSample / 44100;
  }
  double getSampleTimeCount5();

  void setFrequencyLfoTimer6(double cyclesPerSample) {
      phaseDeltaLfoTimerCount6 = cyclesPerSample / 44100;
  }
  double getSampleTimeCount6();

  void setFrequencyLfoTimer7(double cyclesPerSample) {
      phaseDeltaLfoTimerCount7 = cyclesPerSample / 44100;
  }
   double getSampleTimeCount7();

    
   void setFrequencyPresetTimer(double cyclesPerSample) {
       phaseDeltaTimerCountPreset = cyclesPerSample / 44100;
   }
   double getSampleTimeCountPreset();
    
   
   
    
    

};
