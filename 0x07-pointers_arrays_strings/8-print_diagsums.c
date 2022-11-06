#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 *
 *  @a: input variable
 *  @size: input variable 2
 *
 *  Return:
 *  */

void print_diagsums(int *a, int size)
{
	int i, j;
	int total1 = 0, total2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		total1 = total1 + a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		total2 = total2 + a[j];
	}
	printf("%d, %d\n", total1, total2);

}

