#include "main.h"
#include <stdio.h>

/**
*print_most_numbers- entry point
*
*description: 'print numbers from 0 to 9 skip 2 and 4'
*
*return: list of numbers from 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if ((n != 2) && (n != 4))
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
