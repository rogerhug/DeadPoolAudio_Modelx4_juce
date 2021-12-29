/*
  ==============================================================================

    TimerSq.h
    Created: 18 Jul 2021 5:18:34pm
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include"../synth/SynthOscillator.h"
//==============================================================================
/*
*/
class TimerSq  : public juce::Component
                
{
public:
    TimerSq()
    {
        // In your constructor, you should add any child components, and
        // initialise any special settings that your component needs.
        timeMode=0;
        Tbpm = 120;
        mCount1=0;
        mCount2=0;
        mCount3=0;
        mCount4=0;
        mCount5 = 0;
        mCount6 = 0;
        mCount7 = 0;
        ppq1count=0;
        ppq2count=0;
        ppq3count=0;
        ppq4count=0;
        ppq5count = 0;
        ppq6count = 0;
        ppq7count = 0;
        ppq1rate = 0;
        ppq2rate = 0;
        ppq3rate = 0;
        ppq4rate=0;
        ppq5rate = 0;
        ppq6rate = 0;
        ppq7rate = 0;
        rate1=0;
        rate2 = 0;
        rate3 = 0;
        rate4 = 0;
        rate5 = 0;
        rate6 = 0;
        rate7 = 0;
        countSH1=15;
        countSH2=15;
        countSH3=15;
        countSH4=15;
        countSH5 = 15;
        countSH6 = 15;
        countSH7 = 15;
        countSHRtr=15;
        ppq1Sh=0;
        ppq2Sh=0;
        ppq3Sh=0;
        ppq4Sh=0;
        ppq5Sh = 0;
        ppq6Sh = 0;
        ppq7Sh = 0;
        divideLfoMainSH = 0;
        divide1Value=5;
        divide2Value=5;
        divide3Value=5;
        divide4Value = 5;
        divide5Value = 5;
        divide6Value = 5;
        divide7Value=5;
        
        LfoSelect=0;
        
      
    }

    ~TimerSq() override
    {
    }
    void setTimerMode(int m) {
        timeMode = m;  if (timeMode == 0) { timerX.resetTimer(); }
    }

    double getTime() { return Tbpm / 9.01; }
    void setTimerBpm(double bpm) {
        Tbpm = bpm; 
      
        timerX.setFrequencyLfoTimerMainSH(getTime()*(getDivideMainSH() * 4));
        timerX.setFrequencyLfoTimer1(getTime() * (getDivide1() * 4));
        timerX.setFrequencyLfoTimer2(getTime() * (getDivide2() * 4));
        timerX.setFrequencyLfoTimer3(getTime() * (getDivide3() * 4));
        timerX.setFrequencyLfoTimer4(getTime() * (getDivide4() * 4));
        timerX.setFrequencyLfoTimer5(getTime() * (getDivide5() * 4));
        timerX.setFrequencyLfoTimer6(getTime() * (getDivide6() * 4));
        timerX.setFrequencyLfoTimer7(getTime() * (getDivide7() * 4));
    }
    void setLfoSelect(int s) { LfoSelect = s; }
    void setMainLfoHold(int s) { SampelHoldTime = s; }

    void setGateR(double g)     {gate=g*960;}
    void setGateR2(double g) { gate2 = g * 960; }
    void setGateR3(double g) { gate3 = g * 960; }
    void setGateR4(double g) { gate4 = g * 960; }
    void setGateR5(double g) { gate5 = g * 960; }
    void setGateR6(double g) { gate6 = g * 960; }
    void setGateR7(double g) { gate7 = g * 960; }
  
    void setSqLenght(double l)     {sqLenght=l;}
    const int getSeqLenght() {return sqLenght;}
    inline double setDivide(int d)
    {
        
        if(d==0) { div=0.125;}
        if(d==1) { div=0.25;}
        if(d==2) { div=0.375;  }
        if(d==3) { div=0.5;}
        if(d==4) { div=0.75; }
        if(d==5) { div=1;    }
        if(d==6) { div=1.5; }
        if(d==7) { div=2;  }
        if(d==8) { div=4;    }
        if(d==9) { div=8;    }
        
        return div;
        
    }

