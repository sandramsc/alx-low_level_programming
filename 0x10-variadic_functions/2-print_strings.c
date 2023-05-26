#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Entry point of program.
 *
 * Description: Program that prints numbers followed by a new line
 *
 * Parameters:
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	/*Declare a variable to hold the variadic arguments*/
	va_list args;

	/*Start processing the variadic arguments*/
	va_start(args, n);

	/*Iterate over the strings*/
	for (i = 0; i < n; i++)
	{
		/*Get the current string argument*/
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		/* Check if the string is NULL */
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	/*Clean up the variadic arguments*/
	va_end(args);
	printf("\n");	
}
#endif
