#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - To print the opcode in program
 * @a: This is the address of the main func
 * @n: This is the num of bytes to print
 * Return: nothing
 */

void print_opcodes(char *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
	printf("%.2hhx", a[p]);
	if (p < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main- To print the upcodes of its own main func
 * @argc: This is the arg count
 * @argv: This is the arg vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}
