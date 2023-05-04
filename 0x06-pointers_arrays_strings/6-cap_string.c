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
	int i;

	/* capitalize the next character */
	int cap_next = 1;

	for (i = 0; i < len; i++)
	{
	char c = str[i];
	if (isspace(c) || c == ',' || c == ';' || c == '.' ||
	c == '!' || c == '?' || c == '"' || c == '(' ||
	c == ')' || c == '{' || c == '}')
	{
	/* next character should be capitalized */
	cap_next = 1;
        } else if (cap_next)
	{
	str[i] = toupper(c);
	cap_next = 0;
	}
	}

	return str;
}
