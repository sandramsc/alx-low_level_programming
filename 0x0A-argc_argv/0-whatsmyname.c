#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the 
 * executable file followed by a new line.
 * If the name of the file is changed, the program will print the new name
 * without having to recompile the program.
 *
 * @argc: The number of command line arguments and the size of the argv array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*To suppress unused parameter warning*/
	(void)argc;

	/*Prints program name*/
	printf("%s\n", argv[0]);
	return (0);
}
