#include <stdlib.h>

/**
 * array_iterator- entry point
 * @array: input variable
 * @size: input variable 2
 * @action: input variable 3
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
