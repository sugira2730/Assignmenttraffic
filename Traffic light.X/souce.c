/*
 * File:   souce.c
 * Author: SUGIRA
 *
 * Created on July 18, 2021, 3:36 PM
 */

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    
  TRISB=0B00000000;
  PORTB=0x00;
  

    while(1)
    {
        
       PORTBbits.RB0=1;
       __delay_ms(3000);
       PORTBbits.RB0=0; 
       
        
       PORTBbits.RB1=1;
       __delay_ms(3000);
       PORTBbits.RB1=0;
       
         
       PORTBbits.RB2=1;
       __delay_ms(3000);
       PORTBbits.RB2=0;
       
         
    }
    return;
}
