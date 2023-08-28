#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of a linked list
 * @head: pointer to the first element in list
 * @n: data to insert in new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mod;
	listint_t *temp = *head;

	mod = malloc(sizeof(listint_t));
	if (!mod)
		return (NULL);

	mod->n = n;
	mod->next = NULL;

	if (*head == NULL)
	{
		*head = mod;
		return (mod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = mod;

	return (mod);
}

