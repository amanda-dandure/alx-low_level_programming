#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - To perform calc fun on command line
 * @argc: This is the arg count
 * @argv: This is the arg vector
 * Return: results of calc func execution
 */

int main(int argc, char *argv[])
{
	char *op; /* op */
	int num1, num2; /* num inputs */

	if (argc != 4) /* if arg count is wrong */
	{
		printf("Error\n");
		exit(98);
	}

	/* set cmd rg input */
	num1 = atoi(argv[1]); /* 1st num input */
	op = (argv[2]); /* op input */
	num2 = atoi(argv[3]); /* 2nd num input */

	/* if op not in op list */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* if user tries to div or do modulus by 0 */
	if ((*op == '/' && num2 == 0) || (*op == '&' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* print results of op */
	printf("%d\n", get_op_func(op) (num1, num2));
	return (0);

}
