#include "main.h"
#include <string.h>

/**
*  _strstr - A program that locates a substring
* @haystack: string
* @needle: substring
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	if (strncmp(haystack, needle, strlen(needle)) == 0)
	return (haystack);
return (NULL);
}
