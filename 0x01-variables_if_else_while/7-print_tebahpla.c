#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low <= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
