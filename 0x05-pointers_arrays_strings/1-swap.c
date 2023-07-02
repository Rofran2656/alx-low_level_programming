#include <stdio.h>

/**
 * swap_int - a function that swaps the value of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: zero
 */

void swap_int(int *a, int *b)
	/*function that swaps the values the value of the two integers*/
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
