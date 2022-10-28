#include "main.h"

/**
*print_triangle- entry point
*
*@size: input variable
*
*description: 'print a triangle with #'
*
*return:# in a shape of triangle
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{

			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}

