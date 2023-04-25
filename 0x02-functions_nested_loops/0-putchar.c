#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - _putchar
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

return (0);
}
