#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
  * main - printing last digit of n
  * checks n using if condition
  *
  * Return: return (0) means success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is \n", n, n % 10);
	return (0);
}
