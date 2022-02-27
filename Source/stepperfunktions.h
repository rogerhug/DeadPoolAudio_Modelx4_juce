/*
  ==============================================================================

    stepperfunktions.h
    Created: 16 Feb 2022 7:09:42pm
    Author:  r7

  ==============================================================================
*/

#pragma once

#include"playSampelFile.h"
 
//==============================================================================
/*
*/
class stepperfunktions  : public juce::Component
{
public:
    stepperfunktions();
    ~stepperfunktions() override;
    void setMainStepper(double* in, int n, int mode);
    void mStepper(AudioSample& s,const int *time);

private:
    double** steppers;
    int engine;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (stepperfunktions)
};
