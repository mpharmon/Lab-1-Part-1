/*
 * File:   switch.c
 * Author: Garrett
 *
 * Created on September 19, 2015, 10:46 AM
 */

#define TRISx_INPUT 1;

#define CNPUx_ENABLE 1;

void initSW2(){
  // Set Tristate Registers as Input
  TRISDbits.TRISD3 = TRISx_INPUT;
  
  // Enable Pull-Up Resistor
  CNPUDbits.CNPUD3 = CNPUx_ENABLE;
}
