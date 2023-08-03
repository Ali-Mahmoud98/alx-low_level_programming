#include "main.h"
/**
 * binary_to_uint -  function that converts a binary
 * number to an unsigned int
 * @b: pointer to char (string)
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}
