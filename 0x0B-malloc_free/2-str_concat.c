#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function to concatenate
 *
 * @s1: string 1
 * @s2: string 2
 * Return: result.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1, len_s2, len_sum;
	char *t;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (len_s1 == NULL)
	{
		s1 = "";
	}

	if (len_s2 == NULL)
	{
		s2 = "";
	}

	len_sum = len_s1 + len_s2;
	t = (char *) malloc((len_sum + 1) * sizeof(char));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		t[len_s1 + j] = s2[j];
	}
	t[len_s1 + len_s2] = '\0';
	return (t);
}

/**
 * _strlen - function to get length of a string.
 * @str: string given.
 * Return: result.
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}
