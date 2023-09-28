#include "main.h"

/**
 * _strlen_recursion - This is to get the string length
 * @s: this is the string
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - This compares ecah char of the string
 * @s: This is string
 * @left: This is the smallest iterator
 * @right: This is the biggest iterator
 * Return: An integer
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - This detects if a string is a palindrome
 * @s: This is the string to test
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
