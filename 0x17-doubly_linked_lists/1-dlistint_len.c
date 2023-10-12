#include "lists.h"

/**
 * dlistint_len - returns the num of elements in
 * double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int coun;

	coun = 0;

	if (h == NULL)
		return (coun);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		coun++;
		h = h->next;
	}

	return (coun);
}
