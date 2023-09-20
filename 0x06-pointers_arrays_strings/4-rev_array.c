#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: This is the pointer to the array
 * @n: This is the number of elements to be swapped
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int reverse, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		reverse = a[counter];
		a[counter++] = a[n];
		a[n--] = reverse;
	}
}
