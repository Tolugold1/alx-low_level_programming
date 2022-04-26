#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: head pointerr.
 * @idx: thhe index position to add the new node
 * @n: data for the new node.
 * Return: result.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	unsigned int ctr;
	listint_t *temp;
	listint_t *newNode;

	i = listint_lenght(head);
	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
	}

	if (idx > i)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		for (ctr = 0; ctr < idx - 1; ctr++)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
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
