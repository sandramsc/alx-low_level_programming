#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * leet - A program  that encodes a string into 1337
 * @str: The string to be encoded
 * Return: A pointer to the converted string
 */

char *leet(char *str)
{
	char *p = str;

	while (*p)
	{
	*p = (*p == 'a' || *p == 'A') ? '4' :
	(*p == 'e' || *p == 'E') ? '3' :
	(*p == 'o' || *p == 'O') ? '0' :
	(*p == 't' || *p == 'T') ? '7' :
	(*p == 'l' || *p == 'L') ? '1' :
	*p;
	p++;
	}
	return (str);
}
