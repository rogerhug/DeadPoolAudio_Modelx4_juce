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
    currentPositionPpq=0;
    tm1.Start();
    IcurrentPosition = 0;
    tr1off = 0;
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
int TimeCounts[10] = { 0,0,0,0,0,0,0,0 };
int offsetPerSteps[10] = { 8,8,8,8,8,8,8,8 };

void timeLines::prepare(int sr, int size)
{
    Blocksize = size;
    Sampelrate = sr;
    SampelsInMinute = (sr * 60);
    ppqPositions.resize(size);
    IcurrentPosition = 0;
  
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
            
                    ppqPositions[sample] = info.ppqPosition+offset;
                    offset += ppqPerSample;
                    const double pos = ppqPositions[sample];

                    currentPositionPpq = pos;
                   
                   
                 
                   
                }
             
        

            data1[0] = 0;
            data1[1] = 0;
            data1[2] = 0;

          
          
            timeOutsSH[0] = (int)fmod(currentPositionPpq * 4, sizeSHmain);
       
            timeOuts1[0] = (fmod(currentPositionPpq * fixdivision[0], size));
           timeOuts1[2] = fmod(currentPositionPpq * fixdivision[0], 1.0) * 960.0 + 0.5;

            timeOuts2[0] = (fmod(currentPositionPpq * fixdivision[1], size));
            timeOuts2[2] = fmod(currentPositionPpq * fixdivision[1], 1.0) * 960.0+0.5;

           
            timeOuts3[0] = (fmod(currentPositionPpq * fixdivision[2], size));
            timeOuts3[2] = fmod(currentPositionPpq * fixdivision[2], 1.0) * 960.0 + 0.5;

           
            timeOuts4[0] = (fmod(currentPositionPpq * fixdivision[3], size));
            timeOuts4[2] = fmod(currentPositionPpq * fixdivision[3], 1.0) * 960.0 + 0.5;

            
            timeOuts5[0] = (fmod(currentPositionPpq * fixdivision[4], size));
            timeOuts5[2] = fmod(currentPositionPpq * fixdivision[4], 1.0) * 960.0 + 0.5;

           
            timeOuts6[0] = (fmod(currentPositionPpq * fixdivision[5], size));
            timeOuts6[2] = fmod(currentPositionPpq * fixdivision[5], 1.0) * 960.0 + 0.5;

           
            timeOuts7[0] = (fmod(currentPositionPpq * fixdivision[6], size));
            timeOuts7[2] = fmod(currentPositionPpq * fixdivision[6], 1.0) * 960.0 + 0.5;

         
           
            TriggerLenght();
         
        }
      
    }
}
int scount1 = 0;
double rateS[10] = { 0,0,0,0,0,0,0 };
void timeLines::prosessTimeSampels(int sampel_t, int nFrames)
{
    const int sizeSHmain = mainlfoSh;
    double offset = 0.0;
    const int kBeatDiv = 4;
    const int kBeatDiv32 = 8;
    const int div = bPm ;
    const int size = seqlenght;
    int samplesPerBeat0 = (Sampelrate) * 60.0 / info.bpm * fixdivision[0];
    int samplesPerBeat1 = (Sampelrate) * 60.0 / info.bpm * fixdivision[1];
    int samplesPerBeat2 = (Sampelrate) * 60.0 / info.bpm * fixdivision[2];
    int samplesPerBeat3 = (Sampelrate) * 60.0 / info.bpm * fixdivision[3];
    int samplesPerBeat4 = (Sampelrate) * 60.0 / info.bpm * fixdivision[4];
    int samplesPerBeat5 = (Sampelrate) * 60.0 / info.bpm * fixdivision[5];
    int samplesPerBeat6 = (Sampelrate) * 60.0 / info.bpm * fixdivision[6];
    int samplePos = sampel_t;
   
    if (info.isPlaying > 0) {

        if (setTime == 3)
        {
            for (int s = 0; s < nFrames; s++)
            {

        
                timeOutsSH[0] = (int)fmod((info.ppqPosition+s) * 4, sizeSHmain);

                int mod0 = (samplePos + s) % (samplesPerBeat0 * kBeatDiv) ;
                IcurrentPositionS1 = mod0 / (samplesPerBeat0/ kBeatDiv) ;
                rateS[0] = (double)mod0 / (samplesPerBeat0 / kBeatDiv);
               
                int mod1 = (samplePos + s) % (samplesPerBeat1 * kBeatDiv);
                IcurrentPositionS2 = mod1 / (samplesPerBeat1 / kBeatDiv);
                rateS[1] = (double)mod1 / (samplesPerBeat1 / kBeatDiv);

                int mod2 = (samplePos + s) % (samplesPerBeat2 * kBeatDiv);
                IcurrentPositionS3 = mod2 / (samplesPerBeat2 / kBeatDiv);
                rateS[2] = (double)mod2 / (samplesPerBeat2 / kBeatDiv);

                int mod3 = (samplePos + s) % (samplesPerBeat3 * kBeatDiv);
                IcurrentPositionS4 = mod3 / (samplesPerBeat3 / kBeatDiv);
                rateS[3] = (double)mod3 / (samplesPerBeat3 / kBeatDiv);

                int mod4 = (samplePos + s) % (samplesPerBeat4 * kBeatDiv);
                IcurrentPositionS5 = mod4 / (samplesPerBeat4 / kBeatDiv);
                rateS[4] = (double)mod4 / (samplesPerBeat4 / kBeatDiv);

                int mod5 = (samplePos + s) % (samplesPerBeat5 * kBeatDiv);
                IcurrentPositionS6 = mod5 / (samplesPerBeat5 / kBeatDiv);
                rateS[5] = (double)mod5 / (samplesPerBeat5 / kBeatDiv);

                int mod6 = (samplePos + s) % (samplesPerBeat6 * kBeatDiv);
                IcurrentPositionS7 = mod6 / (samplesPerBeat6 / kBeatDiv);
                rateS[6] = (double)mod6 / (samplesPerBeat6 / kBeatDiv);

              
            }
  


    timeOuts1[0] = (IcurrentPositionS1 %size);
    timeOuts1[2] = fmod((rateS[0]) ,1.0) * 960.0 + 0.5;
    timeOuts2[0] = (IcurrentPositionS2 % size);
    timeOuts2[2] = fmod((rateS[1]), 1.0) * 960.0 + 0.5;
    timeOuts3[0] = (IcurrentPositionS3 % size);
    timeOuts3[2] = fmod((rateS[2]), 1.0) * 960.0 + 0.5;
    timeOuts4[0] = (IcurrentPositionS4 % size);
    timeOuts4[2] = fmod((rateS[3]), 1.0) * 960.0 + 0.5;
    timeOuts5[0] = (IcurrentPositionS5 % size);
    timeOuts5[2] = fmod((rateS[4]), 1.0) * 960.0 + 0.5;
    timeOuts6[0] = (IcurrentPositionS6 % size);
    timeOuts6[2] = fmod((rateS[5]), 1.0) * 960.0 + 0.5;
    timeOuts7[0] = (IcurrentPositionS7 % size);
    timeOuts7[2] = fmod((rateS[6]), 1.0) * 960.0 + 0.5;
    TriggerLenght();
    }
    } 

}


