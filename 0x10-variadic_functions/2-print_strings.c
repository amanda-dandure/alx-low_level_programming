#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: This is the sting to be printed between strings
 * @n: This is the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (p = 0; p < n; p++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (p != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
