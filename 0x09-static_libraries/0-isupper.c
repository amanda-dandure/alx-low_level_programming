#include "main.h"

/**
 * _isupper - Checks the code for lowercase characters
 * @c: This is the char to be checked
 * Return: 1 for upperase char and 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
