#include "lists.h"

/**
 * free_list - function to free singly list
 * @head: the node to be freed
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		list_t *fr;

		fr = temp;
		temp = temp->next;
		free(fr->str);
		free(fr);
	}
	head = NULL;
}
