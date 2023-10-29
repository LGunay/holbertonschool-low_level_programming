#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - check the code
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;
	unsigned int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; j < i; j++)
			{
				if (s[i] == accept[j])
				{
					n++;
				}
			}
		}
		else
			return (n);
	}
	return (n);
}
