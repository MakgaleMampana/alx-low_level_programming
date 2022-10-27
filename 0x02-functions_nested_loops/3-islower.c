#include "main.h"

/**
*_islower- entry point
*
*@c: input variable
*description: 'check if c is lowercase'
*
*return: return 1 if lowercase, 0 otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}

