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

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; i++)
		{
			if (size - i < j)
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


