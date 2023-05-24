#ifndef PRINT_H
#define PRINT_H

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a program that initializes a variable of type struct dog
 *
 * Parameters:
 * @d: the structure of the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
#endif
