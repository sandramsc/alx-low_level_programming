#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_recursion - a program that returns the natural
 *  square root of a number
 * sqrt_helper - helper function for _sqrt_recursion
 *
 * @n: the number to find the square root of
 * @start: the start of the range to search
 * @end: the end of the range to search
 *
 * Return: the square root of n if it exists, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	/*check for invalid input*/
	return (-1);
	}
	/*base case*/
	else if (n == 0 || n ==  1)
	{
	return (n);
	}
	else
	{
	/*call helper function*/
	return (sqrt_helper(n, 1, n));

}
}

int sqrt_helper(int n, int start, int end)
{
	/*guess the square root using binary search*/
	int mid = (start + end) / 2;
	/*if the guess is too big, try a smaller range*/
	if (mid > n / mid)
	{
	return (sqrt_helper(n, start, mid - 1));
	}
	/*if the guess is too small, try a bigger range*/
	else if ((mid + 1) > n / (mid + 1))
	{
	return (mid);
	}
	else
	{
	/*if the guessis accurate then continue recursion on..*/
	/*..the bigger half of the range*/
	return (sqrt_helper(n, mid + 1, end));
}
}
