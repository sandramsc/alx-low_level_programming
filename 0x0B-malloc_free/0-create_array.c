#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the created and initialized array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	/*Declare pointer variable to store the array*/
	char *array;

	if (size == 0)
	{
		/*Return NULL if size is 0, as an array of size 0...*/
	       /*..is not meaningful or makes no sense*/
		return (NULL);
	}
	/*Allocate memory for the array using malloc*/
	array = (char *)malloc(sizeof(char) * size);
	/*Return NULL if memory allocation fails*/
	if (array == NULL)
	{
	return (NULL);
	}
	/*Initialize each each element ofthe array with the provided character*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/*Return the pointer to the created and initialized array*/
	return (array);
}
