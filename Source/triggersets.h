/*
  ==============================================================================

    trfunktions.h
    Created: 7 Jun 2021 11:36:44am
    Author:  Roger Hug

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>




struct triggerInitSets
{
    
 //-------------------------------------kicks----------------------------
        int start1a[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0};
        int start1b[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0};
        int start1c[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0};
        int start1d[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0};
        int start1e[16]={1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
        int start1f[16]={1,0,0,1,0,0,0,1,1,1,0,0,0,0,1,0};
        int start1g[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0};
        int start1h[16]={1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0};
        int start1i[16]={1,0,0,0,0,0,1,0,1,1,0,0,1,0,1,0};
        int start1j[16]={ 1,0,1,0,1,0,1,1,1,1,0,1,1,1,1,1 };
        
        int start2a[16]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int start2b[16]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
        int start2c[16]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
        int start2d[16]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
        int start2e[16]={1,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0};
        int start2f[16]={1,0,0,1,0,0,0,1,0,1,0,0,0,0,1,0};
        int start2g[16]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
        int start2h[16]={1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0};
        int start2i[16]={0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1};
        int start2j[16] ={ 1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0 };

        //------------------------------snares -----------------------------                   
        int startS1a[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS1b[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS1c[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS1d[16] = { 0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0 };
        int startS1e[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0 };
        int startS1f[16] = { 0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0 };
        int startS1g[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0 };
        int startS1h[16] = { 0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0 };
        int startS1i[16] = { 0,0,1,0,1,0,1,1,1,1,0,1,1,1,1,1 };
        int startS1j[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0 };

        int startS2a[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS2b[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS2c[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS2d[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0 };
        int startS2e[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0 };
        int startS2f[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS2g[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0 };
        int startS2h[16] = { 0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0 };
        int startS2i[16] = { 0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0 };
        int startS2j[16] = { 0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0 };
        //--------------------------hihats-----------------------------

        int startH1a[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
        int startH1b[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int startH1c[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int startH1d[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int startH1e[16] = { 0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0 };
        int startH1f[16] = { 0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0 };
        int startH1g[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int startH1h[16] = { 0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0 };
        int startH1i[16] = { 0,0,1,0,0,0,1,1,0,1,0,1,1,1,1,1 };
        int startH1j[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };

        int startH2a[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
        int startH2b[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0 };
        int startH2c[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int startH2d[16] = { 0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0 };
        int startH2e[16] = { 0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0 };
        int startH2f[16] = { 0,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0 };
        int startH2g[16] = { 1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0 };
        int startH2h[16] = { 0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0 };
        int startH2i[16] = { 0,0,1,0,0,0,1,1,0,1,0,1,1,1,1,1 };
        int startH2j[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };

        // -----------------------percussions-------------------------
        int start1P1a[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
        int start1P1b[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int start1P1c[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int start1P1d[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int start1P1e[16] = { 0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0 };
        int start1P1f[16] = { 0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0 };
        int start1P1g[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int start1P1h[16] = { 0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0 };
        int start1P1i[16] = { 0,0,1,0,0,0,1,1,0,1,0,1,1,1,1,1 };
        int start1P1j[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };

        int start1P2a[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
        int start1P2b[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0 };
        int start1P2c[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };
        int start1P2d[16] = { 0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0 };
        int start1P2e[16] = { 0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0 };
        int start1P2f[16] = { 0,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0 };
        int start1P2g[16] = { 1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0 };
        int start1P2h[16] = { 0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0 };
        int start1P2i[16] = { 0,0,1,0,0,0,1,1,0,1,0,1,1,1,1,1 };
        int start1P2j[16] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0 };



   Value *init1(int s)
    
    {
       for (int i = 0; i < 16; i++) {
           if (s == 1) {

               trigger1A[0].setValue("0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0");
               /*
               trigger1A[1].setValue(start1b[i]);
               trigger1A[2].setValue(start1c[i]);
               trigger1A[3].setValue(start1d[i]);
               trigger1A[4].setValue(start1e[i]);
               trigger1A[5].setValue(start1f[i]);
               trigger1A[6].setValue(start1g[i]);
               trigger1A[7].setValue(start1h[i]);
               trigger1A[8].setValue(start1i[i]);
               trigger1A[9].setValue(start1j[i]);
               */
           }

           /*

           if (s == 2) {
               trigger1A[0].setValue(start2a[i]);
               trigger1A[1].setValue(start2b[i]);
               trigger1A[2].setValue(start2c[i]);
               trigger1A[3].setValue(start2d[i]);
               trigger1A[4].setValue(start2e[i]);
               trigger1A[5].setValue(start2f[i]);
               trigger1A[6].setValue(start2g[i]);
               trigger1A[7].setValue(start2h[i]);
               trigger1A[8].setValue(start2i[i]);
               trigger1A[9].setValue(start2j[i]);
           }
           */
       }
        return trigger1A;
      
    }
   Value* init2(int s)

   {
       for (int i = 0; i < 16; i++)
           if (s == 1) {

               trigger1B[0].setValue(startS1a[i]);
               trigger1B[1].setValue(startS1b[i]);
               trigger1B[2].setValue(startS1c[i]);
               trigger1B[3].setValue(startS1d[i]);
               trigger1B[4].setValue(startS1e[i]);
               trigger1B[5].setValue(startS1f[i]);
               trigger1B[6].setValue(startS1g[i]);
               trigger1B[7].setValue(startS1h[i]);
               trigger1B[8].setValue(startS1i[i]);
               trigger1B[9].setValue(startS1j[i]);





               if (s == 2) {
                   trigger1B[0].setValue(startS2a[i]);
                   trigger1B[1].setValue(startS2b[i]);
                   trigger1B[2].setValue(startS2c[i]);
                   trigger1B[3].setValue(startS2d[i]);
                   trigger1B[4].setValue(startS2e[i]);
                   trigger1B[5].setValue(startS2f[i]);
                   trigger1B[6].setValue(startS2g[i]);
                   trigger1B[7].setValue(startS2h[i]);
                   trigger1B[8].setValue(startS2i[i]);
                   trigger1B[9].setValue(startS2j[i]);
               }
           }
       return trigger1B;

   }
  
   Value* init3(int s)

   {
       for (int i = 0; i < 16; i++)
           if (s == 1) {

               trigger1C[0].setValue(startH1a[i]);
               trigger1C[1].setValue(startH1b[i]);
               trigger1C[2].setValue(startH1c[i]);
               trigger1C[3].setValue(startH1d[i]);
               trigger1C[4].setValue(startH1e[i]);
               trigger1C[5].setValue(startH1f[i]);
               trigger1C[6].setValue(startH1g[i]);
               trigger1C[7].setValue(startH1h[i]);
               trigger1C[8].setValue(startH1i[i]);
               trigger1C[9].setValue(startH1j[i]);





               if (s == 2) {
                   trigger1C[0].setValue(startH2a[i]);
                   trigger1C[1].setValue(startH2b[i]);
                   trigger1C[2].setValue(startH2c[i]);
                   trigger1C[3].setValue(startH2d[i]);
                   trigger1C[4].setValue(startH2e[i]);
                   trigger1C[5].setValue(startH2f[i]);
                   trigger1C[6].setValue(startH2g[i]);
                   trigger1C[7].setValue(startH2h[i]);
                   trigger1C[8].setValue(startH2i[i]);
                   trigger1C[9].setValue(startH2j[i]);
               }
           }
       return trigger1C;

   }

   Value* init4(int s)

   {
       for (int i = 0; i < 16; i++)
           if (s == 1) {

               trigger1D[0].setValue(start1P1a[i]);
               trigger1D[1].setValue(start1P1b[i]);
               trigger1D[2].setValue(start1P1c[i]);
               trigger1D[3].setValue(start1P1d[i]);
               trigger1D[4].setValue(start1P1e[i]);
               trigger1D[5].setValue(start1P1f[i]);
               trigger1D[6].setValue(start1P1g[i]);
               trigger1D[7].setValue(start1P1h[i]);
               trigger1D[8].setValue(start1P1i[i]);
               trigger1D[9].setValue(start1P1j[i]);





               if (s == 2) {
                   trigger1D[0].setValue(start1P2a[i]);
                   trigger1D[1].setValue(start1P2b[i]);
                   trigger1D[2].setValue(start1P2c[i]);
                   trigger1D[3].setValue(start1P2d[i]);
                   trigger1D[4].setValue(start1P2e[i]);
                   trigger1D[5].setValue(start1P2f[i]);
                   trigger1D[6].setValue(start1P2g[i]);
                   trigger1D[7].setValue(start1P2h[i]);
                   trigger1D[8].setValue(start1P2i[i]);
                   trigger1D[9].setValue(start1P2j[i]);
               }
           }
       return trigger1D;

   }
    
    int **trset1()
    {
     int trt1[10][16];

    }
    
    
    Value *trigger1A;
    Value *trigger1B;
    Value *trigger1C;
    Value *trigger1D;

    


private:


};
