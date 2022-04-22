#include "lists.h"

/**
 * add_node_end - function to add to the end of a list
 * @head: list head
 * @str: list string data.
 * Return: result
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *temp;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}

	temp = *head;

	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = _strlen(str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}

/**
 * _strlen - function to get the length of a const string
 * @s: the string given
 * Return: Result.
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
