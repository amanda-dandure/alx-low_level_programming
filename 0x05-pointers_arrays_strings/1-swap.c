#include "main.h"

/**
 * swap_int - A function that swaps two int using pointers
 * @a: This will swap and store the address of a
 * @b: This will swap and store the address of b
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
