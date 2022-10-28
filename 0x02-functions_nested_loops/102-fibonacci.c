#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main- entry point
*
*description: 'prints the first 50 Fibonacci numbers'
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	long  i = 1;
	long  j = 2;
	long  x = (i + j);
	int count = 3;

	printf("%ld", i);
	printf(", ");
	printf("%ld", j);
	printf(", ");

	while (count <= 50)
	{

		printf("%ld", x);

		if (count < 50)
		{
			printf(", ");
		}
		i = abs(j);
		j = abs(x);
		x = abs((i + j));
		count++;
	}
	printf("\n");

	return (0);
}

