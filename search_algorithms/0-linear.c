#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * @array: array
 * @size: size
 * @value: value
 * Return: return
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
