#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* is_palindrome_helper -  a program that returns 1
* if a string is a palindrome and 0 if not
* @start: start of string
* @end: end of string
* @s: string to check
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome_helper(char *s, int start, int end)
{
	/*Base case: if the starting index is greater than or..*/
	/*..equal to the ending index,..*/
	/*..all the characters in the string have been checked, and they match..*/
	/*..(or there are no characters)*/
	if (start >= end)
	{
	return (1);
	}
	/*If the characters at the starting and ending indices match,*/
	/*..recursively call the function with the starting index..*/
	/*..incremented by 1 and the ending index decremented by 1*/
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
	/*Call the helper function with starting index 0 and ending index len-1*/
	return (is_palindrome_helper(s, 0, len - 1));
}
