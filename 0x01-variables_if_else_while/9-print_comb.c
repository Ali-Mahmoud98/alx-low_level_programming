#include <stdio.h>
/**
  * main - printing numbers 
  * Hexadecimal from 0 to F
  * Return: return (0) means success
  */
int main(void)
{
	char a = '0';

	while (a < ('1'+9))
	{
		putchar(a);
		if (a == '9')
			break;
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
