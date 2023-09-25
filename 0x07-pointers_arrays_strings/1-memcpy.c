#include "main.h"

/**
 * *_memcpy - Function that copies memory area
 * @dest: Memory area copied into
 * @src: These are the bytes fro the memory area
 * @n: This is where the  bytes are copied from
 * Return: The pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
