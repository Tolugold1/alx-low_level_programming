#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: the name argument
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
