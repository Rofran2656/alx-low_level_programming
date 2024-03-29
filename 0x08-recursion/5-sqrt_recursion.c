# include "main.h"

int two_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function to work out a squareroot of a number
 * @n: the number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (two_sqrt_recursion(n, 0));
	_putchar('\n');
}

/**
 * two_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: square root
 */

int two_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (two_sqrt_recursion(n, i + 1));
	_putchar('\n');
}
