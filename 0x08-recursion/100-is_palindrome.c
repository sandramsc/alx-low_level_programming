#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* is_palindrome -  a program that returns 1
* if a string is a palindrome and 0 if not
* @s: the string to check
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
	/*empty string or single character is a palindrome*/
	return (1);
	}
	return ((*s == *(s + len - 1))  && is_palindrome(s + 1));
}
