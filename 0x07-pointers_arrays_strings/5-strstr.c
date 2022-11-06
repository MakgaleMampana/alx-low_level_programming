#include "main.h"
#include <stdio.h>
/**
 * _strstr- finds the first occurrence of the substring needle
 *
 *  @haystack: input variable
 *  @needle: input variable 2
 *
 *  Return: pointer to the beginning of the located substring
 *  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);

}

