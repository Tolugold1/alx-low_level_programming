#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Function to reverse string.
 * @s: string to reverse
 * Return: return result.
 */

void rev_string(char *s)
{
	int i;
	int len;
	char t;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		t = s[i];
		s[i] = s[len - 1];
		s[len - 1] = t;
		len--;
	}
}
