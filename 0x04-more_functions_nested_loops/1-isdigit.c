#include "main.h"

/**
 * _isdigit - Looks to see if a character is a digit
 * @c: The number beingchecked
 * Return: 1 for a digit character and 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
	{
	return (1);
	}
	return (0);
}