    void SetdivideMainSHLFO(int n) { divideLfoMainSH = n; timerX.setFrequencyLfoTimerMainSH(getTime() * (getDivideMainSH() * 4)); }
    void Setdivide1(int n) {divide1Value=n; timerX.setFrequencyLfoTimer1(getTime() * (getDivide1() * 4));}
    void Setdivide2(int n) {divide2Value=n; timerX.setFrequencyLfoTimer2(getTime() * (getDivide2() * 4));}
    void Setdivide3(int n) {divide3Value=n; timerX.setFrequencyLfoTimer3(getTime() * (getDivide3() * 4)); }
    void Setdivide4(int n) {divide4Value=n; timerX.setFrequencyLfoTimer4(getTime() * (getDivide4() * 4)); }
    void Setdivide5(int n) {divide5Value = n;timerX.setFrequencyLfoTimer5(getTime() * (getDivide5() * 4)); }
    void Setdivide6(int n) {divide6Value = n;timerX.setFrequencyLfoTimer6(getTime() * (getDivide6() * 4));  }
    void Setdivide7(int n) {divide7Value = n;timerX.setFrequencyLfoTimer7(getTime() * (getDivide7() * 4)); }
    double getDivideMainSH() { return setDivide(6-divideLfoMainSH); }

    double getDivide1() { return setDivide(divide1Value); }
    double getDivide2() { return setDivide(divide2Value); }
    double getDivide3() { return setDivide(divide3Value); }
    double getDivide4() { return setDivide(divide4Value); }
    double getDivide5() { return setDivide(divide5Value); }
    double getDivide6() { return setDivide(divide6Value); }
    double getDivide7() { return setDivide(divide7Value); }




    void SetRetrigger1(int n){reTrigger1=n;}
    void SetRetrigger2(int n){reTrigger2=n;}
    void SetRetrigger3(int n){reTrigger3=n;}
    void SetRetrigger4(int n){reTrigger4=n;}
    void SetRetrigger5(int n) { reTrigger5 = n; }
    void SetRetrigger6(int n) { reTrigger6 = n; }
    void SetRetrigger7(int n) { reTrigger7 = n; }
    double div = 0;

    

    

    int sh = 0;
    inline int setRetrigger(int rt)
    {
       
        if(rt==2){sh=16;}
        if(rt==3){sh=30;}
        if(rt==4){sh=60;}
        if(rt==5){sh=90;}
        if(rt==5){sh=120;}
        if(rt>5){sh=45;}
        return sh;
    }
    
    int getReTrigger1(){return setRetrigger(reTrigger1);}
    int getReTrigger2(){return setRetrigger(reTrigger2);}
    int getReTrigger3(){return setRetrigger(reTrigger3);}
    int getReTrigger4(){return setRetrigger(reTrigger4);}
    int getReTrigger5() { return setRetrigger(reTrigger4); }
    int getReTrigger6() { return setRetrigger(reTrigger4); }
    int getReTrigger7() { return setRetrigger(reTrigger4); }
    
