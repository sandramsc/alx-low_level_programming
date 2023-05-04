#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * leet - A program  that encodes a string into 1337
 * Return: A pointer to the converted string
 */

char *leet(char *s)
{
	static char leeted[100];
	int i, j, k;
	char c;

	char replacements[5][2] = { {'a', '4'}, {'e', '3'},
	{'o', '0'}, {'t', '7'}, {'l', '1'} };

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
	c = s[i];

	for (k = 0; k < 5; k++)
	{
	if (c == replacements[k][0] || c == replacements[k][0] - ('a' - 'A'))
	{
	c = replacements[k][1];
	break;
	}
	}
	leeted[j] = c;
	}
	leeted[j] = '\0';
	return (leeted);
}
