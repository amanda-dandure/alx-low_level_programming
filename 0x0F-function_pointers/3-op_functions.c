#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: sum of 2 num
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mutiply 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the div of 2 num
 * @a: 1st num
 * @b: 2nd num
 * Return: remainder of div of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
