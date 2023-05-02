#include "main.h"
#include <string.h>
/**
 * puts2 - A program that prints every other character of
 * a string, starting with the first character
 * @str: string
 * Return: empty
 */
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	_putchar(*p);
	p += 2;

	if (*(p - 1) == '\0')
	{
	break;
	}
	}
	_putchar('\n');
}
