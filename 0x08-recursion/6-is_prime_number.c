#include "main.h"
#include <stdio.h>

/**
* is_prime_number -  A program that  returns 1 if the input
* integer is a prime number, otherwise return 0
* @n: input integer
* Return: returns 1 if the input integer is a prime number, and 0 otherwise.
*/
int is_prime_number(int n)
{
	/*base case: 1is not prime*/
	if (n <= 1)
	{
	return (0);
}
return (is_prime_helper(n, 2));
}
/**
* is_prime_helper -  a recursive helper function that takes in
* the number to be checked for primality as
* well as a divisor parameter that starts at 2
* @n: input integer
* @divisor: the divigning integer
* Return: 0 if not a prime and 1 if itis a prime
*/

int is_prime_helper(int n, int divisor)
{
	/*base case: if the divisor reaches the square root..*/
	/*..of the number, the number is prime*/
	if (divisor * divisor > n)
	{
	return (1);
	}

	/*if the number is divisible by divisor, it is not a prime*/
	if (n % divisor == 0)
	{
	return (0);
	}
	/*otherwise, recursively check the next divisor*/
	return (is_prime_helper(n, divisor + 1));
}
