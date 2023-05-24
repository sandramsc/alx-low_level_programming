#ifndef FREE_H
#define FREE_H

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a program that frees dogs
 * 
 * @d: the structure of the dog
 * @name: Dog name
 * @owner: Dog owner
 */

void free_dog(dog_t *d)
{
	if (new_pup != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);	
	}
}
#endif
