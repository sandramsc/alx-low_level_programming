#include "main.h"
/**
 * _isupper - check to see if a letter is in uppercase
 * @x: The number that needs to be evaluated
 * Return: 1 for uppercase letter or 0 for anything else
 */
int _isupper(int x)
{
        if (x >= 65 && x <= 90)
        {
        return (1);
        }
        return (0);
}
