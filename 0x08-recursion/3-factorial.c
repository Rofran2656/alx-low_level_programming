# include "main.h"

/**
 * factorial - gives factorial of a number n
 * @n: the number
 * Return: 0 or -1 (error)
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

		_putchar('\n');
}
