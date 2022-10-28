#include "main.h"

/**
 * swap_int- entry point
 *
 * @a: input variable number 1
 * @b: input variable number 2
 *
 * Description:  takes two int varaibles and swap their values
 *
 * Return : a & b
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
