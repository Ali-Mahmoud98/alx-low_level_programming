#include "main.h"

/**
  * print_last_digit - prints last digit
  * parameters:
  * @n: integer number
  * Return: the last digit of n
  */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	n = n % 10;

	_putchar('0' + n);
	return (n);
}
