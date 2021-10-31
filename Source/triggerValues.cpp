/*
  ==============================================================================

    triggerValues.cpp
    Created: 8 Oct 2021 8:15:27pm
    Author:  r7

  ==============================================================================
*/

#include <JuceHeader.h>
#include "triggerValues.h"
const String Tr1A = "Tr1A_id";
const String Tr1B = "Tr1B_id";
const String Tr1C = "Tr1C_id";
const String Tr1D = "Tr1D_id";
const String Tr1E = "Tr1E_id";
const String Tr1F = "Tr1F_id";
const String Tr1G = "Tr1G_id";
const String Tr1H = "Tr1H_id";
const String Tr1I = "Tr1I_id";
const String Tr1J = "Tr1J_id";

const String Tr2A = "Tr2A_id";
const String Tr2B = "Tr2B_id";
const String Tr2C = "Tr2C_id";
const String Tr2D = "Tr2D_id";
const String Tr2E = "Tr2E_id";
const String Tr2F = "Tr2F_id";
const String Tr2G = "Tr2G_id";
const String Tr2H = "Tr2H_id";
const String Tr2I = "Tr2I_id";
const String Tr2J = "Tr2J_id";

const String Tr3A = "Tr3A_id";
const String Tr3B = "Tr3B_id";
const String Tr3C = "Tr3C_id";
const String Tr3D = "Tr3D_id";
const String Tr3E = "Tr3E_id";
const String Tr3F = "Tr3F_id";
const String Tr3G = "Tr3G_id";
const String Tr3H = "Tr3H_id";
const String Tr3I = "Tr3I_id";
const String Tr3J = "Tr3J_id";

const String Tr4A = "Tr4A_id";
const String Tr4B = "Tr4B_id";
const String Tr4C = "Tr4C_id";
const String Tr4D = "Tr4D_id";
const String Tr4E = "Tr4E_id";
const String Tr4F = "Tr4F_id";
const String Tr4G = "Tr4G_id";
const String Tr4H = "Tr4H_id";
const String Tr4I = "Tr4I_id";
const String Tr4J = "Tr4J_id";

const String TrSTPT1 = "TrSTPT1_id";
const String TrSTPT2 = "TrSTPT2_id";
const String TrSTPT3 = "TrSTPT3_id";
const String TrSTPT4 = "TrSTPT4_id";

const String TrSTPW1 = "TrSTPW1_id";
const String TrSTPW2 = "TrSTPW2_id";
const String TrSTPW3 = "TrSTPW3_id";
const String TrSTPW4 = "TrSTPW4_id";

const String TrSTPP1 = "TrSTPP1_id";
const String TrSTPP2 = "TrSTPP2_id";
const String TrSTPP3 = "TrSTPP3_id";
const String TrSTPP4 = "TrSTPP4_id";

const String TrSTPV1 = "TrSTPV1_id";
const String TrSTPV2 = "TrSTPV2_id";
const String TrSTPV3 = "TrSTPV3_id";
const String TrSTPV4 = "TrSTPV4_id";

const String TrSTPD1t = "TrSTPD1t_id";
const String TrSTPD2t = "TrSTPD2t_id";
const String TrSTPD3t = "TrSTPD3t_id";
const String TrSTPD4t = "TrSTPD4t_id";

const String TrSTPD1f = "TrSTPD1f_id";
const String TrSTPD2f = "TrSTPD2f_id";
const String TrSTPD3f = "TrSTPD3f_id";
const String TrSTPD4f = "TrSTPD4f_id";

const String TrSTPD1v = "TrSTPD1v_id";
const String TrSTPD2v = "TrSTPD2v_id";
const String TrSTPD3v = "TrSTPD3v_id";
const String TrSTPD4v = "TrSTPD4v_id";

const String TrSTPD1m = "TrSTPD1m_id";
const String TrSTPD2m = "TrSTPD2m_id";
const String TrSTPD3m = "TrSTPD3m_id";
const String TrSTPD4m = "TrSTPD4m_id";
//==============================================================================

