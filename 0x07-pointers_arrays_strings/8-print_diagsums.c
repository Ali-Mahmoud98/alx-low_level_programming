#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int x = 0;

	while (x < size)
	{
		d1 += a[x][x];
		x++;
	}

	x--;

	while (x >= 0)
	{
                d1 += a[x][x];
                x--;
        }
	printf("%d, %d\n",d1,d2);
}
