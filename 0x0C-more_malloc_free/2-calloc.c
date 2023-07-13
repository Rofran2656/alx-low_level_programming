#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates the memory of an array
 * @nmemb: memory of the array to allocate
 * @size: size of the memory
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(l);

	if (s == NULL)
		return (NULL);

	while (i < l)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
