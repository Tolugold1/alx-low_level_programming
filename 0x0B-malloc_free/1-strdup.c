#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function to return duplicate of the string provided
 *
 * @str: string provided
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i;
	char *t;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n] != '\0'; n++)
	{
		n++;
	}

	t = (char *) malloc((n + 1) * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
