#include "main.h"
#include <stdio.h>

/**
*  _strchr - A program that locates a character in a string
* @s: input string
* @c: character to be located
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	/* If the current character matches the target..*/
	/*..character, return a pointer to it */
	if (*s == c)
	{
	return (s);
	}
	/* increment the pointer to the next character in the string */
	s++;
	}

return (NULL);
}
