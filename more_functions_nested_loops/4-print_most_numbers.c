#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code.
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char a;

	for  (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}	_putchar('\n');
}
