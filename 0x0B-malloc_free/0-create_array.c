#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_array - A program that creates an array of chars,
* and initializes it with a specific char
* @c: the character
* @array: the array of chars
* @size: the size of the arrays
*
* Return - a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
