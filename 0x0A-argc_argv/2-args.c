#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts argument
 * @argv: vector of the argument
 *
 * Return: zero always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
