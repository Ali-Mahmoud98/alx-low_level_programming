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
int main(int argc __attribute((unused)), char* argv[])
{
	printf("%s\n",argv[0]);
	return (0);
}
