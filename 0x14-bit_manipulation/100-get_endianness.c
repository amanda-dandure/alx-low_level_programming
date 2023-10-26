#include "main.h"

/**
 * get_endianness - Fuction that checks byte order
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
int p = 1;
int little_or_big;

little_or_big = (int)(((char *)&p)[0]);
return (little_or_big);
}
