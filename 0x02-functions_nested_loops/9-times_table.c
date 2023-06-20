#include "main.h"
/**
  * times_table - prints the 9 times table, starting with 0.
  */
void times_table(void)
{
	char i = 0;

	while (i <= 9)
	{
		char j = 0;

		while (j <= 9)
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
