#include "main.h"
/**
 * _print_sign  - Sign
 * @c: The charcter that needs to be checked
 * Return: 1 for lowercase characteror 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
