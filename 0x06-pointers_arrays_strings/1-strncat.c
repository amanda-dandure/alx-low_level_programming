#include "main.h"

/**
 * _strncat - A function concatenates two strings using strncat
 * @dest: This is the destination of the string pointer
 * @src: This is the source of the string pointer
 * @n: These are the number of bytes that are to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
