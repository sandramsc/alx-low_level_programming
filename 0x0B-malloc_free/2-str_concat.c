#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings 
 * @s1: First string
 * @s2: Second string
 * Return: NULL if the str is equal to NULL.
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len, s2_len, concat_len;
	char *concat_str;

	/*Check if s1 is NULL and treat it as an empty string*/
	if (s1 == NULL)
		s1 = "";
	/*Check if s2 is NULL and treat it as an empty string*/
	if (s2 == NULL)
		s2 = "";
	/*Calculate the lengths of s1 and s2*/
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/*Calculate the total lengths of the concatenated string*/
	concat_len = s1_len + s2_len;

	/*Allocate memeory for the concatenated string (+1 for null termination)*/
	concat_str = malloc((concat_len + 1) * sizeof(char));
	/*Handle memory allocation failure*/
	if (concat_str == NULL)
		return (NULL);

	/*Copy s1 into the concatenated string*/
	strcpy(concat_str, s1);
	/*Append s2 to the end of the concatenated string*/
	strcat(concat_str, s2);

	/*Return the concatenated string*/
	return (concat_str);
}
