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

    phase += (phaseDelta*mainPhasePitch);
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
