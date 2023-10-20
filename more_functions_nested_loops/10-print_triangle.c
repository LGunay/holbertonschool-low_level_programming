#include "main.h"
/**
 * main - checks
 * @size:var
 *
 * Return: 1 if upper, otherwise 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - i - 1 > j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}


