#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: 2 dimensional array of integers
  * @height: height input of the array
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
