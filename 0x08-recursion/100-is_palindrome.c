#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* is_palindrome -  a program that returns 1
* if a string is a palindrome and 0 if not
* @start: the string to check
* @end: integer
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}
	if (s[start] == s[end])
	{
	return (is_palindrome_helper(s, start + 1, end - 1));
	}
	else
	{
	return (0);
}
}
/**
* is_palindrome -  a program that returns 1
* if a string is a palindrome and 0 if not
* @s: the string to check
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = strlen(s);
	
	return (is_palindrome_helper(s, 0, len -1));
}
