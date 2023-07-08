#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins
  * to make change for an amount of money.
  * @argc: number of command line arguments.
  * @argv: array of string
  *
  * Return: 0 mean success
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coins[] = {25, 10, 5, 2, 1};
		int i = 0;
		int num = atoi(argv[1]);
		int numOfCoins = 0;

		if (num < 0)
		{
			printf("0\n");
			return (0);
		}

		for (; i < 5; i++)
		{
			if (num >= coins[i])
			{
				numOfCoins += num / coins[i];
				if (num % coins[i] == 0)
				{
					printf("%d\n", numOfCoins);
					return (0);
				}

				num %= coins[i];
			}
		}
	}
	return (0);
}
