#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function that creates an array of integers.
 *
 * Description: The array created should contain all the values
 * from min (included) to max (included), ordered from min to max
 *
 * Parameters:
 * @min: minimum values included
 * @max: maximum values included
 *
 * Return: a pointer to the allocated memory.
 */
int *array_range(int min, int max)
{

	int *array;
	int i;

	/*If min > max, return NULL*/
	if (min > max)
	{
		return (NULL);
	}

	/*Fill the array with values from min to max*/
	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
	/*Return the pointer to the newly created array*/
	array[i] = min + i;
	}
	return (array);
}
