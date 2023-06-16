#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks a random number
 * used if condition
 *
 * Return: retrurn (0) mean success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive");
	} else if (n < 0)
	{
		printf("%d is negative");
	} else
	{
		printf("%d is zero");
	}
	return (0);
}
