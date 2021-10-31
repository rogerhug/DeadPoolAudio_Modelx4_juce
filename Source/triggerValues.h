/*
  ==============================================================================

    triggerValues.h
    Created: 8 Oct 2021 8:15:27pm
    Author:  r7

  ==============================================================================
*/
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include"playSampelFile.h"

struct PluginTriggers
{
    //************************************************************************************//
    //-------------------------------------------------//
    //------------------triggerstate--------------------//
    //--------------------------------------------------//
    //************************************************************************************//

    void createAllParameters(AudioProcessorValueTreeState& valueTreeState);
  
    void serial1(AudioProcessorValueTreeState& valueTreeState, Value *tr1, int m);
    void serial2(AudioProcessorValueTreeState& valueTreeState, Value* Tr2, int m);
    void serial3(AudioProcessorValueTreeState& valueTreeState, Value* Tr3, int m);
    void serial4(AudioProcessorValueTreeState& valueTreeState, Value* Tr4, int m);

    void unserial(AudioProcessorValueTreeState& valueTreeState);


    void Tr1Out(Value* u);

    String tr1Cout() { return  tr1vA[0].getValue(); }


    const int* tr1IntOut(int n);
    const int* tr2IntOut(int n);
    const int* tr3IntOut(int n);
    const int* tr4IntOut(int n);
   
    Value tr1vA[10];//--------triggers1 state--------
    Value tr2vA[10];
    Value tr3vA[10];
    Value tr4vA[10];


    void loadInit1(AudioProcessorValueTreeState& valueTreeState,int n);
    void loadInit2(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit3(AudioProcessorValueTreeState& valueTreeState, int n);

    //****************************************************************************************************************************//
    //-----------------------------------------------------------------------//
    //------------------triggerpattern parametersTemp State -----------------//
    //-----------------------------------------------------------------------//
    //****************************************************************************************************************************//
    Value tr1STPT[4];//-------Time-- state ---
    Value tr1STPW[4];//-------wave-- state ---
    Value tr1STPP[4];//-------pitch--state--
    Value tr1STPV[4];//-------Volume--state--

    Value tr1STPDt[4];//-------Delay--state--time
    Value tr1STPDf[4];//-------Delay--state--feed
    Value tr1STPDv[4];//-------Delay--state--volume
    Value tr1STPDm[4];//-------Delay--state--mode

    void createAllParametersTSP(AudioProcessorValueTreeState& valueTreeState);

    

    void serialTSPW1(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e);//------------serial paras---
    void serialTSPW2(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e);
    void serialTSPW3(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e);
    void serialTSPW4(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e);


    const int* unserialTSPT1(AudioProcessorValueTreeState& valueTreeState);//---------------------unserial Time
    const int* unserialTSPT2(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPT3(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPT4(AudioProcessorValueTreeState& valueTreeState);






    const int* unserialTSPW1(AudioProcessorValueTreeState& valueTreeState);//----------------------------unserial Waves
    const int* unserialTSPW2(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPW3(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPW4(AudioProcessorValueTreeState& valueTreeState);

    const double* unserialTSPP1(AudioProcessorValueTreeState& valueTreeState);//------------------------unserial Pitch
    const double* unserialTSPP2(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPP3(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPP4(AudioProcessorValueTreeState& valueTreeState);

    const double* unserialTSPV1(AudioProcessorValueTreeState& valueTreeState);//------------------------unserial Volume
    const double* unserialTSPV2(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPV3(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPV4(AudioProcessorValueTreeState& valueTreeState);

    const double* unserialTSPD1t(AudioProcessorValueTreeState& valueTreeState);//------------------------delay--time
    const double* unserialTSPD2t(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD3t(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD4t(AudioProcessorValueTreeState& valueTreeState);

    const double* unserialTSPD1f(AudioProcessorValueTreeState& valueTreeState);//------------------------delay--feed
    const double* unserialTSPD2f(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD3f(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD4f(AudioProcessorValueTreeState& valueTreeState);

    const double* unserialTSPD1v(AudioProcessorValueTreeState& valueTreeState);//------------------------delay--volume
    const double* unserialTSPD2v(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD3v(AudioProcessorValueTreeState& valueTreeState);
    const double* unserialTSPD4v(AudioProcessorValueTreeState& valueTreeState);

    const int* unserialTSPD1m(AudioProcessorValueTreeState& valueTreeState);//------------------------delay--mode
    const int* unserialTSPD2m(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPD3m(AudioProcessorValueTreeState& valueTreeState);
    const int* unserialTSPD4m(AudioProcessorValueTreeState& valueTreeState);




    void resetProgramm(AudioProcessorValueTreeState& valueTreeState, AudioSample &m, int e);
   


private:
    char trtxt[16];


   
};