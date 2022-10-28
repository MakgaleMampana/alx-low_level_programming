#include "main.h"

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
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	/*_putchar('\n');*/


}

