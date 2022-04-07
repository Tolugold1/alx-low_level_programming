#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function to concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: the determinant of the number of s2 character that
 * should be added to the string
 * Return: result.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1, j, len_s2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	str = malloc(sizeof(str) * (len_s1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[len_s1 + j] = s2[j];
	}
	str[len_s1 + len_s2] = '\0';
	return (str);
}
