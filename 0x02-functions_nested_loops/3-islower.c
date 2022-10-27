#include "main.h"

/**
*_islower- entry point
*
*@c: input variable
*description: 'check if c is lowercase'
*
*Return:1 if c is lowercase,else  0
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

