#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - A program that concatenates two strings
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string
 * Return: A pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
