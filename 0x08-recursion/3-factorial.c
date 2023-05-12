#include "main.h"
#include <stdio.h>

/**
* factorial -  A program that returns the factorial of a given number
* @n: integer argument
* Return: Always 0 (Success)
*/
int factorial(int n)
{
	if (n < 0)
	{
	/*error condition*/
	return (-1);
	}
	else if (n == 0)
	{
	/*base case*/
	return (1);
	}
	else
	{
	/*recursive call*/
	return (n * factorial(n - 1));
}
}
