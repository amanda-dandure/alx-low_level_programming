#include "main.h"

/**
 * _isalpha - Checks the code for alphabetic character
 * @c: The character will be checked
 * Return: 1 for alphabtic character or 0 fot anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
