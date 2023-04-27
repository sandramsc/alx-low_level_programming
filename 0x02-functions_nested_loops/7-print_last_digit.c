#include "main.h"
/**
 * print_last_digit  - There are only 3 colors, 10 digits, and 7 notes;
 * it's what we do with them that's important
 * @n: T number that needs to be checked
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
