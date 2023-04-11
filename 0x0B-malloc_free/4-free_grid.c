#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - 
 *
 * @grid:
 * @height:
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (height <= 0)
	{
		return;
	}
	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
