#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an array, using malloc
 *
 * Description: The _calloc function allocates memory for an array of nmemb..
 * ..elements of size bytes each and returns a pointer to the allocated memory.
 *
 * @size: the size of the memory
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/*Return NULL if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/*Allocate memory for nmemb elements of size bytes each*/
	ptr = malloc(nmemb * size);

	/*Return NULL if malloc fails*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	/*Use memset to set the allocated memory to zero*/
	memset(ptr, 0, nmemb * size);
	/*Return the pointer to the allocated memory*/
	return (ptr);
}
