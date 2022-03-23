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
	int len_dest;

	len = strlen(src);
	len_dest = strlen(dest);

	for (i = 0; i < len; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
