#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a new type struct dog
 *
 * Description: same as function desc..
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}

#endif
