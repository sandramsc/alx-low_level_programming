#include <limits.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point of the program
 *
 * Description: This program allocates memory using malloc.
 *
 * Parameters:
 * @ptr: pointer where memory is allocated
 *
 * Return: Always 0 (Success)
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
