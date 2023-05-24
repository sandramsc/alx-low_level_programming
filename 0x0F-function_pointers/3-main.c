#ifndef INDEX_H
#define INDEX_H

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of program.
 *
 * Description: the main function
 *
 * Parameters:
 * @av: An array of strings containing the command line arguments
 * @ac: The number of command line arguments and the size of the argv array
 *
 *  Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	int (*func)(int, int);
	int val1, val2;
	char *c = av[2];

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%') ||
	*(c + 1) != 0)
	{
		printf("Error\n");
		exit(99);
	}

	val1 = atoi(av[1]);
	val2 = atoi(av[3]);

	if ((*c == '/' || *c == '%') && val2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(c);
	printf("%d\n", func(val1, val2));
	return (0);
}
#endif
