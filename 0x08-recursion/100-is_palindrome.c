#include "main.h"

/**
 * _strlen_recursion - returning the length of a string
 * @s: the string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares char of a string
 * @s: string
 * @n1: small iterator
 * @n2: big iterator
 * Return: zero
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detecting if a string is a palidrome
 * @s: the string
 * Return: 1 if it is a palindrome, 0 if not
 */

int _is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) -1));
}
