#ifndef SIZE_H
#define SIZE_H

#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - Entry point of program.
 *
 * Description: that executes a function given as a..
 * ...parameter on each element of an array.
 *
 * Parameters:
 * @size: the size of the array
 * @array: the array
 * @action:  a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#endif
