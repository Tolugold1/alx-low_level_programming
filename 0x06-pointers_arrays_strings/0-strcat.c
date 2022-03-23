#include "main.h"
#include <string.h>
/**
 * _strcat - function to concatenate two string.
 * @dest: first string.
 * @src: the second string.
 * Return: The two concatenation into dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;
	int dest_len;

	len = strlen(src);
	dest_len = strlen(dest);

	for (i = 0; i < len; i++)
	{
		dest = &dest[dest_len + i];
	}
	return (dest);
}
