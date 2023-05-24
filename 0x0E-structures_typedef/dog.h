#ifndef DOG_HEADER
#define DOG_HEADER

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a program that initializes a variable of type struct dog
 *
 * Paramters:
 *
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: All dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog structure
 *
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
