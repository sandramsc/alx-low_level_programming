#include "main.h"

/**
*  _strpbrk - A program that searches a string for any of a set of bytes
* @s: input
* @accept: input
* Return: a pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	/* iterate through each character in s */
	while (*s != '\0')
	{
	/* iterate through each character in accept */
	for (i = 0; accept[i] != '\0'; i++)
	{
	 /* if the current character in s matches the current character in accept */
	if (*s == accept[i])
	{
	/* return a pointer to the matching character in s */
	return (s);
	}
	}
	/* move to the next character in s */
	s++;
	}
	/* if no match is found, return NULL */
	return (NULL);
}
