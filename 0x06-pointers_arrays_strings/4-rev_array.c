#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = a[i] ^ a[n - i - 1];
		a[n - i - 1] = a[i] ^ a[n - i - 1];	
		a[i] = a[i] ^ a[n - i - 1];
	}
}
