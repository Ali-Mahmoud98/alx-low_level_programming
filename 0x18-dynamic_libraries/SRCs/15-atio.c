#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int index, sign_count, found, value, digit;
	int len = 0;

	index = 0;
	sign_count = 0;
	found = 0;
	value = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (index < len && found == 0)
	{
		if (s[index] == '-')
			sign_count++;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (sign_count % 2)
				digit = -digit;
			value = value * 10 + digit;
			found = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			found = 0;
		}
		index++;
	}

	if (found == 0)
		return (0);

	return (value);
}
