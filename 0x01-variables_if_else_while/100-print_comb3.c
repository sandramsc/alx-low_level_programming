#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	/*the first digit ranges from 0 to 8*/
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			/*the second digit ranges from i+1 to 9*/
			putchar(i + '0');
			putchar(j + '0');
			/*add separator if not the last combination*/
			if (i < 8 || j < 9)
			{
				putchar(',');
                		putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);
}
