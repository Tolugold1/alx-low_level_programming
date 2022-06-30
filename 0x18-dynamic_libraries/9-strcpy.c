#include "main.h"
#include <string.h>

/**
 * _strcpy - Function to copy string src into string pointer *dest
 * @dest: string 1.
 * @src: string 2.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
