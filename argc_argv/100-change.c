#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, a[5] = {25, 10, 5, 2, 1}, coin, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		coin = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			cents += coin / a[i];
			coin %= a[i];
		}
		printf("%d\n", cents);
	}
	return (0);
}
