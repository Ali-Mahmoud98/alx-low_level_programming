#include "main.h"

/**
  * print_array - printing arrays elements
  * @a: array name
  * @n: number of array elements
  */
void print_array(int *a, int n)
{
	if (n <= 0)
		return;
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", *(a + i));
	printf("%d\n", *(a + i));
}
