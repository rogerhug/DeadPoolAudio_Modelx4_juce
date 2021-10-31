/*
  ==============================================================================

    sequencer.h
    Created: 7 Jun 2021 8:41:38am
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>



class sequencer  : public juce::Component
{
public:
    enum RadioButtonIds
    {
        PatternButtons = 1943
    };
    sequencer()
  
    {
        
        trigger1=new int*[16];
        for (int s = 0; s < 10; ++s) {
             trigger1[s]=new int[16];
            
           
      
        triggerC=new char[64];
        for (int i = 0; i < 16; ++i) {
    
            triggerC[i]=0;
            trigger1[s][i]=0;
            
            
        }
         }
        
        
       
        
        
        
        
        
        
        
        
 
        // In your constructor, you should add any child components, and
        const int buttonsizeTrig=33;
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutA[i]);
            
            
            
            triggermultibutA[i].setClickingTogglesState(true);
            triggermultibutA[i].setColour(juce::TextButton::buttonColourId, juce::Colours::black);
            triggermultibutA[i].setBounds ( i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutA[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutA[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
          

            
            
        }
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutB[i]);
            triggermultibutB[i].setClickingTogglesState(true);
            triggermultibutB[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutB[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutB[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutB[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);

            
        }
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutC[i]);
            triggermultibutC[i].setClickingTogglesState(true);
            triggermultibutC[i].setColour(juce::TextButton::buttonColourId, juce::Colours::red);
            triggermultibutC[i].setBounds ( i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutC[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutC[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
          
            
        }
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutD[i]);
            triggermultibutD[i].setClickingTogglesState(true);
            triggermultibutD[i].setColour(juce::TextButton::buttonColourId, juce::Colours::green);
            triggermultibutD[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutD[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutD[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
       
            
        }
        
    
    for (int i = 0; i < 16; ++i) {
        addAndMakeVisible(triggermultibutE[i]);
        triggermultibutE[i].setClickingTogglesState(true);
        triggermultibutE[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
        triggermultibutE[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
        if(i==0)
            triggermultibutE[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutE[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
      
            }
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutF[i]);
            triggermultibutF[i].setClickingTogglesState(true);
            triggermultibutF[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutF[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutF[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutF[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
     
            
        }
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutG[i]);
            triggermultibutG[i].setClickingTogglesState(true);
            triggermultibutG[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutG[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutG[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutG[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
         
        }
        
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutH[i]);
            triggermultibutH[i].setClickingTogglesState(true);
            triggermultibutH[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutH[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutH[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutH[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
        
            
        }
        
        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutI[i]);
            triggermultibutI[i].setClickingTogglesState(true);
            triggermultibutI[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutI[i].setBounds (i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if(i==0)
                triggermultibutI[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutI[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
    
            
        }

        for (int i = 0; i < 16; ++i) {
            addAndMakeVisible(triggermultibutJ[i]);
            triggermultibutJ[i].setClickingTogglesState(true);
            triggermultibutJ[i].setColour(juce::TextButton::buttonColourId, juce::Colours::blue);
            triggermultibutJ[i].setBounds(i * buttonsizeTrig, 0, buttonsizeTrig, 24);
            if (i == 0)
                triggermultibutJ[i].setToggleState(true, juce::dontSendNotification);
            triggermultibutJ[i].setColour(juce::TextButton::buttonColourId, juce::Colours::white);
           

        }
        // initialise any special settings that your component needs.
        
        
    }

    ~sequencer() override
    {
    }

    void paint (juce::Graphics& g) override
    {
        /* This demo code just fills the component's background and
           draws some placeholder text to get you started.

           You should replace everything in this method with your own
           drawing code..
        */
/*
        g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

        g.setColour (juce::Colours::grey);
        g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

        g.setColour (juce::Colours::white);
        g.setFont (14.0f);
        g.drawText ("sequencer", getLocalBounds(),
                    juce::Justification::centred, true);   // draw some placeholder text
 
 */
    }

    void resized() override
    {
        // This method is where you should set the bounds of any child
        // components that your component contains..

    }
    char* getTr1() { return trAtxt; }
    void Triggerpatterns(int p)
    {
        
        
        //---------------------------------------------
        for (int i = 0; i < 16; ++i) {
            if(p==0)
            {
                
                triggermultibutA[i].setVisible(true);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);

                
            }
            if(p==1)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(true);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);

                
            }
            if(p==2)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(true);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);

                
            }
            if(p==3)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(true);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);

                
            }
            if(p==4)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(true);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);
                
                
            }
            if(p==5)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(true);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);
                
                
            }
            if(p==6)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(true);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);
                
            }
            if(p==7)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(true);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(false);
                
                
            }
            if(p==8)
            {
                
                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(true);
                triggermultibutJ[i].setVisible(false);
                
                
            }
            if (p == 9)
            {

                triggermultibutA[i].setVisible(false);
                triggermultibutB[i].setVisible(false);
                triggermultibutC[i].setVisible(false);
                triggermultibutD[i].setVisible(false);
                triggermultibutE[i].setVisible(false);
                triggermultibutF[i].setVisible(false);
                triggermultibutG[i].setVisible(false);
                triggermultibutH[i].setVisible(false);
                triggermultibutI[i].setVisible(false);
                triggermultibutJ[i].setVisible(true);


            }
        }
        trpat=p;
    }
   const char *triggerSerial(int a)
    {
        for (int i = 0; i < 16; ++i)      {
            
            if(a==0){ trigger1[0][i] = triggermultibutA[i].getToggleState();}
            if(a==1){ trigger1[1][i] = triggermultibutB[i].getToggleState();}
            if(a==2){ trigger1[2][i] = triggermultibutC[i].getToggleState();}
            if(a==3){ trigger1[3][i] = triggermultibutD[i].getToggleState();}
            if(a==4){ trigger1[4][i] = triggermultibutE[i].getToggleState();}
            if(a==5){ trigger1[5][i] = triggermultibutF[i].getToggleState();}
            if(a==6){ trigger1[6][i] = triggermultibutG[i].getToggleState();}
            if(a==7){ trigger1[7][i] = triggermultibutH[i].getToggleState();}
            if(a==8){ trigger1[8][i] = triggermultibutI[i].getToggleState();}
            if (a == 9) { trigger1[9][i] = triggermultibutJ[i].getToggleState(); }
            
            
            
            
        }
        
        sprintf(triggerC,"%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i  ",
            trigger1[a][0],
            trigger1[a][1],
            trigger1[a][2],
            trigger1[a][3],
            trigger1[a][4],
            trigger1[a][5],
            trigger1[a][6],
            trigger1[a][7],
            trigger1[a][8],
            trigger1[a][9],
            trigger1[a][10],
            trigger1[a][11],
            trigger1[a][12],
            trigger1[a][13],
            trigger1[a][14],
            trigger1[a][15]);
        
        
        return triggerC;
    }
  
    const int *TriggersK1(int n)
    {
        
        return trigger1[n];
    }





 

    TextButton triggermultibutA[16];
    TextButton triggermultibutB[16];
    TextButton triggermultibutC[16];
    TextButton triggermultibutD[16];
    
    TextButton triggermultibutE[16];
    TextButton triggermultibutF[16];
    TextButton triggermultibutG[16];
    TextButton triggermultibutH[16];
    TextButton triggermultibutI[16];
    TextButton triggermultibutJ[16];

private:
    int **trigger1;
    char*triggerC;
    int trpat;
    char trAtxt[200] = { "-" };

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (sequencer)
};
