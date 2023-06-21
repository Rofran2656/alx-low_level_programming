#include "main.h"
/**
 * print_last_digit - Function that prints the lst digit of a number
 * @n: The number to treated
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar (last + '0');
	return (last);
}
