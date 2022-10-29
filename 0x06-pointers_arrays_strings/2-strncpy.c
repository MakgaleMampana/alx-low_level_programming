#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncpy- entry point
 *
 * Description: function that copies a string
 *@dest: input variable
 *@src: input variable 2
 *@n: input variable 3
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
