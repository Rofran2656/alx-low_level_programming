#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns a value if the integer is a prime number
 * @n: num to check
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks if the number is prime
 * @n: num to be checked
 * @i: iterator
 *
 * Return: 1 for prime or 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
