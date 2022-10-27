#include "main.h"

/**
*_isalpha- entry point
*
*@c: input variable
*description: 'check if c is an alphabet'
*
*Return:1 if c is an alphabet,else  0
*/

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return (0);
	}

}

