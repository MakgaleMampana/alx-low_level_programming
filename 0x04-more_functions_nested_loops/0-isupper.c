#include "main.h"

/**
*_isupper- entry point
*
*@c: input variable
*description: 'check if c is uppercase'
*
*Return:1 if c is uppercase,else  0
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);
	}

}

