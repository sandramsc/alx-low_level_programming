#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *Description: This program adds positive numbers.
 *
 * Parameters:
 * @argv: An array of strings containing the command line arguments
 * @argc: The number of command line arguments and the size of the argv array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]) || atoi(num) <= 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	/*Convert the digits to integers*/
	sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
