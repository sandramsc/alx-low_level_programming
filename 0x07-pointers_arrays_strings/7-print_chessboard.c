#include "main.h"

/**
* print_chessboard - A program that prints the chessboard
* @a: 2D character array representing the chessboard as an argument
* Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;
	/* loop through each row */
	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	/* print the character at the current position */
	putchar(a[i][j]);
	}
	/* move to the next row */
	putchar('\n');
	}
}
