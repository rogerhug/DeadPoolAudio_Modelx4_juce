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
   // PluginWaves(AudioProcessorValueTreeState& vts);
  
            const char* Sp1Names(int n);
            const String* Sp1SetNames();
            const char* Sp2Names(int n);
            const String* Sp2SetNames();
            const char* Sp3Names(int n);
            const String* Sp3SetNames();
            const char* Sp4Names(int n);
            const String* Sp4SetNames();
            const char* Sp5Names(int n);
            const String* Sp5SetNames();
            const char* Sp6Names(int n);
            const String* Sp6SetNames();
            const  char* Sp7Names(int n);
            const String* Sp7SetNames();
        
    
    void createAllParameters();
    void serial1(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial2(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial3(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial4(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial5(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial6(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);
    void serial7(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m);

   
    void loadInit1(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit2(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit3(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit4(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit5(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit6(AudioProcessorValueTreeState& valueTreeState, int n);
    void loadInit7(AudioProcessorValueTreeState& valueTreeState, int n);


    Value url1v[77];
    Value url2v[77];
    Value url3v[77];
    Value url4v[77];
    Value url5v[77];
    Value url6v[77];
    Value url7v[77];


    Value* getUrl1V() { return url1v; }
    Value* getUrl2V() { return url2v; }
    Value* getUrl3V() { return url3v; }
    Value* getUrl4V() { return url4v; }
    Value* getUrl5V() { return url5v; }
    Value* getUrl6V() { return url6v; }
    Value* getUrl7V() { return url7v; }


    void unserial(AudioProcessorValueTreeState& valueTreeState,int i);

private: 


};