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
	int i;
	int l = strlen(str);

	for (i = l / 2; i < l; i++)
	{
			_putchar(str[i]);
	}
	_putchar('\n');
}
