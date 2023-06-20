#include "main.h"
/**
  * times_table - prints the n times table, starting with 0.
  * @n: integer
  */
void print_times_table(int n)
{
	char i = 0;

	while (i <= n)
	{
		char j = 0;

		while (j <= n)
		{
			if (j == 0)
				_putchar('0' + (i * j));
			if ((j != 0 ) && ((i * j) <= 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
			} 
			else if ((j != 0) && ((i * j) > 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
