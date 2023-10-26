#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: checker
 * @s2: checker
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0, num = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[j])
		{
		num = s1[i] - s2[j];
		break;
		}
		j++;
	}
	return (num);
}
