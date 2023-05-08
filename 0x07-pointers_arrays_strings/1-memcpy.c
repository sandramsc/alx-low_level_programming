#include "main.h"
/**
*  _memcpy - Entry point
* @src: Pointer to the source string
* @dest: Pointer to the destination buffer
* @n: number of bytes to copy
* Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	/* Use a pointer tothe dest buffer and copy..*/
	/*..each byte of the src buffer into it */
	while (n--)
	{
	*p++ = *src++;
	}

return (dest);
}
