#include "main.h"

/**
*more_numbers- entry point
*
*description: 'numbers(0-14) printed 10 times'
*
*return:numbers 0-14, 10 times
*/

void more_numbers(void)
{
	int i = 0;
	int l = 1;

	while (l <= 10)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');

		}
		l++;
		_putchar('\n');
	}

}

