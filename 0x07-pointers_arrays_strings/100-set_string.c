#include "main.h"
#include <stdio.h>

/**
*set_string- Entry Point
*Description: sets the value of a pointer to a char
*
*@s: input variable
*@to: input variable 2
*
*Return:
*/

void set_string(char **s, char *to)
{
	*s = to;
}
