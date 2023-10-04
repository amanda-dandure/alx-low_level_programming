#include "main.h"
#include "stdlib.h"

/**
 * *_strdup - Function that returns a pointer to
 * a newly allocated space in memory
 * @str: This is the initial input string
 * Return: A pointer to the memory allocated
 */

char *_strdup(char *str)
{
	size_t a, b;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strdout[b] = str[b];
	}
	return (strdout);
}
