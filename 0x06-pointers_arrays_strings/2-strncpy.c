#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - A program that copies a string
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return dest;
}
