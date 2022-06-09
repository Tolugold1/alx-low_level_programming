#include "lists.h"

/**
 * sum_dlistint - sum of all integer in the list
 * @head: head pointer
 * Return: sum of integer in the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
