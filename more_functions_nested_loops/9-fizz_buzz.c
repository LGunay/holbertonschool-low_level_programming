#include <stdio.h>
/**
 * main - checks
 *
 *
 * Return: 1 if upper, otherwise 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else
		{
			if (i != 1)
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
