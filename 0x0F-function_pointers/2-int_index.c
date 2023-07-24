#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of an array element
 * @cmp: pointer to a function of one in the main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1);
}
