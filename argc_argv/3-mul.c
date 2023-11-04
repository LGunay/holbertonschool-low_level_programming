#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		j = j * atoi(*(argv + i));
	}
	printf("%d\n", j);
	return (0);
}
