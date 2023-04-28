#include "main.h"

/**
 * print_square - Prints a square
 * @size: The number of squares over the number of times
 * Return: empty
 */
void print_square(int size)
{
	/*a is the x axiis and b is the y axis*/
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
