#include "main.h"
#include <string.h>
/**
 * print_rev - A program that prints a string, in reverse,
 * followed by a new line
 * @s: string characheter
 * Return: empty
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int n;

	for (n = len - 1; n >= 0; n--)
	{
	_putchar(s[n]);
	}
	_putchar('\n');
}
