#include "function_pointers.h"

/**
 * int_index - Function the searches for an int
 * @array: This is the target array hoding int
 * @size: This is the array size
 * @cmp: This is the fuction ptr to compare seach int
 * Return: int element match, -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for  (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
