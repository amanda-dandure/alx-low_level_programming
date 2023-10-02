#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9)
 * @c: This is the char to be checked
 * Return: 1 for a digit char or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
