#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code
 * @s1:var
 * @s2:var
 * @n:var
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *m;

	i = strlen(s1);
	x = strlen(s2);
	if (n >= x)
		n = x;
	 y = i + n;
	m = malloc(sizeof(char) * y + 1);
	if (m == NULL)
                return (NULL);
	for (j = 0; j < y; j++)
	{
		if (j < i)
			m[j] = s1[j];
		else
			m[j] = s2[j - i];
	}
	return (m);
}
