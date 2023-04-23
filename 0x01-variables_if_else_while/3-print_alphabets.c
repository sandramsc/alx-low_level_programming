#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - alphABET
 * Return: Always 0
 */
int main(void)
{
	/* Printing the lowercase alphabet */
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	/* Printing the uppercase alphabet */
	c  = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}	
	putchar('\n');

return (0);
}
