#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b:var
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	return (t);
