#include "main.h"

/**
*print_line- entry point
*
*@n: input variable
*
*description: 'print a line using _'
*
*return:_. n times
*/

void print_line(int n)
{
	int count = 1;

	if (n > 0)
	{
		while (count <= n)
		{
			_putchar('_');
			count++
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}


}

