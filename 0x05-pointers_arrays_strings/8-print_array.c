#include <stdio.h>

/**
 * print_array - Function to print the element of an array.
 * @a: the array pointer variable.
 * @n: The size of the array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
