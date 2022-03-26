/*
  ==============================================================================

    stepperfunktions.cpp
    Created: 16 Feb 2022 7:09:43pm
    Author:  r7

  ==============================================================================
*/


#include "stepperfunktions.h"

//==============================================================================
stepperfunktions::stepperfunktions()

{

    steppers = new double* [16];
    for (int i = 0; i < 10; i++)
    {
        steppers[i] = new double[16];
        for (int n = 0; n < 16; n++)
        {
            steppers[i][n] = 0.5;
        }
    }
    engine = 0;
}

stepperfunktions::~stepperfunktions()
{
}
double steppsIn[8][10][16] ;
void stepperfunktions::setMainStepper(double* in, int n, int p)
{
    engine = n;
    for (int i = 0; i < 16; i++)
    {
        steppsIn[n][0][i] = in[i];
    }
}

    double ph;
double stepperfunktions::mStepper( AudioSample& s, const int* time)
{
   
    if (s.mp.mSampleStepperOn == true) { //********************SYNTH1********************************

       
        if (s.mp.mEngineMode == true) {//----------------------synth1-pitch------------------------------

           
            if (s.mp.mSampleStepperMode == 1) {
                s.oscillator.setStepperPitch(steppsIn[engine][0][time[0]]);
            }
            if (s.mp.mSampleStepperMode == 4) {

                s.mp.setStepperVolume(steppsIn[engine][0][time[0]]);
            }

        }

        if (s.mp.mEngineMode == false) { // ********************Audio1*********************************

            if (s.mp.mSampleStepperMode == 0) {//----------sp1-wave--------------------------------

            
            }
            if (s.mp.mSampleStepperMode == 1) {  //-------------sp1-pitch-----------------------------
                s.mp.PichStepper(steppsIn[engine][0][time[0]]);
                ph = steppsIn[engine][0][time[0]];
            }


            if (s.mp.mSampleStepperMode == 4) {//-------------------volume

                s.mp.setStepperVolume(steppsIn[engine][0][time[0]]);
              
            }
      


        if (s.mp.mSampleStepperMode == 2) { //------------Slot-delayMix-------------------------

            s.cutoffsteppermod(steppsIn[engine][0][time[0]]);
            ph = steppsIn[engine][0][time[0]];
        }

        if (s.mp.mSampleStepperMode == 3) {  //------------Slot-lfotime--------------------------
         
             s.delaysteppermod(steppsIn[engine][0][time[0]]);
        }
  }

    }
    return 0;
}

double stepperfunktions::getValue()
{
    return ph;
}


