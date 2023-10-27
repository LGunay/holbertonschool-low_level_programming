#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* cap_string - prints a string
* @s:pointer
*
* Return: Always 0.
*/
char *cap_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] >= 97 && s[i] <= 122 && s[i - 1] < 48 && s[i -  1] != 45)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
