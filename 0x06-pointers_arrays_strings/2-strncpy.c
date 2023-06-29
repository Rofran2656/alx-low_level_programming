#include "main.h"


/**
 * _strncpy - a function that copies a string
 * of bytes from string src into dest
 * @dest: buffer storing the copy of the string
 * @src: string source
 * @n: number of maximum bytes copied from src
 * Return: a pointer to the resulting string test
 */


char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
