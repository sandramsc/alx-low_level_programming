#include "main.h"
#include <stdio.h>

/**
* is_prime_number -  A program that  returns 1 if the input integer is a prime number, otherwise return 0
* 
* Return: Always 0 (Success)
*/
int is_prime_number(int n)
{
	int i;
	
	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
		return (0);
	}
	}

return (1);
}
