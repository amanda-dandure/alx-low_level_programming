#include "main.h"

/**
 * *_strchr - Function that locates a character in a string
 * @s: This is the string that will be searched
 * @c: This is the char that will be located
 * Return: c if 1st occurnce pointer is found otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int locate;

	for (locate = 0; s[locate] >= '\0'; locate++)
	{
		if (s[locate] == c)
		return (s + locate);
	}
	return ('\0');
}
