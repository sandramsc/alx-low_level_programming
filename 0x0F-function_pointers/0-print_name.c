#ifndef NAME_H
#define NAME_H

#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_f - Entry point of program.
 *
 * Description: the calling function
 *
 * Parameters:
 * @name: the name
 *
 * Return: Always 0 (Success).
 */
void print_f(char *name)
{
	printf("%s\n", name);
}
/**
 * print_name - Entry point of program.
 *
 * Description: a program that prints a name
 *
 * Parameters:
 * @name: the name
 * @f: the pointer function
 * Return: Always 0 (Success).
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#endif