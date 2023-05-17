#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the arguments it receives.
 *
 * Parameters:
 * @argv: An array of strings containing the command line arguments
 * @argc: The number of command line arguments and the size of the argv array
 *
 *  Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
