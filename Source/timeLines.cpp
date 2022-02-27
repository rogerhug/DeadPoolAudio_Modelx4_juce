/*
  ==============================================================================

    timeLines.cpp
    Created: 16 Feb 2022 2:26:57pm
    Author:  r7

  ==============================================================================
*/

#include <JuceHeader.h>
#include "timeLines.h"

//==============================================================================
timeLines::timeLines()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    seqlenght = 16;
    mainlfoselect = 0;
    Blocksize = 512;
 
}

timeLines::~timeLines()
{
}

void timeLines::setTimes(int t)
{
    setTime = t;
    for(int i=0;i<10;++i)
    division(i);
}

int timeOuts1[16] = { 0,0,0,0,0,0,0 };
int timeOuts2[16] = { 0,0,0,0,0,0,0 };
int timeOuts3[16] = { 0,0,0,0,0,0,0 };
int timeOuts4[16] = { 0,0,0,0,0,0,0 };
int timeOuts5[16] = { 0,0,0,0,0,0,0 };
int timeOuts6[16] = { 0,0,0,0,0,0,0 };
int timeOuts7[16] = { 0,0,0,0,0,0,0 };
int timeOutsSH[16] = { 0,0,0,0,0,0,0 };

double fixdivision[10] = { 7,7,7,7,7,7,7 };
int Timelines[10] = { 0,0,0,0,0,0,0,0 };
double PPqTimelines[10] = { 0,0,0,0,0,0,0,0 };
int TimeCounts[10] = { 0,0,0,0,0,0,0,0 };
int offsetPerSteps[10] = { 8,8,8,8,8,8,8,8 };

void timeLines::prepare(int sr, int size)
{
    Blocksize = size;
    Sampelrate = sr;
    SampelsInMinute = (sr * 60);
    ppqPositions.resize(size);
  
  
}

const double timeLines::getPpqPerSample()
{
    auto SampelsPerBeat = SampelsInMinute / info.bpm;
    return 1 / SampelsPerBeat;
}

