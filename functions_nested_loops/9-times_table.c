#include "main.h"
#include <stdio.h>
/**
 * times_table - check the code
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int  i, j, a;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			else if (a <= 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}
