#include <stdio.h>

/**
  * main - the program prints the alphabet in lowercase,
  * followed by a new line using only the putchar
  * function
  *
  * Return: return (0)
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

