#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the character c to stdout
*@c: The character that is to be printed
*
*Return: On Success 1
*Return -1 on error and errno is set
*/
int _putchar(char c)
{
 return (write(1, &c,1));
}
