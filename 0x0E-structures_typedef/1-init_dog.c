#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize struct
 * @d: struct pointer
 * @name: struct variable to be initialize
 * @age: variable to be initialize
 * @owner: variable to be initialize
 * Return: zero
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
