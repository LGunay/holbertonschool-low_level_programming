#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - fills memory
 * @nmemb: tr
 * @size: str
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		m[i] = 0;
	}
	return (m);
}
