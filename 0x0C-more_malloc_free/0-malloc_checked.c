#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point of the program
 * Description: This program allocates memory using malloc.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
