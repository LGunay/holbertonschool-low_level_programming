#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - check the code
 * @separator: separotor
 * @n: number of variable
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a;
	va_list arr;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{

		a = va_arg(arr, int);
		if (separator && i != n - 1)
			printf("%d%s", a, separator);
		else
			printf("%d", a);
	}
	putchar('\n');
}
