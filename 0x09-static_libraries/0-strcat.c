#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: This is the destination for the string pointer.
 * @src: This is the source of the string pointer.
 * Return: The pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
int length_of_string, a;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
	length_of_string++;
}
for (a = 0; src[a] != '\0'; a++, length_of_string++)
{
	dest[length_of_string] = src[a];
}
dest[length_of_string] = '\0';
return (dest);
}