    int getSampelHold(){return setRetrigger(SampelHoldTime);}
    


    
    const int countTimerHost() { return ppq1count;}
    const int rateTimerHost()   { return ppq1rate; }
    const int countTimerSH1Host() { return ppq1Sh;}
    const int rateTimerHost2() { return ppq2rate; }
    const int countTimerSH2Host() { return ppq2Sh;}
    const int rateTimerHost3() { return ppq3rate; }
    const int countTimerSH3Host() { return ppq3Sh;}
    const int rateTimerHost4() { return ppq4rate; }
    const int countTimerSH4Host() { return ppq4Sh;}
    const int rateTimerHost5() { return ppq5rate; }
    const int countTimerSH5Host() { return ppq5Sh; }
    const int rateTimerHost6() { return ppq6rate; }
    const int countTimerSH6Host() { return ppq6Sh; }
    const int rateTimerHost7() { return ppq7rate; }
    const int countTimerSH7Host() { return ppq7Sh; }
      int* timerMainPhase()
    {
        int time1[3] = { 0,0,0 };

      //  if (timeMode == 0) { timerX.resetTimer(); }

       mCountmainSH = timerX.getSampleTimeCountMainSH()*16;
       time1[2] = mCountmainSH;


        mCount1= timerX.getSampleTimeCount1() * getSeqLenght();
       // if (mCount1 > getSeqLenght()) { timerX.setPhaseReset(0); }
        rate1= ((int)(fmod(timerX.getSampleTimeCount1() * getSeqLenght(), 1.0) * 960.0 + 0.5));
       
       
        

     
        mCount2 = timerX.getSampleTimeCount2() * getSeqLenght();
        rate2 = ((int)(fmod(timerX.getSampleTimeCount2() * getSeqLenght(), 1.0) * 960.0 + 0.5));
      
       
        mCount3 = timerX.getSampleTimeCount3() * getSeqLenght();
        rate3 = ((int)(fmod(timerX.getSampleTimeCount3() * getSeqLenght(), 1.0) * 960.0 + 0.5));

       
        mCount4 = timerX.getSampleTimeCount4() * getSeqLenght();
        rate4 = ((int)(fmod(timerX.getSampleTimeCount4() * getSeqLenght(), 1.0) * 960.0 + 0.5));

      
        mCount5 = timerX.getSampleTimeCount5() * getSeqLenght();
        rate5 = ((int)(fmod(timerX.getSampleTimeCount5() * getSeqLenght(), 1.0) * 960.0 + 0.5));

       
        mCount6 = timerX.getSampleTimeCount6() * getSeqLenght();
        rate6 = ((int)(fmod(timerX.getSampleTimeCount6() * getSeqLenght(), 1.0) * 960.0 + 0.5));

       
        mCount7 = timerX.getSampleTimeCount7() * getSeqLenght();
        rate7 = ((int)(fmod(timerX.getSampleTimeCount7() * getSeqLenght(), 1.0) * 960.0 + 0.5));
        
        time1[0] = mCount1;// timerX.getSampleTimeCount1()* getSeqLenght();
        time1[1] = mCount2;// ((int)(fmod(timerX.getSampleTimeCount1() * getSeqLenght(), 1.0) * 960.0 + 0.5));

      return time1;

    }
      
      const int countTimer() { return mCount1;}
      const int rateTimer()   { return rate1; }
    const int countTimerSH1() { return countSH1;}
    const int countTimer2() { return mCount2; }
    const int rateTimer2() { return rate2; }
    const int countTimerSH2() { return countSH2;}
    const int countTimer3() { return mCount3; }
    const int rateTimer3() { return rate3; }
    const int countTimer4() { return mCount4; }
    const int countTimerSH3() { return countSH3;}
    const int rateTimer4() { return rate4; }
     const int countTimerSH4() { return countSH4;}
     const int countTimer5() { return mCount5; }
     const int rateTimer5() { return rate5; }
     const int countTimerSH5() { return countSH5; }
     const int countTimer6() { return mCount6; }
     const int rateTimer6() { return rate6; }
     const int countTimerSH6() { return countSH6; }
     const int countTimer7() { return mCount7; }
     const int rateTimer7() { return rate7; }
     const int countTimerSH7() { return countSH7; }
   const int *timeSw1(int t)
    {
       
        int timer[10]={0,0,0,0};
       
        if(t==1)
        {
        timer[0]=countTimer();
        timer[1]=Tr1out();
        timer[2]=rateTimer();
        timer[3]=countTimerSH1();
       
        }
        if(t==2)
        {
            timer[0]=countTimerHost();
            timer[1]=Tr1out();
            timer[2]=rateTimerHost();
            timer[3]=countTimerSH1Host();
            
            
        }
       return timer;
        

    }
    
