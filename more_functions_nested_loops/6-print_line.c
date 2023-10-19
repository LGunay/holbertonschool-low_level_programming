#include "main.h"
#include <stdio.h>

/**
 * print_line - check the code.
 *@n:var
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= 10; n++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
