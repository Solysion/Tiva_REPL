/*
 * UC_Core.h
 *
 *  Created on: 28/08/2015
 *      Author: Victor
 */

#ifndef TEST_BOARD_UC_CORE_UC_CORE_H_
#define TEST_BOARD_UC_CORE_UC_CORE_H_

// 1. Include section

#include <stdbool.h>
#include <stdint.h>

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"


// 2. Prototype section

void ConfigLib_CoreClock_Set80MHz(void);
uint32_t ConfigLib_CoreClock_Get(void);


#endif /* TEST_BOARD_UC_CORE_UC_CORE_H_ */


