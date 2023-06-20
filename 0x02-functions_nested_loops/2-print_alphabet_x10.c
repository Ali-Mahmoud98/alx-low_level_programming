#include <stdio.h>

/*Start Functions prototypes*/
void print_alphabet(void);
void print_alphabet_x10(void);
/*End Functions prototypes*/
/**
  * main - print string
  * Return: return (0) means success
  */
int main(void)
{
	print_alphabet_x10();
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
/**
  * print_alphabet_x10 - calls the
  * function print_alphabet 10 times
  * takes no arguments
  * Return: void
  */
void print_alphabet_x10(void)
{
	char i = 0;

	while (i < 10)
	{
		print_alphabet();
	}
}
