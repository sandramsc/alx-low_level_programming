#include "main.h"

/**
 * _isdigit - Looks to see if a character is a digit
 * @x: The number that needs to be evaluated
 * Return: 1 for a digit character and 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
