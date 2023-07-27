#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns no of elements in a list
 * @h: linked list
 *
 * Return: no of elements in a list
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
