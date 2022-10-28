#include "main.h"

/**
 *_strlen- entry point
 *
 * @s: input variable
 *
 * Description:  return legnth of a given string
 *
 * Return : length of the string
 */
int _strlen(char *s)
{
	int i = 1;
	int j = 0;
	char c = s[0];

	for (c = s[0]; c != '\0'; c = s[i++])
	{
		j++;
	}
	return (j);
}
