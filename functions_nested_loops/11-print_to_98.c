#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 *
 * @a: val
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int a)
{
	int i;

	if (a <= 98)
	{
		for (i = a; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = a; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
