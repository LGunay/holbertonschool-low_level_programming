#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc <= 2)
		printf("ERROR\n");
	return (1);
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[1]) * atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
