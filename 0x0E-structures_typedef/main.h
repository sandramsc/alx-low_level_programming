#ifndef INIT_H
#define INIT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog parameters
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
}
#endif
