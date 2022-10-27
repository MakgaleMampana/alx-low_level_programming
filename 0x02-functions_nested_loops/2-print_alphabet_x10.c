#include "main.h"

/**
*print_alphabet- entry point
*
*description: 'lowercase letters printed'
*
*return: always 0 (succes)
*/

void print_alphabet(void)
{
	int i = 'a';
	int l = 1;

	while (l <= 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		l++
		_putchar('\n');
	}

}

