#include "lists.h"

/**
 * add_dnodeint -  function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: pointer to head node
 * @n: integer of the new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (!head)
	{
		return NULL;
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->n = n;
	newNode->prev = NULL;

	if (!(*head))
	{
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	(*head)->prev = newNode;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}
