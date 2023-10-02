#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line
 * @argc: This is the num of command line arg
 * @argv: This is the array that contains the command line arg
 * Return: (0)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
