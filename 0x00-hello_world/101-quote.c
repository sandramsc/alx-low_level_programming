#include <unistd.h>
/**
 * main - UNIX is basically a simple operating system, but you have
 * to be a genius to understand the simplicity
 *
 * Return: Always 1
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" "
		"- Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
