#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverse an array of integers
 *
 *
 *
 * Return: nothing.
 */
char *string_toupper(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
