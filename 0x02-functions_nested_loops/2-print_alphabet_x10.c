#include "main.h"
/**
  * print_alphabet_x10 - calls the
  * function print_alphabet 10 times
  * takes no arguments
  * Return: void
  */
void print_alphabet_x10(void)
{
	char i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a < 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
