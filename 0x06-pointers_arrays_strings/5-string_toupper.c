#include "main.h"
/**
 * string_toupper - a function changing all lowercase letters to uppercase
 * @str: string to be changed
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
