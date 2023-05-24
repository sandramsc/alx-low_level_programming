#ifndef INDEX_H
#define INDEX_H

#include "3-calc.h"

/**
 * op_add - Entry point of program.
 *
 * Description: adds two numbers
 *
 * Parameters:
 * @a: first number
 * @b: second number
 *
 * Return: Always 0 (Success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point of program.
 *
 * Description: finds the difference of two numbers
 *
 * Parameters:
 * @a: first number
 * @b: second number
 *
 * Return: Always 0 (Success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point of program.
 *
 * Description: finds the product of two numbers
 *
 * Parameters:
 * @a: first number
 * @b: second number
 *
 * Return: Always 0 (Success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point of program.
 *
 * Description: divides two numbers
 *
 * Parameters:
 * @a: first number
 * @b: second number
 *
 * Return: Always 0 (Success)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point of program.
 *
 * Description: returns the remainder
 *
 * Parameters:
 * @a: first number
 * @b: second number
 *
 * Return: Always 0 (Success)
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#endif
