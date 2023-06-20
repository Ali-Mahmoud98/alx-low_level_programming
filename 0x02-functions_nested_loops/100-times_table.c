#include "main.h"
/**
  * print_commaAndSpace - print
  * @a: integer
  */
void print_commaAndSpace(int a)
{
	char i = 0;

	_putchar(',');
	while (i < a)
		_putchar(' ');
}
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: integer
  */
void print_times_table(int n)
{
	char i = 0;

	while ((n <= 15) && (i <= n) && (n >= 0))
	{
		j = 0;
		while (j <= n)
		{
			if (j == 0)
				_putchar('0' + (i * j));
			if ((j != 0) && ((i * j) <= 9))
			{
				print_commaAndSpace(3);
				_putchar('0' + (i * j));
			} else if ((j != 0) && ((i * j) > 9) && ((i * j) < 100))
			{
				print_commaAndSpace(2);
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			} else if ((j != 0) && ((i * j) > 99))
			{
				print_commaAndSpace(1);
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
