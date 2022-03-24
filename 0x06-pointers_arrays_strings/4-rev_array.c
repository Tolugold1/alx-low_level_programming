#include "main.h"

/**
 * reverse_array - Function to reverse array.
 * @a: The array to be reverse
 * @n: size of the array.
 * Return: always 0.
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n; i++)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
		n--;
	}
}
