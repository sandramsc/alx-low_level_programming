#include "main.h"
/**
 * _strlen - A program that returns the length of a string
 * @s: string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}
