#include "main.h"
#include <stdio.h>

/**
 *rev_string- entry point
 *
 * @s: input variable
 *
 * Description: reverse a string
 *
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char str = s[0];
	int i = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		str = s[i];
		s[i] = s[count];
		s[count] = str;
	}
}
