#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*  _strchr - A program that locates a character in a string
* @s: input string
* @c: character to be located
* Return:  a pointer to the first occurrence of the character c in the
* string s, or NULL if the character is not found
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
	if (*s == c)
	{
	return (s);
	}
return (NULL);
}
