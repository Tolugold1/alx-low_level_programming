#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: head pointer
 * @index: index of the node to delete.
 * Return: result.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	unsigned int ctr;
	listint_t *hold;
	listint_t *temp;

	i = listint_lenght(head);

	if (*head == NULL)
	{
		return (-1);
	}

	hold = *head;
	if (index > i)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = hold->next;
		free(hold);
		hold = NULL;
	}
	else
	{
		for (ctr = 1; ctr <= index; ctr++)
		{
			temp = hold;
			hold = hold->next;
		}
		temp->next = hold->next;
		free(hold);
		hold = NULL;
	}
	return (1);
}

/**
 * listint_lenght - function to get the number of node in
 * the list
 * @h: pointer pointing to the node head
 * Return: number of nodes
 */

size_t listint_lenght(listint_t **h)
{
	listint_t *temp;
	size_t i;

	temp = *h;
	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}
