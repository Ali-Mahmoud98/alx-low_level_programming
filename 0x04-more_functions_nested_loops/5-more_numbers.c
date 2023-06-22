#include "main.h"

/**
  * more_numbers - print nums from 0 to 14, 10 times
  */
void more_numbers(void)
{
	char a, i;

	for (i = 0; i < 10; i++)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			else
				_putchar('0' + a);
			a++;
		}
		_putchar('\n');
	}
}
