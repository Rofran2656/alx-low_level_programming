#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 * @n: is the number to check
 * Return: 1 for uppercase 0 for otherwise
 */

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return(1);
	}
	return(0);
}

