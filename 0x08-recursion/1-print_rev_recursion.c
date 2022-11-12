#include "main.h"

/**
 * _puts_rev_recursion-Entry point
 * Description:function
 * @s: input variable
 * Return :
 */
void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
	_putchar(*s);

}
