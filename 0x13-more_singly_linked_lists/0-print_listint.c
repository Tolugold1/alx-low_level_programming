#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function to print all the elements of a listint_t list
 * @h: the head node
 * Return: result
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
