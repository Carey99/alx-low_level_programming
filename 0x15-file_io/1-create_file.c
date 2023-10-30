#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
* create_file - Creates a file
* @filename: Filename
* @text_content: Null terminatd file to write file
* Return: 1 on success elsse any other value
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len, bytes_written;

	if (filename == NULL)
	{
	return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	text_len = strlen(text_content);
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written != text_len)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}
