#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *teng;

	if (head == NULL)
		return;

	while (*head)
	{
		teng = (*head)->next;
		free(*head);
		*head = teng;
	}

	*head = NULL;
}

