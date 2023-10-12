#include "variadic_functions.h"

/**
 * print_numbers - Function that prints int
 * @separator: This is the string to be printed between num
 * @n: This is the num of int to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, arr;

	va_list ptr;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
