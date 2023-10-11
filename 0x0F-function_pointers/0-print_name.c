#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @f: This is the var to hold the string name
 * @name: This is the name of the person
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
