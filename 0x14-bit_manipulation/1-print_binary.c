#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, n = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> 1) & 1)
		{
			_putchar('1');
			n++;
		}
		else if (n != 0)
			_putchar('0');
	}
	if (n == 0)
		_putchar('0');
}
