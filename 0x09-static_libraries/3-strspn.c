#include "main.h"
#include <string.h>
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: The complete string
 * @accept: The string to get the length inasmuch it exist in strinh s
 * Return: result.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, len_a;

	k = 0;
	len_a = strlen(accept);
	for (i = 0; ((s[i] >= 'a' && s[i] <= 'z')
			|| (s[i] >= 'A' && s[i] <= 'Z')); i++)
	{
		for (j = 0; j < len_a; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
	}
	return (k);
}
