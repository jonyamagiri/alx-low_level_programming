#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width input of the array
  * @height: height input of the array
  * Return: NULL (if it fails, width or height is 0 / -ve);
  * otherwise (pointer to 2 dimensional array of integers)
  */

int **alloc_grid(int width, int height)
{
	int **gridarray;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gridarray = malloc(sizeof(unsigned int) * height);
	if (gridarray == NULL)
	{
		free(gridarray);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		gridarray[i] = malloc(sizeof(unsigned int) * width);
		if (gridarray == NULL)
		{
			free(gridarray);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			gridarray[i][j] = 0;
		}
		i++;
	}
	return (gridarray);
}
