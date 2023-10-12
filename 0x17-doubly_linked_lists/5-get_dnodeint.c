#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int mass;
	dlistint_t *tmp;

	mass = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == mass)
	return (tmp);
	mass++;
	tmp = tmp->next;
	}
	return (NULL);
}
