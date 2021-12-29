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
#include "SynthOscillator.h"
#include <cmath>
#include "../JuceLibraryCode/JuceHeader.h"    // only for double_Pi constant

double SynthOscillator::getSample()
{
    
    
    float sample = 0.0f;
    switch (waveform.index)
    {
    case SynthWaveform::kSine:
        sample = (float)(std::sin(phase * 2.0 * double_Pi));
        break;
    case SynthWaveform::kSquare:
        sample = (phase <= 0.5) ? 1.0f : -1.0f;
        break;
    case SynthWaveform::kTriangle:
        sample = (float)(2.0 * (0.5 - std::fabs(phase - 0.5)) - 1.0);
        break;
    case SynthWaveform::kSawtooth:
        sample = (float)(2.0 * phase - 1.0);
        break;
    case SynthWaveform::kWhitenoise:
        sample= mOscWhitenoise->process(&mOsc1_ctx)*0.1201013;
        break;
    case SynthWaveform::kBluenoise:
        sample= mOscBluenoise->process(&mOsc1_ctx)*0.1201013;
        break;
    case SynthWaveform::kPinknoise:
        sample= mOscPinknoise->process(&mOsc1_ctx)*0.1201013;
        break;
    case SynthWaveform::kPurplenoise:
        sample= mOscPurplenoise->process(&mOsc1_ctx)*0.1201013;
        break;
            
    }

    phase += (phaseDelta*(stepperPitch+(mainPitch*mainPhasePitch)));
    while (phase > 1.0) phase -= 1.0;

   return sample;
}
double SynthOscillator::getSampleLfo()
{
    
    
    float sample = 0.0f;
    switch (WaveformLfo.index)
    {
        case LfoMode::kSine:
            sample = (float)(std::sin(phaseLfo * 2.0 * double_Pi));

            break;
        case LfoMode::kSquare:
            sample = (phaseLfo <= 0.5) ? 1.0f : -1.0f;
            break;
        case LfoMode::kTriangle:
            sample = (float)(2.0 * (0.5 - std::fabs(phaseLfo - 0.5)) - 1.0);
            break;
        case LfoMode::kSawDwn:
            sample = (float)(2.0 * phaseLfo - 1.0);
            break;
        case LfoMode::kSawUp:
            sample = 2-(float)(2.0 * phaseLfo + 1.0);
            break;
    }
    
    phaseLfo += phaseDeltaLfo;
    while (phaseLfo > 1.0) phaseLfo -= 1.0;
    
    return sample*phaseAmLfo;
}

double SynthOscillator::getSampleTimeCountMainSH()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoTMainSH);

    phaseLfoTMainSH += phaseDeltaLfoTimerCountMainSH;
    while (phaseLfoTMainSH > 1.0) phaseLfoTMainSH -= 1.0;

    return sample;
}

double SynthOscillator::getSampleTimeCount1()
{
       float sample = 0.0f;
        sample = (float)(1.0 * phaseLfoT1 );

        phaseLfoT1 += phaseDeltaLfoTimerCount1;
        while (phaseLfoT1 > 1.0) phaseLfoT1 -= 1.0;

        return sample ;

}
double SynthOscillator::getSampleTimeCount2()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT2);

    phaseLfoT2 += phaseDeltaLfoTimerCount2;
    while (phaseLfoT2 > 1.0) phaseLfoT2 -= 1.0;

    return sample;

}
double SynthOscillator::getSampleTimeCount3()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT3);

    phaseLfoT3 += phaseDeltaLfoTimerCount3;
    while (phaseLfoT3 > 1.0) phaseLfoT3 -= 1.0;

    return sample;

}
double SynthOscillator::getSampleTimeCount4()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT4);

    phaseLfoT4 += phaseDeltaLfoTimerCount4;
    while (phaseLfoT4 > 1.0) phaseLfoT4 -= 1.0;

    return sample;

}
double SynthOscillator::getSampleTimeCount5()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT5);

    phaseLfoT5 += phaseDeltaLfoTimerCount5;
    while (phaseLfoT5 > 1.0) phaseLfoT5 -= 1.0;

    return sample;

}
double SynthOscillator::getSampleTimeCount6()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT6);

    phaseLfoT6 += phaseDeltaLfoTimerCount6;
    while (phaseLfoT6 > 1.0) phaseLfoT6 -= 1.0;

    return sample;

}
double SynthOscillator::getSampleTimeCount7()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoT7);

    phaseLfoT7 += phaseDeltaLfoTimerCount7;
    while (phaseLfoT7 > 1.0) phaseLfoT7 -= 1.0;

    return sample;

}

double SynthOscillator::getSampleTimeCountPreset()
{
    float sample = 0.0f;
    sample = (float)(1.0 * phaseLfoTPreset);

    phaseLfoTPreset += phaseDeltaTimerCountPreset;
    while (phaseLfoTPreset> 1.0) phaseLfoTPreset -= 1.0;

    return sample;
}


