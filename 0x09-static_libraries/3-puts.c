#include <stdio.h> 
#include <ctype.h> 
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <unistd.h>
/**
 * _puts - A program  that prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: empty
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
