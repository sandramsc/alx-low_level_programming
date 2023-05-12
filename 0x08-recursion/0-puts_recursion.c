#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion -  A program that prints a string, followed by a new line
 * @s: string input
 *
 * Return: Empty
 */
void _puts_recursion(char *s)
{
	/*Base case: If the first character is the null character, print a new line and return*/
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}
	/*Recursive case: Print the first character, and then call the function recursively with the rest of the string*/
	putchar(*s);
	_puts_recursion(s + 1);
}
