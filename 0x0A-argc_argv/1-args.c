#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it
 * @argc: This is the num of commnd arg
 * @argv: Tis is the array which contains the command line arg
 * Return: (0)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
