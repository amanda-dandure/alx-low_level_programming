#include "lists.h"

void come_first(void) __attribute__ ((constructor));

/**
 * come_first - Function that runs before the main function
 */

void come_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
