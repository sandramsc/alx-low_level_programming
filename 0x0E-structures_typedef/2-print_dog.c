#include <stdio.h>
#include <stdlib.h>
/**
 * struct_dog - a program that initializes a variable of type struct dog
 * 
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * print_dog - a program that initializes a variable of type struct dog
 * 
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
void print_dog(struct dog *d)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (owner == NULL || age == NULL)
		printf("(nil)");
	if (name == NULL)
		printf("Name: (nil)");
	if (d != NULL)
	{
	d->name = name;
	printf("Name: %s )"d.name);
	d->age = age;
	printf("Age: %.1f )"d.age);
	d->owner = owner;
	printf("Owner: %s )"d.name);
	}
}

