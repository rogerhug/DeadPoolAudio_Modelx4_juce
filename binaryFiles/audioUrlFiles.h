/*
  ==============================================================================

    audioUrlFiles.h
    Created: 8 Oct 2021 5:32:00pm
    Author:  r7

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"


struct PluginWaves
{
    static String getSystemNameInfo()
    {
        String systemInfo;

        systemInfo
            << File::getSpecialLocation(File::commonDocumentsDirectory).getFullPathName();

        //   DBG (systemInfo);
        return systemInfo;
    }

    const char* Sp1Names(int n);
    const String* Sp1SetNames();
    const char* Sp2Names(int n);
    const String* Sp2SetNames(); 
    const char* Sp3Names(int n);
    const String* Sp3SetNames();
    const char* Sp4Names(int n);
    const String* Sp4SetNames();

    void createAllParameters(AudioProcessorValueTreeState& valueTreeState);
    void serial1(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial2(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial3(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial4(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);

   
    void loadInit1(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit2(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit3(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit4(AudioProcessorValueTreeState& valueTreeState, int n);


    Value url1v[73];
    Value url2v[73];
    Value url3v[73];
    Value url4v[73];


    Value* getUrl1V() { return url1v; }
    Value* getUrl2V() { return url2v; }
    Value* getUrl3V() { return url3v; }
    Value* getUrl4V() { return url4v; }


    void unserial(AudioProcessorValueTreeState& valueTreeState);

private: 


};