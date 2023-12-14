#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define buffersize 1024

/**
 * copyfile - copy the content of first argument to another.
 *
 * @file_from: source file.
 *
 * @file_to: destination file.
 */
void copyfile(const char *file_from, const char *file_to)
{
	int fdf, fdt, w, r = 1, c;
	char *buff;

	buff = malloc(buffersize);
	fdf = open(file_from, O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdt = open(file_to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	while (r > 0)
	{
		r = read(fdf, buff, buffersize);
		w = write(fdt, buff, r);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (fdt == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	c = close(fdt);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		exit(100);
		free(buff);
	}
}
/**
 * main - main block.
 *
 * @argc: count of arguments.
 *
 * @argv: argument vector.
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = argv[1];
	file_to = argv[2];
	copyfile(file_from, file_to);
	return (0);
}
