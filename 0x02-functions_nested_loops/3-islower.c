#include "main.h"

/**
 * _islower - Test to check if character provided is lowercase letter.
 *
 * @c:  character provided
 *
 * Return: 1 if c is lower, 0 otherwise.
 */

int _islower(int c)
{
	int CH;
	char i;
	char j;

	do {
		for (i = 'a'; i <= 'z'; i++)
		{
			CH = 1;
		}
	} while (c == i);
	do {
		for (j = 'A'; j <= 'Z'; j++)
		{
			CH = 0;
		}
	} while (c == j);
	do {
		CH = 1;
	} while (c);
	return (CH);
}
