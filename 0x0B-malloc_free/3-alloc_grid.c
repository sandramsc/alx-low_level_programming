#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @height: The height of the array
 * @width: The width of the array
 * Return: NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	/* Check if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the grid */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	/* Return NULL if unsuccessful */
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	/* If allocation fails, free the previously allocated memory */
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		/* If this fails return NULL */
		return (NULL);
	}
	/*Initialize elements to 0*/
	memset(grid[i], 0, width * sizeof(int));
	}

return (grid);
}
