#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}

	if (temp / 10 != 0)
		print_number(temp / 10);

	_putchar((temp % 10) + '0');
}
