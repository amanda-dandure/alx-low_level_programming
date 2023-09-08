#include <stdio.h>
#include <time.h>
#include <stdlib>
/**
 * main - Prints the last digitof a randomly generated number
 * and weather is it is grater than 5, less than 6, or 8.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less that 6 and not 0\n", n, last);
	return (0);
}
