#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - A program assigning a random number to an executable variable n
 * Return: Always return 0 (Success)
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
