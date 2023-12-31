#include "main.h"

/**
 * factorial - Recursive function that returns the factorial of a given num
 * @n: This is the factor to factorise
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
