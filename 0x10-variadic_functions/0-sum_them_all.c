#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 * @n: no of arguments in a parameter
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
