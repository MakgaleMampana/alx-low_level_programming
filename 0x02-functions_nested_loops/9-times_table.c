#include "main.h"

/**
*times_table- entry point
*
*description: 'print 9 times table'
*
*Return: table
*/

void times_table(void)
{
	int r;
	int c;
	int i;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			i = (r * c);
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((i % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}

}

