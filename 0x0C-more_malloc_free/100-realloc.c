#include "main.h"
#include "stdlib.h"

/**
 * _realloc - Function that reallocates a memory block using malloc and free
 * @ptr: This is the former ptr to the old memory allocated by malloc
 * @old_size: This is the old size allocated by malloc in the heap
 * @new_size: This is the new size allocated by the realloc function
 * Return: a pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t a, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		p[a] = oldp[a];
	free(ptr);
	return (p);
}
