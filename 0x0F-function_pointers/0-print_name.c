#include <stdlib.h>
/**
 * print_name- entry point
 * @name: input variable
 * @f: input variable 2
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
