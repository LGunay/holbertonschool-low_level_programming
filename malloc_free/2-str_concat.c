#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - creates an array
 * @s1: var
 * @s2: var
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, l, n;

	if (s1 == NULL || s2 == NULL)
		return(NULL);
	l = strlen(s1) + strlen(s2);
	n = strlen(s1);
	t = malloc(sizeof(char) * l + 1);
	if (t == 0)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (i < n)
			t[i] = s1[i];
		else 
			t[i] = s2[i - n];
	}
	t[i] = '\0';
	return (t);
}
