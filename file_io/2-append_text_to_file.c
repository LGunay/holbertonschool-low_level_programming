#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * append_text_to_file - adds text_content end of filename.
 *
 * @filename: name of file.
 *
 * @text_content: text will add at the end of filename.
 *
 * Return: 1 if success, otherwise 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (text_content)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
	}
	if (w == -1 || fd == -1)
		return (-1);
	close(fd);
	return (1);
}
