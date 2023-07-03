#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of two diagonals
 * @a: input
 * @size: input
 * Retun: always 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum2 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
