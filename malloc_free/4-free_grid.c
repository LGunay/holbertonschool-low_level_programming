#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - fills memory
 * @grid: str
 * @height: str
 * Return: char
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = height; j >= 0; j--)
			free(grid[j]);
		free(grid);
	}
}
