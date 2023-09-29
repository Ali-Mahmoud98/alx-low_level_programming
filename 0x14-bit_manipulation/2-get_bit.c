#include "main.h"

/**
 * get_bit - returns the value of nth bit in number
 * @n: number to search
 * @index: index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
