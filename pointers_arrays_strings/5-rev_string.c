#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - prints a string
* @s:pointer
*
* Return: Always 0.
*/
void rev_string(char *s)
{
	int i, temp;
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
