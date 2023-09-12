#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a num
 * @n: The num will be checked
 * Return: Value of the las digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
