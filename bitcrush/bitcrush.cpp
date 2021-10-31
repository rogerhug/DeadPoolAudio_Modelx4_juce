
// Include Files
#include <cmath>
#include <math.h>
#include "bitcrush.h"


double bitcrush_c:: rt_roundd(double u)
{
  double y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}


void bitcrush_c:: bitcrush(double input, double &out,int read)
{
    double Php=0.1-(mMix*0.1);
    double Phn=(mMix*0.1);

    double out1=0;
    double out2=0;
    double out3=0;
    if(mModus==0){out=input;}
  
      if(mModus==1){
        mBitnum_T=6.0;
        b_div_t= (mBitnum/6.001)/44000;
         
    
    out1=  pow(10.0,Php/ 20.0)*(input)
    + rt_roundd(pow(2.0,mBitnum*mBitnum_T) * (input /b_div_t) * pow(10.0, Phn/20));
    out1*=0.000851234567833455111;
     stepFilter3(out1,out1);
    out=input*(1-mWed_Dry)+(out1)*(mWed_Dry*0.0000004521212345433);
      }
    if(mModus==2){
        mBitnum_T=8.0;
        b_div_t= (mBitnum/8.001)/44000;
        
        out2=  pow(10.0,Php/ 20.0)*(input)
        + rt_roundd(pow(2.0,mBitnum*mBitnum_T) * (input /b_div_t) * pow(10.0, Phn/20));
        out2*=0.01851234567833455111;
        stepFilter1(out2,out2);
        out=input*(1-mWed_Dry)+(out2)*(mWed_Dry*0.000001121212345433);
    }
    if(mModus==3){
        mBitnum_T=7.0;
        b_div_t= (mBitnum/7.001)/44000;
        out3=  pow(10.0,Php/ 20.0)*(input)
        + rt_roundd(pow(2.0,mBitnum*mBitnum_T) * (input /b_div_t) * pow(10.0, Phn/20));
        out3*=0.01851234567833455111;
        stepFilter2(out3,out3);
        out=input*(1-mWed_Dry)+(out3)*(mWed_Dry*0.00000161212345433);
    }
    
   
     para1=mModus;
    
}

void bitcrush_c::stepFilter1(double in, double &out) { 
    int32_T j;
    real_T rtb_DigitalFilter;
    double Level_dry=0.5-(mMix*0.5);
    double Level_wed= 0.1+(mMix*0.8);
    rtb_DigitalFilter = in * rtConstP.DigitalFilter_Coefficients[0];
    for (j = 0; j < 10; j++) {
        rtb_DigitalFilter += rtConstP.DigitalFilter_Coefficients[1 + j] *
        rtDW.DigitalFilter_states[j];
    
    }
   
    
    // Update delay line for next frame
    for (j = 8; j >= 0; j--) {
        rtDW.DigitalFilter_states[1 + j] = rtDW.DigitalFilter_states[j];
    }
    
    rtDW.DigitalFilter_states[0] = in;
 
   out = (in*Level_dry)+(rtb_DigitalFilter*(Level_wed));
}

void bitcrush_c::stepFilter2(double in, double &out) { 

    int32_T j;
    real_T rtb_DigitalFilter;
    double Level_dry=0.5-(mMix*0.5);
    double Level_wed= (mMix*0.2);
    // Consume delay line and beginning of input samples
    rtb_DigitalFilter = in * rtConstP2.DigitalFilter_Coefficients[0];
    for (j = 0; j < 10; j++) {
        rtb_DigitalFilter += rtConstP2.DigitalFilter_Coefficients[1 + j] *
        rtDW.DigitalFilter_states[j];
    }
    
    // Update delay line for next frame
    for (j = 8; j >= 0; j--) {
        rtDW.DigitalFilter_states[1 + j] = rtDW.DigitalFilter_states[j];
    }
    
    rtDW.DigitalFilter_states[0] = in;
 
    out = (in*Level_dry)+(rtb_DigitalFilter*Level_wed);
}
void bitcrush_c::stepFilter3(double in, double &out) {
    
    int32_T j;
    real_T rtb_DigitalFilter;
    double Level_dry=1-mMix;
    double Level_wed= 0.5+(mMix*0.5);
    // Consume delay line and beginning of input samples
    rtb_DigitalFilter = in * rtConstP4.DigitalFilter_Coefficients[0];
    for (j = 0; j < 10; j++) {
        rtb_DigitalFilter += rtConstP4.DigitalFilter_Coefficients[1 + j] *
        rtDW.DigitalFilter_states[j];
    }
    
    // Update delay line for next frame
    for (j = 8; j >= 0; j--) {
        rtDW.DigitalFilter_states[1 + j] = rtDW.DigitalFilter_states[j];
    }
    
    rtDW.DigitalFilter_states[0] = in;
    
    out = (in*Level_dry)+((rtb_DigitalFilter)*Level_wed);;
}



