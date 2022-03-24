#include "main.h"

/**
 * cap_string - Function to capitalize every word in a string
 * @s: string to work with
 * Return: result.
 */

char *cap_string(char *s)
{
	int i, cap;

	cap = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			cap = 0;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			cap = 0;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z') && cap == 1)
		{
			s[i] -= 32;
			cap = 0;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')'
			|| s[i] == '{' || s[i] == '}')
		{
			cap = 1;
		}
	}
	return (s);
}
