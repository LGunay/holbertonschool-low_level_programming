#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Write a function that convert a string to an integer.
 *
 * @dest: pointer
 * @src: pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int ld = strlen(dest);

	j = ld;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
