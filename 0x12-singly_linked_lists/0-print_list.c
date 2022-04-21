#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function to print all the elements of a struct list
 * @h: the structure
 * Return: structure
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	unsigned int result;

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		result++;
	}
}
