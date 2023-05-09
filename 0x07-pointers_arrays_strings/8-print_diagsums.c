#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to a square matrix of integers
 * @size: size of the square matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	/* initialize two sums to zero and i */
	int i, sum1 = 0, sum2 = 0;

	/* iterate over the rows of the matrix */
	for (i = 0; i < size * size; i += size + 1)
	{
		/* add element on diagonal from top left to bottom right to sum1 */
		sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		/* add element on diagonal from top right to bottom left to sum2 */
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
