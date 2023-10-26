#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Write a function that convert a string to an integer.
 *
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int ld = strlen(dest);

	j = ld;

	for (i = 0; src[i] != '\0' && n > i; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
