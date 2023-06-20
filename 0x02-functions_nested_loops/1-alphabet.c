#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - A function that prints in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	_putchar ('\n');
}

