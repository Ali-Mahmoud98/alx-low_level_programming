#include "main.h"
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: integer
  */
void print_times_table(int n)
{
	char i = 0;

	while ((i <= n) && (n <= 15) && (n >= 0))
	{
		char j = 0;

		while (j <= n)
		{
			if (j == 0)
				_putchar('0' + (i * j));
			if ((j != 0) && ((i * j) <= 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
			} else if ((j != 0) && ((i * j) < 99) && ((i * j) > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			} else if ((j != 0) && ((i * j) > 99))
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((i * j) / 100));
				_putchar('0' + (((i * j) / 10) % 10));
				_putchar('0' + ((i * j) % 10));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
