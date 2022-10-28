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
	int count = 1;
	int count_2 = 1;

	if (size > 0)
	{
		while (count <= size)
		{
			for (count_2 = 1; count_2 < size; count_2++)
			{
				_putchar(' ');
			}
			for (count_2 = 1; count_2 <= count; count_2++)
			{
				_putchar('#');
			}
			_putchar('\n');
			count++;

		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}


}

