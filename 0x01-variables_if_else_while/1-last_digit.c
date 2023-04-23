#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - The last digit
 * Return: Always 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* Get the last digit of n*/
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
return (0);
}
