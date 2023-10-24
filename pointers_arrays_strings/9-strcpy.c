#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - prints half of a string
 * @dest: pointer
 * @src: var
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
