#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * @ptr: pointer to the previous memory
 * @old_size: size in bytes
 * @new_size: new isze in bytes
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (ptr);
}
