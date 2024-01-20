#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search -  Binary search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return: return
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
