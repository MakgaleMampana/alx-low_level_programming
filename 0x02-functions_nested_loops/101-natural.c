#include "main.h"
#include <stdio.h>

/**
*main- entry point
*
*description: 'sum multiples of 3 or 5 that are below 1024'
*@sum: is the sum alue of all the values with multiple of 3 or 5
*@n:is each value below 1024
*Return: Always 0 (Succes)
*/

int main(void)
{
	int sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = (sum + n);
		}
		n++;
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}

