#include "main.h"
/**
*  _memset - Entry point
* @n: number of bytes
* @s: memory area
* @b: the value to be filled in
* Return: Always 0 (Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
	/* Initialize pointer to memory area s*/
	char *p = s;

	/* Loop through n bytes in the memory area pointed to by s */
	while (n--)
	{
	/* Set the byte pointed to by p to b, and increment p to the next byte */
	*p++ = b;
}
/* Reurn a pointer to the beginning of the memory area s */
return (s);
}
