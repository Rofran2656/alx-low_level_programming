#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 *
 * Return: int value
 *
 */

int *array_range(int min, int max)
{
	int *b, i = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[i] = min;
		i++;
		min++;
	}
	return (b);
}
