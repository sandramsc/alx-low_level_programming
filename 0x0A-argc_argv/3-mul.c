#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the arguments it receives.
 *
 * Parameters:
 * @val1: First value
 * @val2: Second value
 * @result: The result
 * @argv: An array of strings containing the command line arguments
 * @argc: The number of command line arguments and the size of the argv array
 *
 *  Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int val1, val2, result;
	(void) argv;

	/*Print ERROR if no arguments are entered*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);

	result = val1 * val2;
	printf("%d\n", result);

	return (0);
}
