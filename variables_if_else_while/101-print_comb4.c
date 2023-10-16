#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i, k;

	for (j = 48; j <= 57; j++)
	{
		for (i = j + 1; i <= 57; i++)
		{
			for (k = i + 1; k <= 57; k++)
			{
				putchar(j);
				putchar(i);
				putchar(k);
				if (j != 55)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
