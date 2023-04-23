#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Patience, persistence and perspiration make an
 * unbeatable combination for success
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		/*add separator if not the last number*/
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	/*print the final character*/
	putchar('\n');
			
return (0);
}
