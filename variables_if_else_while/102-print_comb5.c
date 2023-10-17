#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, i, x, z;

	for (j = 48; j <= 57; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (z = 48; z <= 57; z++)
				{
					if ((10 * j + i) < (10 * x + z))
					{
					putchar(j);
					putchar(i);
					putchar(' ');
					putchar(x);
					putchar(z);
					if (!(j == 57 && i == 56 && x == 57 && z == 57))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
