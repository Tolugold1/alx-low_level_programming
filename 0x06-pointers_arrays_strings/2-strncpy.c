#include "main.h"
#include <string.h>

/**
 * _strncpy - Function to copy string into another string.
 * @dest: First string.
 * @src: Second string.
 * @n: The determinant.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
