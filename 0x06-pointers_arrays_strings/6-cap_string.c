#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * cap_string- entry point
 *
 * Description: function that capitalizes all words of a string.
 *@ch: input variable
 *
 * Return: ch
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
		{
			*(ch + i) = *(ch + i) - ' ';
		}
		i++;
	}
	return (ch);


}
