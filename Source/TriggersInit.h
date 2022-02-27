/*
  ==============================================================================

    TriggersInit.h
    Created: 29 Nov 2021 6:32:27pm
    Author:  r7

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct TriggersInit
{

    TriggersInit() {

        SetTriggers = new char** [100];
        for (int s = 0; s <10; s++) {
            SetTriggers[s] = new char* [100];
            for (int p = 0; p < 10; p++) {
                SetTriggers[s][p] = new char[100];
                for (int i = 0; i < 100; i++)
                {
                    SetTriggers[s][p][i] = 0;
                }
            }

        }
    }
      
   

    char*** getTriggerDub()
    {
        
        for (int i = 0; i < 9; i++)
        {

            strcpy(SetTriggers[0][i], "1,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[1][i], "0,0,0,0,0,0,0,0,1,0,0,0,0,0,0");
            strcpy(SetTriggers[2][i], "0,0,0,0,1,0,0,0,0,0,0,1,0,0,0");
            strcpy(SetTriggers[3][i], "0,0,0,0,0,0,0,0,0,0,0,0,1,0,0");
            strcpy(SetTriggers[4][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,1,0");
            strcpy(SetTriggers[5][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,1");
            strcpy(SetTriggers[6][i], "0,0,1,0,0,0,0,0,0,0,0,0,0,0,0");

        }
  
        return SetTriggers;

    }
    char*** getTriggerBreaks()
    {
        for (int i = 0; i < 9; i++)
        {
            strcpy(SetTriggers[0][i], "1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0");
            strcpy(SetTriggers[1][i], "0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0");
            strcpy(SetTriggers[2][i], "0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0");
            strcpy(SetTriggers[3][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[4][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[5][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[6][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0");

        }
        return SetTriggers;
    }
    char*** getTriggerHouse()
    {

        for (int i = 0; i < 9; i++)
        {

            strcpy(SetTriggers[0][i], "1,0,0,0,1,0,0,0,1,0,0,0,1,0,0");
            strcpy(SetTriggers[1][i], "0,0,0,0,0,0,0,0,1,0,0,0,0,0,0");
            strcpy(SetTriggers[2][i], "0,0,1,0,0,0,1,0,0,0,1,0,0,0,1");
            strcpy(SetTriggers[3][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[4][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[5][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
            strcpy(SetTriggers[6][i], "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");

        }
    
        return SetTriggers;
    }
private:

    char*** SetTriggers;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TriggersInit)
};
