#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: This is the string that will be checked
 * Return: The strings length
 */

int _strlen(char *s)
{

int string_length = 0;

while (s[string_length])
	string_length++;
return (string_length);
}
