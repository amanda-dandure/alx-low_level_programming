#include "main.h"
#include "stdlib.h"

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: This is the num of block of memory
 * @size: This is the size if the element (int)
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;
	return (p);
}
