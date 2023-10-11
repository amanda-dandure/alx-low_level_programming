#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Fuction that selsct the opt to perform arithmetic op
 * @s: This is the op argument
 * Return: result of the selsected choice
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

/* initilize i */
i = 0;

/* s does not match any of th op */
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f); /* return op */

}
