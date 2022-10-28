#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy- entry point
 *
 * @dest: input variable
 * @src: imput variable 2
 *
 * Description: copies the string pointed to by src
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] =  src[i];

	}
	return (dest);
}
