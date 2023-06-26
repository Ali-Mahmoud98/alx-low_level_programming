#include "main.h"

/**
  * puts2 - function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  * @str: string passed
  */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
