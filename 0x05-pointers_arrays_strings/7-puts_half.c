#include "main.h"

/**
  * puts_half - function that prints half of a string,
  * followed by a new line.
  * The function should print the second half of the string.
  * @str: string.
  */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
		len++;

	n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
