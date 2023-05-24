#ifndef NAME_H
#define NAME_H

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point of program.
 *
 * Description: a program that prints a name
 *
 * Parameters:
 * @name: the input name
 * @f: the input function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	{
		f(name);
	}
}

#endif
