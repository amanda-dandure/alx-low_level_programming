#include "search_algos.h"

/**
 * linear_search - Search for a value in an arr of int using the linear search
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: [EXIT_SUCCESS] Always
 */

int linear_search(int *array, size_t size, int value)
{
	int p;

	if (array == NULL)
		return (-1);

	for (p = 0; p < (int)size; p++)
	{
		printf("Value checked array[%u] = [%d]\n", p, array[p]);
		if (value == array[p])
			return (p);
	}
	return (-1);
}