void timeLines::division(int n)
{
    
    if (setTime == 1) {

        if (dividers[n] == 0) { fixdivision[n] = 0.125; }// Vst3 ppq dividers
        if (dividers[n] == 1) { fixdivision[n] = 0.25; }
        if (dividers[n] == 2) { fixdivision[n] = 0.5; }
        if (dividers[n] == 3) { fixdivision[n] = 1.0000; }
        if (dividers[n] == 4) { fixdivision[n] = 1.5; }
        if (dividers[n] == 5) { fixdivision[n] = 2.0000; }
        if (dividers[n] == 6) { fixdivision[n] = 3; }
        if (dividers[n] == 7) { fixdivision[n] = 4.0000; }
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
        if (dividers[n] == 7) { fixdivision[n] = 0.6666666; }
        if (dividers[n] == 8) { fixdivision[n] = 0.6666666*2; }
        if (dividers[n] == 9) { fixdivision[n] = 0.66666*4; }

    }
    if (setTime == 3) {

        if (dividers[n] == 0) { fixdivision[n] = 12; }// Vst3 sampelTime dividers
        if (dividers[n] == 1) { fixdivision[n] = 8; }
        if (dividers[n] == 2) { fixdivision[n] = 6; }
        if (dividers[n] == 3) { fixdivision[n] = 4; }
        if (dividers[n] == 4) { fixdivision[n] = 2.5; }
        if (dividers[n] == 5) { fixdivision[n] = 2; }
        if (dividers[n] == 6) { fixdivision[n] = 1.5; }
        if (dividers[n] == 7) { fixdivision[n] = 1; }
        if (dividers[n] == 8) { fixdivision[n] = 0.5; }
        if (dividers[n] == 9) { fixdivision[n] = 0.25; }
    }
   
}

