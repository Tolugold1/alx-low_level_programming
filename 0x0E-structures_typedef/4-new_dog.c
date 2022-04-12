#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - function to create a new dog
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 * Return: result
 */

struct new_dog
{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct new_dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
