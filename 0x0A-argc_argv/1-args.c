#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints the number of arguments passed to it.
 * 
 * @argv: An array of strings containing the command line arguments
 * @argc: The number of command line arguments and the size of the argv array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
