#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to multiply
 * @y: times to multiply the value
 * Return: value multiplied to y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
/**
 * _sqrt -  function that calculates the natural square root of a number
 * @n: num to calculate the square root
 * @i: iterator
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
