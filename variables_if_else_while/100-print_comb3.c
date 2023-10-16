#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i;

	for (j = 48; j <= 57; j++)
	{
		for (i = j + 1; i <= 57; i++)
		{
			putchar(j);
			putchar(i);
			if (j != 56)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
