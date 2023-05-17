#include <stdio.h>
/*
* main -a program to print the program name, even when
* file name is changed
*/
int main(int argc, char *argv[])
{
	/*To suppress unused parameter warning*/
	(void)argc;

	/*Prints program name*/
	printf("%s\n", argv[0]);
	return (0);
}
