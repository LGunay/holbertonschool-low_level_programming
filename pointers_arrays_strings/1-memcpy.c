#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - prints buffer in hexa
 * @src: var
 * @dest: var
 * @n: integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
