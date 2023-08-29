#include "lists.h"

/**
 * sum_listint - Function that calculates the sum of the data
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}

