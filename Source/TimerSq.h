/*
  ==============================================================================

    TimerSq.h
    Created: 18 Jul 2021 5:18:34pm
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class TimerSq  : public juce::Component
                ,private Timer
{
public:
    TimerSq()
    {
        // In your constructor, you should add any child components, and
        // initialise any special settings that your component needs.
        timeMode=0;
        mCount1=0;
        mCount2=0;
        mCount3=0;
        mCount4=0;
        ppq1count=0;
        ppq2count=0;
        ppq3count=0;
        ppq4count=0;
        ppq1rate = 0;
        ppq2rate = 0;
        ppq3rate = 0;
        ppq4rate=0;
        rate1=0;
        rate2 = 0;
        rate3 = 0;
        rate4 = 0;
        countSH1=15;
        countSH2=15;
        countSH3=15;
        countSH4=15;
        countSHRtr=15;
        ppq1Sh=0;
        ppq2Sh=0;
        ppq3Sh=0;
        ppq4Sh=0;
        divide1Value=1;
        divide2Value=1;
        divide3Value=1;
        divide4Value=1;
        
        LfoSelect=0;
        
      startTimer(10);
    }

    ~TimerSq() override
    {
    }
    void setTimerMode(int m)    {timeMode=m;}
    void setTimerBpm(double bpm){ Tbpm=bpm;}
    void setGateR(double g)     {gate=g*960;}
    void setGateR2(double g) { gate2 = g * 960; }
    void setGateR3(double g) { gate3 = g * 960; }
    void setGateR4(double g) { gate4 = g * 960; }
    void setSqLenght(double l)     {sqLenght=l;}
    const int getSeqLenght() {return sqLenght;}

    void Setdivide1(int n)   {divide1Value=n;}
    void Setdivide2(int n)   {divide2Value=n;}
    void Setdivide3(int n)   {divide3Value=n;}
    void Setdivide4(int n)   {divide4Value=n;}
    
    void SetRetrigger1(int n){reTrigger1=n;}
    void SetRetrigger2(int n){reTrigger2=n;}
    void SetRetrigger3(int n){reTrigger3=n;}
    void SetRetrigger4(int n){reTrigger4=n;}
    double div = 0;
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
    
    double getDivide1() { return setDivide(divide1Value); }
    double getDivide2() { return setDivide(divide2Value); }
    double getDivide3() { return setDivide(divide3Value); }
    double getDivide4() { return setDivide(divide4Value); }
    

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
    
    int getSampelHold(){return setRetrigger(SampelHoldTime);}
    
    const int countTimer() { return mCount1;}
    const int rateTimer()   { return rate1; }
    const int countTimerSH1() { return countSH1;}
    const int rateTimer2() { return rate2; }
    const int countTimerSH2() { return countSH2;}
    const int rateTimer3() { return rate3; }
    const int countTimerSH3() { return countSH3;}
    const int rateTimer4() { return rate4; }
     const int countTimerSH4() { return countSH4;}
    
    const int countTimerHost() { return ppq1count;}
    const int rateTimerHost()   { return ppq1rate; }
    const int countTimerSH1Host() { return ppq1Sh;}
    const int rateTimerHost2() { return ppq2rate; }
    const int countTimerSH2Host() { return ppq2Sh;}
    const int rateTimerHost3() { return ppq3rate; }
    const int countTimerSH3Host() { return ppq3Sh;}
    const int rateTimerHost4() { return ppq4rate; }
    const int countTimerSH4Host() { return ppq4Sh;}
    
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
            timer[0]=countTimer();
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
            timer[0]=countTimer();
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
            timer[0]=countTimer();
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
    
    void timerHost(double ppq,double r)
    {
      if(timeMode==2)
      {
       double mPPQTime1 = (ppq) * (getDivide1()*2);
       double mPPQTime2 = (ppq) * (getDivide2()*2);
       double mPPQTime3 = (ppq) * (getDivide3()*2);
       double mPPQTime4 = (ppq) * (getDivide4()*2);
        
       auto beats1 = ((int)mPPQTime1);
       auto beats2 = ((int)mPPQTime2);
       auto beats3 = ((int)mPPQTime3);
       auto beats4 = ((int)mPPQTime4);
        
       auto RateT1 = ((double)mPPQTime1);
       auto ticks1 = ((int)(fmod(RateT1, 1.0) * 960.0 + 0.5));
       ppq1rate = ticks1;
       auto RateT2 = ((double)mPPQTime2);
       auto ticks2 = ((int)(fmod(RateT2, 1.0) * 960.0 + 0.5));
       ppq2rate =ticks2;
       auto RateT3 = ((double)mPPQTime3);
       auto ticks3 = ((int)(fmod(RateT3, 1.0) * 960.0 + 0.5));
       ppq3rate = ticks3;
       auto RateT4 = ((double)mPPQTime4);
       auto ticks4 = ((int)(fmod(RateT4, 1.0) * 960.0 + 0.5));
       ppq4rate = ticks4;

       
        int countp1=0;
        int countSh1=0;
        int countH =0;
          for(int i=0;i<beats1;i++)
          {
              if(countH++>getSampelHold()-2)
                  countH=0;
          }
          mCountmainSH=countH;
        for(int i=0;i<beats1;i++)
        {
            if(countp1++>getSeqLenght()-2   )
                countp1=0;
        }
        for(int i=0;i<beats1;i++)
        {
            if(countSh1++>getReTrigger1()-2   )
                countSh1=0;
        }
        
        ppq1count=countp1;
        ppq1Sh=countSh1;
    
    
    int countp2=0;
    int countSh2=0;
    for(int i=0;i<beats2;i++)
    {
        if(countp2++>getSeqLenght()-2   )
            countp2=0;
            }
    for(int i=0;i<beats2;i++)
    {
        if(countSh2++>getReTrigger2()-2   )
            countSh2=0;
            }
    
    ppq2count=countp2;
    ppq2Sh=countSh2;
        
        
        int countp3=0;
        int countSh3=0;
        for(int i=0;i<beats3;i++)
        {
            if(countp3++>getSeqLenght()-2   )
                countp3=0;
        }
        for(int i=0;i<beats3;i++)
        {
            if(countSh3++>getReTrigger3()-2   )
                countSh3=0;
        }
        
        ppq3count=countp3;
        ppq3Sh=countSh3;
        
        int countp4=0;
        int countSh4=0;
        for(int i=0;i<beats4;i++)
        {
            if(countp4++>getSeqLenght()-2   )
                countp4=0;
        }
        for(int i=0;i<beats4;i++)
        {
            if(countSh4++>getReTrigger4()-2   )
                countSh4=0;
        }
        
        ppq4count=countp4;
        ppq4Sh=countSh4;
        
      }
        
        
        
        
        
}
    
    void timerCallback() {
        const int fixtime=300;
        if(timeMode==1){
        auto currentTime = juce::Time::getMillisecondCounterHiRes()*(0.01*(Tbpm/fixtime)*(getDivide1()));
        double rateTicks = modf (currentTime , &rateTicks);
       
        int count =0;
        int countS =0;
        int countH =0;
    for(int i=0;i<currentTime;i++)
        {
        if(countH++>getSampelHold()-2)
            countH=0;
        }
            
        for(int i=0;i<currentTime;i++)
        {
            if(count++>getSeqLenght()-2   )
                count=0;
        }
        for(int i=0;i<currentTime;i++)
        {
            if(countS++>getReTrigger1()-2   )
                countS=0;
        }
        
       mCountmainSH=countH;
       mCount1=count;
       countSH1=countS;
       rate1 =rateTicks*(960);
        
      auto currentTime2 = juce::Time::getMillisecondCounterHiRes()*(0.01*(Tbpm/fixtime)*(getDivide2()));
      double rateTicks2 = modf(currentTime2, &rateTicks2);
      rate2 = rateTicks2 * (960);
        int count2 =0;
        int countS2 =0;
        for(int i=0;i<currentTime2;i++)
        {
            if(count2++>getSeqLenght()-2   )
                count2=0;
        }
        for(int i=0;i<currentTime2;i++)
        {
            if(countS2++>getReTrigger2()   )
                countS2=0;
        }
        
        mCount2=count2;
        countSH2=countS2;
        auto currentTime3 = juce::Time::getMillisecondCounterHiRes()*(0.01*(Tbpm/fixtime)*(getDivide3()));
        double rateTicks3 = modf(currentTime3, &rateTicks3);
        rate3 = rateTicks3 * (960);
        int count3 =0;
        int countS3 =0;
        for(int i=0;i<currentTime3;i++)
        {
            if(count3++>getSeqLenght()-2   )
                count3=0;
        }
        for(int i=0;i<currentTime3;i++)
        {
            if(countS3++>getReTrigger3()   )
                countS3=0;
        }
        
        mCount3=count3;
        countSH3=countS3;
        auto currentTime4 = juce::Time::getMillisecondCounterHiRes()*(0.01*(Tbpm/fixtime)*(getDivide4()));
        double rateTicks4 = modf(currentTime4, &rateTicks4);
        rate4 = rateTicks4 * (960);
        int count4 =0;
        int countS4 =0;
        
        for(int i=0;i<currentTime4;i++)
        {
            if(count4++>getSeqLenght()-2   )
                count4=0;
        }
        for(int i=0;i<currentTime4;i++)
        {
            if(countS4++>getReTrigger4()   )
                countS4=0;
        }
        
        mCount4=count4;
        countSH4=countS4;
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
    
    const int getppqCount1() { return ppq1count; }
    const int getppqCount2() { return ppq2count; }
    const int getppqCount3() { return ppq3count; }
    const int getppqCount4() { return ppq4count; }
    
    void setLfoSelect(int s){LfoSelect=s;}
    void setLfoHold(int s){ SampelHoldTime=s;}

    double holdphase;
    double mainLfoValue(double l1,double l2,double l3,double l4)
    {
        double phasemain;
      
        if(LfoSelect==0){ phasemain=l1;}
        if(LfoSelect==1){ phasemain=l2;}
        if(LfoSelect==2){ phasemain=l3;}
        if(LfoSelect==3){ phasemain=l4;}
        
         if(SampelHoldTime==1){
             holdphase= phasemain;
             
         }
        
        
         if(SampelHoldTime>1){
            if(mCountmainSH==getSampelHold()-3 && rate1<100)
          holdphase=phasemain;
           
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
    int countSH1;
    int countSH2;
    int countSH3;
    int countSH4;
    int countSHRtr;
    int rate1;
    int rate2;
    int rate3;
    int rate4;
    double gate;
    double gate2;
    double gate3;
    double gate4;

   
    int tr2[16];
    int tr3[16];
    int tr4[16];
    double divideT;
    double divide1Value;
    double divide2Value;
    double divide3Value;
    double divide4Value;
    int reTrigger1;
    int reTrigger2;
    int reTrigger3;
    int reTrigger4;
    int ppq1count;
    int ppq2count;
    int ppq3count;
    int ppq4count;
    int ppq1rate;
    int ppq2rate;
    int ppq3rate;
    int ppq4rate;
    int ppq1Sh;
    int ppq2Sh;
    int ppq3Sh;
    int ppq4Sh;
    int times1[10];
 
    int LfoSelect;
    int SampelHoldTime;
    bool TriggerHold;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TimerSq)
};
