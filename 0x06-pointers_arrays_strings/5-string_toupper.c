#include "main.h"
/**
 * string_toupper - change all lowercase letters to uppercase
 * @str: string
 *
 * Return: string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
