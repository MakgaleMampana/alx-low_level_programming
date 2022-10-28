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
	long long i = 1;
	long long j = 2;
	long long x = (i + j);
	int count = 3;

	printf("%llu", i);
	printf(", ");
	printf("%llu", j);
	printf(", ");

	while (count <= 50)
	{

		printf("%llu", x);

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

