#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c<='z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
