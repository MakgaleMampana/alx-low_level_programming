#include "main.h"

/**
 * _memset-  fills the first n bytes of the memory area
 *  pointed to by s with the constant byte b
 *  @n: input variable
 *  @s: input variable 2
 *  @b: input variable 3
 *
 *  Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}

