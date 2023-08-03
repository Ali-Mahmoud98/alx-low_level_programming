#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 0xFF;
	unsigned char *c = (unsigned char *) &i;

	if (*c == 0xFF)
		return (1);

	return (0);
}
