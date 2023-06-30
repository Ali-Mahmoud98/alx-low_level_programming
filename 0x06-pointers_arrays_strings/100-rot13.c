#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoding function
 * @s: string
 *
 * Return: string
 */
char *rot13(char *s)
{
	int len = 0;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[len] != '\0')
	{
		int index = 0;

		while (index < 52)
		{
			if (s[len] == input[index])
			{
				s[len] = output[index];
				break;
			}
			index++;
		}
		len++;
	}

	return (s);
}
