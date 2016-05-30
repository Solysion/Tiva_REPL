/*
 * Temp.h
 *
 *  Created on: 30 de mai de 2016
 *      Author: Victor
 */

#ifndef SRC_CONFIG_TEMP_TEMP_H_
#define SRC_CONFIG_TEMP_TEMP_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>

#include "inc/hw_types.h"
#include "inc/hw_memmap.h"

#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/adc.h"


// 2. Define section

#define ADC_SEQUENCE    		3
#define ADC_STEP        		0
#define ADC_INITDELAY_CYCLES	300


// 3. Prototype section

void ConfigLib_Temp_ADC0Set(void);
void ConfigLib_Temp_Measure(void);
uint32_t TempCelsius_IntegerPart_Read(void);
uint32_t TempCelsius_DecimalPart_Read(void);


#endif /* SRC_CONFIG_TEMP_TEMP_H_ */
