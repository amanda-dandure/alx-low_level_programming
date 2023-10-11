#include "function_pointers.h"

/**
 * array_iterator - Function that iterates thru an array
 * @array: This is the target array
 * @size: This is the rray size
 * @action: This is the function pointer to the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
