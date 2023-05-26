#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Entry point of program.
 *
 * Description: Program that prints anything  followed by a new line
 *
 * Parameters:
 * @format: a list of types of arguments passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;
	va_list args;

	int int_arg;
	char char_arg;
	float float_arg;
	char *str_arg;
	int null_str = 0;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			char_arg = (char)va_arg(args, int);
			printf("%c, ", char_arg);
		}
		else if (*ptr == 'i')
		{
			int_arg = va_arg(args, int);
			printf("%d, ", int_arg);
		}
		else if (*ptr == 'f')
		{
			float_arg = (float)va_arg(args, double);
			printf("%f, ", float_arg);
		}
		else if (*ptr == 's')
		{
			str_arg = va_arg(args, char *);
			if (str_arg == NULL)
			{
				printf("(nil)");
				null_str = 1;
			}
			else
			{
				printf("%s", str_arg);
			}
		}
		ptr++;
	}
	va_end(args);
	if (!null_str)
		printf("\n");
}
#endif
