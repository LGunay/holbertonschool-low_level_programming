#include "main.h"
/**
 * _puts_recursion - fills memory
 * @s: data
 *
 * Return: char
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
