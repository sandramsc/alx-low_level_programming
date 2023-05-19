#include <limits.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings
 *
 * Description: Returns a pointer that points to a newly allocated
 * ...space in memory, which contains s1, followed by the first n bytes
 * ...of s2, and null terminated.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, concat_len;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	concat_len = s1_len + n;

	concat_len = s1_len + s2_len;
	concat_str = malloc((concat_len + 1 + n) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);

	return (concat_str);
}
