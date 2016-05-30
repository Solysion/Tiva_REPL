/*
 * UC_Core.c
 *
 *  Created on: 28/08/2015
 *      Author: Victor
 */

// 1. Include section

#include "Core.h"


// 2. Function declaration section

// 2.1. Configure and enable core clock at 80 MHz;

void ConfigLib_CoreClock_Set80MHz(void)
{
	SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
}

// 2.2 Returns core clock value.

uint32_t ConfigLib_CoreClock_Get(void)
{
	return(SysCtlClockGet());
}


