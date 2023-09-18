#include "main.h"

/**
 * puts2 - Function that prints char starting with the 1st char
 * @str: This i the string reference used
 * Return: 0
 */

void puts2(char *str)
{
int b = 0;

while (str[b] != '\0')
{
	if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	b++;
}
_putchar('\n');
}
