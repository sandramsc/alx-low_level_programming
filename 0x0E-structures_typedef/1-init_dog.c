#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "main.h"

/**
 * init_dog - a program that initializes a variable of type struct dog
 *
 * @d: pointer to members
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
