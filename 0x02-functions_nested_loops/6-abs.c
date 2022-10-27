#include "main.h"

/**
*_abs- entry point
*
*@n: input variable
*description: 'returns abs value of n'
*
*Return: the absulute value of n
*/

int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = (n * -1);
		return (i);

	}
	else
	{
		return (n);
	}
}

