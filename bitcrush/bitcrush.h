
#ifndef BITCRUSH_H
#define BITCRUSH_H

// Include Files
#include <stddef.h>
#include <stdlib.h>
#include "../Source/rtwtypes.h"


#define ROUND(f) ((float)((f > 0.0) ? floor(f + 0.5) : ceil(f - 0.5)))

typedef struct {
    real_T DigitalFilter_states[10];     // '<S1>/Digital Filter'
    real_T DigitalFilter_states_i[10];   // '<S2>/Digital Filter'

} DWhb;

typedef struct {
 
    real_T DigitalFilter_Coefficients[11];
     real_T DigitalFilter_Coefficients_p[11];

} ConstP;

const ConstP rtConstP = {

    { -1.8909641389886624, 2.7615909004161461, -8.56254353864345,
        -0.89918879995313516, -0.92324894095120769, 0.0, 0.92324894095120769,
        0.89918879995313516, 8.56254353864345, -2.7615909004161461,
        1.8909641389886624 }
};
const ConstP rtConstP2 = {
  
    { -1.772745623368208, -6.0347240933899915, -12.033511199953844,
        -14.6422533122859, -11.232228542677895, 0.0, 11.232228542677895,
        14.6422533122859, 12.033511199953844, 6.0347240933899915, 1.772745623368208 }
};
const ConstP rtConstP3 = {
    
    { 0.236763575129664, -0.77869973830291328, 1.6285707258164743,
        -1.7831220717988636, 0.89075517355297618, 0.0, -0.89075517355297618,
        1.7831220717988636, -1.6285707258164743, 0.77869973830291328,
        -0.236763575129664 }
};
const ConstP rtConstP4 = {
    
    { -44.179225800476587, -218.44378393973173, -523.576979897608,
        -735.51467541286627, -561.87937257377143, 0.0, 561.87937257377143,
        735.51467541286627, 523.576979897608, 218.44378393973173, 44.179225800476587 }
};
class bitcrush_c{
    
   public:
    // Constructor
    bitcrush_c(){
    b_div_t=0.12345678965432;
    mBitnum = 0.5;
    mMix=0.0f;
    mWed_Dry = 0.0;
    para1=0;
    mMainMod = 1;
      
    }
    
    // Destructor
    ~bitcrush_c(){

    }

    void setBitNum(double bn){mBitnum=bn+0.2;}
    void setMix(double gs){mMix=gs;}
    void setDry(double d){mWed_Dry=d;}
    void SetModus(int m) { mModus=m;}
     double rt_roundd(double u);
     double getPara(){return para1;}
     void bitcrush(double input,double&out,int read);
     void stepFilter1(double in,double &out);
     void stepFilter2(double in,double &out);
     void stepFilter3(double in,double &out);

     void setMainMod(double p, double m)
     {
         if (m > 0.1)
         {
             mMainMod = 1 - (p * 0.5) - 0.5;
            
         }
         else
             mMainMod = 1;


          mWed_Dry *= mMainMod;
     }
    

private:
    double mModus;
    double mBitnum_T;
    double mBitnum;
    double b_div_t;
    double mMix_T;
    double mMix;
    double mWed_Dry;
    double mMainMod;

    DWhb rtDW;

    double para1;
};
#endif

