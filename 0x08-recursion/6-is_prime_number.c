# include "main.h"

int _prime(int n, int i);
/**
 * is_prime_number - if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - calculates if a number is prime recursively
 * @k: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int _prime(int k, int i)
{
	if (i == 1)
		return (1);
	if (k % i == 0 && i > 0)
		return (0);
	return (_prime(k, i - 1));
	_putchar('\n');
}
