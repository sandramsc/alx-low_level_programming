#include <string.h>
#include "main.h"
/**
 * rev_string -A program that reverses a string
 * @s: string
 * Return: empty
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);
	char temp;

	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = temp;
	}
}
