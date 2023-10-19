#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code.
 *@n:var
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{

	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
