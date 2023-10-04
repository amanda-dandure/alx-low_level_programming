#include "main.h"
#include "stdlib.h"

/**
 * *create_array - Function that creates an array of chars
 * @size: This is the input for the size of the array (int)
 * @c: This is to store the string of a char
 * Return: A pointer to the base of char c
 */

char *create_array(unsigned int size, char c)
{
	size_t a;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
