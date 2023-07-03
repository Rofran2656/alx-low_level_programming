#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: input char
 * @c: input char
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
