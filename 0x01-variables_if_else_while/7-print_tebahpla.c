#include <stdio.h>
/**
  * main - prints the lowercase alphabet in reverse
  * Return: return (0) means success
  */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
