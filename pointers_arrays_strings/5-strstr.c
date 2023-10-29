#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: pointer
 * @needle: pointer
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int flag = 0;

	if (needle[0] == 0)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 1;
			for (j = 0; needle[j] != 0 && haystack[i + j] != 0; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1)
		{
			haystack += i;
			return (haystack);
		}
	}
	return (NULL);
}
