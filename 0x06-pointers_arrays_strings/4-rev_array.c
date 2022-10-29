#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_array- entry point
 *
 * Description: function that reverses the content of an array of integers
 *@a: input variable
 *@n: input variable 2
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int *s = a;
	int *f = a;

	n--;

	while (i < n)
	{
		i++;
	}
	while (j <= i)
	{
		x = *(s + j);
		*(s + j) = *(f + i);
		*(f + i) = x;
		j++;
		i--;
	}

}
