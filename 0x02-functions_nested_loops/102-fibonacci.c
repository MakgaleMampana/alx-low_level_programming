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
	int i = 1;
	int j = 2;
	int x = (i + j);
	int count = 3;

	printf("%d", i);
	printf(", ");
	printf("%d", j);
	printf(", ");

	while (count <= 50)
	{

		printf("%d", x);

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

