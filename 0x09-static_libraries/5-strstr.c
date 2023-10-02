#include "main.h"

/**
 * _strstr - Function tht locates a substring
 * @haystack: This is the string that will be searched
 * @needle: This is th substring tht will be located
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int locate;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		locate = 0;
		if (haystack[locate] == needle[locate])
		{
			do {
				if (needle[locate + 1] == '\0')
					return (haystack);

				locate++;
			} while (haystack[locate] == needle[locate]);
		}

		haystack++;
	}

	return ('\0');
}
