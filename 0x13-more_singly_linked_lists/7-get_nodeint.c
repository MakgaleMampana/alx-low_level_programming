#include "lists.h"

/**
 * get_nodeint_at_index- entry
 * @head:
 * @index:
 * Return: l
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (!head)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}

