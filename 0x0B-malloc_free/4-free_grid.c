#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees dynamic allocation of pointer to pointer
 * @grid: pointer to pointer to int
 * @height: number of rows (hight of the grid)
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x, y;

	for(x = 0; x < height; x++)
		free(*(grid + i));

	free(grid);
}
