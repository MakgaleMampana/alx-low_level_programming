#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint- entry
 * @head: input
 * Return: l
 */
void free_listint(listint_t *head)
{
	listint_t *h, *i;

	h = head;
	if (head != NULL)
	{
		while (h != NULL)
		{
			i = h;
			h = h->next;
			free(i);
		}
		free(h);
	}
}
