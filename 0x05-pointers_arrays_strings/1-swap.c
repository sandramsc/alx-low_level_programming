#include "main.h"
/**
 * swap_int - A program that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
