#ifndef INDEX_H
#define INDEX_H
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Entry point of program.
 *
 * Description: Program that searches for an integer
 *
 * Parameters:
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * @array: the array on which we want to exacute the given function
 *
 * Return: If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check if the array size is valid */
	if (size <= 0)
	{
		return (-1);
	}

	/* Iterate over each element in the array */
	for (i = 0; i < size; i++)
	{
		/* Call the provided function on each element */
		if (cmp(array[i]) != 0)
		{
			/* If the function returns a non-zero value,..*/
		       /*..return the index */
			return (i);
		}
	}
	/* If no matching element is found..*/
	return (-1);
}
#endif
