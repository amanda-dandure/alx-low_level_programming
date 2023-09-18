#include "main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src
 * @dest: This is the character typing string
 * @src: Tis is also a character typing string
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');
	return (dest);
}
