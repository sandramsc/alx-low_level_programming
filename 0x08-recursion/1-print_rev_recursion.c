#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion -  A program that prints a string in reverse
* @s: string input
* Return: Empty
*/
void _print_rev_recursion(char *s)
{
	/*Base case: If the first character is the..*/
	/*..null character, print return..*/
	if (*s == '\0')
	{
	return;
	}
	/*Recursive case: call the function and then print..*/
	/*..the first character*/
	_print_rev_recursion(s + 1);
	putchar(*s);
}