    const int *timeSw2(int t)
    {
        int timer[10]={0,0,0,0};

        if(t==1)
        {
            timer[0]=countTimer2();
            timer[1]=Tr2out();
            timer[2]=rateTimer2();
            timer[3]=countTimerSH2();
        
        }
        if(t==2)
        {
            timer[0]=countTimerHost();
            timer[1]=Tr2out();
            timer[2]=rateTimerHost2();
            timer[3]=countTimerSH2Host();
            
            
        }
        
        return timer;
        
    }
    const int *timeSw3(int t)
    {
        int timer[10]={0,0,0,0};
       
        if(t==1)
        {
            timer[0]=countTimer3();
            timer[1]=Tr3out();
            timer[2]=rateTimer3();
            timer[3]=countTimerSH3();
           
        }
        if(t==2)
        {
            timer[0]=countTimerHost();
            timer[1]=Tr3out();
            timer[2]=rateTimerHost3();
            timer[3]=countTimerSH3Host();
            
           
        }
        
         return timer;
        
    }
    const int *timeSw4(int t)
    {
        int timer[10]={0,0,0,0};
       
        if(t==1)
        {
            timer[0]=countTimer4();
            timer[1]=Tr4out();
            timer[2]=rateTimer4();
            timer[3]=countTimerSH4();
          
        }
        if(t==2)
        {
            timer[0]=countTimerHost();
            timer[1]=Tr4out();
            timer[2]=rateTimerHost4();
            timer[3]=countTimerSH4Host();
            
            
        }
        return timer;
        
        
    }
    const int* timeSw5(int t)
    {
        int timer[10] = { 0,0,0,0 };

        if (t == 1)
        {
            timer[0] = countTimer5();
            timer[1] = Tr5out();
            timer[2] = rateTimer5();
            timer[3] = countTimerSH5();

        }
        if (t == 2)
        {
            timer[0] = countTimerHost();
            timer[1] = Tr5out();
            timer[2] = rateTimerHost5();
            timer[3] = countTimerSH5Host();


        }
        return timer;


    }
    const int* timeSw6(int t)
    {
        int timer[10] = { 0,0,0,0 };

        if (t == 1)
        {
            timer[0] = countTimer6();
            timer[1] = Tr6out();
            timer[2] = rateTimer6();
            timer[3] = countTimerSH6();

        }
        if (t == 2)
        {
            timer[0] = countTimerHost();
            timer[1] = Tr6out();
            timer[2] = rateTimerHost6();
            timer[3] = countTimerSH6Host();


        }
        return timer;


    }
    const int* timeSw7(int t)
    {
        int timer[10] = { 0,0,0,0 };

        if (t == 1)
        {
            timer[0] = countTimer7();
            timer[1] = Tr7out();
            timer[2] = rateTimer7();
            timer[3] = countTimerSH7();

        }
        if (t == 2)
        {
            timer[0] = countTimerHost();
            timer[1] = Tr7out();
            timer[2] = rateTimerHost7();
            timer[3] = countTimerSH7Host();


        }
        return timer;


    }
    SynthOscillator timerX;

  
    void timerMain(double t,double r)
    {
        
      

    }
    void timerHost(double ppq, double r)
    {
        const int cc1 = ppq;
        if (timeMode == 2)
        {
            double mPPQTime1 = (ppq) * (getDivide1() *2);
            double mPPQTime2 = (ppq) * (getDivide2() * 2);
            double mPPQTime3 = (ppq) * (getDivide3() * 2);
            double mPPQTime4 = (ppq) * (getDivide4() * 2);
            double mPPQTime5 = (ppq) * (getDivide5() * 2);
            double mPPQTime6 = (ppq) * (getDivide6() * 2);
            double mPPQTime7 = (ppq) * (getDivide7() * 2);
       
           
            auto beats1 = ((int)mPPQTime1);
            auto beats2 = ((int)mPPQTime2 %16);
            auto beats3 = ((int)mPPQTime3 %16);
            auto beats4 = ((int)mPPQTime4 %16);
            auto beats5 = ((int)mPPQTime5 %16);
            auto beats6 = ((int)mPPQTime6 %16);
            auto beats7 = ((int)mPPQTime7 %16);
            
            auto RateT1 = ((double)mPPQTime1);
            auto ticks1 = ((int)(fmod(RateT1, 1.0) * 960.0 + 0.5));
            ppq1rate = ticks1;
            
            auto RateT2 = ((double)mPPQTime2);
            auto ticks2 = ((int)(fmod(RateT2, 1.0) * 960.0 + 0.5));
            ppq2rate = ticks2;
            auto RateT3 = ((double)mPPQTime3);
            auto ticks3 = ((int)(fmod(RateT3, 1.0) * 960.0 + 0.5));
            ppq3rate = ticks3;
            auto RateT4 = ((double)mPPQTime4);
            auto ticks4 = ((int)(fmod(RateT4, 1.0) * 960.0 + 0.5));
            ppq4rate = ticks4;
            auto RateT5 = ((double)mPPQTime5);
            auto ticks5 = ((int)(fmod(RateT5, 1.0) * 960.0 + 0.5));
            ppq5rate = ticks5;
            auto RateT6 = ((double)mPPQTime6);
            auto ticks6 = ((int)(fmod(RateT6, 1.0) * 960.0 + 0.5));
            ppq6rate = ticks6;
            auto RateT7 = ((double)mPPQTime7);
            auto ticks7 = ((int)(fmod(RateT7, 1.0) * 960.0 + 0.5));
            ppq7rate = ticks7;
            
            int countp1 = 0;// beats1;
            int countSh1 = 0;
            int countH =  0;
            
            for (int i = 0; i < beats1; i++)
            {
                if (countH++ > getSampelHold() - 2)
                    countH = 0;
            }
            
            mCountmainSH = countH;
            for (int i = 0; i < beats1%128; i++)
            {
                if (countp1++ > getSeqLenght() - 2)
                    countp1 = 0;
            }
            
            for (int i = 0; i < beats1; i++)
            {
                if (countSh1++ > getReTrigger1() - 2)
                    countSh1 = 0;
            }
            
            ppq1count = countp1;
            ppq1Sh = countSh1;
            

            int countp2 = 0;
            int countSh2 = 0;
            for (int i = 0; i < beats2; i++)
            {
                if (countp2++ > getSeqLenght() - 2)
                    countp2 = 0;
            }
            for (int i = 0; i < beats2; i++)
            {
                if (countSh2++ > getReTrigger2() - 2)
                    countSh2 = 0;
            }

            ppq2count = countp2;
            ppq2Sh = countSh2;


            int countp3 = 0;
            int countSh3 = 0;
            for (int i = 0; i < beats3; i++)
            {
                if (countp3++ > getSeqLenght() - 2)
                    countp3 = 0;
            }
            for (int i = 0; i < beats3; i++)
            {
                if (countSh3++ > getReTrigger3() - 2)
                    countSh3 = 0;
            }

            ppq3count = countp3;
            ppq3Sh = countSh3;

            int countp4 = 0;
            int countSh4 = 0;
            for (int i = 0; i < beats4; i++)
            {
                if (countp4++ > getSeqLenght() - 2)
                    countp4 = 0;
            }
            for (int i = 0; i < beats4; i++)
            {
                if (countSh4++ > getReTrigger4() - 2)
                    countSh4 = 0;
            }

            ppq4count = countp4;
            ppq4Sh = countSh4;



            int countp5 = 0;
            int countSh5 = 0;
            for (int i = 0; i < beats5; i++)
            {
                if (countp5++ > getSeqLenght() - 2)
                    countp5 = 0;
            }
            for (int i = 0; i < beats5; i++)
            {
                if (countSh5++ > getReTrigger5() - 2)
                    countSh5 = 0;
            }

            ppq5count = countp5;
            ppq5Sh = countSh5;




            int countp6 = 0;
            int countSh6 = 0;
            for (int i = 0; i < beats6; i++)
            {
                if (countp6++ > getSeqLenght() - 2)
                    countp6 = 0;
            }
            for (int i = 0; i < beats6; i++)
            {
                if (countSh6++ > getReTrigger6() - 2)
                    countSh6 = 0;
            }

            ppq6count = countp6;
            ppq6Sh = countSh6;

            int countp7 = 0;
            int countSh7 = 0;
            for (int i = 0; i < beats7; i++)
            {
                if (countp7++ > getSeqLenght() - 2)
                    countp7 = 0;
            }
            for (int i = 0; i < beats7; i++)
            {
                if (countSh7++ > getReTrigger7() - 2)
                    countSh7 = 0;
            }

            ppq7count = countp7;
            ppq7Sh = countSh7;
            

        }

        
}
    
   


