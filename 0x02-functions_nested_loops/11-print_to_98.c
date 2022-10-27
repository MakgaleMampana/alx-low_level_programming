#include "main.h"
#include <stdio.h>

/**
*print_to_98- entry point
*
* @n:passed variable into function
*description: 'print natural numbers from n to 98 inclusive'
*
*return: list of natural number upto 98
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("%d",n);
	}
	printf("\n");


}

