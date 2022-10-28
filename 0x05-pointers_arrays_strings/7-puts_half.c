#include "main.h"
#include <stdio.h>

/**
 *puts_half- entry point
 *
 * @str: input variable
 *
 * Description: prints half of a string
 * If the number of characters is odd,
 * the function should print the last n characters
 *
 * Return: string characters
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	j = (l / 2);

	if ((l % 2) == 1)
	{
		j = ((l + 1) / 2);
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
