#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * read_textfile - reads text file
 * @filename: filename
 * @letters: letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	int fd, r, w;

	if (!filename)
		return (0);
	if (!letters)
		return (0);
	fd = open(filename, O_RDONLY);
	a = malloc(letters);
	if (!a)
		return (0);
	r = read(fd, a, letters);
	if (!fd || !r)
		return (0);
	w = write(STDOUT_FILENO, a, r);
	if (w == -1)
		return (0);
	close(fd);
	return (w);
}
