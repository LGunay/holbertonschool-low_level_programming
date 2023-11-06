#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array
 * @size: var
 * @c: var
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * size);
	if (t == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
