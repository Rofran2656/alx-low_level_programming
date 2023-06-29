#include "main.h"
/**
 * reverse_array -a function that reverses an array of integers
 * @a: array of integers to reverse
 * @n: number of arrays in an element
 * Return: empty
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
