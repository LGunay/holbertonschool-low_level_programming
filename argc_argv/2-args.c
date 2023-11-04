#include <stdio.h>
/**
 * main - check the code
 * @argc: integer
 * @argv: char
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
