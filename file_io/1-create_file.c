#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * create_file - function that creates a file.
  * @filename: name of file
  * @text_content: content for write into the new created file
  * Return:  actual number of letters it could read and print
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	len = strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (!text_content)
	{
		text_content = "";
	}
	w = write(fd, text_content, len);
	if (w == -1 || fd == -1)
		return (-1);
	return (1);
}
