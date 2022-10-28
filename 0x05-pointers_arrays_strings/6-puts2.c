#include "main.h"
#include <stdio.h>

/**
 *puts2- entry point
 *
 * @str: input variable
 *
 * Description:prints every other character of a string
 *
 * Return: string characters
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
		_putchar('\n');
}
