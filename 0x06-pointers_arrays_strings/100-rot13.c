#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13.
 * @s: This is the pointer to the string
 * Return: The pointer to the string
 */

char *rot13(char *s)
{
int a;
int b;
char data[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13 =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzadbdefghijklm";

for (a = 0; s[a] != '\0'; a++)
{
	for (b = 0; b < 52; b++)
	{
		if (s[a] == data[b])
		{
			s[a] == rot13[b];
			break;
		}
	}
}
return (s);
}
