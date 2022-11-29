#include "lists.h"

/**
 * print_listint- entry point
 * @h: input
 * Return: list
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
