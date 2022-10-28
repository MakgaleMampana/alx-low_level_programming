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

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}
	_putchar('\n');

}

