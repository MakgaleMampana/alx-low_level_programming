#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main- entry point
*
*description: 'prints the sum of even valued terms of the Fibonacci numbers'
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	long  i = 1;
	long  j = 2;
	long  x = (i + j);
	long sum = j;


	while (x <= 4000000)
	{

		if (x % 2 == 0)
		{
			sum = (sum + x);
		}

		i = j;
		j = x;
		x = (i + j);

	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}

