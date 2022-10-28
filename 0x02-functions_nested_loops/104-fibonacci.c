#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main- entry point
*
*description: 'prints the first 98 Fibonacci numbers'
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	unsigned long  i = 1;
	unsigned long  j = 2;
	unsigned long  x = (i + j);
	int count = 3;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");

	while (count <= 98)
	{

		printf("%lu", x);

		if (count < 98)
		{
			printf(", ");
		}
		i = j;
		j = x;
		x = (i + j);
		count++;
	}
	printf("\n");

	return (0);
}

