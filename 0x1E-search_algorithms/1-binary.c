#include "search_algos.h"

/**
 * recursive_search - Searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: The index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t p;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (p = 0; p < size; p++)
		printf("%s %d", (p == 0) ? ":" : ",", array[p]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Calls to binary_search to return the index of the num
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: The index of the num
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
