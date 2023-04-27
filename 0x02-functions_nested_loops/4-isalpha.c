#include "main.h"
/**
 * _isalpha  - isalpha
 * @c: The charcter that needs to be checked
 * Return: 1 for lowercase characteror 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
