#include "main.h"

/**
 * flip_bits - Func that returns the num of bits needed
 * @n: This is the 1st to compare
 * @m: This is the 2nd num to compare
 * Return: The num of bits you would like to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int count;

result = n ^ m;
for (count = 0; result > 0;)
{
if ((result & 1) == 1)
count++;
result = result >> 1;
}
return (count);
}
