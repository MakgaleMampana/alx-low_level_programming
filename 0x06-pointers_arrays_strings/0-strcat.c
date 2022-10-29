#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcat- entry point
 *
 * Description: function that concatenates two strings
 *@dest: input variable
 *@src: input variable 2
 *
 * Return: concatinated strings
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
	{
	}
	return (dest);
}
