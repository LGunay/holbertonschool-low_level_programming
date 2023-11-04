#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j = 0, x;
	int l;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		l = strlen(argv[i]);
		for (x = 0; x < l; x++)
		{
			if (**argv >= 47 || **argv <= 58)
				j = j + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", j);
	return (0);
}
