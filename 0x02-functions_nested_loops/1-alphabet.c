#include "main.h"
/**
  * print_alphabet - printing
  * chars from 'a' to 'z'
  * takes no arguments
  * Retuen: void
  */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
