#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion -  A program that prints a string in reverse
* @s: string input
* Return: Always 0 (Success)
*/
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
	/*Base case: empty string or NULL pointer*/
	return (0);
	}
	else
	{
	/*Recursive call with remaining sttring*/
	return (1 + _strlen_recursion(s + 1));
}
}
