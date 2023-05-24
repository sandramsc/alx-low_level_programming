#ifndef GETOP_H
#define GETOP_H

#include "3-calc.h"

/**
 * get_op_func - Entry point of program.
 *
 * Description: returns the remainder
 *
 * Parameters:
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the..
 * ..operator given as a parameter
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].func);
		}
		i++;
	}
	return (NULL);
}
#endif
