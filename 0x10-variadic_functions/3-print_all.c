#include "variadic_functions.h"

/**
 * print_all - Function that prints any arg
 * @format: This is the arg specifier
 * Return: any arg given based og format specifier
 */

void print_all(const char * const format, ...)
{
	int i, check; /* declare var and va_arg datatype */

	char *str;
	va_list spc;

	va_start(spc, format); /* initailize var arg */

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check = 0; /* check if the condition has been met */
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0) /* if not NULL */
			printf(", ");
		i++; /* update step of iterator var */
	}
	printf("\n");
	va_end(spc); /* end traversal */
}

