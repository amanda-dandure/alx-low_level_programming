#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: This is the string to be searched
 * @accept: These are the set of bytes to be searched for
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int search;

	while (*s)
	{
		for (search = 0; accept[search]; search++)
		{
			if (*s == accept[search])
				return (s);
		}
		s++;
	}
	return ('\0');
}
