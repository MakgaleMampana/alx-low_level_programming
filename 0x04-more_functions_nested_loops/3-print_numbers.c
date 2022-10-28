#include "main.h"
#include <stdio.h>

/**
*print_numbers- entry point
*
*description: 'print numbers from 0 to 9'
*
*return: list of numbers from 0 to 9
*/

void print_numbers(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar("\n");
}
