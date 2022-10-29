#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncat- entry point
 *
 * Description: function that concatenates two strings
 *@dest: input variable
 *@src: input variable 2
 *@n: input variable 3
 *
 * Return: concatinated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}
	return (dest);
}
