#include "lists.h"

/**
 * listint_len- entry
 * @h: input
 * Return: l
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
