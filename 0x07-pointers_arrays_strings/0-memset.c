#include "main.h"

/**
 * _memset - the entry point
 * @s: point destination
 * @b: constant byte
 * @n: bytes
 * Return: always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
