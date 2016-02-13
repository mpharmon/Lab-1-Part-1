/*
 * File:   switch.c
 * Author: Garrett
 *
 * Created on September 19, 2015, 10:46 AM
 */

#include <xc.h>

#define TRISx_INPUT 1;

#define CNPUx_ENABLE 1;

void initSW(){
  // Set Tristate Registers as Input
  // FOR PRODUCTION: TRISDbits.TRISD3 = TRISx_INPUT;
  // FOR TESTING:
  TRISDbits.TRISD6 = TRISx_INPUT;
  // Enable Pull-Up Resistor
  // FOR PRODUCTION: CNPUDbits.CNPUD3 = CNPUx_ENABLE;
  // FOR TESTING:
  CNPUDbits.CNPUD6 = CNPUx_ENABLE;
  // Enable Change Notification on Port
  CNCONDbits.ON = 1;
  // Enable Interrupt on PIN
  CNENDbits.CNIED6 = 1;
  // Enable CN Interrupt
  IEC1bits.CNDIE = 1;
  // Put Interrupt Flag Down
  IFS1bits.CNDIF = 0;
  // Set Interrupt Priority
  IPC8bits.CNIP = 7;
}
