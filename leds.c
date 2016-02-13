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
  TRISDbits.TRISD1 = TRISx_OUTPUT;
  TRISDbits.TRISD2 = TRISx_OUTPUT;
  
  // Set Initial States
  LATDbits.LATD1 = LATx_HIGH;
  LATDbits.LATD2 = LATx_HIGH;
}