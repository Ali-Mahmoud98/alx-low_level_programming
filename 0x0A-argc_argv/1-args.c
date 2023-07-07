#include <stdio.h>

/**
  * main - entry point
  * @argc: number of command line arguments
  * __attribute__((unused)) means that the arguments is unused
  * @argv: pointer to array of characters, [array of strings]
  * argv is array of arguments.
  *
  * Return: 0 Always Success
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
