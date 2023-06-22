#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @n: number to be checked
 * Return: 1 for a digit to character 0 for otherwise
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return(1);
	}
	return(0);
}
