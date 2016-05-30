/*
 * REPL.c
 *
 *  Created on: May 29, 2016
 *      Author: Victor
 */

// 1. Include section

#include "REPL.h"


// 2. Function declaration section

void REPL_MainLoop(void)
{
	int32_t i32CommandStatus = 0;

	while(1)				// Loop;
	{
		UARTprintf(">>");  	// Command line characters;

		LoopLib_Read();												// Read the command;
		i32CommandStatus = LoopLib_Evaluate(g_cInput_Read());		// Evaluate the command;
		LoopLib_Print(i32CommandStatus);							// Print answer;
	}
}
