#include "main.h"
#include <stdio.h>

/**
 *print_array- entry point
 *
 * @a: input variable
 * @n: imput variable 2
 *
 * Description: prints n elements of an array of integers
 *
 * Return: interger elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ",  a[i]);

	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");

}
