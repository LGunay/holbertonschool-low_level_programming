#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s: pointer
 * @accept: pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != 0; j++)
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
