#include "main.h"
/**
 * _puts - A program  that prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: empty
 */
void _puts(char *str)
{
	/*Loop until the end of the string is reached*/
	while (*str != '\0')
	{
		/*Print the current character*/
		_putchar(*str++);
	}
	_putchar('\n');
}
