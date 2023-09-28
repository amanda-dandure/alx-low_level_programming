#include "main.h"

/**
 * _pow_recursion - Recursive fun that returns a raised value
 * @x: This is the number
 * @y: Ths is the power
 * Return: The result of the nmber raised to the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
