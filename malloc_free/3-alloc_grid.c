#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid - fills memory
 * @width: str
 * @height: str
 * Return: char
 */
int **alloc_grid(int width, int height)
{
	int **buf;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	buf = malloc(sizeof(int *) * height);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		buf[i] = malloc(sizeof(int) * width);
		if (buf[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(buf[j]);
			free(buf);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buf[i][j] = 0;
		}
	}
	return (buf);
}
