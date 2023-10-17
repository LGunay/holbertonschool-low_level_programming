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
			return (m);
	}
	else
	{
		int z = n % 10;
			return (z);
	}

}
