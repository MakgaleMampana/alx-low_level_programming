#include "main.h"

/**
*print_last_digit- entry point
*
*@n: input variable
*description: 'print last digit of n'
*
*Return:the value of the last digit
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = (n * -1);
		ld = (n % 10);
	}
	else
	{
		ld = (n % 10);
	}

	_putchar(ld + '0');
	return (ld);
}

