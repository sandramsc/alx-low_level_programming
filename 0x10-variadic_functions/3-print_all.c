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
	int null_str = 0;
	const char *ptr = format;
	va_list args;
	char *str_arg = NULL;

	va_start(args, format);

	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c, ", (char)va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 'f':
				printf("%f, ", (float)va_arg(args, double));
				break;
			case 's':
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
				break;
		}
		ptr++;
	}

	va_end(args);
	if (!null_str)
		printf("\n");
}
#endif
