#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - A program that copies a string
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string
 * @n: The number of bytes fromsrc to be appended to dest
 * Return: A pointer to the resulting string dest
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
