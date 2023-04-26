#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 10 x alphabet
 *
 * Return: Always 0
 */
int main(void)
{
        char c;
        int i;

        for (i  = 0; i < 10; i++)
        {
                for (c = 'a'; c <= 'z'; c++)
                {
                        putchar(c);
                }
        putchar('\n');
        }

return (0);
}
