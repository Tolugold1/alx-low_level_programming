#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: Head node.
 * Return: result.
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
	}
	*head = NULL;
}
