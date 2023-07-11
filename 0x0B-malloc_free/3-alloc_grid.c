#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		*(a + i) = (int *) malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(*(a + j));

			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}