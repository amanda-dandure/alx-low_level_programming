#include "main.h"

/**
 * print_bi - To print the binary representation of a num recursively
 * @n: This is the decimal input
 * Return: void
 */

void print_bi(unsigned long int n)
{
if (n == 0)
return;
print_bi(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}

/**
 * print_binary - Function that rint the binary representation of a num
 * @n: This is the decimal to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
print_bi(n);
}
}
