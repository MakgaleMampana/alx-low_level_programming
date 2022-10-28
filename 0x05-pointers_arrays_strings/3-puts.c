#include "main.h"
#include <stdio.h>

/**
 *_puts- entry point
 *
 * @str: input variable
 *
 * Description: prints a string to stdout
 *
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
