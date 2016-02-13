/*
* File:   leds.c
* Author: 
*
* Created on December 27, 2014, 1:31 PM
*/

#include <xc.h>

#define TRISx_OUTPUT 0;

#define LATx_HIGH 1;

void initLEDs(){
  // Set Tristate Registers as Outputs
  //FOR PRODUCTION: TRISDbits.TRISD1 = TRISx_OUTPUT;
  //FOR TESTING:
  TRISDbits.TRISD0 = TRISx_OUTPUT;
  //FOR PRODUCTION: TRISDbits.TRISD2 = TRISx_OUTPUT;
  //FOR TESTING:
  TRISDbits.TRISD2 = TRISx_OUTPUT;
}