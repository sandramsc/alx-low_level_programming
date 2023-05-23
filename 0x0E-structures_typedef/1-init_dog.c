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
 * init_dog - a program that initializes a variable of type struct dog
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
