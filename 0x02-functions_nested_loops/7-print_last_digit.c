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
	
	ld = (n % 10);

	if (n < 0)
	{
		
		ld = (ld * -1);
	}

	_putchar(ld + '0');
	return (ld);
}

