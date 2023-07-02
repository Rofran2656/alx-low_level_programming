#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @str: string to get length for
 * Return: length of @str
 */

int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
