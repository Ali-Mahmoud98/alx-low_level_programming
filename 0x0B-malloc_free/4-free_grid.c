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
	int rowNum;

	for(rowNum = 0; rowNum < height; x++)
		free(*(grid + rowNum));

	free(grid);
}
