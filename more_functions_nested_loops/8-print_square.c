#include "main.h"
/**
 * print_square - checks
 * @size: times
 *
 * Return: 1 if upper, otherwise 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i != size || i == 0)
	{
		_putchar('\n');
	}
}
