#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times in the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
