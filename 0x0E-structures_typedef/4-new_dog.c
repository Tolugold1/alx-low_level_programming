#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - function to create a new dog
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner, i;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len_name; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	for (i = 0; i <= len_owner; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	return (new_dog);
}

/**
 * _strlen - function to calculate the length of a string
 * @c: string.
 * Return: result.
 */

int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	}
	return (i);
}
