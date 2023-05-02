#include "main.h"
/**
 * @_strcpy - A program that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string
 *
 * Return value: the pointer to dest
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
