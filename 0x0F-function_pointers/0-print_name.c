#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: print name
 * @f: pointer to the function
 *
 * Return: zero
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