void PluginTriggers::createAllParameters(AudioProcessorValueTreeState& valueTreeState)
{

    valueTreeState.state.setProperty(Tr1A, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1B, var("1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1C, var("1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1D, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1E, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1F, var("1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1G, var("1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1H, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1I, var("1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1J, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);

    valueTreeState.state.setProperty(TrSTPT1, var("7,7,7,7,7,7,7,7,7,7,"), nullptr);
    valueTreeState.state.setProperty(TrSTPW1, var("01,02,03,04,05,06,07,08,09,10,"), nullptr);
    valueTreeState.state.setProperty(TrSTPP1, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPV1, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD1t, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD1f, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD1v, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD1m, var("1,2,3,4,1,0,2,1,3,1,"), nullptr);
    

    valueTreeState.state.setProperty(Tr2A, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2B, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2C, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2D, var("0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2E, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2F, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2G, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2H, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2I, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2J, var("0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(TrSTPT2, var("7,7,7,7,7,7,7,7,7,7,"), nullptr);
    valueTreeState.state.setProperty(TrSTPW2, var("01,02,03,04,05,06,07,08,09,10,"), nullptr);
    valueTreeState.state.setProperty(TrSTPP2, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPV2, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD2t, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD2f, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD2v, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD2m, var("1,2,3,4,1,0,2,1,3,1,"), nullptr);

    valueTreeState.state.setProperty(Tr3A, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3B, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3C, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3D, var("0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3E, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3F, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3G, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3H, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3I, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3J, var("0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(TrSTPT3, var("7,7,7,7,7,7,7,7,7,7,"), nullptr);
    valueTreeState.state.setProperty(TrSTPW3, var("01,02,03,04,05,06,07,08,09,10,"), nullptr);
    valueTreeState.state.setProperty(TrSTPP3, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPV3, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD3t, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD3f, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD3v, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD3m, var("1,2,3,4,1,0,2,1,3,1,"), nullptr);

    valueTreeState.state.setProperty(Tr4A, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4B, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4C, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4D, var("0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4E, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4F, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4G, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4H, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4I, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4J, var("0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(TrSTPT4, var("7,7,7,7,7,7,7,7,7,7,"), nullptr);
    valueTreeState.state.setProperty(TrSTPW4, var("01,02,03,04,05,06,07,08,09,10,"), nullptr);
    valueTreeState.state.setProperty(TrSTPP4, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPV4, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD4t, var("0.8,0.7,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD4f, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD4v, var("0.5,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0,"), nullptr);
    valueTreeState.state.setProperty(TrSTPD4m, var("1,2,3,4,1,0,2,1,3,1,"), nullptr);

  



}


void PluginTriggers::serial1(AudioProcessorValueTreeState& valueTreeState, Value* tr1, int m)
{
    if (m == 0) { valueTreeState.state.setProperty(Tr1A, var(tr1[0].getValue().toString()), nullptr); }
    if (m == 1) { valueTreeState.state.setProperty(Tr1B, var(tr1[1].getValue().toString()), nullptr); }
    if (m == 2) { valueTreeState.state.setProperty(Tr1C, var(tr1[2].getValue().toString()), nullptr); }
    if (m == 3) { valueTreeState.state.setProperty(Tr1D, var(tr1[3].getValue().toString()), nullptr); }
    if (m == 4) { valueTreeState.state.setProperty(Tr1E, var(tr1[4].getValue().toString()), nullptr); }
    if (m == 5) { valueTreeState.state.setProperty(Tr1F, var(tr1[5].getValue().toString()), nullptr); }
    if (m == 6) { valueTreeState.state.setProperty(Tr1G, var(tr1[6].getValue().toString()), nullptr); }
    if (m == 7) { valueTreeState.state.setProperty(Tr1H, var(tr1[7].getValue().toString()), nullptr); }
    if (m == 8) { valueTreeState.state.setProperty(Tr1I, var(tr1[8].getValue().toString()), nullptr); }
    if (m == 9) { valueTreeState.state.setProperty(Tr1J, var(tr1[9].getValue().toString()), nullptr); }

}

void PluginTriggers::serial2(AudioProcessorValueTreeState& valueTreeState, Value* Tr2, int m)
{
    if (m == 0) { valueTreeState.state.setProperty(Tr2A, var(Tr2[0].getValue().toString()), nullptr); }
    if (m == 1) { valueTreeState.state.setProperty(Tr2B, var(Tr2[1].getValue().toString()), nullptr); }
    if (m == 2) { valueTreeState.state.setProperty(Tr2C, var(Tr2[2].getValue().toString()), nullptr); }
    if (m == 3) { valueTreeState.state.setProperty(Tr2D, var(Tr2[3].getValue().toString()), nullptr); }
    if (m == 4) { valueTreeState.state.setProperty(Tr2E, var(Tr2[4].getValue().toString()), nullptr); }
    if (m == 5) { valueTreeState.state.setProperty(Tr2F, var(Tr2[5].getValue().toString()), nullptr); }
    if (m == 6) { valueTreeState.state.setProperty(Tr2G, var(Tr2[6].getValue().toString()), nullptr); }
    if (m == 7) { valueTreeState.state.setProperty(Tr2H, var(Tr2[7].getValue().toString()), nullptr); }
    if (m == 8) { valueTreeState.state.setProperty(Tr2I, var(Tr2[8].getValue().toString()), nullptr); }
    if (m == 9) { valueTreeState.state.setProperty(Tr2J, var(Tr2[9].getValue().toString()), nullptr); }
}

void PluginTriggers::serial3(AudioProcessorValueTreeState& valueTreeState, Value* Tr3, int m)
{
    if (m == 0) { valueTreeState.state.setProperty(Tr3A, var(Tr3[0].getValue().toString()), nullptr); }
    if (m == 1) { valueTreeState.state.setProperty(Tr3B, var(Tr3[1].getValue().toString()), nullptr); }
    if (m == 2) { valueTreeState.state.setProperty(Tr3C, var(Tr3[2].getValue().toString()), nullptr); }
    if (m == 3) { valueTreeState.state.setProperty(Tr3D, var(Tr3[3].getValue().toString()), nullptr); }
    if (m == 4) { valueTreeState.state.setProperty(Tr3E, var(Tr3[4].getValue().toString()), nullptr); }
    if (m == 5) { valueTreeState.state.setProperty(Tr3F, var(Tr3[5].getValue().toString()), nullptr); }
    if (m == 6) { valueTreeState.state.setProperty(Tr3G, var(Tr3[6].getValue().toString()), nullptr); }
    if (m == 7) { valueTreeState.state.setProperty(Tr3H, var(Tr3[7].getValue().toString()), nullptr); }
    if (m == 8) { valueTreeState.state.setProperty(Tr3I, var(Tr3[8].getValue().toString()), nullptr); }
    if (m == 9) { valueTreeState.state.setProperty(Tr3J, var(Tr3[9].getValue().toString()), nullptr); }
}

void PluginTriggers::serial4(AudioProcessorValueTreeState& valueTreeState, Value* Tr4, int m)
{
    if (m == 0) { valueTreeState.state.setProperty(Tr4A, var(Tr4[0].getValue().toString()), nullptr); }
    if (m == 1) { valueTreeState.state.setProperty(Tr4B, var(Tr4[1].getValue().toString()), nullptr); }
    if (m == 2) { valueTreeState.state.setProperty(Tr4C, var(Tr4[2].getValue().toString()), nullptr); }
    if (m == 3) { valueTreeState.state.setProperty(Tr4D, var(Tr4[3].getValue().toString()), nullptr); }
    if (m == 4) { valueTreeState.state.setProperty(Tr4E, var(Tr4[4].getValue().toString()), nullptr); }
    if (m == 5) { valueTreeState.state.setProperty(Tr4F, var(Tr4[5].getValue().toString()), nullptr); }
    if (m == 6) { valueTreeState.state.setProperty(Tr4G, var(Tr4[6].getValue().toString()), nullptr); }
    if (m == 7) { valueTreeState.state.setProperty(Tr4H, var(Tr4[7].getValue().toString()), nullptr); }
    if (m == 8) { valueTreeState.state.setProperty(Tr4I, var(Tr4[8].getValue().toString()), nullptr); }
    if (m == 9) { valueTreeState.state.setProperty(Tr4J, var(Tr4[9].getValue().toString()), nullptr); }
}

void PluginTriggers::unserial(AudioProcessorValueTreeState& valueTreeState)
{

    tr1vA[0].referTo(valueTreeState.state.getPropertyAsValue(Tr1A, nullptr, true));
    tr1vA[1].referTo(valueTreeState.state.getPropertyAsValue(Tr1B, nullptr, true));
    tr1vA[2].referTo(valueTreeState.state.getPropertyAsValue(Tr1C, nullptr, true));
    tr1vA[3].referTo(valueTreeState.state.getPropertyAsValue(Tr1D, nullptr, true));
    tr1vA[4].referTo(valueTreeState.state.getPropertyAsValue(Tr1E, nullptr, true));
    tr1vA[5].referTo(valueTreeState.state.getPropertyAsValue(Tr1F, nullptr, true));
    tr1vA[6].referTo(valueTreeState.state.getPropertyAsValue(Tr1G, nullptr, true));
    tr1vA[7].referTo(valueTreeState.state.getPropertyAsValue(Tr1H, nullptr, true));
    tr1vA[8].referTo(valueTreeState.state.getPropertyAsValue(Tr1I, nullptr, true));
    tr1vA[9].referTo(valueTreeState.state.getPropertyAsValue(Tr1J, nullptr, true));

    

    tr2vA[0].referTo(valueTreeState.state.getPropertyAsValue(Tr2A, nullptr, true));
    tr2vA[1].referTo(valueTreeState.state.getPropertyAsValue(Tr2B, nullptr, true));
    tr2vA[2].referTo(valueTreeState.state.getPropertyAsValue(Tr2C, nullptr, true));
    tr2vA[3].referTo(valueTreeState.state.getPropertyAsValue(Tr2D, nullptr, true));
    tr2vA[4].referTo(valueTreeState.state.getPropertyAsValue(Tr2E, nullptr, true));
    tr2vA[5].referTo(valueTreeState.state.getPropertyAsValue(Tr2F, nullptr, true));
    tr2vA[6].referTo(valueTreeState.state.getPropertyAsValue(Tr2G, nullptr, true));
    tr2vA[7].referTo(valueTreeState.state.getPropertyAsValue(Tr2H, nullptr, true));
    tr2vA[8].referTo(valueTreeState.state.getPropertyAsValue(Tr2I, nullptr, true));
    tr2vA[9].referTo(valueTreeState.state.getPropertyAsValue(Tr2J, nullptr, true));

   

    tr3vA[0].referTo(valueTreeState.state.getPropertyAsValue(Tr3A, nullptr, true));
    tr3vA[1].referTo(valueTreeState.state.getPropertyAsValue(Tr3B, nullptr, true));
    tr3vA[2].referTo(valueTreeState.state.getPropertyAsValue(Tr3C, nullptr, true));
    tr3vA[3].referTo(valueTreeState.state.getPropertyAsValue(Tr3D, nullptr, true));
    tr3vA[4].referTo(valueTreeState.state.getPropertyAsValue(Tr3E, nullptr, true));
    tr3vA[5].referTo(valueTreeState.state.getPropertyAsValue(Tr3F, nullptr, true));
    tr3vA[6].referTo(valueTreeState.state.getPropertyAsValue(Tr3G, nullptr, true));
    tr3vA[7].referTo(valueTreeState.state.getPropertyAsValue(Tr3H, nullptr, true));
    tr3vA[8].referTo(valueTreeState.state.getPropertyAsValue(Tr3I, nullptr, true));
    tr3vA[9].referTo(valueTreeState.state.getPropertyAsValue(Tr3J, nullptr, true));

    

    tr4vA[0].referTo(valueTreeState.state.getPropertyAsValue(Tr4A, nullptr, true));
    tr4vA[1].referTo(valueTreeState.state.getPropertyAsValue(Tr4B, nullptr, true));
    tr4vA[2].referTo(valueTreeState.state.getPropertyAsValue(Tr4C, nullptr, true));
    tr4vA[3].referTo(valueTreeState.state.getPropertyAsValue(Tr4D, nullptr, true));
    tr4vA[4].referTo(valueTreeState.state.getPropertyAsValue(Tr4E, nullptr, true));
    tr4vA[5].referTo(valueTreeState.state.getPropertyAsValue(Tr4F, nullptr, true));
    tr4vA[6].referTo(valueTreeState.state.getPropertyAsValue(Tr4G, nullptr, true));
    tr4vA[7].referTo(valueTreeState.state.getPropertyAsValue(Tr4H, nullptr, true));
    tr4vA[8].referTo(valueTreeState.state.getPropertyAsValue(Tr4I, nullptr, true));
    tr4vA[9].referTo(valueTreeState.state.getPropertyAsValue(Tr4J, nullptr, true));

    for (int i = 0; i < 10; i++)
    {
        tr1IntOut(i);
        tr2IntOut(i);
        tr3IntOut(i);
        tr4IntOut(i);
    }
   
}

void PluginTriggers::Tr1Out(Value* u)
{
    for (int i = 0; i < 16; i++)
    {
       // u[i].setValue(tr1vA[i]);
    }





}
 int tr1p[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::tr1IntOut(int n)

{
 
    for (int i = 0; i <= 30; i += 2) {
  
            tr1p[i / 2] = tr1vA[n].getValue().toString().substring(i, i + 1).getIntValue();
        
    }
  

    return tr1p;
}
int tr2p[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::tr2IntOut(int n)
{
    for (int i = 0; i <= 30; i += 2) {
      
            tr2p[i / 2] = tr2vA[n].getValue().toString().substring(i, i + 1).getIntValue();
        
    }


    return tr2p;
}
int tr3p[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::tr3IntOut(int n)
{
    for (int i = 0; i <= 30; i += 2) {
      
            tr3p[i / 2] = tr3vA[n].getValue().toString().substring(i, i + 1).getIntValue();
        
    }



    return tr3p;
}
int tr4p[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::tr4IntOut(int n)
{
    for (int i = 0; i <= 30; i += 2) {
      
            tr4p[i / 2] = tr4vA[n].getValue().toString().substring(i, i + 1).getIntValue();
        
    }


    return tr4p;
}

void PluginTriggers::loadInit1(AudioProcessorValueTreeState& valueTreeState,int n)
{
    valueTreeState.state.setProperty(Tr1A, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1B, var("1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1C, var("1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1D, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1E, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1F, var("1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1G, var("1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1H, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1I, var("1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1J, var("1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
 

    valueTreeState.state.setProperty(Tr2A, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2B, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2C, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2D, var("0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2E, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2F, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2G, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2H, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2I, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2J, var("0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(Tr3A, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3B, var("0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3C, var("0,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3D, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3E, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3F, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3G, var("0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3H, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3I, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr3J, var("0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0"), nullptr);

    valueTreeState.state.setProperty(Tr4A, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4B, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4C, var("0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4D, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4E, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4F, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr4G, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4H, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4I, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4J, var("0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0"), nullptr);
    
}

void PluginTriggers::loadInit2(AudioProcessorValueTreeState& valueTreeState, int n)
{
    valueTreeState.state.setProperty(Tr1A, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1B, var("1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1C, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1D, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1E, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1F, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1G, var("1,1,1,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1H, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1I, var("1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1J, var("1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0"), nullptr);


    valueTreeState.state.setProperty(Tr2A, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2B, var("0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2C, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2D, var("0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2E, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2F, var("0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2G, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2H, var("0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2I, var("0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2J, var("0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(Tr3A, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3B, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3C, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3D, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3E, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3F, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3G, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3H, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3I, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3J, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);

    valueTreeState.state.setProperty(Tr4A, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4B, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4C, var("0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4D, var("0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4E, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4F, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr4G, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4H, var("0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4I, var("0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4J, var("0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0"), nullptr);
}

void PluginTriggers::loadInit3(AudioProcessorValueTreeState& valueTreeState, int n)
{
    valueTreeState.state.setProperty(Tr1A, var("1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1B, var("1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1C, var("1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1D, var("1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1E, var("1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1F, var("1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1G, var("1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1H, var("1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1I, var("1,0,0,1,0,0,1,0,1,0,1,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr1J, var("1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0"), nullptr);


    valueTreeState.state.setProperty(Tr2A, var("0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2B, var("0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2C, var("0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2D, var("0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2E, var("0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2F, var("0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1"), nullptr);
    valueTreeState.state.setProperty(Tr2G, var("0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2H, var("0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr2I, var("0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr2J, var("0,0,0,1,0,1,0,0,0,0,1,0,0,1,0,0"), nullptr);

    valueTreeState.state.setProperty(Tr3A, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3B, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3C, var("0,0,1,0,0,0,1,0,0,0,1,0,0,1,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3D, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3E, var("0,0,1,0,0,1,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3F, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3G, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3H, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3I, var("0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr3J, var("0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0"), nullptr);

    valueTreeState.state.setProperty(Tr4A, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4B, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4C, var("0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4D, var("0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4E, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4F, var("0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0"), nullptr);
    valueTreeState.state.setProperty(Tr4G, var("0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4H, var("0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4I, var("0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(Tr4J, var("0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0"), nullptr);
}

void PluginTriggers::createAllParametersTSP(AudioProcessorValueTreeState& valueTreeState)
{
    valueTreeState.state.setProperty(TrSTPW1, var("1,2,3,4,5,6,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(TrSTPW2, var("1,2,3,4,5,6,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(TrSTPW3, var("1,2,3,4,5,6,0,0,0,0,0,0,0,0,0,0"), nullptr);
    valueTreeState.state.setProperty(TrSTPW4, var("1,2,3,4,5,6,0,0,0,0,0,0,0,0,0,0"), nullptr);
}

char triggerCPW1[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse1[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPP1[64] = { "1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00" };
double parse1fp[10] = { 1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0 };
char triggerCPV1[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse1fv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD1t[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse1fDt[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD1f[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse1fDf[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD1v[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse1fDv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD1m[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse1fDm[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPT1[64] = { "7,7,7,7,7,7,7,7,7,7" };
int parse1T[10] = { 7,7,7,7,7,7,7,7,7 };


void PluginTriggers::serialTSPW1(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e)
{
    if (e == 0) {
        parse1[m] = in;
        sprintf(triggerCPW1, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
            parse1[0], parse1[1], parse1[2], parse1[3], parse1[4], parse1[5],
            parse1[6], parse1[7], parse1[8], parse1[9]);

        valueTreeState.state.setProperty(TrSTPW1, var(triggerCPW1), nullptr);
    }
    if (e == 1) {

        parse1fp[m] = in;
        sprintf(triggerCPP1, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse1fp[0], parse1fp[1], parse1fp[2], parse1fp[3], parse1fp[4], parse1fp[5],
            parse1fp[6], parse1fp[7], parse1fp[8], parse1fp[9]);

        valueTreeState.state.setProperty(TrSTPP1, var(triggerCPP1), nullptr);
    }
    if (e == 2) {

        parse1fv[m] = in;
        sprintf(triggerCPV1, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse1fv[0], parse1fv[1], parse1fv[2], parse1fv[3], parse1fv[4], parse1fv[5],
            parse1fv[6], parse1fv[7], parse1fv[8], parse1fv[9]);

        valueTreeState.state.setProperty(TrSTPV1, var(triggerCPV1), nullptr);
    }
    if (e == 3) {

        parse1fDt[m] = in;
        sprintf(triggerCPD1t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse1fDt[0], parse1fDt[1], parse1fDt[2], parse1fDt[3], parse1fDt[4], parse1fDt[5],
            parse1fDt[6], parse1fDt[7], parse1fDt[8], parse1fDt[9]);

        valueTreeState.state.setProperty(TrSTPD1t, var(triggerCPD1t), nullptr);
    }

    if (e == 4) {

        parse1fDf[m] = in;
        sprintf(triggerCPD1f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse1fDf[0], parse1fDf[1], parse1fDf[2], parse1fDf[3], parse1fDf[4], parse1fDf[5],
            parse1fDf[6], parse1fDf[7], parse1fDf[8], parse1fDf[9]);

        valueTreeState.state.setProperty(TrSTPD1f, var(triggerCPD1f), nullptr);
    }
    if (e == 5) {

        parse1fDv[m] = in;
        sprintf(triggerCPD1v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse1fDv[0], parse1fDv[1], parse1fDv[2], parse1fDv[3], parse1fDv[4], parse1fDv[5],
            parse1fDv[6], parse1fDv[7], parse1fDv[8], parse1fDv[9]);

        valueTreeState.state.setProperty(TrSTPD1v, var(triggerCPD1v), nullptr);
    }
    if (e == 6) {

        parse1fDm[m] = in;
        sprintf(triggerCPD1m, "%i %i %i %i %i %i %i %i %i %i ",
            parse1fDm[0], parse1fDm[1], parse1fDm[2], parse1fDm[3], parse1fDm[4], parse1fDm[5],
            parse1fDm[6], parse1fDm[7], parse1fDm[8], parse1fDm[9]);

        valueTreeState.state.setProperty(TrSTPD1m, var(triggerCPD1m), nullptr);
    }

    if (e == 7) {

        parse1T[m] = in;
        sprintf(triggerCPT1, "%i %i %i %i %i %i %i %i %i %i ",
            parse1T[0], parse1T[1], parse1T[2], parse1T[3], parse1T[4], parse1T[5],
            parse1T[6], parse1T[7], parse1T[8], parse1T[9]);

        valueTreeState.state.setProperty(TrSTPT1, var(triggerCPT1), nullptr);
    }



}
char triggerCP2[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse2[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPP2[64] = { "1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00" };
double parse2fp[10] = { 1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0 };
char triggerCPV2[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse2fv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD2t[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse2fDt[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD2f[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse2fDf[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD2v[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse2fDv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD2m[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse2fDm[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPT2[64] = { "7,7,7,7,7,7,7,7,7,7" };
int parse2T[10] = { 7,7,7,7,7,7,7,7,7 };
void PluginTriggers::serialTSPW2(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e)
{
    if (e == 0) {
        parse2[m] = in;
        sprintf(triggerCP2, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
            parse2[0], parse2[1], parse2[2], parse2[3], parse2[4], parse2[5],
            parse2[6], parse2[7], parse2[8], parse2[9]);

        valueTreeState.state.setProperty(TrSTPW2, var(triggerCP2), nullptr);
    }
    if (e == 1) {

        parse2fp[m] = in;
        sprintf(triggerCPP2, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse2fp[0], parse2fp[1], parse2fp[2], parse2fp[3], parse2fp[4], parse2fp[5],
            parse2fp[6], parse2fp[7], parse2fp[8], parse2fp[9]);

        valueTreeState.state.setProperty(TrSTPP2, var(triggerCPP2), nullptr);
    }
    if (e == 2) {

        parse2fv[m] = in;
        sprintf(triggerCPV2, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse2fv[0], parse2fv[1], parse2fv[2], parse2fv[3], parse2fv[4], parse2fv[5],
            parse2fv[6], parse2fv[7], parse2fv[8], parse2fv[9]);

        valueTreeState.state.setProperty(TrSTPV2, var(triggerCPV2), nullptr);
    }
    if (e == 3) {

        parse2fDt[m] = in;
        sprintf(triggerCPD2t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse2fDt[0], parse2fDt[1], parse2fDt[2], parse2fDt[3], parse2fDt[4], parse2fDt[5],
            parse2fDt[6], parse2fDt[7], parse2fDt[8], parse2fDt[9]);

        valueTreeState.state.setProperty(TrSTPD2t, var(triggerCPD2t), nullptr);
    }

    if (e == 4) {

        parse2fDf[m] = in;
        sprintf(triggerCPD2f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse2fDf[0], parse2fDf[1], parse2fDf[2], parse2fDf[3], parse2fDf[4], parse2fDf[5],
            parse2fDf[6], parse2fDf[7], parse2fDf[8], parse2fDf[9]);

        valueTreeState.state.setProperty(TrSTPD2f, var(triggerCPD2f), nullptr);
    }
    if (e == 5) {

        parse2fDv[m] = in;
        sprintf(triggerCPD2v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse2fDv[0], parse2fDv[1], parse2fDv[2], parse2fDv[3], parse2fDv[4], parse2fDv[5],
            parse2fDv[6], parse2fDv[7], parse2fDv[8], parse2fDv[9]);

        valueTreeState.state.setProperty(TrSTPD2v, var(triggerCPD2v), nullptr);
    }
    if (e == 6) {

        parse2fDm[m] = in;
        sprintf(triggerCPD2m, "%i %i %i %i %i %i %i %i %i %i ",
            parse2fDm[0], parse2fDm[1], parse2fDm[2], parse2fDm[3], parse2fDm[4], parse2fDm[5],
            parse2fDm[6], parse2fDm[7], parse2fDm[8], parse2fDm[9]);

        valueTreeState.state.setProperty(TrSTPD2m, var(triggerCPD2m), nullptr);
    }
    if (e == 7) {

        parse2T[m] = in;
        sprintf(triggerCPT2, "%i %i %i %i %i %i %i %i %i %i ",
            parse2T[0], parse2T[1], parse2T[2], parse2T[3], parse2T[4], parse2T[5],
            parse2T[6], parse2T[7], parse2T[8], parse2T[9]);

        valueTreeState.state.setProperty(TrSTPT2, var(triggerCPT2), nullptr);
    }

}

char triggerCP3[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse3[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPP3[64] = { "1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00" };
double parse3fp[10] = { 1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0 };
char triggerCPV3[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse3fv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD3t[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse3fDt[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD3f[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse3fDf[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD3v[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse3fDv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD3m[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse3fDm[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPT3[64] = { "7,7,7,7,7,7,7,7,7,7" };
int parse3T[10] = { 7,7,7,7,7,7,7,7,7 };


void PluginTriggers::serialTSPW3(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e)
{
    if (e == 0) {
        parse3[m] = in;
        sprintf(triggerCP3, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
            parse3[0], parse3[1], parse3[2], parse3[3], parse3[4], parse3[5],
            parse3[6], parse3[7], parse3[8], parse3[9]);

        valueTreeState.state.setProperty(TrSTPW3, var(triggerCP3), nullptr);
    }
    if (e == 1) {

        parse3fp[m] = in;
        sprintf(triggerCPP3, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse3fp[0], parse3fp[1], parse3fp[2], parse3fp[3], parse3fp[4], parse3fp[5],
            parse3fp[6], parse3fp[7], parse3fp[8], parse3fp[9]);

        valueTreeState.state.setProperty(TrSTPP3, var(triggerCPP3), nullptr);
    }

    if (e == 2) {

        parse3fv[m] = in;
        sprintf(triggerCPV3, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse3fv[0], parse3fv[1], parse3fv[2], parse3fv[3], parse3fv[4], parse3fv[5],
            parse3fv[6], parse3fv[7], parse3fv[8], parse3fv[9]);

        valueTreeState.state.setProperty(TrSTPV3, var(triggerCPV3), nullptr);
    }
    if (e == 3) {

        parse3fDt[m] = in;
        sprintf(triggerCPD3t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse3fDt[0], parse3fDt[1], parse3fDt[2], parse3fDt[3], parse3fDt[4], parse3fDt[5],
            parse3fDt[6], parse3fDt[7], parse3fDt[8], parse3fDt[9]);

        valueTreeState.state.setProperty(TrSTPD3t, var(triggerCPD3t), nullptr);
    }

    if (e == 4) {

        parse3fDf[m] = in;
        sprintf(triggerCPD3f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse3fDf[0], parse3fDf[1], parse3fDf[2], parse3fDf[3], parse3fDf[4], parse3fDf[5],
            parse3fDf[6], parse3fDf[7], parse3fDf[8], parse3fDf[9]);

        valueTreeState.state.setProperty(TrSTPD3f, var(triggerCPD3f), nullptr);
    }
    if (e == 5) {

        parse3fDv[m] = in;
        sprintf(triggerCPD3v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse3fDv[0], parse3fDv[1], parse3fDv[2], parse3fDv[3], parse3fDv[4], parse3fDv[5],
            parse3fDv[6], parse3fDv[7], parse3fDv[8], parse3fDv[9]);

        valueTreeState.state.setProperty(TrSTPD3v, var(triggerCPD3v), nullptr);
    }
    if (e == 6) {

        parse3fDm[m] = in;
        sprintf(triggerCPD3m, "%i %i %i %i %i %i %i %i %i %i ",
            parse3fDm[0], parse3fDm[1], parse3fDm[2], parse3fDm[3], parse3fDm[4], parse3fDm[5],
            parse3fDm[6], parse3fDm[7], parse3fDm[8], parse3fDm[9]);

        valueTreeState.state.setProperty(TrSTPD3m, var(triggerCPD3m), nullptr);
    }

    if (e == 7) {

        parse3T[m] = in;
        sprintf(triggerCPT3, "%i %i %i %i %i %i %i %i %i %i ",
            parse3T[0], parse3T[1], parse3T[2], parse3T[3], parse3T[4], parse3T[5],
            parse3T[6], parse3T[7], parse3T[8], parse3T[9]);

        valueTreeState.state.setProperty(TrSTPT3, var(triggerCPT3), nullptr);
    }

}
char triggerCP4[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse4[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPP4[64] = { "1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00" };
double parse4fp[10] = { 1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0 };
char triggerCPV4[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse4fv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD4t[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse4fDt[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD4f[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse4fDf[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD4v[64] = { "0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60,0.60" };
double parse4fDv[10] = { 0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6,0.6 };
char triggerCPD4m[64] = { "0,0,0,0,0,0,0,0,0,0" };
int parse4fDm[10] = { 0,0,0,0,0,0,0,0,0 };
char triggerCPT4[64] = { "7,7,7,7,7,7,7,7,7,7" };
int parse4T[10] = { 7,7,7,7,7,7,7,7,7 };

void PluginTriggers::serialTSPW4(AudioProcessorValueTreeState& valueTreeState, double in, int m, int e)
{
    if (e == 0) {
        parse4[m] = in;
        sprintf(triggerCP4, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
            parse4[0], parse4[1], parse4[2], parse4[3], parse4[4], parse4[5],
            parse4[6], parse4[7], parse4[8], parse4[9]);

        valueTreeState.state.setProperty(TrSTPW4, var(triggerCP4), nullptr);
    }
    if (e == 1) {

        parse4fp[m] = in;
        sprintf(triggerCPP4, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse4fp[0], parse4fp[1], parse4fp[2], parse4fp[3], parse4fp[4], parse4fp[5],
            parse4fp[6], parse4fp[7], parse4fp[8], parse4fp[9]);

        valueTreeState.state.setProperty(TrSTPP4, var(triggerCPP4), nullptr);
    }
    if (e == 2) {

        parse4fv[m] = in;
        sprintf(triggerCPV4, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse4fv[0], parse4fv[1], parse4fv[2], parse4fv[3], parse4fv[4], parse4fv[5],
            parse4fv[6], parse4fv[7], parse4fv[8], parse4fv[9]);

        valueTreeState.state.setProperty(TrSTPV4, var(triggerCPV4), nullptr);
    }
    if (e == 3) {

        parse4fDt[m] = in;
        sprintf(triggerCPD4t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse4fDt[0], parse4fDt[1], parse4fDt[2], parse4fDt[3], parse4fDt[4], parse4fDt[5],
            parse4fDt[6], parse4fDt[7], parse4fDt[8], parse4fDt[9]);

        valueTreeState.state.setProperty(TrSTPD4t, var(triggerCPD4t), nullptr);
    }

    if (e == 4) {

        parse4fDf[m] = in;
        sprintf(triggerCPD4f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse4fDf[0], parse4fDf[1], parse4fDf[2], parse4fDf[3], parse4fDf[4], parse4fDf[5],
            parse4fDf[6], parse4fDf[7], parse4fDf[8], parse4fDf[9]);

        valueTreeState.state.setProperty(TrSTPD4f, var(triggerCPD4f), nullptr);
    }
    if (e == 5) {

        parse4fDv[m] = in;
        sprintf(triggerCPD4v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
            parse4fDv[0], parse4fDv[1], parse4fDv[2], parse4fDv[3], parse4fDv[4], parse4fDv[5],
            parse4fDv[6], parse4fDv[7], parse4fDv[8], parse4fDv[9]);

        valueTreeState.state.setProperty(TrSTPD4v, var(triggerCPD4v), nullptr);
    }
    if (e == 6) {

        parse4fDm[m] = in;
        sprintf(triggerCPD4m, "%i %i %i %i %i %i %i %i %i %i ",
            parse4fDm[0], parse4fDm[1], parse4fDm[2], parse4fDm[3], parse4fDm[4], parse4fDm[5],
            parse4fDm[6], parse4fDm[7], parse4fDm[8], parse4fDm[9]);

        valueTreeState.state.setProperty(TrSTPD4m, var(triggerCPD4m), nullptr);
    }
    if (e == 7) {

        parse4T[m] = in;
        sprintf(triggerCPT4, "%i %i %i %i %i %i %i %i %i %i ",
            parse4T[0], parse4T[1], parse4T[2], parse4T[3], parse4T[4], parse4T[5],
            parse4T[6], parse4T[7], parse4T[8], parse4T[9]);

        valueTreeState.state.setProperty(TrSTPT4, var(triggerCPT4), nullptr);
    }
}
int trstpT1[10] = { 7,7,7,7,7,7,7,7,7,7 };
const int* PluginTriggers::unserialTSPT1(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPT[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPT1, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpT1[i / 2] = tr1STPT[0].getValue().toString().substring(i, i + 1).getIntValue();

    }
   
    return trstpT1;
}
int trstpT2[10] = { 7,7,7,7,7,7,7,7,7,7 };
const int* PluginTriggers::unserialTSPT2(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPT[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPT2, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpT2[i / 2] = tr1STPT[1].getValue().toString().substring(i, i + 1).getIntValue();

    }
  
    return trstpT2;
}
int trstpT3[10] = { 7,7,7,7,7,7,7,7,7,7 };
const int* PluginTriggers::unserialTSPT3(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPT[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPT3, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpT3[i / 2] = tr1STPT[2].getValue().toString().substring(i, i + 1).getIntValue();

    }
   
    return trstpT3;
}
int trstpT4[10] = { 7,7,7,7,7,7,7,7,7,7 };
const int* PluginTriggers::unserialTSPT4(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPT[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPT4, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpT4[i / 2] = tr1STPT[3].getValue().toString().substring(i, i + 1).getIntValue();

    }
   
    return trstpT4;
}
int trstpw1[10] = { 0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::unserialTSPW1(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPW[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPW1, nullptr, true));
    for (int i = 0; i <= 27; i += 3) {

        trstpw1[i / 3] = tr1STPW[0].getValue().toString().substring(i, i + 2).getIntValue();

    }
   
    return trstpw1;
 
}
double trstpp1[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPP1(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPP[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPP1, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpp1[i / 5] = tr1STPP[0].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  
    return trstpp1;
}
double trstpp2[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPP2(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPP[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPP2, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpp2[i / 5] = tr1STPP[1].getValue().toString().substring(i, i + 4).getDoubleValue();

    }

    return trstpp2;
}
double trstpp3[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPP3(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPP[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPP3, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpp3[i / 5] = tr1STPP[2].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
   
    return trstpp3;
}
double trstpp4[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPP4(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPP[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPP4, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpp4[i / 5] = tr1STPP[3].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
   
    return trstpp4;
}
double trstpv1[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPV1(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPV[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPV1, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpv1[i / 5] = tr1STPV[0].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  
    return trstpv1;
}
double trstpv2[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPV2(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPV[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPV2, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpv2[i / 5] = tr1STPV[1].getValue().toString().substring(i, i + 4).getDoubleValue();
    }
 
    return trstpv2;
}
double trstpv3[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPV3(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPV[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPV3, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpv2[i / 5] = tr1STPV[2].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  
    return trstpv3;
}
double trstpv4[11] = { 1,1,1,1,1,1,1,1,1,1 };
const double* PluginTriggers::unserialTSPV4(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPV[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPV4, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpv4[i / 5] = tr1STPV[3].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  
    return trstpv4;
}

int trstpw2[10] = { 0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::unserialTSPW2(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPW[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPW2, nullptr, true));
    for (int i = 0; i <= 27; i += 3) {

        trstpw2[i / 3] = tr1STPW[1].getValue().toString().substring(i, i + 2).getIntValue();

    }
   
    return trstpw2;
}
int trstpw3[10] = { 0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::unserialTSPW3(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPW[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPW3, nullptr, true));
    for (int i = 0; i <= 27; i += 3) {

        trstpw3[i / 3] = tr1STPW[2].getValue().toString().substring(i, i + 2).getIntValue();

    }
   
    return trstpw3;
}
int trstpw4[10] = { 0,0,0,0,0,0,0,0,0,0 };
const int* PluginTriggers::unserialTSPW4(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPW[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPW4, nullptr, true));
    for (int i = 0; i <= 27; i += 3) {

        trstpw4[i / 3] = tr1STPW[3].getValue().toString().substring(i, i + 2).getIntValue();

    }
   
    return trstpw4;
}
double trstpD1t[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD1t(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDt[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD1t, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD1t[i / 5] = tr1STPDt[0].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
   

    return trstpD1t;
}
double trstpD2t[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD2t(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDt[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD2t, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD2t[i / 5] = tr1STPDt[1].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  

    return trstpD2t;
}
double trstpD3t[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD3t(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDt[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD3t, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD3t[i / 5] = tr1STPDt[2].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
   

    return trstpD3t;
}
double trstpD4t[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD4t(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDt[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD4t, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD4t[i / 5] = tr1STPDt[3].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
 
    return trstpD4t;
}
double trstpD1f[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD1f(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDf[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD1f, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD1f[i / 5] = tr1STPDf[0].getValue().toString().substring(i, i + 4).getDoubleValue();

    }


    return trstpD1f;
}
double trstpD2f[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD2f(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDf[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD2f, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD2f[i / 5] = tr1STPDf[1].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
 
    return trstpD2f;
}
double trstpD3f[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD3f(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDf[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD3f, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD3f[i / 5] = tr1STPDf[2].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
 
    return trstpD3f;
}
double trstpD4f[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD4f(AudioProcessorValueTreeState& valueTreeState)
{
     tr1STPDf[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD4f, nullptr, true));
     for (int i = 0; i <= 50; i += 5) {

         trstpD4f[i / 5] = tr1STPDf[3].getValue().toString().substring(i, i + 4).getDoubleValue();

     }
   
    return trstpD4f;
}
double trstpD1v[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD1v(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDv[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD1v, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD1v[i / 5] = tr1STPDv[0].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
  
    return trstpD1v;
}
double trstpD2v[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD2v(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDv[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD2v, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD2v[i / 5] = tr1STPDv[1].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
   
    return trstpD2v;
}
double trstpD3v[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD3v(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDv[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD3v, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD3v[i / 5] = tr1STPDv[2].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
 
    return trstpD3v;
}
double trstpD4v[10] = { 0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5 };
const double* PluginTriggers::unserialTSPD4v(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDv[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD4v, nullptr, true));
    for (int i = 0; i <= 50; i += 5) {

        trstpD4v[i / 5] = tr1STPDv[3].getValue().toString().substring(i, i + 4).getDoubleValue();

    }
 

    return trstpD4v;
}
int trstpD1m[10] = { 1,1,2,0,1,3,1,2,1,1 };
const int* PluginTriggers::unserialTSPD1m(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDm[0].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD1m, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpD1m[i / 2] = tr1STPDm[0].getValue().toString().substring(i, i + 1).getIntValue();

    }
  

    return trstpD1m;
}
int trstpD2m[10] = { 1,1,2,0,1,3,1,2,1,1 };
const int* PluginTriggers::unserialTSPD2m(AudioProcessorValueTreeState& valueTreeState)
{
    tr1STPDm[1].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD2m, nullptr, true));
    for (int i = 0; i <= 18; i += 2) {

        trstpD2m[i / 2] = tr1STPDm[1].getValue().toString().substring(i, i + 1).getIntValue();

    }

    return trstpD2m;
}
int trstpD3m[10] = { 1,1,2,0,1,3,1,2,1,1 };
const int* PluginTriggers::unserialTSPD3m(AudioProcessorValueTreeState& valueTreeState)
{
   tr1STPDm[2].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD3m, nullptr, true));
   for (int i = 0; i <= 18; i += 2) {

       trstpD3m[i / 2] = tr1STPDm[2].getValue().toString().substring(i, i + 1).getIntValue();

   }

    return trstpD3m;
}
int trstpD4m[10] = { 1,1,2,0,1,3,1,2,1,1 };
const int* PluginTriggers::unserialTSPD4m(AudioProcessorValueTreeState& valueTreeState)
{
   tr1STPDm[3].referTo(valueTreeState.state.getPropertyAsValue(TrSTPD4m, nullptr, true));
   for (int i = 0; i <= 18; i += 2) {

       trstpD4m[i / 2] = tr1STPDm[3].getValue().toString().substring(i, i + 1).getIntValue();

   }

    return trstpD4m;
}

void PluginTriggers::resetProgramm(AudioProcessorValueTreeState& valueTreeState, AudioSample &p, int e)
{
  
    if (e == 0) {
        for (int i = 0; i < 10; i++)
        {

            parse1T[i] = p.mp.mTimeMode;
            sprintf(triggerCPT1, "%i %i %i %i %i %i %i %i %i %i ",
                parse1T[0], parse1T[1], parse1T[2], parse1T[3], parse1T[4], parse1T[5],
                parse1T[6], parse1T[7], parse1T[8], parse1T[9]);

            valueTreeState.state.setProperty(TrSTPT1, var(triggerCPT1), nullptr);



            parse1[i] =  p.mp.mSampleN;
            sprintf(triggerCPW1, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
                parse1[0], parse1[1], parse1[2], parse1[3], parse1[4], parse1[5],
                parse1[6], parse1[7], parse1[8], parse1[9]);

               valueTreeState.state.setProperty(TrSTPW1, var(triggerCPW1), nullptr);


                parse1fp[i] = p.mp.mSamplePitch;
                sprintf(triggerCPP1, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                    parse1fp[0], parse1fp[1], parse1fp[2], parse1fp[3], parse1fp[4], parse1fp[5],
                    parse1fp[6], parse1fp[7], parse1fp[8], parse1fp[9]);

                valueTreeState.state.setProperty(TrSTPP1, var(triggerCPP1), nullptr);

                parse1fv[i] = p.mp.mSampelVolume;
                sprintf(triggerCPV1, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                    parse1fv[0], parse1fv[1], parse1fv[2], parse1fv[3], parse1fv[4], parse1fv[5],
                    parse1fv[6], parse1fv[7], parse1fv[8], parse1fv[9]);

                valueTreeState.state.setProperty(TrSTPV1, var(triggerCPV1), nullptr);

                parse1fDt[i] = p.echo->getDelayTime();
                sprintf(triggerCPD1t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                    parse1fDt[0], parse1fDt[1], parse1fDt[2], parse1fDt[3], parse1fDt[4], parse1fDt[5],
                    parse1fDt[6], parse1fDt[7], parse1fDt[8], parse1fDt[9]);

                valueTreeState.state.setProperty(TrSTPD1t, var(triggerCPD1t), nullptr);
           

                parse1fDf[i] = p.echo->getDelayFeed();
                sprintf(triggerCPD1f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                    parse1fDf[0], parse1fDf[1], parse1fDf[2], parse1fDf[3], parse1fDf[4], parse1fDf[5],
                    parse1fDf[6], parse1fDf[7], parse1fDf[8], parse1fDf[9]);

                valueTreeState.state.setProperty(TrSTPD1f, var(triggerCPD1f), nullptr);
           
                parse1fDv[i] = p.echo->getDelayLevel();
                sprintf(triggerCPD1v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                    parse1fDv[0], parse1fDv[1], parse1fDv[2], parse1fDv[3], parse1fDv[4], parse1fDv[5],
                    parse1fDv[6], parse1fDv[7], parse1fDv[8], parse1fDv[9]);

                valueTreeState.state.setProperty(TrSTPD1v, var(triggerCPD1v), nullptr);
         
                parse1fDm[i] =  p.echo->getDelayMode();
                sprintf(triggerCPD1m, "%i %i %i %i %i %i %i %i %i %i ",
                    parse1fDm[0], parse1fDm[1], parse1fDm[2], parse1fDm[3], parse1fDm[4], parse1fDm[5],
                    parse1fDm[6], parse1fDm[7], parse1fDm[8], parse1fDm[9]);

                valueTreeState.state.setProperty(TrSTPD1m, var(triggerCPD1m), nullptr);

                
            }
        
        unserialTSPW1(valueTreeState);
        unserialTSPP1(valueTreeState);
        unserialTSPV1(valueTreeState);
        unserialTSPD1t(valueTreeState);
        unserialTSPD1f(valueTreeState);
        unserialTSPD1v(valueTreeState);
        unserialTSPD1m(valueTreeState);
        unserialTSPT1(valueTreeState);
        
        }

    if(e == 1) {
        for (int i = 0; i < 10; i++)
        {

            parse2T[i] = p.mp.mTimeMode;
            sprintf(triggerCPT2, "%i %i %i %i %i %i %i %i %i %i ",
                parse2T[0], parse2T[1], parse2T[2], parse2T[3], parse2T[4], parse2T[5],
                parse2T[6], parse2T[7], parse2T[8], parse2T[9]);

            valueTreeState.state.setProperty(TrSTPT2, var(triggerCPT2), nullptr);

            parse2[i] = p.mp.mSampleN;
            sprintf(triggerCP2, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
                parse2[0], parse2[1], parse2[2], parse2[3], parse2[4], parse2[5],
                parse2[6], parse2[7], parse2[8], parse2[9]);

            valueTreeState.state.setProperty(TrSTPW2, var(triggerCP2), nullptr);


            parse2fp[i] = p.mp.mSamplePitch;
            sprintf(triggerCPP2, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse2fp[0], parse2fp[1], parse2fp[2], parse2fp[3], parse2fp[4], parse2fp[5],
                parse2fp[6], parse2fp[7], parse2fp[8], parse2fp[9]);

            valueTreeState.state.setProperty(TrSTPP2, var(triggerCPP2), nullptr);

            parse2fv[i] = p.mp.mSampelVolume;
            sprintf(triggerCPV2, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse2fv[0], parse2fv[1], parse2fv[2], parse2fv[3], parse2fv[4], parse2fv[5],
                parse2fv[6], parse2fv[7], parse2fv[8], parse2fv[9]);

            valueTreeState.state.setProperty(TrSTPV2, var(triggerCPV2), nullptr);

            parse2fDt[i] = p.echo->getDelayTime();
            sprintf(triggerCPD2t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse2fDt[0], parse2fDt[1], parse2fDt[2], parse2fDt[3], parse2fDt[4], parse2fDt[5],
                parse2fDt[6], parse2fDt[7], parse2fDt[8], parse2fDt[9]);

            valueTreeState.state.setProperty(TrSTPD2t, var(triggerCPD2t), nullptr);


            parse2fDf[i] = p.echo->getDelayFeed();
            sprintf(triggerCPD2f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse2fDf[0], parse2fDf[1], parse2fDf[2], parse2fDf[3], parse2fDf[4], parse2fDf[5],
                parse2fDf[6], parse2fDf[7], parse2fDf[8], parse2fDf[9]);

            valueTreeState.state.setProperty(TrSTPD2f, var(triggerCPD2f), nullptr);

            parse2fDv[i] = p.echo->getDelayLevel();
            sprintf(triggerCPD2v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse2fDv[0], parse2fDv[1], parse2fDv[2], parse2fDv[3], parse2fDv[4], parse2fDv[5],
                parse2fDv[6], parse2fDv[7], parse2fDv[8], parse2fDv[9]);

            valueTreeState.state.setProperty(TrSTPD2v, var(triggerCPD2v), nullptr);

            parse2fDm[i] = p.echo->getDelayMode();
            sprintf(triggerCPD2m, "%i %i %i %i %i %i %i %i %i %i ",
                parse2fDm[0], parse2fDm[1], parse2fDm[2], parse2fDm[3], parse2fDm[4], parse2fDm[5],
                parse2fDm[6], parse2fDm[7], parse2fDm[8], parse2fDm[9]);

            valueTreeState.state.setProperty(TrSTPD2m, var(triggerCPD2m), nullptr);
        }
        unserialTSPT2(valueTreeState);
        unserialTSPW2(valueTreeState);
        unserialTSPP2(valueTreeState);
        unserialTSPV2(valueTreeState);
        unserialTSPD2t(valueTreeState);
        unserialTSPD2f(valueTreeState);
        unserialTSPD2v(valueTreeState);
        unserialTSPD2m(valueTreeState);

    }

    if (e == 2) {
        for (int i = 0; i < 10; i++)
        {

            parse3T[i] = p.mp.mTimeMode;
            sprintf(triggerCPT3, "%i %i %i %i %i %i %i %i %i %i ",
                parse3T[0], parse3T[1], parse3T[2], parse3T[3], parse3T[4], parse3T[5],
                parse3T[6], parse3T[7], parse3T[8], parse3T[9]);

            valueTreeState.state.setProperty(TrSTPT3, var(triggerCPT3), nullptr);

            parse3[i] = p.mp.mSampleN;
            sprintf(triggerCP3, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
                parse3[0], parse3[1], parse3[2], parse3[3], parse3[4], parse3[5],
                parse3[6], parse3[7], parse3[8], parse3[9]);

            valueTreeState.state.setProperty(TrSTPW3, var(triggerCP3), nullptr);


            parse3fp[i] = p.mp.mSamplePitch;
            sprintf(triggerCPP3, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse3fp[0], parse3fp[1], parse3fp[2], parse3fp[3], parse3fp[4], parse3fp[5],
                parse3fp[6], parse3fp[7], parse3fp[8], parse3fp[9]);

            valueTreeState.state.setProperty(TrSTPP3, var(triggerCPP3), nullptr);

            parse3fv[i] = p.mp.mSampelVolume;
            sprintf(triggerCPV3, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse3fv[0], parse3fv[1], parse3fv[2], parse3fv[3], parse3fv[4], parse3fv[5],
                parse3fv[6], parse3fv[7], parse3fv[8], parse3fv[9]);

            valueTreeState.state.setProperty(TrSTPV3, var(triggerCPV3), nullptr);

            parse3fDt[i] = p.echo->getDelayTime();
            sprintf(triggerCPD3t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse3fDt[0], parse3fDt[1], parse3fDt[2], parse3fDt[3], parse3fDt[4], parse3fDt[5],
                parse3fDt[6], parse3fDt[7], parse3fDt[8], parse3fDt[9]);

            valueTreeState.state.setProperty(TrSTPD3t, var(triggerCPD3t), nullptr);


            parse3fDf[i] = p.echo->getDelayFeed();
            sprintf(triggerCPD3f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse3fDf[0], parse3fDf[1], parse3fDf[2], parse3fDf[3], parse3fDf[4], parse3fDf[5],
                parse3fDf[6], parse3fDf[7], parse3fDf[8], parse3fDf[9]);

            valueTreeState.state.setProperty(TrSTPD3f, var(triggerCPD3f), nullptr);

            parse3fDv[i] = p.echo->getDelayLevel();
            sprintf(triggerCPD3v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse3fDv[0], parse3fDv[1], parse3fDv[2], parse3fDv[3], parse3fDv[4], parse3fDv[5],
                parse3fDv[6], parse3fDv[7], parse3fDv[8], parse3fDv[9]);

            valueTreeState.state.setProperty(TrSTPD3v, var(triggerCPD3v), nullptr);

            parse3fDm[i] = p.echo->getDelayMode();
            sprintf(triggerCPD3m, "%i %i %i %i %i %i %i %i %i %i ",
                parse3fDm[0], parse3fDm[1], parse3fDm[2], parse3fDm[3], parse3fDm[4], parse3fDm[5],
                parse3fDm[6], parse3fDm[7], parse3fDm[8], parse3fDm[9]);

            valueTreeState.state.setProperty(TrSTPD3m, var(triggerCPD3m), nullptr);
        }
        unserialTSPT3(valueTreeState);
        unserialTSPW3(valueTreeState);
        unserialTSPP3(valueTreeState);
        unserialTSPV3(valueTreeState);
        unserialTSPD3t(valueTreeState);
        unserialTSPD3f(valueTreeState);
        unserialTSPD3v(valueTreeState);
        unserialTSPD3m(valueTreeState);

    }
    if (e == 3) {
        for (int i = 0; i < 10; i++)
        {

            parse4T[i] = p.mp.mTimeMode;
            sprintf(triggerCPT4, "%i %i %i %i %i %i %i %i %i %i ",
                parse4T[0], parse4T[1], parse4T[2], parse4T[3], parse4T[4], parse4T[5],
                parse4T[6], parse4T[7], parse4T[8], parse4T[9]);

            valueTreeState.state.setProperty(TrSTPT4, var(triggerCPT4), nullptr);

            parse4[i] = p.mp.mSampleN;
            sprintf(triggerCP4, "%.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d %.2d ",
                parse4[0], parse4[1], parse4[2], parse4[3], parse4[4], parse4[5],
                parse4[6], parse4[7], parse4[8], parse4[9]);

            valueTreeState.state.setProperty(TrSTPW4, var(triggerCP4), nullptr);


            parse4fp[i] = p.mp.mSamplePitch;
            sprintf(triggerCPP4, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse4fp[0], parse4fp[1], parse4fp[2], parse4fp[3], parse4fp[4], parse4fp[5],
                parse4fp[6], parse4fp[7], parse4fp[8], parse4fp[9]);

            valueTreeState.state.setProperty(TrSTPP4, var(triggerCPP4), nullptr);

            parse4fv[i] = p.mp.mSampelVolume;
            sprintf(triggerCPV4, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse4fv[0], parse4fv[1], parse4fv[2], parse4fv[3], parse4fv[4], parse4fv[5],
                parse4fv[6], parse4fv[7], parse4fv[8], parse4fv[9]);

            valueTreeState.state.setProperty(TrSTPV4, var(triggerCPV4), nullptr);

            parse4fDt[i] = p.echo->getDelayTime();
            sprintf(triggerCPD4t, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse4fDt[0], parse4fDt[1], parse4fDt[2], parse4fDt[3], parse4fDt[4], parse4fDt[5],
                parse4fDt[6], parse4fDt[7], parse4fDt[8], parse4fDt[9]);

            valueTreeState.state.setProperty(TrSTPD4t, var(triggerCPD4t), nullptr);


            parse4fDf[i] = p.echo->getDelayFeed();
            sprintf(triggerCPD4f, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse4fDf[0], parse4fDf[1], parse4fDf[2], parse4fDf[3], parse4fDf[4], parse4fDf[5],
                parse4fDf[6], parse4fDf[7], parse4fDf[8], parse4fDf[9]);

            valueTreeState.state.setProperty(TrSTPD4f, var(triggerCPD4f), nullptr);

            parse4fDv[i] = p.echo->getDelayLevel();
            sprintf(triggerCPD4v, "%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f ",
                parse4fDv[0], parse4fDv[1], parse4fDv[2], parse4fDv[3], parse4fDv[4], parse4fDv[5],
                parse4fDv[6], parse4fDv[7], parse4fDv[8], parse4fDv[9]);

            valueTreeState.state.setProperty(TrSTPD4v, var(triggerCPD4v), nullptr);

            parse4fDm[i] = p.echo->getDelayMode();
            sprintf(triggerCPD4m, "%i %i %i %i %i %i %i %i %i %i ",
                parse4fDm[0], parse4fDm[1], parse4fDm[2], parse4fDm[3], parse4fDm[4], parse4fDm[5],
                parse4fDm[6], parse4fDm[7], parse4fDm[8], parse4fDm[9]);

            valueTreeState.state.setProperty(TrSTPD4m, var(triggerCPD4m), nullptr);
        }
        unserialTSPT4(valueTreeState);
        unserialTSPW4(valueTreeState);
        unserialTSPP4(valueTreeState);
        unserialTSPV4(valueTreeState);
        unserialTSPD4t(valueTreeState);
        unserialTSPD4f(valueTreeState);
        unserialTSPD4v(valueTreeState);
        unserialTSPD4m(valueTreeState);

    }


    
}
