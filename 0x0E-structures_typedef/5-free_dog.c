#ifndef FREE_H
#define FREE_H

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a program that frees dogs
 *
 * @d: the structure of the dog
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
#endif
