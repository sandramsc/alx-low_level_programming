#include "main.h"
/**
 * _abs  - There is no such thing as absolute value in this world. You
 * can only estimate what a thing is worth to you
 * @c: The charcter that needs to be checked
 * Return: 1 for lowercase characteror 0 for anything else
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	return (c);
}
