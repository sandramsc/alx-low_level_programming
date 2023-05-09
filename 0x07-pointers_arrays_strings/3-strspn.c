#include "main.h"

/**
*  _strspn - A program that gets the length of a prefix substring
* @s: a pointer to the string s
* @accept: a pointer to the string accept
* Return: the number of bytes in the initial segment of s which
* consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	/* loop through each character of string s */
	for (i = 0; s[i]; i++)
	{
	/* loop through each character of string accept */
	for (j = 0; accept[j]; j++)
	{
	/* check if character of s matches a character in accept */
	if (s[i] == accept[j])
	{
	/* increment length by 1 */
	len++;
	/* break out of the loop since a match has been found */
	break;
	}
	}
	/* if no match was found */
	if (!accept[j])
	{
	/* return the length */
	return (len);
	}
	}
	/* return the length */
	return (len);
}
