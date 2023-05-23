#ifndef INIT_HEADER
#define INIT_HEADER

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a program that initializes a variable of type struct dog
 *
 * @d: the structure of the dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
