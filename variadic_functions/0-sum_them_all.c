#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: number of integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arr;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arr, int);
	}
	return (sum);
}
