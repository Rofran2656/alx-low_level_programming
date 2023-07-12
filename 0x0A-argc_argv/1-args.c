#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: counts argument
 * @argv: vector of the argument
 * Return: zero always
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
