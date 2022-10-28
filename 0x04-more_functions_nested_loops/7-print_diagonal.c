#include "main.h"

/**
*print_diagonal- entry point
*
*@n: input variable
*
*description: 'print diagonal \_'
*
*return:\, n times
*/

void print_diagonal(int n)
{
	int count = 1;
	int count_2 = 1;

	if (n > 0)
	{
		while (count <= n)
		{
			while (count_2 < count)
			{
				_putchar(' ');
				count_2++;
			}

			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}


}

