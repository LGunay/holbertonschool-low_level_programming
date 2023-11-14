#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - fills memory
 * @min: str
 * @max: str
 * Return: char
 */
int *array_range(int min, int max)
{
	int *m, i;

	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = 0; i <= (max - min + 1); i++)
	{
		m[i] = min + i;
	}
	return (m);
}
