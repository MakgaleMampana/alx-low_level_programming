#include "main.h"

/**
*jack_bauer- entry point
*
*description: 'print every min of the 24 hours'
*
*Return: every min of 24 hours
*/

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}


