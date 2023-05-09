#include "main.h"

/**
* print_chessboard - A program that prints the sum of the two diagonals of a square matrix of integers
* @sum1: first diagonal
* @sum2: second diagonal
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	/* initialize two sums to zero and i*/
	int i, sum1 = 0, sum2 = 0;
	
	/* iterate over the rows of the matrix */
	for (i = 0; i < size * size; i += size + 1)
	{
	/* add element on diagonal from top left to bottom right to sum1 */
	sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
	sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
