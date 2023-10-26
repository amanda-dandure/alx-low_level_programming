#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: This is the num to check the value of
 * @index: This is the index to get the bit
 * Return: int 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (index > sizeof(size_t) * 8)
return (-1);

for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
