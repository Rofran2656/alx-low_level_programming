#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: string to print between strings
 * @n: no of strings passed to the function
 * if a separator is NULL do not print it
 * if one of the string is NULL print (nil)
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list m;
	char *str;
	unsigned int index;

	va_start(m, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(m, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
