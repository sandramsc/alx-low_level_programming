#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * cap_string - A program that capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A pointer to the converted string
 */

char *cap_string(char *str)
{
	int len = strlen(str);

	char *new_str = (char *) malloc(len + 1);
	int i = 0;

	while (*str)
	{
	new_str[i] = (i == 0 || isspace(*(str - 1))
	|| strchr(",;.!?\"(){}", *(str - 1))) ? toupper(*str) : *str;
	i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
