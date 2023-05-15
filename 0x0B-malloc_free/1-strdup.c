#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,..
 * ..which contains a copy of the string given as a parameter.
 * @str: The input string.
 * @newStr: The new string
 *
 * Return: NULL if the str is equal to NULL.
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *newStr;

	if (str == NULL)
	{
	/*Return NULL if the input string is NULL*/
		return (NULL);
	}
	/*Find the length of the input string*/
	length = 0;
	while (str[length] != '\0')
	{
	length++;
	}
	/*Allocate memory for the new string using malloc*/
	/* +1 for the null terminator*/
	newStr = (char *)malloc((length + 1) * sizeof(char));

	if (newStr == NULL)
	{
	/*Return NULL if memory allocation fails*/
	return (NULL);
	}
	/*Copy the contents of the new string to the newly allocated memory*/
	for (i = 0; i < length; i++)
		newStr[i] = str[i];
	{
	/*Add the null terminator to the end of the new string*/
	newStr[length] = '\0';

	return (newStr);
	}
}