double timeLines::timerChrono(int selectSp)
{ 
 // in reaper i have the plug recording activatet eg(for just monitoring) ..else not comes this info right
     if (info.isPlaying > 0) {   //vst               
    //if(setTime == 2){              //app
 
    const int size = seqlenght;
    const int sizeSHmain = mainlfoSh;
        
     if (setTime == 2) {
        
         tm1.Start();  
         tm1.CalcDuration();
        // data1[0]=tm1.TestLatency512().count(); //----------readers to gui(Plugineditor/timercallback())
        //data1[1] = tm1.GetDuration().count(); 
     

         //--Time ++--------------------------------

         for(int sp=0;sp<7;++sp){
        Timelines[sp]= (tm1.GetDuration().count() - 1);  }  
         const double offsetC = tm1.TestLatency512().count() / 512 * Blocksize;

         //--pseudo offset calc 9 to> || 8 to< ---eg takt 1/16 

  
         if (fixdivision[selectSp] == 7) { offsetPerSteps[selectSp] = 4; }//------------mode 1/16
         if (fixdivision[selectSp] == 5) { offsetPerSteps[selectSp] = 6; }//------------mode 1/8
         if (fixdivision[selectSp] == 3) { offsetPerSteps[selectSp] = 8; }//------------mode 1/4    

         //-------  offset+ for 1-7 engine times----------------------------

         const int timeCounts1 = timeOuts1[0] % offsetPerSteps[0];

         if (timeOuts1[0] % offsetPerSteps[0] == timeCounts1) {
             Timelines[0] += offsetC * fixdivision[0]; }

         const int timeCounts2 = timeOuts2[0] % offsetPerSteps[1];

         if (timeOuts2[0] % offsetPerSteps[1] == timeCounts2) {
             Timelines[1] += offsetC * fixdivision[1]; }

         const int timeCounts3 = timeOuts3[0] % offsetPerSteps[2];

         if (timeOuts3[0] % offsetPerSteps[2] == timeCounts3) {
             Timelines[2] += offsetC * fixdivision[2];
         }
         const int timeCounts4 = timeOuts4[0] % offsetPerSteps[3];

         if (timeOuts4[0] % offsetPerSteps[3] == timeCounts4) {
             Timelines[3] += offsetC * fixdivision[3];
         }
         const int timeCounts5 = timeOuts5[0] % offsetPerSteps[4];

         if (timeOuts5[0] % offsetPerSteps[4] == timeCounts5) {
             Timelines[4] += offsetC * fixdivision[4];
         }
         const int timeCounts6 = timeOuts6[0] % offsetPerSteps[5];

         if (timeOuts6[0] % offsetPerSteps[5] == timeCounts6) {
             Timelines[5] += offsetC * fixdivision[5];
         }
         const int timeCounts7 = timeOuts7[0] % offsetPerSteps[6];

         if (timeOuts7[0] % offsetPerSteps[6] == timeCounts7) {
             Timelines[6] += offsetC * fixdivision[6];
         }
         //-----------time mode-------------------

       
         const double t1 = (Timelines[0] * 0.01 ) / 100 * info.bpm * fixdivision[0];//-----------vst
         const double t2 = (Timelines[1] * 0.01) / 100 * info.bpm * fixdivision[1];
         const double t3 = (Timelines[2] * 0.01) / 100 * info.bpm * fixdivision[2];
         const double t4 = (Timelines[3] * 0.01) / 100 * info.bpm * fixdivision[3];
         const double t5 = (Timelines[4] * 0.01) / 100 * info.bpm * fixdivision[4];
         const double t6 = (Timelines[5] * 0.01) / 100 * info.bpm * fixdivision[5];
         const double t7 = (Timelines[6] * 0.01) / 100 * info.bpm * fixdivision[6];
  /*        
         const double t1 = (Timelines[0] * 0.01) / 100 * bPm * fixdivision[0];//-----------app
         const double t2 = (Timelines[1] * 0.01) / 100 * bPm * fixdivision[1];
         const double t3 = (Timelines[2] * 0.01) / 100 * bPm * fixdivision[2];
         const double t4 = (Timelines[3] * 0.01) / 100 * bPm * fixdivision[3];
         const double t5 = (Timelines[4] * 0.01) / 100 * bPm * fixdivision[4];
         const double t6 = (Timelines[5] * 0.01) / 100 * bPm * fixdivision[5];
         const double t7 = (Timelines[6] * 0.01) / 100 * bPm * fixdivision[6];
 */
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
    if(setTime <2){ tm1.End(); }
 if (info.isPlaying == 0) { tm1.End();; }// app

 if (info.ppqLoopEnd - info.ppqPosition == 0) { tm1.Zero(); }
    
}




void timeLines::TriggerLenght()

{
  
 
   
        if (timeOuts1[2] < (gates[0]) && tr1[timeOuts1[0]] == true )  { timeOuts1[1] = 1; } 
        else  {  timeOuts1[1] = 0;  }
        if (timeOuts2[2] < (gates[1]) && tr2[timeOuts2[0]] == true)  { timeOuts2[1] = 1; }
        else  {  timeOuts2[1] = 0;  }
        if (timeOuts3[2] < (gates[2]) && tr3[timeOuts3[0]] == true) { timeOuts3[1] = 1; }
        else { timeOuts3[1] = 0; }  
        if (timeOuts4[2] < (gates[3]) && tr4[timeOuts4[0]] == true) { timeOuts4[1] = 1; }
        else { timeOuts4[1] = 0; }
        if (timeOuts5[2] < (gates[4]) && tr5[timeOuts5[0]] == true) { timeOuts5[1] = 1; }
        else { timeOuts5[1] = 0; }
        if (timeOuts6[2] < (gates[5]) && tr6[timeOuts6[0]] == true) { timeOuts6[1] = 1; }
        else { timeOuts6[1] = 0; }
        if (timeOuts7[2] < (gates[6]) && tr7[timeOuts7[0]] == true) { timeOuts7[1] = 1; }
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




