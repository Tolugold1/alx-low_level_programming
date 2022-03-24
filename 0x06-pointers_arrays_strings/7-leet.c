#include "main.h"

/**
 * leet - Function to encode letters into 1337 with
 * each letter replacement numbers
 * @s: string provided
 * Return: The result.
 */

char *leet(char *s)
{
	int i, j;

	char update1337[] = {'4', '3', '0', '7', '1'};

	char upper1337[] = {'A', 'E', 'O', 'T', 'L'};

	char lower1337[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == upper1337[j]) || (s[i] == lower1337[j]))
			{
				s[i] = update1337[j];
			}
		}
	}
	return (s);
}
