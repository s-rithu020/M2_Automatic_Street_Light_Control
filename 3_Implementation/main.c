/**
 * @file main.c
 * @author Rithu K S ()
 * @brief Project to control street lights automatically with LDR
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "proj_config.h"
#include "street_light.h"

void mcu_ports();
int map(int i, int in_min, int in_max, int out_min, int out_max);
void ADC_initialize();

int main(void)
{
    mcu_ports();
    ADC_initialize();
    
    while(1)
    {
        switch(map(LDR_input(),0,500,0,3)){
            case 0:
                PORTB&=~(1<<LED1);
                PORTC&=~(1<<LED2);
                PORTD&=~(1<<LED3);
                break;
            
            case 1:
                PORTB=(1<<LED1);
                PORTC&=~(1<<LED2);
                PORTD&=~(1<<LED3);
                break;

            case 2:
                PORTB=(1<<LED1);
                PORTC=(1<<LED2);
                PORTD&=~(1<<LED3);
                break;

            case 3:
                PORTB=(1<<LED1);
                PORTC=(1<<LED2);
                PORTD=(1<<LED3);
                break;
        }
        
    }
    return 0;
}

void mcu_ports()
{
    DDRB = 0xFFu; 
    PORTB = 0x00u;

    DDRC = 0xFFu;
    DDRC&=~(1<<0);
    PORTC = 0x00u;

    DDRD = 0xFFu;
    PORTD = 0x00u;
}

int map(int i, int in_min, int in_max, int out_min, int out_max)
{
    return (i - in_min)*(out_max - out_min) / (in_max - in_min) + out_min;
}

void ADC_initialize()
{
    ADCSRA|=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
    ADMUX = (1<<REFS0);
}