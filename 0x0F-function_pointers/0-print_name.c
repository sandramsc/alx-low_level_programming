#ifndef NAME_H
#define NAME_H

#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point of program.
 *
 * Description: a program that prints a name
 *
 * Parameters:
 * @name: the name
 * @f: the pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
	
	f(name);
}

#endif
