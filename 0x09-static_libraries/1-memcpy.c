#include "main.h"
#include "string.h"
/**
 * _memcpy - Function that copy memory area
 * @dest: the first memory area
 * @src: the second memory area
 * @n: number of bytes to be copied.
 * Return: the result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
