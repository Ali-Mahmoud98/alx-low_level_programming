#include "main.h"

/**
  * print_array - printing arrays elements
  * @a: array name
  * @n: number of array elements
  */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0) /*WRONG LENGTH*/
	{
		printf("\n");
		return;
	}

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
