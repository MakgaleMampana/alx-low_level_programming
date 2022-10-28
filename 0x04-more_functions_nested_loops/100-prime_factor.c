#include "main.h"
#include <stdio.h>
#include <math.h>

/**
*main- entry point
*
*description: 'print the max prime factor of 612852475143'
*
*Return: Always 0 (Success)
*/

int main(void)
{
	long int n = 612852475143;
	int i;
	long int max_pf;

	while (n % 2 == 0)
	{
		max_pf = 2;
		n = n/2;
	}
	for (i = 3; i <= sqrt(n); i = i +2)
	{
		while (n % i == 0)
		{
			max_pf = i;
			n = n/i;
		}
	}
	if (n > 2)
	{
		max_pf = n;
	}
	printf("%ld", max_pf);
	printf("\n");

	return (0);
}

