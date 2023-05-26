#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point of program.
 *
 * Description: Program that prints numbers followed by a new line
 *
 * Parameters:
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Initialize the variadic arguments */
	va_list args;
	unsigned int i;

	va_start(args, n);
	/* Iterate through the numbers */
	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", va_arg(args, const unsigned int));

		/* Print the separator if it is not NULL and not the last number */
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	/* Print a new line */
	printf("\n");
	
	/* Clean up the variadic arguments */
	va_end(args);
}
#endif
