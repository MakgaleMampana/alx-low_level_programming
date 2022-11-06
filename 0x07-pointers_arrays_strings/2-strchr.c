#include "main.h"

/**
 *char *_strchr- Entry point
 *Description: locates a character in a string.
 *
 *@s: input variable
 *@c: input variable 2
 *
 *Return: a pointer to the first occurrence of the characte
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);

}

