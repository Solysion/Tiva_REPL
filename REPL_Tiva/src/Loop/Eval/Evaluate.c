/*
 * Evaluate.c
 *
 *  Created on: May 28, 2016
 *      Author: Victor
 */

// 1. Include section

#include "Evaluate.h"


// 2. Function declaration

int32_t LoopLib_Evaluate(char* g_cInput)
{
	int32_t i32CommandStatus = 0;
	i32CommandStatus = CmdLineProcess(g_cInput);

	return(i32CommandStatus);
}
