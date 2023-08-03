#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit or -1 if index more than 63
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (n & (1 << index));
}
