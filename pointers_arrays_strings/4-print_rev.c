#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - prints a string
* @s:pointer
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[l - i - 1]);
	}
	_putchar('\n');
}
