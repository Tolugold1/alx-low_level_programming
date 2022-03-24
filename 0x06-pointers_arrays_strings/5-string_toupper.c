#include "main.h"

/**
 * string_toupper - Function to convert strings in lowercase to uppercase
 * @s: The string to work on
 * Return: uppercase letters.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32; /* reason substratiing 32 is */
				/*because ascii difference of a letter */
				/*from lowercase to uppercase is 32.*/
		}
	}
	return (s);
}
