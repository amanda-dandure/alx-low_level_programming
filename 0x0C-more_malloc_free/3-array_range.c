#include "main.h"
#include "stdlib.h"

/**
 * array_range - Function that creates an array of integers
 * @min: This is the min value
 * @max: This is the max value
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int a, b;
	int *p;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	p = malloc(sizeof(int) * b);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		p[a] = min;
		min++;
	}
	return (p);
}
