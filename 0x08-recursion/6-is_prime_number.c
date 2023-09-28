#include "main.h"

/**
 * prime_p - Calculates if t is a prime num
 * @a: This is the input num
 * @b: This is the divisor
 * Return: (0)
 */

int prime_p(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_p(a, b + 1));
}

/**
 * is_prime_number - This detects if it a a prime num
 * @n: This is the input num
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return  (prime_p(n, 2));
}
