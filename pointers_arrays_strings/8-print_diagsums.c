#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: pointer
 * @size: size
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, suma = 0, sumb = 0;

	for (i = 0; i < size; i++)
	{
		suma += *(a + size * i + i);
		sumb += *(a + size * i + size - i - 1);
	}
	printf("%d, %d\n", suma, sumb);
}
