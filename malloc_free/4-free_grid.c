#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: 2 dimensional grid to be freed
  * @height: Height of the grid
  */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			if (grid[i] != NULL)
			{
				free(grid[i]);
			}
		}
		free(grid);
	}
}
