#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head node
 * index: the index of the node to return.
 * Return: Node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempNode;
	unsigned int i = 0;

	tempNode = head;
	if (tempNode == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		tempNode = tempNode->next;
		if (tempNode == NULL)
		{
			return (NULL);
		}
	}
	return (tempNode);
}
