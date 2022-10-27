#include "main.h"

/**
*_islower- entry point
*
*description: 'check if c is lowercase'
*
*return: always 0 (succes)
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);

	}
	else
	{
		return(0);
	}

}

