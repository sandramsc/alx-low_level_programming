#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Smile in the mirror
 * Return: Always 0
 */
int main(void)
{
	char c;
	/* print alphabet backwards  */
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

return (0);
}
