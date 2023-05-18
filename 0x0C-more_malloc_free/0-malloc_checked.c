#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point of the program
 * Description: This program allocates memory using malloc.
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	(void) b;

	ptr = (int *) malloc(sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
