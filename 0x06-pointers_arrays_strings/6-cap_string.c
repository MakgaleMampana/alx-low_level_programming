#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * cap_string- entry point
 *
 * Description: function that capitalizes all words of a string.
 *@s: input variable
 *
 * Return: ch
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	int x = 32;
	int sp[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - x;
		}
		x = 0;

		for (j = 0; j <= 12; j++)
		{
			if (s[i] == sp[j])
			{
				j = 12;
				x = 32;
			}
		}
	}
	return (s);
}
