#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  * @argc: number of command line arguments.
  * @argv: pointer to array of characters, [array of strings]
  * argv is array of arguments.
  *
  * Return: 0 Always Success
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = 1;
		int mul = 1;

		for (; i < argc; i++)
			mul *= atoi(argv[i]);

		printf("%d\n", mul);
	} else
		printf("Error\n");

	return (0);
}