    int tr1[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
    void trigger1In(const int *tr) { memcpy(tr1,tr,16*sizeof(int)); }
    
    const int Tr1out() {
      
       if(timeMode==1)
       {
         
        if(rate1<(gate) && tr1[mCount1] == true)
        {
            return 1;
        }
        else
            return 0;
       }
        
        
        if(timeMode==2)
        {
            if(ppq1rate<(gate) && tr1[ppq1count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
        
        
    }
    void trigger2In(const int *tr) { memcpy(tr2,tr,16*sizeof(int)); }
    const int Tr2out() {
        
        if(timeMode==1)
        {
            
            if(rate2<(gate2) && tr2[mCount2] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        
        
        if(timeMode==2)
        {
            if(ppq2rate<(gate2) && tr2[ppq2count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
        
        
    }
    void trigger3In(const int *tr) { memcpy(tr3,tr,16*sizeof(int)); }
    const int Tr3out() {
        
        if(timeMode==1)
        {
            
            if(rate3<(gate3) && tr3[mCount3] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        
        
        if(timeMode==2)
        {
            if(ppq3rate<(gate3) && tr3[ppq3count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
        
        
    }
    void trigger4In(const int *tr) { memcpy(tr4,tr,16*sizeof(int)); }
    const int Tr4out() {
        
        if(timeMode==1)
        {
            
            if(rate4<(gate4) && tr4[mCount4] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        
        
        if(timeMode==2)
        {
            if(ppq4rate<(gate4) && tr4[ppq4count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
        
        
    }
    int tr5[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
    void trigger5In(const int* tr) { memcpy(tr5, tr, 16 * sizeof(int)); }
    const int Tr5out() {

        if (timeMode == 1)
        {

            if (rate5 < (gate5) && tr5[mCount5] == true)
            {
                return 1;
            }
            else
                return 0;
        }


        if (timeMode == 2)
        {
            if (ppq5rate < (gate5) && tr5[ppq5count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;


    }
    int tr6[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
    void trigger6In(const int* tr) { memcpy(tr6, tr, 16 * sizeof(int)); }
    const int Tr6out() {

        if (timeMode == 1)
        {

            if (rate6 < (gate6) && tr6[mCount6] == true)
            {
                return 1;
            }
            else
                return 0;
        }


        if (timeMode == 2)
        {
            if (ppq6rate < (gate6) && tr6[ppq6count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;


    }
    int tr7[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
    void trigger7In(const int* tr) { memcpy(tr7, tr, 16 * sizeof(int)); }
    const int Tr7out() {

        if (timeMode == 1)
        {

            if (rate7 < (gate7) && tr7[mCount7] == true)
            {
                return 1;
            }
            else
                return 0;
        }


        if (timeMode == 2)
        {
            if (ppq7rate < (gate7) && tr7[ppq7count] == true)
            {
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;


    }
    
    const int getppqCount1() { return ppq1count; }
    const int getppqCount2() { return ppq2count; }
    const int getppqCount3() { return ppq3count; }
    const int getppqCount4() { return ppq4count; }
    


    double holdphase;
    double mainLfoValue(double l1,double l2,double l3,double l4)
    {
        double phasemain=1;
      
        if(LfoSelect==0){ phasemain=l1;}
        if(LfoSelect==1){ phasemain=l2;}
        if(LfoSelect==2){ phasemain=l3;}
        if(LfoSelect==3){ phasemain=l4;}
        
         if(SampelHoldTime==0){
             holdphase= phasemain;
             
         }
        
        
         if(SampelHoldTime>0){
            if(mCountmainSH==15 && rate1<128)
          holdphase = phasemain;
           
         }
          return holdphase;
        
      
        
       
    }
    double getlfoHoldphase(){return holdphase;}
    const int getRateGate(){return rate1;}
    
private:

    int timeMode;
    double Tbpm;
    double sqLenght;
    int mCountmainSH;
    int mCount1;
    int mCount2;
    int mCount3;
    int mCount4;
    int mCount5;
    int mCount6;
    int mCount7;
    int countSH1;
    int countSH2;
    int countSH3;
    int countSH4;
    int countSH5;
    int countSH6;
    int countSH7;
    int countSHRtr;
    int rate1;
    int rate2;
    int rate3;
    int rate4;
    int rate5;
    int rate6;
    int rate7;
    double gate;
    double gate2;
    double gate3;
    double gate4;
    double gate5;
    double gate6;
    double gate7;

   
    int tr2[16];
    int tr3[16];
    int tr4[16];
    double divideT;
    double divideLfoMainSH;
    double divide1Value;
    double divide2Value;
    double divide3Value;
    double divide4Value;
    double divide5Value;
    double divide6Value;
    double divide7Value;
    int reTrigger1;
    int reTrigger2;
    int reTrigger3;
    int reTrigger4;
    int reTrigger5;
    int reTrigger6;
    int reTrigger7;
    int ppq1count;
    int ppq2count;
    int ppq3count;
    int ppq4count;
    int ppq5count;
    int ppq6count;
    int ppq7count;
    int ppq1rate;
    int ppq2rate;
    int ppq3rate;
    int ppq4rate;
    int ppq5rate;
    int ppq6rate;
    int ppq7rate;
    int ppq1Sh;
    int ppq2Sh;
    int ppq3Sh;
    int ppq4Sh;
    int ppq5Sh;
    int ppq6Sh;
    int ppq7Sh;
    int times1[10];
 
    int LfoSelect;
    int SampelHoldTime;
    bool TriggerHold;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TimerSq)
};
