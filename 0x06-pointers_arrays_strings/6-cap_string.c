#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 * @a: This is the pointer to the string
 * Return: The pointer to the string
 */

char *cap_string(char *a)
{
	int counter;

	counter = 0;
	while (a[counter] != '\0')
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] = a[0] - 32;
		}
		if (a[counter] == ' ' || a[counter] == '\t' || a[counter] == '\n'
				|| a[counter] == ',' || a[counter] == ';' || a[counter] == '.'
				|| a[counter] == '.' || a[counter] == '!' || a[counter] == '?'
				|| a[counter] == '"' || a[counter] == '(' || a[counter] == ')'
				|| a[counter] == '{' || a[counter] == '}')
		{
			if (a[counter + 1] >= 97 && a[counter + 1] <= 122)
			{
				a[counter + 1] = a[counter + 1] - 32;
			}
		}
		counter++;
	}
	return (a);
}
