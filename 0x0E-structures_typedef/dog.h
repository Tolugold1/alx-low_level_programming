#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct containing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
