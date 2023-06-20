#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers,
  * starting with 1 and 2.
  * Return: 0
  */
int main(void)
{
	unsigned long int fibb1 = 1, fibb2 = 2, fibb3 = 0, sum = 0;

	while (fibb3 < 4000000)
	{
		fibb3 = fibb1 + fibb2;
		fibb1 = fibb2;
		fibb2 = fibb3;
		if (fibb1 % 2 == 0)
			sum += fibb1;
	}
	printf("%ld\n", sum);
	return (0);
}
