#include "lists.h"

/**
 * free_listint2- entry
 * @head: input
 * Return: l
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			i = (*head)->next;
			free(*head);
			*head = i;
		}
		free(*head);
		*head = NULL;
	}
}
