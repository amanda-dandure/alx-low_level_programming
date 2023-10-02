#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: This is the num of command line arg
 * @argv: This is the array that contains the commang line arg
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
