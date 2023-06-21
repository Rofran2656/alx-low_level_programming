#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: Special character to check
 * Return: 1 is for lowercase 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
