#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13.
 * @s: This is the pointer to the string
 * Return: The pointer to the string
 */

char *rot13(char *s)
{
char *ptr = s;

while (*ptr != '\0')
{
if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
{
*ptr += 13;
}
else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
{
*ptr -= 13;
}
ptr++;
}
return (s);
}
