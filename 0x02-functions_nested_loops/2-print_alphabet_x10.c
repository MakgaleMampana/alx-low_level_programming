#include "main.h"

/**
*print_alphabet_x10- entry point
*
*description: 'lowercase letters printed 10 times'
*
*return: always 0 (succes)
*/

void print_alphabet_x10(void)
{
	int i = 'a';
	int l = 1;

	while (l <= 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		l++;
		_putchar('\n');
	}

}

