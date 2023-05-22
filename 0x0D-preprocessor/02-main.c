#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry pointof program.
 *
 * Description: prints the name of the..
 * ..file it was compiled from, followed by a new line.
 *
 * Parameters:
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	printf(__FILE__);
	putchar('\n');
return (0);
}
