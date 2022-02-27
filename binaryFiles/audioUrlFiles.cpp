/*
  ==============================================================================

    audioUrlFiles.cpp
    Created: 8 Oct 2021 5:32:00pm
    Author:  r7

  ==============================================================================
*/

#include "audioUrlFiles.h"
/*
PluginWaves::PluginWaves(AudioProcessorValueTreeState& valueTreeState)
{

	for (int n = 0; n < 73; n++) {
		valueTreeState.state.setProperty(Sp1SetNames()[n], var("init1"), nullptr);
		url1v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp1Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp2SetNames()[n], var("init2"), nullptr);
		url2v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp2Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp3SetNames()[n], var("init3"), nullptr);
		url3v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp3Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp4SetNames()[n], var("init4"), nullptr);
		url4v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp4Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp5SetNames()[n], var("init5"), nullptr);
		url5v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp5Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp6SetNames()[n], var("init6"), nullptr);
		url6v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp6Names(n), nullptr, true));
		valueTreeState.state.setProperty(Sp7SetNames()[n], var("init7"), nullptr);
		url7v[n].referTo(valueTreeState.state.getPropertyAsValue(Sp7Names(n), nullptr, true));
		
	}
		unserial(valueTreeState,0);
		unserial(valueTreeState, 1);
		unserial(valueTreeState, 2);
	    unserial(valueTreeState, 3);
		unserial(valueTreeState, 4);
		unserial(valueTreeState, 5);
		unserial(valueTreeState, 6);
		

}
*/
void PluginWaves::createAllParameters()
{
	
	getUrl1V();
	getUrl2V();
	getUrl3V();
	getUrl4V();
	getUrl5V();
	getUrl6V();
	getUrl7V();

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

void PluginWaves::serial5(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp5Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url5v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp5Names(m), nullptr, true));
}

void PluginWaves::serial6(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp6Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url6v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp6Names(m), nullptr, true));
}

void PluginWaves::serial7(AudioProcessorValueTreeState& valueTreeState, File fileAudio, int m)
{
	valueTreeState.state.setProperty(Sp7Names(m), var(fileAudio.getFullPathName().toRawUTF8()), nullptr);
	url7v[m].referTo(valueTreeState.state.getPropertyAsValue(Sp7Names(m), nullptr, true));
}



char ec1[13] = { "" };

const char* PluginWaves::Sp1Names(int n)
{sprintf(ec1, "S1_url%.2i", n);
return ec1;
}
String ef1[77] = { "" };
const String* PluginWaves::Sp1SetNames()
{
	for (int i = 0; i < 72; i++)
		ef1[i] = Sp1Names(i);
	return ef1;
}
char ec2[13] = { "" };
const char* PluginWaves::Sp2Names(int n)
{sprintf(ec2, "S2_url%.2i", n);
return ec2;
}
String ef2[77] = { "" };
const String* PluginWaves::Sp2SetNames()
{
	for (int i = 0; i < 72; i++)
		ef2[i] = Sp2Names(i);
	return ef2;
}
	char ec3[13] = { "" };
const char* PluginWaves::Sp3Names(int n)
{
	sprintf(ec3, "S3_url%.2i", n);
	return ec3;
}
String ef3[77] = { "" };
const String* PluginWaves::Sp3SetNames()
{
	for (int i = 0; i < 72; i++)
		ef3[i] = Sp3Names(i);
	return ef3;
}
char ec4[13] = { "" };
const char* PluginWaves::Sp4Names(int n)
{	sprintf(ec4, "S4_url%.2i", n);
    return ec4;
}
String ef4[77] = { "" };
const String* PluginWaves::Sp4SetNames()
{
	for (int i = 0; i < 72; i++)
		ef4[i] = Sp4Names(i);
	return ef4;
}
char ec5[13] = { "" };
const char* PluginWaves::Sp5Names(int n)
{	sprintf(ec5, "S5_url%.2i", n);
	return ec5;
}
String ef5[77] = { "" };
const String* PluginWaves::Sp5SetNames()
{
	for (int i = 0; i < 72; i++)
		ef5[i] = Sp5Names(i);
	return ef5;
}
char ec6[13] = { "" };
const char* PluginWaves::Sp6Names(int n)
{	sprintf(ec6 ,"S6_url%.2i", n);
	return ec6;
}
String ef6[77] = { "" };
const String* PluginWaves::Sp6SetNames()
{
	for (int i = 0; i < 72; i++)
		ef6[i] = Sp6Names(i);
		return ef6;
}

