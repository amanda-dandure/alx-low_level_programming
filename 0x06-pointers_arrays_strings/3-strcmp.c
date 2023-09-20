#include "main.h"

/**
 * _strcmp - Function that compares strings
 * @s1: This is the pointer for the 1st string
 * @s2: This is the pointer for the 2nd string
 * Return: value < 0 if s1 < s2, value > 0 if s1 > s2 & value = 0 if s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare = s1[counter] - s2[counter];
	return (compare);
}
