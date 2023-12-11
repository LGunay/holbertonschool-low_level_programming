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
	fd = open(filename, O_RDONLY);
	a = malloc(letters);
	r = read(fd, a, letters);
	w = write(STDOUT_FILENO, a, r);
	close(fd);
	return (w);
}
