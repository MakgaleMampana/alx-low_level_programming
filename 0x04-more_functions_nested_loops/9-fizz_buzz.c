#include "main.h"
#include <stdio.h>

/**
*main- entry point
*
*description: 'print numbers between 1 and 100,'
*if number is multiples of three print Fizz
*if number is multiples of five print Buzz
*if number is  multiples of both three and five print FizzBuzz
*Each number or word should be separated by a space
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");

		}
		else if (n % 3 == 0)
		{
			printf("Fizz");

		}
		else if (n % 5 == 0)
		{
			printf("Buzz");

		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
