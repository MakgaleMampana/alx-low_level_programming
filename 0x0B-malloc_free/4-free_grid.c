#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- entry point
 * Description: Function
 * @grid: Input variable
 * @height: Input variable 2
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
