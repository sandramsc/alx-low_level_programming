#include "main.h"
#include <string.h>
/**
 * _strcpy - A program that copies a string
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
	*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
