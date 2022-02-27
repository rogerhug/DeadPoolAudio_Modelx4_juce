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
#include "SynthWaveform.h"

const StringArray SynthWaveform::names = { "Vco.Sine", "Vco.Triangle", "Vco.Square", "Vco.Sawtooth",
    "Whitenoise","BlueNoise","PinkNoise","PurpleNoise" };



int SynthWaveform::textToIndex(const String& s)
{
    for (int i = 0; i < kNumberOfWaveformTypes; i++) if (s == names[i]) return i;

    // Were we given an invalid waveform name?
    jassertfalse;
    return 0;
}

void SynthWaveform::setFromName(String wfName)
{
    index = (WaveformTypeIndex)textToIndex(wfName);
}

String SynthWaveform::name()
{
    return names[index];
}

void SynthWaveform::setIndex(int i)
{
    if (i < 0) i = 0;
    if (i >= kNumberOfWaveformTypes) i = kNumberOfWaveformTypes - 1;
    index = (WaveformTypeIndex)i;
}

void SynthWaveform::setupComboBox(ComboBox& cb)
{
    for (int i = 0; i < kNumberOfWaveformTypes; i++)
        cb.addItem(names[i], i + 1);
}

const StringArray LfoMode::names = { "Lfo.off", "Lfo.Sine", "lfo.Square", "Lfo.Triangle","Lfo.SawDown","Lfo.SawUp" };

int LfoMode::textToIndex(const juce::String &s) {
    for (int i = 0; i < kNumberOfTypes; i++) if (s == names[i]) return i;
    
    // Were we given an invalid waveform name?
    jassertfalse;
    return 0;
}


void LfoMode::setupComboBox(juce::ComboBox &cb) {
    for (int i = 0; i < kNumberOfTypes; i++)
        cb.addItem(names[i], i + 1);
}


void LfoMode::setFromName(juce::String wfName) {
    index = (LfoModeTypeIndex)textToIndex(wfName);
}


juce::String LfoMode::name() {
    return names[index];
}

void LfoMode::setIndex(int i) {
    if (i < 0) i = 0;
    if (i >= kNumberOfTypes) i = kNumberOfTypes - 1;
    index = (LfoModeTypeIndex)i;
}
