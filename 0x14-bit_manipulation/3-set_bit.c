#include "main.h"

/**
 * set_bit - Func that sets the value of a bit to 1 ata given index
 * @n: This is the ptr to the bit manipulated
 * @index: This is the position of the bit manipulated
 * Return: 1 on success and -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;

if (index > sizeof(unsigned int) * 8)
return (-1);
mask = 1;
mask = mask << index;
*n = (*n | mask);
return (1);
}
