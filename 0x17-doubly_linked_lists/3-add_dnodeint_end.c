#include "lists.h"

/**
 * add_dnodeint_end - function to add node at
 * the end of a list
 * @head: pointer to head
 * @n: newnode data
 * Return: the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	temp = *head;
	if (!head)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
