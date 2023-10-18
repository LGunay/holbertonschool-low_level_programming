#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Entry point
 *
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int x = n % 10;
		int m = x * -1;
			_putchar(m + 48);
			return (m);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
