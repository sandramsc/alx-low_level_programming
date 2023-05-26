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
	int i;
	va_list args;
	char *str_arg;

	i = 0;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s", str_arg);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
#endif
