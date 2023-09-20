#include "main.h"

/**
 * leet - Function  that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @n: This is the pointer to the string
 * Return: The pointer to the string
 */

char *leet(char *n)
{
	int length, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	length = 0;
	while (n[length] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == n[length])
			{
				n[length] = leetNums[leetCount];
			}
			leetCount++;
		}
		length++;
	}
	return (n);
}
