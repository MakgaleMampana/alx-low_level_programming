#include "main.h"

/**
 * _pow_recursion- Entry point
 * Description:function
 * @x: input variable
 * @y: input variable 2
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
