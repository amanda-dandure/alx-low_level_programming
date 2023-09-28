#include "main.h"

/**
 * _strlen_recursion - Recursive function that returns the length of a string
 * @s: This is the string to be checked
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
