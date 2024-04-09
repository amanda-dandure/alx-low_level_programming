#include "search_algos.h"

/**
  * _binary_search - Search for a value in a using binary-search
  * @array: This is the pointer to the 1st element of the arr to search
  * @left: This is the starting index of the [sub]arr to search
  * @right: This is the ending index of the [sub]arr to search
  * @value: This is the value to search for
  * Return: If the value is not present or the array is NULL, -1
  *         Otherwise the index where the value is located
  * Description: Printing the [sub]array being searched after each change
  */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t p;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (p = left; p < right; p++)
			printf("%d, ", array[p]);
		printf("%d\n", array[p]);

		p = left + (right - left) / 2;
		if (array[p] == value)
			return (p);
		if (array[p] > value)
			right = p - 1;
		else
			left = p + 1;
	}

	return (-1);
}

/**
  * exponential_search - Search for a value using exponential-search
  * @array: This is the pointer to the 1st element of the arr to search
  * @size: This is the num of elements in the array
  * @value: This is the value to search for
  * Return: If the value is not present or the array is NULL -1
  *         Otherwise the index where the value is located
  * Description: Printing a value every time it is compared in the array
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t p = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (p = 1; p < size && array[p] <= value; p = p * 2)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
	}

	right = p < size ? p : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", p / 2, right);
	return (_binary_search(array, p / 2, right, value));
}
