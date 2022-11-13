#include "main.h"

/**
 * sqrt_check- Entry point
 * Description:function
 * @x: input variable
 * @y: input variable 2
 * Return: Always 0 (Success)
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - entry point 2
 * Description: function 2
 * @n: input variable 3
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));

}

