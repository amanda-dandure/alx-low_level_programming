#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring
 * @s: This is the string that will be searched
 * @accept: This is the prefix that will be measured
 * Return: num of bytes in the 1st segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
			length++;
			break;
			}
			else if (accept[index + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
