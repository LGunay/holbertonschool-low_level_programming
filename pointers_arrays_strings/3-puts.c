#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reset_to_98 - check the code
* @str:pointer
* Return: Always 0.
*/
void _puts(char *str)
{
	int i = 0, j = 0;
	char *s = str;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	for (j = 0 ; j < i ; j++)
	{
		_putchar(s[j]);
	}
}
