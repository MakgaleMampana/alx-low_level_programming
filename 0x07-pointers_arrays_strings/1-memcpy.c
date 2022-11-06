#include "main.h"

/**
 * _memset- copies n bytes from memory area src to memory area dest
 *
 *  @dest: input variable
 *  @src: input variable 2
 *  @n: input variable 3
 *
 *  Return: a pointer to dest
 *  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}

