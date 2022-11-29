#include "lists.h"

/**
 * pop_listint- entry
 * @head: input
 * Return: l
 */
int pop_listint(listint_t **head)
{
	listint_t *i = *head;
	int x;

	if (*head != NULL)
	{
		x = i->n;
		free(*head);
		*head = i->next;
		return (x);
	}
	return (0);
}
