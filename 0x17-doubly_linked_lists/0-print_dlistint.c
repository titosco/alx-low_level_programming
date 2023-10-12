#include "lists.h"

/**
 * print_dlistint - prints elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int coun;

	coun = 0;

	if (h == NULL)
		return (coun);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		coun++;
		h = h->next;
	}

	return (coun);
}
