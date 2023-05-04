#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - A program that copies a string
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the secong string to be compared
 * Return: If str1 < str3 , the negative difference of the first unmatched
 * characters.
 * If str1 == str2, 0;
 * If str1 > str2, the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
	i++;
	}
	return (s1[i] - s2[i]);
}
