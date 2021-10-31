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
    
    double phaseLfo;           // [0.0, 1.0]
    double phaseDeltaLfo;      // cycles per sample (fraction)
    double phaseAmLfo;
    double mainPhasePitch;
    
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
        
    }
    
    void setWaveform(SynthWaveform wf) { waveform = wf; }
    void setWaveformLfo(LfoMode wfl) { WaveformLfo = wfl; }
    void setLfoPitchSynth(double m){ mainPhasePitch= 1-m;}
    void setFrequency(double cyclesPerSample) {
        phaseDelta = MidiMessage::getMidiNoteInHertz(cyclesPerSample) / 44100;
        mOsc1_ctx.mPhaseIncr = (1. / 44100) * ((phaseDelta+0.1)*44.1) ;
        phaseDeltaM=MidiMessage::getMidiNoteInHertz(cyclesPerSample) / 44100;
    }
    void setFrequencyMod(double m){phasemodOscAm=m*0.4;}
    void frequencylfoMod(double p){ phaseDelta=(phaseDeltaM*(1-(p*phasemodOscAm))); }
    void setFrequencyLfo(double cyclesPerSample){ phaseDeltaLfo = cyclesPerSample / 4100;}
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
    SynthWaveform waveform;
    LfoMode WaveformLfo;
    double getSample ();
    double getSampleLfo ();
};