void timeLines::processTimeHost(AudioPlayHead* playhead, int nFrames,int selectSp)
{
    const int size =seqlenght;
    const int sizeSHmain = mainlfoSh;
    if (playhead != nullptr)
        playhead->getCurrentPosition(info);
    auto ppqPerSample = getPpqPerSample();
    double offset = 0.0;
  
    if (info.isPlaying > 0) {

        if (setTime == 1)
        {
            tm1.End();

            for (int sample = 0; sample < nFrames; ++sample)
            {
                for (int sp = 0; sp < 7; ++sp) {
                    ppqPositions[sample] = info.ppqPosition+(offset/16);
                    offset += ppqPerSample;
                    PPqTimelines[sp] = ppqPositions[sample];
                }
               
            } 
            timeOutsSH[0] = (int)fmod(PPqTimelines[0], sizeSHmain);

            const int timeCounts1 = timeOuts1[0] % size;

            if (timeOuts1[0] % size == timeCounts1) {
                PPqTimelines[0] += ppqPerSample ;
            }
            timeOuts1[0] = (fmod(PPqTimelines[0] * fixdivision[0], size));
            timeOuts1[2] = fmod(PPqTimelines[0] * fixdivision[0], 1.0) * 960.0+0.5;

            const int timeCounts2 = timeOuts2[0] % size;

            if (timeOuts2[0] % size == timeCounts2) {
                PPqTimelines[1] += ppqPerSample;
            }
            timeOuts2[0] = (fmod(PPqTimelines[1] * fixdivision[1], size));
            timeOuts2[2] = fmod(PPqTimelines[1] * fixdivision[1], 1.0) * 960.0+0.5;

            const int timeCounts3 = timeOuts3[0] % size;

            if (timeOuts3[0] % size == timeCounts3) {
                PPqTimelines[2] += ppqPerSample;
            }
            timeOuts3[0] = (fmod(PPqTimelines[2] * fixdivision[2], size));
            timeOuts3[2] = fmod(PPqTimelines[2] * fixdivision[2], 1.0) * 960.0 + 0.5;

            const int timeCounts4 = timeOuts4[0] % size;

            if (timeOuts4[0] % size == timeCounts4) {
                PPqTimelines[3] += ppqPerSample;
            }
            timeOuts4[0] = (fmod(PPqTimelines[3] * fixdivision[3], size));
            timeOuts4[2] = fmod(PPqTimelines[3] * fixdivision[3], 1.0) * 960.0 + 0.5;

            const int timeCounts5 = timeOuts5[0] % size;

            if (timeOuts5[0] % size == timeCounts4) {
                PPqTimelines[4] += ppqPerSample;
            }
            timeOuts5[0] = (fmod(PPqTimelines[4] * fixdivision[4], size));
            timeOuts5[2] = fmod(PPqTimelines[4] * fixdivision[4], 1.0) * 960.0 + 0.5;

            const int timeCounts6 = timeOuts6[0] % size;

            if (timeOuts6[0] % size == timeCounts6) {
                PPqTimelines[5] += ppqPerSample;
            }
            timeOuts6[0] = (fmod(PPqTimelines[5] * fixdivision[5], size));
            timeOuts6[2] = fmod(PPqTimelines[5] * fixdivision[5], 1.0) * 960.0 + 0.5;

            const int timeCounts7 = timeOuts7[0] % size;

            if (timeOuts7[0] % size == timeCounts7) {
                PPqTimelines[6] += ppqPerSample;
            }
            timeOuts7[0] = (fmod(PPqTimelines[6] * fixdivision[6], size));
            timeOuts7[2] = fmod(PPqTimelines[6] * fixdivision[6], 1.0) * 960.0 + 0.5;

         
            data1[1] = PPqTimelines[0];
            TriggerLenght();

        }
    }
}


void timeLines::division(int n)
{
    
    if (setTime == 1) {

        if (dividers[n] == 0) { fixdivision[n] = 0.125; }// Vst3 ppq dividers
        if (dividers[n] == 1) { fixdivision[n] = 0.25; }
        if (dividers[n] == 2) { fixdivision[n] = 0.3; }
        if (dividers[n] == 3) { fixdivision[n] = 1; }
        if (dividers[n] == 4) { fixdivision[n] = 1.5; }
        if (dividers[n] == 5) { fixdivision[n] = 2; }
        if (dividers[n] == 6) { fixdivision[n] = 3; }
        if (dividers[n] == 7) { fixdivision[n] = 4; }
        if (dividers[n] == 8) { fixdivision[n] = 8; }
        if (dividers[n] == 9) { fixdivision[n] = 16; }
    }
    if (setTime == 2) {
        if (dividers[n] == 0) { fixdivision[n] = 0.33333/8; } // chrono dividers
        if (dividers[n] == 1) { fixdivision[n] = 0.33333/4; }
        if (dividers[n] == 2) { fixdivision[n] = 0.125; }
        if (dividers[n] == 3) { fixdivision[n] = 0.33333/2; }
        if (dividers[n] == 4) { fixdivision[n] = 0.25; }
        if (dividers[n] == 5) { fixdivision[n] = 0.33333; }
        if (dividers[n] == 6) { fixdivision[n] = 0.5; }
        if (dividers[n] == 7) { fixdivision[n] = 0.66666; }
        if (dividers[n] == 8) { fixdivision[n] = 0.66666*2; }
        if (dividers[n] == 9) { fixdivision[n] = 0.66666*4; }

    }
   
}

