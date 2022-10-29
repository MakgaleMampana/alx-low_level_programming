#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcmp- entry point
 *
 * Description: function that copies a string
 *@s1: input variable
 *@s2: input variable 2
 *
 * Return: Always 0 (Succes)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			j = *(s1 + i) - *(s2 + i);
			return (j);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			j = *(s1 + i) - *(s2 + i);
			return (j);
		}
		i++;
	}
	return (0);

}
