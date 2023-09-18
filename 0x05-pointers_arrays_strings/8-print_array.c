#include <stdio.h>

/**
 * print_array - Function that prints elements of an array of int
 * @i: This will be the input array
 * @l: This wil be the arrays length
 */

void print_array(int *i, int l)
{
	int array_index;

	for (array_index = 0; array_index < l; array_index++)
	{
		printf("%d", i[array_index]);
		if (array_index != (l - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
