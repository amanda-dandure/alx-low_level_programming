#include "main.h"

/**
 * print_rev - Function that prints a string in reverse plus a new line
 * @s: This d the used string that references the pointer
 * Return: 0
 */

void print_rev(char *s)
{
int begin = 0;

while (s[begin])
	begin++;

while (begin--)
	_putchar(s[begin]);
_putchar('\n');
}
