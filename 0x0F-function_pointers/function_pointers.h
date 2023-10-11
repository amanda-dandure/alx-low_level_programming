#ifndef FUNC_POINTERS
#define FUNC_POINTERS

#include <stddef.h>
void print_name(char *name, void (*f)(char *));

#endif
