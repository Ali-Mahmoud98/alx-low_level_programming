#include "main.h"
/**
  * print_commaAndSpace - print
  * @a: integer
  */
void print_commaAndSpace(int a)
{
	_putchar(',');
	for (int i = 0; i < a; i++)
		_putchar(' ');
}
/**
  * print_times_table - prints the n times table, starting with 0.
  * @n: integer
  */
void print_times_table(int n)
{
	for (char i = 0; (n <= 15) && (i <= n) && (n >= 0); i++)
	{
		for (char j = 0; j <= n; j++)
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
		}
		_putchar('\n');
	}
}
