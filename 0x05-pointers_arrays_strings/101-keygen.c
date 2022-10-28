#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 *
 * Description: generates random valid passwords
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char str[100];
	int i = 0;
	int r = 0;
	int seed = 0;

	srand (time(NULL));

	for (i = 0; seed <= 2644; i++)
	{
		r = (rand() % 25) + 65;

		str[i] = r;
		seed = seed + r;
	}
	str[i++] = 2772 - seed;
	str[i++] = '\0';

	printf("%s\n", str);

	return (0);
}
