#include "main.h"
/**
*  _memset- A program that
* @n: number of bytes
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
	*p++ = b;
}
return (s);
}