double timeLines::timerChrono(int selectSp)
{ 
 // in reaper i have the plug recording activatet eg(for just monitoring) ..else not comes this info right
 if (info.isPlaying > 0) {                  
    
 
    const int size = seqlenght;
    const int sizeSHmain = mainlfoSh;
        
     if (setTime == 2) {
        
         tm1.Start();  
         tm1.CalcDuration();
        // data1[0]=tm1.TestLatency512().count(); //----------readers to gui(Plugineditor/timercallback())
        // data1[1] = tm1.GetDuration().count(); 
     

         //--Time ++--------------------------------

         for(int sp=0;sp<7;++sp){
         if (Blocksize == 512)  { Timelines[sp]= (tm1.GetDuration().count() - 1);  }  } //  fix blocksize 512 ..(if blocksize 128 /4 for offset function not yet)

         //--pseudo offset calc 9 to> || 8 to< ---eg takt 1/16 

  
         if (fixdivision[selectSp] == 7) { offsetPerSteps[selectSp] = 4; }//------------mode 1/16
         if (fixdivision[selectSp] == 5) { offsetPerSteps[selectSp] = 6; }//------------mode 1/8
         if (fixdivision[selectSp] == 3) { offsetPerSteps[selectSp] = 8; }//------------mode 1/4    

         //-------  offset+ for 1-7 engine times----------------------------

         const int timeCounts1 = timeOuts1[0] % offsetPerSteps[0];

         if (timeOuts1[0] % offsetPerSteps[0] == timeCounts1) {
             Timelines[0] += tm1.TestLatency512().count() * fixdivision[0]; }

         const int timeCounts2 = timeOuts2[0] % offsetPerSteps[1];

         if (timeOuts2[0] % offsetPerSteps[1] == timeCounts2) {
             Timelines[1] += tm1.TestLatency512().count() * fixdivision[1]; }

         const int timeCounts3 = timeOuts3[0] % offsetPerSteps[2];

         if (timeOuts3[0] % offsetPerSteps[2] == timeCounts3) {
             Timelines[2] += tm1.TestLatency512().count() * fixdivision[2];
         }
         const int timeCounts4 = timeOuts4[0] % offsetPerSteps[3];

         if (timeOuts4[0] % offsetPerSteps[3] == timeCounts4) {
             Timelines[3] += tm1.TestLatency512().count() * fixdivision[3];
         }
         const int timeCounts5 = timeOuts5[0] % offsetPerSteps[4];

         if (timeOuts5[0] % offsetPerSteps[4] == timeCounts5) {
             Timelines[4] += tm1.TestLatency512().count() * fixdivision[4];
         }
         const int timeCounts6 = timeOuts6[0] % offsetPerSteps[5];

         if (timeOuts6[0] % offsetPerSteps[5] == timeCounts6) {
             Timelines[5] += tm1.TestLatency512().count() * fixdivision[5];
         }
         const int timeCounts7 = timeOuts7[0] % offsetPerSteps[6];

         if (timeOuts7[0] % offsetPerSteps[6] == timeCounts7) {
             Timelines[6] += tm1.TestLatency512().count() * fixdivision[6];
         }
         //-----------time mode-------------------


         const double t1 = (Timelines[0] * 0.01 ) / 100 * info.bpm * fixdivision[0];
         const double t2 = (Timelines[1] * 0.01) / 100 * info.bpm * fixdivision[1];
         const double t3 = (Timelines[2] * 0.01) / 100 * info.bpm * fixdivision[2];
         const double t4 = (Timelines[3] * 0.01) / 100 * info.bpm * fixdivision[3];
         const double t5 = (Timelines[4] * 0.01) / 100 * info.bpm * fixdivision[4];
         const double t6 = (Timelines[5] * 0.01) / 100 * info.bpm * fixdivision[5];
         const double t7 = (Timelines[6] * 0.01) / 100 * info.bpm * fixdivision[6];

             timeOutsSH[0]= (int)fmod(t1, sizeSHmain);

             timeOuts1[0] = (int)fmod(t1, size);
             timeOuts1[2] = fmod(t1, 1.0) * 960 + 0.5;
             timeOuts2[0] = (int)fmod(t2, size);
             timeOuts2[2] = fmod(t2, 1.0) * 960 + 0.5;
             timeOuts3[0] = (int)fmod(t3, size);
             timeOuts3[2] = fmod(t3, 1.0) * 960 + 0.5;
             timeOuts4[0] = (int)fmod(t4, size);
             timeOuts4[2] = fmod(t4, 1.0) * 960 + 0.5;
             timeOuts5[0] = (int)fmod(t5, size);
             timeOuts5[2] = fmod(t5, 1.0) * 960 + 0.5;
             timeOuts6[0] = (int)fmod(t6, size);
             timeOuts6[2] = fmod(t6, 1.0) * 960 + 0.5;
             timeOuts7[0] = (int)fmod(t7, size);
             timeOuts7[2] = fmod(t7, 1.0) * 960 + 0.5;
             TriggerLenght();

            
         }
        return  0;

        }
 if (info.isPlaying == 0) { tm1.End();; }

 if (info.ppqLoopEnd - info.ppqPosition == 0) { tm1.Zero(); }
    
}




