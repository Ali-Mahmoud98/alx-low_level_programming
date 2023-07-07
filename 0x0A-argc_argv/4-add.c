#include <stdio.h>
#include <stdlib.h>
/**
  * _isdigit - checking func.
  * @str: string.
  *
  * Return: 1 or 0
  */
int _isdigit(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}

	return (1);
}

/**
  * main - entry point
  * @argc: int
  * @argv: pointer to pointer to char
  * Return 0 mean SUCCESS
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i = 1;
		int sum = 0;

		for (; i < argc; i++)
		{
			if(_isdigit(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
