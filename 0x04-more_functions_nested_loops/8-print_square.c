#include "main.h"

/**
*print_square- entry point
*
*@size: input variable
*
*description: 'print a square with #'
*
*return:# in a shape of squre
*/

void print_square(int size)
{
	int count = 1;
	int count_2 = 1;

	if (size > 0)
	{
		while (count <= size)
		{
			for (count_2 = 1; count_2 <= size; count_2++)
			{
				_putchar('#');
			}
			_putchar('\n');
			count++;

		}
	}
	else
	{
		_putchar('\n');
	}


}

