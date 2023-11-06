#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_array - creates an array
 * @str: var
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *t;
	int i, l;

	if (str == NULL)
		return (NULL);
	l = strlen(str);
	t = malloc(sizeof(char) * l);
	if (t == 0)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
