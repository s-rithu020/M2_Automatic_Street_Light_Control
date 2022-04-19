#include "street_light.h"

uint16_t LDR_input()
{
    _delay_ms(10);
    ADCSRA |= (1<<ADSC);

    while(ADCSRA & (1<<ADSC));

    _delay_ms(10);
    return(ADC);
}