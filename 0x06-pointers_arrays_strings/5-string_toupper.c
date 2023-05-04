#include "main.h"
#include <ctype.h>

/**
 * string_toupper - A program that convertts lowrcase to uppercase
 * @str: The string to be converted
 * Return: A pointer to the converted string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	*ptr = toupper(*ptr);
	ptr++;
	}
	return (str);
}
