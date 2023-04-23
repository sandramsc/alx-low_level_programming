#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Hexadecimal
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for(ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
   	}
	for(ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