char ec7[13] = { "" };
const char* PluginWaves::Sp7Names(int n)
{ 	sprintf(ec7, "S7_url%.2i", n);
	return ec7;
}


String ef7[100] = { "" };
const String* PluginWaves::Sp7SetNames()
{
	for (int i = 0; i < 72; i++)
		ef7[i] = Sp7Names(i);
	return  ef7;
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
		valueTreeState.state.setProperty(Sp1SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-048.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp2-072.wav"), nullptr);

	}
	if (n == 3) {
		valueTreeState.state.setProperty(Sp1SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-048.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/digitone_kicksMp/digitone_kickMp3-072.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-012.wav"), nullptr);

	
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp1SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-074.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-075.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-076.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-077.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-078.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-079.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-080.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-081.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-082.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-083.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-084.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-085.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-086.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-087.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-088.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-089.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-090.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-091.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-092.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-093.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-094.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-095.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-096.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-097.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-098.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-099.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-100.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-101.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-102.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-103.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-104.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-105.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-106.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-107.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-108.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-109.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-110.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-111.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-112.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-113.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-114.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-115.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-116.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-117.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-118.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-119.wav"), nullptr);


		valueTreeState.state.setProperty(Sp1SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-120.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-121.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-122.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-123.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-124.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-125.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-126.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-127.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-128.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-129.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-130.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-131.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-132.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-133.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-134.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-135.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-136.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/bass3_1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-137.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-138.wav"), nullptr);
		valueTreeState.state.setProperty(Sp1SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-012.wav"), nullptr);


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
		valueTreeState.state.setProperty(Sp2SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-022.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/snares_div/snare_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
	}
	if (n == 3) {
		valueTreeState.state.setProperty(Sp2SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-137.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-138.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-139.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-140.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-141.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-142.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-143.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-144.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-145.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-146.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-147.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-148.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-149.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-150.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-151.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-152.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-153.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-154.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-155.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-156.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-157.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-158.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-022.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-159.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-160.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-161.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-162.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-163.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-164.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-165.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-166.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-167.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-168.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-169.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-170.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-171.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-172.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-173.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-174.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-175.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-176.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-177.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-178.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-179.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-024.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-180.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-181.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-182.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-183.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-184.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-185.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-186.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-187.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-188.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-189.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-190.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-191.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-192.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-193.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-015.wav"), nullptr);
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp2SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-022.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voco2-034.wav"), nullptr);

		valueTreeState.state.setProperty(Sp2SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synths3/massivSynth-cut-3-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp2SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-025.wav"), nullptr);
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
		valueTreeState.state.setProperty(Sp3SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-029.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-053.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/hats_div/hat_sd-1-006.wav"), nullptr);
	}
	if (n == 3) {
		valueTreeState.state.setProperty(Sp3SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--029.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--053.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/bass_div/Dbass_ms--006.wav"), nullptr);
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp3SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-001.wav"), nullptr);//*****
		valueTreeState.state.setProperty(Sp3SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-025.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-029.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-040.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-050.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-053.wav"), nullptr);

		valueTreeState.state.setProperty(Sp3SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-001.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp3SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div5-006.wav"), nullptr);
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
	if (n == 3) {
		valueTreeState.state.setProperty(Sp4SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_loop-1-004.wav"), nullptr);
	}
	if (n == 2) {
		valueTreeState.state.setProperty(Sp4SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-004.wav"), nullptr);
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp4SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp4SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp4SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-004.wav"), nullptr);
	}
	for (int i = 0; i < 72; i++) {

		url4v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp4SetNames()[i].toRawUTF8(), nullptr, true));

	}

}

void PluginWaves::loadInit5(AudioProcessorValueTreeState& valueTreeState, int n)
{
	
	if (n == 1) {
		valueTreeState.state.setProperty(Sp5SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-074.wav"), nullptr);
	}
	if (n == 2) {
		valueTreeState.state.setProperty(Sp5SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_sd-1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-074.wav"), nullptr);
	}
	if (n == 3) {
		valueTreeState.state.setProperty(Sp5SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/glitch/glitch--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-074.wav"), nullptr);
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp5SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp5SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp5SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div1-074.wav"), nullptr);
	}
	for (int i = 0; i < 72; i++) {

		url5v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp5SetNames()[i].toRawUTF8(), nullptr, true));

	}
	
}

void PluginWaves::loadInit6(AudioProcessorValueTreeState& valueTreeState, int n)
{
	
	if (n == 1) {
		valueTreeState.state.setProperty(Sp6SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div6--074.wav"), nullptr);
	}
	if (n == 2) {
		valueTreeState.state.setProperty(Sp6SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--074.wav"), nullptr);
	}

	if (n == 3) {
		valueTreeState.state.setProperty(Sp6SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div3-074.wav"), nullptr);
	}

	if (n == 4) {
		valueTreeState.state.setProperty(Sp6SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp6SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-072.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-073.wav"), nullptr);
		valueTreeState.state.setProperty(Sp6SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div6-074.wav"), nullptr);
	}

	for (int i = 0; i < 72; i++) {

		url6v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp6SetNames()[i].toRawUTF8(), nullptr, true));

	}
	
}

void PluginWaves::loadInit7(AudioProcessorValueTreeState& valueTreeState, int n)
{
	
	if (n == 1) {
		valueTreeState.state.setProperty(Sp7SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--000.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div5--004.wav"), nullptr);
	}
	
	if (n == 2) {
		valueTreeState.state.setProperty(Sp7SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7---002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--000.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/percs_div/perc_div7--004.wav"), nullptr);
	}
	if (n == 3) {
		valueTreeState.state.setProperty(Sp7SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-000.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-004.wav"), nullptr);
	}
	if (n == 4) {
		valueTreeState.state.setProperty(Sp7SetNames()[0], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-002.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[1], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[2], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-004.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[3], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-005.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[4], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-006.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[5], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-007.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[6], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-008.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[7], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-009.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[8], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-010.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[9], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-011.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[10], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-012.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[11], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-013.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[12], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-014.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[13], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-015.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[14], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-016.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[15], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-017.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[16], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-018.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[17], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-019.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[18], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-020.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[19], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-021.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[20], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-022.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[21], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-023.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[22], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-024.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[23], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-025.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[24], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-026.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[25], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-027.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[26], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-028.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[27], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-029.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[28], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-030.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[29], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-031.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[30], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-032.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[31], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-033.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[32], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-034.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[33], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-035.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[34], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-036.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[35], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-037.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[36], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-038.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[37], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-039.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[38], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-043.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[39], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-041.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[40], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-042.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[41], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-044.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[42], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-045.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[43], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-046.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[44], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-047.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[45], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-048.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[46], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-049.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[47], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-050.wav"), nullptr);

		valueTreeState.state.setProperty(Sp7SetNames()[48], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-051.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[49], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-052.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[50], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-053.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[51], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-054.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[52], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-055.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[53], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-056.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[54], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-057.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[55], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-058.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[56], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-059.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[57], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-060.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[58], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-061.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[59], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-062.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[60], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-063.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[61], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-064.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[62], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-065.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[63], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-066.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[64], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-067.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[65], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-068.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[66], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-069.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[67], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-070.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[68], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-071.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[69], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-000.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[70], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/voices/voice_cut1-003.wav"), nullptr);
		valueTreeState.state.setProperty(Sp7SetNames()[71], var(getSystemNameInfo() + "/DeadPoolAudio_V2/DpA_Sampels/synth_div/synth_cut_div4-004.wav"), nullptr);
	}

	for (int i = 0; i < 72; i++) {

		url7v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp7SetNames()[i].toRawUTF8(), nullptr, true));

	}
	
}

void PluginWaves::unserial(AudioProcessorValueTreeState& valueTreeState,int n)
{

		for (int i = 0; i < 72; i++) {
			url1v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp1SetNames()[i].toRawUTF8(), nullptr, true));
			url2v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp2SetNames()[i].toRawUTF8(), nullptr, true));
			url3v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp3SetNames()[i].toRawUTF8(), nullptr, true));
			url4v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp4SetNames()[i].toRawUTF8(), nullptr, true));
			url5v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp5SetNames()[i].toRawUTF8(), nullptr, true));
			url6v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp6SetNames()[i].toRawUTF8(), nullptr, true));
		    url7v[i].referTo(valueTreeState.state.getPropertyAsValue(Sp7SetNames()[i].toRawUTF8(), nullptr, true));
			
		}

}

