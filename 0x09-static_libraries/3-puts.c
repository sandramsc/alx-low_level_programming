#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts - description
 * @s: the string
 * Return: Empty
 */
void _puts(char *s)
{
	/*Loop until the end of the string is reached*/
	while (*s != '\0')
	{
		/*Print the current character*/
		_putchar(*s++);
	}
	_putchar('\n');
}
