#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2.
  * Return: 0
  */
int main(void)
{
	int a = 2;
	unsigned long int fibb[50];

	fibb[0] = 1;
	fibb[1] = 2;
	
	while (a < 50)
	{
		fibb[a] = fibb[a - 1] + fibb[a - 2];
		a++;
	}

	a = 0;

	while (a < 50)
	{
		printf("%ld", fibb[a]);
		if (a != (50 - 1))
			printf(" ,");
		a++;
	}
	printf("\n");
	return (0);
}
