#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: This is destination of a the string pointer
 * @src: This is the source of a string pointer
 * @n: This indicates the number of bytes to be used
 * Return: The pointer to its destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int bytes;

	for (bytes = 0; bytes < n && src[bytes] != '\0'; bytes++)
	{
		dest[bytes] = src[bytes];
	}

	for (; bytes < n; bytes++)
	{
		dest[bytes] = '\0';
	}
	return (dest);
}