void timeLines::TriggerLenght()

{
  
 
   
        if (timeOuts1[2] < (gates[0]) && tr1[timeOuts1[0]] == true)  { timeOuts1[1] = 1; } 
        else  {  timeOuts1[1] = 0;  }
        if (timeOuts2[2] < (gates[1]) && tr2[timeOuts2[0]] == true)  { timeOuts2[1] = 1; }
        else  {  timeOuts2[1] = 0;  }
        if (timeOuts3[2] < (gates[2]) && tr3[timeOuts3[0]] == true) { timeOuts3[1] = 1; }
        else { timeOuts3[1] = 0; }  
        if (timeOuts4[2] < (gates[3]) && tr4[timeOuts4[0]] == true) { timeOuts4[1] = 1; }
        else { timeOuts4[1] = 0; }
        if (timeOuts5[2] < (gates[4]) && tr5[timeOuts2[0]] == true) { timeOuts5[1] = 1; }
        else { timeOuts5[1] = 0; }
        if (timeOuts6[2] < (gates[5]) && tr6[timeOuts2[0]] == true) { timeOuts6[1] = 1; }
        else { timeOuts6[1] = 0; }
        if (timeOuts7[2] < (gates[6]) && tr7[timeOuts2[0]] == true) { timeOuts7[1] = 1; }
        else { timeOuts7[1] = 0; }

 

}

const int *timeLines::getHtime1()
{
    return timeOuts1;
}

const int* timeLines::getHtime2()
{
    return timeOuts2;
}

const int* timeLines::getHtime3()
{
    return timeOuts3;
}

const int* timeLines::getHtime4()
{
    return timeOuts4;
}

const int* timeLines::getHtime5()
{
    return timeOuts5;
}

const int* timeLines::getHtime6()
{
    return timeOuts6;
}

const int* timeLines::getHtime7()
{
    return timeOuts7;
}

void timeLines::setMainModSH(int sm)
{
    if (sm == 0) { mainlfoSh = 0; }
    if (sm == 1) { mainlfoSh = 16; }
    if (sm == 2) { mainlfoSh = 32; }
    if (sm == 3) { mainlfoSh = 64; }
    if (sm == 4) { mainlfoSh = 128; }
}
double phs = 0;
double phsh = 0;
const double timeLines::phaseLfos(double p1, double p2, double p3, double p4)
{
    
    if (mainlfoselect == 0) { phs= p1; }
    if (mainlfoselect == 1 ){ phs= p2; }
    if (mainlfoselect == 3) { phs= p3; }
    if (mainlfoselect == 4) { phs= p4; }
    if (mainlfoSh == 0){ phsh = phs; }
    if (mainlfoSh > 0 && timeOutsSH[0] == 0) {
        phsh = phs;
    }
    return phsh;
}




