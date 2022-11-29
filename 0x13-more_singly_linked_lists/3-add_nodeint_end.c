#include "lists.h"

/**
 * add_nodeint_end- entry
 * @head- input
 * @n: input 2
 * Return: l
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	end = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (end);
}

