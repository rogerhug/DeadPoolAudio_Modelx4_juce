/*
  ==============================================================================

    audioUrlFiles.cpp
    Created: 8 Oct 2021 5:32:00pm
    Author:  r7

  ==============================================================================
*/

#include "audioUrlFiles.h"


void PluginWaves::createAllParameters(AudioProcessorValueTreeState& valueTreeState)
{
	
	for (int n = 1; n < 72; n++) {
		valueTreeState.state.setProperty(Sp1SetNames()[n], var("init1"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[n], var("init2"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[n], var("init3"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[n], var("init4"), nullptr);
	}

}


void PluginWaves::serial1(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	
	valueTreeState.state.setProperty(Sp1Names(m) , var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url1v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp1Names(m), nullptr, true));

}


void PluginWaves::serial2(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp2Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url2v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp2Names(m), nullptr, true));

}

void PluginWaves::serial3(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp3Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url3v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp3Names(m), nullptr, true));

}

void PluginWaves::serial4(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp4Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url4v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp4Names(m), nullptr, true));

}



char ec1[3] = { "" };
const char* PluginWaves::Sp1Names(int n)
{
	char v[3] = { "" };

	sprintf(v, "S1%.2i", n);

	ec1[0] = v[0];
	ec1[1] = v[1];
	ec1[2] = v[2];
	ec1[3] = v[3];

	return ec1;
}
String ef1[77] = { "" };
const String* PluginWaves::Sp1SetNames()
{
	for (int i = 0; i < 72; i++)
		ef1[i] = Sp1Names(i);
	return ef1;
}
char ec2[3] = { "" };
const char* PluginWaves::Sp2Names(int n)
{
	char v[3] = { "" }; 
	
	sprintf(v, "S2%.2i", n);

	ec2[0] = v[0];
	ec2[1] = v[1];
	ec2[2] = v[2];
	ec2[3] = v[3];

	return ec2;
}
String ef2[77] = { "" };
const String* PluginWaves::Sp2SetNames()
{
	for (int i = 0; i < 72; i++)
		ef2[i] = Sp2Names(i);
	return ef2;
}
	char ec3[3] = { "" };
const char* PluginWaves::Sp3Names(int n)
{
	char v[3] = { "" };

	sprintf(v, "S3%.2i", n);

	ec3[0] = v[0];
	ec3[1] = v[1];
	ec3[2] = v[2];
	ec3[3] = v[3];

	return ec3;
}
String ef3[77] = { "" };
const String* PluginWaves::Sp3SetNames()
{
	for (int i = 0; i < 72; i++)
		ef3[i] = Sp3Names(i);
	return ef3;
}
char ec4[3] = { "" };
const char* PluginWaves::Sp4Names(int n)
{
	char v[3] = { "" };
	
	sprintf(v, "S4%.2i", n);

	ec4[0] = v[0];
	ec4[1] = v[1];
	ec4[2] = v[2];
	ec4[3] = v[3];

	return ec4;
}
String ef4[77] = { "" };
const String* PluginWaves::Sp4SetNames()
{
	for (int i = 0; i < 72; i++)
		ef4[i] = Sp4Names(i);
	return ef4;
}

void PluginWaves::loadInit1(AudioProcessorValueTreeState& valueTreeState, int n)
{
	if (n == 1) {
		valueTreeState.state.setProperty(Sp1SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-001.wav"), nullptr);
	    valueTreeState.state.setProperty(Sp1SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-002.wav"), nullptr);
	    valueTreeState.state.setProperty(Sp1SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-048.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp1-048.wav"), nullptr);
		
	}
	if (n == 2) {
		valueTreeState.state.setProperty(Sp1SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-024.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-024.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[72], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[73], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[74], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-015.wav"), nullptr);
	
	}

	for (int i = 0; i < 72; i++) {

			url1v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp1SetNames()[i].toRawUTF8(), nullptr, true));
	
	}
}

void PluginWaves::loadInit2(AudioProcessorValueTreeState& valueTreeState, int n)
{
	if (n == 1) {
		valueTreeState.state.setProperty(Sp2SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-048.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_snareMp/digitone_snareMp1-073.wav"), nullptr);
	}

	if (n == 2) {
		valueTreeState.state.setProperty(Sp2SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-023.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-023.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
	}


	for (int i = 0; i < 72; i++) {

		url2v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp2SetNames()[i].toRawUTF8(), nullptr, true));

	}
	

}

void PluginWaves::loadInit3(AudioProcessorValueTreeState& valueTreeState, int n)
{
	if (n == 1) {
		valueTreeState.state.setProperty(Sp3SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-029.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-053.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-074.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-075.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-076.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-077.wav"), nullptr);
	}

	if (n == 2) {
		valueTreeState.state.setProperty(Sp3SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-078.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-079.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-080.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-081.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-082.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-083.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-084.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-085.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-086.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-087.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-088.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-089.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_div1-090.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-032.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-052.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-062.wav"), nullptr);
	}
	

	for (int i = 0; i < 72; i++) {

		url3v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp3SetNames()[i].toRawUTF8(), nullptr, true));

	}

}

void PluginWaves::loadInit4(AudioProcessorValueTreeState& valueTreeState, int n)
{

	if (n == 1) {
		valueTreeState.state.setProperty(Sp4SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-074.wav"), nullptr);
	}
	if (n == 2) {
		valueTreeState.state.setProperty(Sp4SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-074.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div2-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-074.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-075.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-076.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-077.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-078.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-079.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-080.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-081.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-082.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-083.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-084.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-085.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-086.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-087.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-088.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-089.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-090.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-091.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-092.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-093.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-094.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-095.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div1-096.wav"), nullptr);
	}
	

	for (int i = 0; i < 72; i++) {

		url4v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp4SetNames()[i].toRawUTF8(), nullptr, true));

	}

}

void PluginWaves::unserial(AudioProcessorValueTreeState& valueTreeState)
{

	for (int i = 0; i < 72; i++) {
		url1v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp1SetNames()[i].toRawUTF8(), nullptr, true));
		url2v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp2SetNames()[i].toRawUTF8(), nullptr, true));
		url3v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp3SetNames()[i].toRawUTF8(), nullptr, true));
		url4v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp4SetNames()[i].toRawUTF8(), nullptr, true));
	}

}

