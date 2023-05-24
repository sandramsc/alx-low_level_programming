#ifndef NEW_H
#define NEW_H

#include <string.h>
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog- Entry pointof program.
 *
 * Description: a program that creates anew dog
 *
 * Parameters:
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocate memory to new dog ogbject */
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	/* If the function fails return NULL */
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Store a copy of name and +1 for the end char */
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/* Store a copy of owner and +1 for the end char */
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}


	new_dog->age = age;

	/* Return a pointer to the new dog object*/
	return (new_dog);
}
#endif
