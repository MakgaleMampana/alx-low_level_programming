#include "main.h"

/**
 * get_prime - Entry point
 * Description:function
 * @x: input variable
 * @y: input variable 2
 * Return: Always 0 (Success)
 */
int get_prime(int x, int y)
{
	if (y == x)
	{
		return (1);
	}
	else if (y % x == 0)
	{
		return (0);
	}
	else
	{
		return (get_prime(x + 1, y));
	}
}

/**
 * is_prime_number - entry point 2
 * Description: function 2
 * @n: input variable 3
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (get_prime(2, n));

}

