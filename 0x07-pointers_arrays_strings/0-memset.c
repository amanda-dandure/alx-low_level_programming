#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: This is the memory area that will be filled
 * @b: This is the character to be copied
 * @n: This shows the number of time char b will be copied
 * Return: The pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
