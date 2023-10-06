#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: This is the 1st string
 * @s2: This is the 2nd string
 * @n: This is the num of element to concat for s2
 * Return: Pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *p;

	if (s1 == NULL)
		a = 0;
	else
	{
	for (a = 0; s1[a] != '\0'; a++)
		;
	}

	if (s2 == NULL)
		b = 0;
	else
	{
	for (b = 0; s2[b] != '\0'; b++)
		;
	}

	if (b > n)
		b = n;
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		p[c] = s1[c];
	for (c = 0; c < b; c++)
		p[c + a] = s2[c];
	p[a + b] = '\0';
	return (p);
}
