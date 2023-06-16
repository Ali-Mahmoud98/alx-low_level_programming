#include <stdio.h>
/**
  * main - printing numbers from 0 to 9
  * Return: return (0) means success
  */
int main(void)
{
	char a = '0';

	while (a < '10')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
