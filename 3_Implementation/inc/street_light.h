#ifndef __STREET_LIGHT_H_
#define __STREET_LIGHT_H_
/**
 * @file street_light.h
 * @author Rithu Somaiah ()
 * @brief Project to automatically control street lights based on LDR input
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Include files
 */
#include "proj_config.h"
#include <avr/io.h>
#include <util/delay.h>

/**
 * Function Definitions
 */

/**
 * @brief Setup the Atmega328 MCU input/output ports
 * 
 */
void mcu_ports();

/**
 * @brief Initialize the ADC for microcontroller
 * 
 */

void ADC_initialize();

/**
 * @brief Get the input from LDR
 * 
 * @return uint16_t 
 */

uint16_t LDR_input();

#endif /** __STREET_LIGHT_H_ */