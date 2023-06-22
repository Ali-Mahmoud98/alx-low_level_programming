#include "main.h"

/**
  * print_triangle - print shape
  * @size: int
  */
void print_triangle(int size)
{
	int i, j;
	
	if (size == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/*start row*/
		/*printing spaces -> spaces = size - hashes*/
		/*hashes = i*/
		for (j = 1; j <= (size - i); j++)
			_putchar(' ');
		/*printing hashes*/
		for (j = 1; j <= i; j++)
			_putchar('#');
		/*end row*/
		_putchar('\n');
	}
}
