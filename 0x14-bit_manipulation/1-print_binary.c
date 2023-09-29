#include "main.h"

/**
 * print_binary - prints the binary of a decimal num
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int it, flag = 0;

	for (it = 63; it >= 0; it--)
	{
		if ((n >> it) & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
