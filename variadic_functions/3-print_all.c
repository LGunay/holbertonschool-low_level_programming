#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all provided arguments
 * @format: string represents data types
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *b;
	va_list arr;

	va_start(arr, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arr, int));
				break;
			case 'i':
				printf("%d", va_arg(arr, int));
				break;
			case 'f':
				printf("%f", va_arg(arr, double));
				break;
			case 's':
				b = va_arg(arr, char *);
				if (b == NULL)
					b = "(nil)";
				printf("%s", b);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(arr);
	printf("\n");
}
