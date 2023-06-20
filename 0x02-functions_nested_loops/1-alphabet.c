#include <stdio.h>

/*Function that print alphabet*/
/*print_alphabet - declaration*/
void print_alphabet(void);
/**
  * main - print string
  * Return: return (0) means success
  */
int main(void)
{
	print_alphabet();
	return (0);
}
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
		putchar(a);
	}
	putchar('\n');
}
