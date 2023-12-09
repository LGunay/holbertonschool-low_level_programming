#include "main.h"
/**
  * print_helper - prints binary represantation of integer
  * @n: unsgined long integer
  */
void print_helper(unsigned long int n)
{
	if (!n)
	{
		return;
	}
	print_helper(n >> 1);
	_putchar((n & 1) + '0');
}
/**
  * print_binary - prints binary represantation of integer
  * @n: unsgined long integer
  */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	print_helper(n);
}
