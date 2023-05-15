#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @current_index: The current index
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_length = 0, current_index = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	total_length += strlen(av[i]) + 1;
	}
	result = (char *)malloc(sizeof(char) * total_length);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, current_index++)
		{
			result[current_index] = av[i][j];
		}
		result[current_index++] = '\n';
	}
	result[current_index] = '\0';
	return (result);

}
