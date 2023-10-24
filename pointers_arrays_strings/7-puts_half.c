#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half - prints a string
* @str:pointer
*
* Return: Always 0.
*/
void puts_half(char *str)
{
	int i, a;
	int l = strlen(str);

	if (l % 2 == 1)
	{
		a = (l + 1) / 2;
	}
	else
	{
		a = l / 2;
	}
	for (i = a; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
