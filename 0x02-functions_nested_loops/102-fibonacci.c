#include "main.h"
#include <stdio.h>

/**
*main- entry point
*
*description: 'prints the first 50 Fibonacci numbers'
*
* Return: Always 0 (Succes)
*/

int main(void)
{
	long long int i = 1;
	long long int j = 2;
	long long int x = (i + j);
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
		i = j;
		j = x;
		x = (i + j);
		count++;
	}
	printf("\n");

	return (0);
}

