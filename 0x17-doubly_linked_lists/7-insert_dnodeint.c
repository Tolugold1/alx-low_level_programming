#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node at
 * a particular index
 * @h: head pointer
 * @idx: index location
 * @n: new node integer
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int list_len;
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *temp2;

	temp = *h;
	list_len = dlistint_length(temp);
	if (!h)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;

	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		(*h) = new;
		return (new);
	}
	if (idx == 0)
	{
		temp->prev = new;
		new->prev = NULL;
		new->next = temp;
		return (new);
	}
	else if (idx == 1)
	{
		(*h)->next = new;
		new->prev = (*h);
		new->next = (*h)->next->next;
		return (new);
	}
	else if (idx == list_len)
	{
		while (temp)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
		return (new);
	}
	else
	{
		while (idx > 1)
		{
			temp = temp->next;
			idx--;
		}
		temp2 = temp->next;
		temp->next = new;
		new->prev = temp;
		new->next = temp2;
		temp2->prev = new;
		return (new);
	}
	free(new);
	return (NULL);
}

/**
 * dlistint_length - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head pointer
 * Return: the number of elements in a linked list
 */

size_t dlistint_length(dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
