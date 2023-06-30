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

	while (s[len] != '\0')
	{
		if (s[len] >= 'A' && s[len] <= 'M')
			s[len] += 13;
		else if (s[len] >= 'N' && s[len] <= 'Z')
			s[len] -= 13;
		else if (s[len] >= 'a' && s[len] <= 'm')
			s[len] += 13;
		else if (s[len] >= 'n' && s[len] <= 'z')
			s[len] -= 13;

		len++;
	}

	return (s);
}
