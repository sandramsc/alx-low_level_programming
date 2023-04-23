#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Numberz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	/* convert i to its ASCII code and print it */
		putchar(i + '0');
	}
	putchar('\n');

return(0);
}
