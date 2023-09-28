#include "main.h"

/**
 * sqrt_p - This function return the sqrt of a num
 * @y: This is the input num
 * @z: This is the iterator
 * Return: sqrt or -1
 */

int sqrt_p(int y, int z)
{
	if (z * z == y)
	{
		return (z);
	}
	else if (z * z > y)
	{
		return (-1);
	}
	return (sqrt_p(y, z + 1));
}
/**
 * _sqrt_recursion - This function return the sqrt of a num
 * @n: This is the input num
 * Return: A natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrt_p(n, 0));
}
