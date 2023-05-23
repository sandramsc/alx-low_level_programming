#ifndef DOG_H
#define DOG_H

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
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * new_dog - a new type struct dog
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Always 0 (Success)
 */
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
