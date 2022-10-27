#include "main.h"

/**
*print_sign- entry point
*
*@n: input variable
*description: 'check the sign of n (- or +)'
*
*Return:1 if n is +,0 if n is zero and -1 if is -
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

