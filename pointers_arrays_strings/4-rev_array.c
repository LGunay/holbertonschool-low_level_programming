#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = x;
	}
}
