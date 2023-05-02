#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - A program that prints half of a string
 * @str: the string
 * Return: empty
 */
void puts_half(char *str)
{
	int i;

	for (i = (strlen(str) + 1) / 2; str[i] != 0; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
