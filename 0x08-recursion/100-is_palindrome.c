# include "main.h"

int check_str(char *s, int i, int len);
int recursion(char *s);

/**
 * is_palindrome - function returns a palindrome
 * palindrome is an empty string
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_str(s, 0, recursion(s)));
}

/**
 * recursion - length of the string
 * @s: string of length
 *
 * Return: 1 (pass)
 */

int recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursion(s + 1));
}

/**
 * check_str - check characters of the string
 * @s: string to check
 * @i: iterations
 * @len: string length
 * Return: 1 or 0
 */

int check_str(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_str(s, i + 1, len - 1));
	_putchar('\n');
}
