#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes  functions on element of an array
 * @array: array
 * @size: no of elements to print
 * @action: pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
