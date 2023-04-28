#include <stdio.h>
#include <math.h>
/**
 * main - Prints largets prime factor of the value 612852475143
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_factor = 0;

	for (long int i = 2; i <= num; i++)
	{
	while (num % i == 0)
	{
	largest_factor = i;
	num /= i;
	}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
