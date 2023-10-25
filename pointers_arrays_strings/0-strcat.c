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
	int i;
	int ls = strlen(src), ld = strlen(dest);

	for (i = ls; i < ld; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	dest[i] = '\0' ;
	return (dest);
}
