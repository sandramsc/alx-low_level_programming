#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints the number of arguments passed to it.
 *
 * Parameters:
 * @argv: An array of strings containing the command line arguments
 * @argc: The number of command line arguments and the size of the argv array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*To suppress unused parameter warning*/
	(void) argv;

	/*Subtract 1 to exlude the program name*/
	printf("%d\n", argc - 1);

	return (0);
}
