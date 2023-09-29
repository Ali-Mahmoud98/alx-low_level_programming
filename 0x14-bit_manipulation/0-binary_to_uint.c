#include "main.h"

/**
 * binary_to_uint - uppercase letters
 * @b: char to check
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int it;
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);
	for (it = 0; b[it] != '\0'; it++)
	{
		if (b[it] < '0' || b[it] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[it] - '0');
	}

	return (conv_num);
}
