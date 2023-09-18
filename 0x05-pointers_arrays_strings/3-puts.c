#include "main.h"

/**
 * _puts - A function that prints a string folowed by a new line
 * @str: This is the pointer for the string
 * Return: The string and a new line
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
