#include "main.h"

/**
*print_alphabet : the function will print letters in lowercase
*
*description : lowercase letters printed
*
*return : always 0 (sucess)
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

