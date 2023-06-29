#include "main.h"
#include <stdio.h>

/**
 * _strcat - concantinating two strings
 * @dest: destination rings
 * @src: source string
 * Return: A pointer resulting to a string nest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\n';
	return (dest);
}
