#include <stdio.h>

/**
  * main - entry point
  * @argc: number of command line arguments
  * @argv: pointer to array of characters, [array of strings]
  * argv is array of arguments.
  *
  * Return: 0 Always Success
  */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
