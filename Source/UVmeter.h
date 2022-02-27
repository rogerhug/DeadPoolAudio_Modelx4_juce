/*
  ==============================================================================

    UVmeter.h
    Created: 17 Dec 2021 4:53:14pm
    Author:  r7

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class UVmeter  : public juce::Component
{
public:
    UVmeter()
    {
        // In your constructor, you should add any child components, and
        // initialise any special settings that your component needs.
        meterlevel = 0.5;
    }

    ~UVmeter() override
    {
    }
    void meterIn(double in)
    {
        meterlevel = in;
        repaint();
    }
    void paint (juce::Graphics& g) override
    {
        /* This demo code just fills the component's background and
           draws some placeholder text to get you started.

           You should replace everything in this method with your own
           drawing code..
        */

        g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background
        g.setColour(juce::Colours::greenyellow);
        g.fillRect(5, 70-(meterlevel*70), 10, 5 + (meterlevel * 70));
        g.setColour (juce::Colours::orange);
        g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

        g.setColour (juce::Colours::white);
 
       
    }

    void resized() override
    {
        // This method is where you should set the bounds of any child
        // components that your component contains..

    }
 double meterlevel;
private:
   
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UVmeter)
};
