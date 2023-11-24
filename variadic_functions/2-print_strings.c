#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - check the code
 * @separator: separotor
 * @n: number of variable
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list st;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(st, char*);
		if (a == NULL)
			printf("(nil)");
		if (separator && i != n - 1)
		{
			printf("%s%s", a, separator);
		}
		else
			printf("%s", a);
	}
	printf("\n");
}
