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
	int i = 0, k;
	char a;
	char *b;
	float j;
	va_list arr;

	va_start(arr, format);
	while (format != NULL && format[i] != '\0')
	{
		switch(format[i]){
			case 'c':
				a = va_arg(arr, int);
				printf("%c", a);
				break;
			case 'i':
				k = va_arg(arr, int);
				printf("%d", k);
				break;
			case 'f':
				j = va_arg(arr, double);
				printf("%f", j);
				break;
			case 's':
				b = va_arg(arr, char *);
				if (b == NULL)
					printf("(nil)");
				printf("%s", b);
				break;
			default:
				break;
		}
		if (i != 0)
		{
			printf(",");
		}
		i++;
	}
	printf("\n");
}
