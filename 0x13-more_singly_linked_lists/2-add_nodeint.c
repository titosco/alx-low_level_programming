#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mod;

	mod = malloc(sizeof(listint_t));
	if (!mod)
		return (NULL);

	mod->n = n;
	mod->next = *head;
	*head = mod;

	return (mod);
}

