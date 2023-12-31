#include "main.h"
#include "stdlib.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: This is the 1st string
 * @s2: This is the 2nd string
 * Return: The pointer to the concateated string
 * which the memory was allocated for
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}

