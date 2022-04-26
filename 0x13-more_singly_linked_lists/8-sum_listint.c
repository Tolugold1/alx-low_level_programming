#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: head pointer
 * Return: result.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;

		if (head->next)
		{
			head = head->next;
		}
		else
		{
			break;
		}
	}
	return (sum);
}
