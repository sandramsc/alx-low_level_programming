#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - A program that prints n elements of an array of integers
 * @a: array
 * @n: integers
 * Return: empty
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
