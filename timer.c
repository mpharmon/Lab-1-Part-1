/*
 * File:   timer.c
 * Authors:
 *
 * Created on December 30, 2014, 8:07 PM
 */

#include <xc.h>
#include <sys/attribs.h>

//Uses timer 2
void delayUs(unsigned int delay){
  TMR1 = 0;// Reset Timer Register
  PR1 = delay * 10;// Period Register; Exponents of uS and MHz cancel
  T1CONbits.TCKPS = 0;// Prescaler to 1
  IEC0bits.T1IE = 1;// Interrupt Enabled
  IFS0bits.T1IF = 0;// Interrupt Flag Down
  IPC1bits.T1IP = 7;// Interrupt Priority Default
  T1CONbits.ON = 1;// Timer On
  while(T1CONbits.ON){};// Wait Loop
}

void __ISR(_TIMER_1_VECTOR,IPL7SRS) _T1Interrupt(void){
  IFS0bits.T1IF = 0;
  T1CONbits.ON = 0;
  TMR1 = 0;
}