#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * an inputed umber of bytes from src
 * @dest: the string to append
 * @src: string to append to dest
 * @n: number of bytes to append to dest
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
