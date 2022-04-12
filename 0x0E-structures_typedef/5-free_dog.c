#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free dogs
 * @d: first argument
 * Return: result
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
