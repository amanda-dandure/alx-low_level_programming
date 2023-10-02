#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: This is num of command line arg
 * @argv: This is the array that has the program command line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
