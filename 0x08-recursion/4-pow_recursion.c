#include "main.h"
#include <stdio.h>

/**
* _pow_recursion -  A program that returns the value of x
* raised to the power of y
* @n: integer argument
* Return: Always 0 (Success)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	/*error condition*/
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
}
}
