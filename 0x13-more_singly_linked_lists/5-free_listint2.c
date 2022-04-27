#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: Head node.
 * Return: result.
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;
	listint_t *fr;

	if (*head == NULL)
	{
		return;
	}
	tempNode = *head;
	while (tempNode != NULL)
	{
		fr = tempNode;
		tempNode = tempNode->next;
		free(fr);
	}
	*head = NULL;
}
