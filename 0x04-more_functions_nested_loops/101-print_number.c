#include "main.h"
#include <stdlib.h>

/**
*print_number- entry point
*
*@n: input variable
*
*description: 'prints an integer'
*
*Return:an interger
*/

void print_number(int n)
{
	if (abs(n) >= 10)
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar((abs(n) / 10) + '0');
			_putchar((abs(n) % 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar(abs(n) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}

}

