#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strchr - prints buffer in hexa
 * @s: var
 * @c: var
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	int i;
	int l = strlen(s);

	for (i = 0; i <= l; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return (NULL);
}
