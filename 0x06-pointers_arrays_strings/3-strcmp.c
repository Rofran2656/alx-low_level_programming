#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: compares the first pointed string
 * @s2: compares the second pointed string
 * Return: if str1 < str2, the negative difference of the unmatched character
 * is str1 == str2, 0.
 * is str1 > str2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
