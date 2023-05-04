#include "main.h"

/**
 * leet - A program  that encodes a string into 1337
 * @n: The input value
 * Return: The value n
 */

char *leet(char *n)
{
	int a, b;
	char s1[] = "aAEeoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
	for (b = 0; b < 10; b++)
	{
	if (n[a] == s1[b])
	{
	n[a] = s2[b];
	}
	}
	}

return (n);
}
