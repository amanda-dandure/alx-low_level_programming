#include "search_algos.h"

/**
 * rec_search - Searches for a value in an arr of
 * int using the binary-search algorithm
 * @array: This is the input arr
 * @size: This is the size of the arr
 * @value: This is the value to search in
 * Return: The index of the num
 */

int rec_search(int *array, size_t size, int value)
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
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Calling to rec_search to return
 * the index of the num
 * @array: This is the input arr
 * @size: This is the size of the arr
 * @value: This is the value to search in
 * Return: The index of the num
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
