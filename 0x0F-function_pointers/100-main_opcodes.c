#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that prints the opcodes of its own main function
  *
  * @argc: int
  * @argv: array of strings
  *
  * Return: 0 means success
  */
int main(int argc, char *argv[])
{
	int bytes;
	char *ptr;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *) main;
	for (; i < bytes; i++)
		printf("%02hhx ", ptr[i]);

	printf("\n");
	return (0);
}
