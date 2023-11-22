#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - function
 * @argc: number of arguments
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if ((func == op_mod && b == 0) || (func == op_div && b == 0))
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", func(a, b));
	return (0);
}
