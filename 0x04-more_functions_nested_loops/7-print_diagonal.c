#include "main.h"

/**
  * print_diagonal - print diagonal
  * @n: integer
  */
void print_diagonal(int n)
{
	int spaces;
	int i, j;

	if (n == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		spaces = i;
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
