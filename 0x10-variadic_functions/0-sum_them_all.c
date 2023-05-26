#ifndef SUM_H
#define SUM_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point of program.
 *
 * Description: Program that returns the sum of all its parameters.
 *
 * Parameters:
 * @n: the number of integers passed to the function
 *
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	sum = 0;
	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	/* Initialize the argument list */
	for (i = 0; i < n; i++)
	{
		/* Access the next argument */
		sum += va_arg(args, int);
	}
	/* Clean up the argument list */
	va_end(args);
	return (sum);
}

#endif
