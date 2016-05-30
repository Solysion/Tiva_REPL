/*
 * Commands.c
 *
 *  Created on: May 28, 2016
 *      Author: user
 */

// 1. Include section

#include "../Print/Screens.h"

#include "../../Config/Core/Core.h"
#include "Commands.h"


// 2. Variable declaration section


//*****************************************************************************
//
// Table of valid command strings, callback functions and help messages.  This
// is used by the command line module.
//
//*****************************************************************************
tCmdLineEntry g_psCmdTable[] =
{
    {"help",  	CMD_help,    		"-> Shows help menu."},
	{"clear", 	CMD_clearscreen,    "-> Clear screen."},
	{"clock", 	CMD_coreclock,      "-> Shows core clock value."},
	{"temp",  	CMD_temp,       	"-> Shows internal temperature value, in \u00b0C."},
	{ 0, 0, 0 }
};

// 3. Function declaration section

//*****************************************************************************
//
// Command: help
//
// Print the help strings for all commands.
//
//*****************************************************************************
int CMD_help(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    return(CMD_HELP);
}

//*****************************************************************************
//
// Command: clear
//
// Clears command line screen.
//
//*****************************************************************************
int CMD_clearscreen(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    return(CMD_CLEARSCREEN);
}

// ****************************************************************************
//
// Command: clock
//
// Shows core clock value.
//
// ****************************************************************************

int CMD_coreclock(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    return(CMD_CORECLOCK);
}

// ****************************************************************************
//
// Command: temp
//
// Measure and show processor's internal temperature (1 sample).
//
// ****************************************************************************

int CMD_temp(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    ConfigLib_Temp_Measure();

    return(CMD_TEMP);
}


