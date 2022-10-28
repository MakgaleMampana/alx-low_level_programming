#include "main.h"
#include <stdio.h>

/**
 *print_rev- entry point
 *
 * @s: input variable
 *
 * Description: prints a string, in reverse
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	int n;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (n = (count - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
